#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82F827F8"))) PPC_WEAK_FUNC(sub_82F827F8);
PPC_FUNC_IMPL(__imp__sub_82F827F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x82F82800;
	sub_82CA2BB0(ctx, base);
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-960(r1)
	ea = -960 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r21,0
	ctx.r21.s64 = 0;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// stw r21,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r21.u32);
	// mr r23,r21
	ctx.r23.u64 = ctx.r21.u64;
	// mr r22,r21
	ctx.r22.u64 = ctx.r21.u64;
	// stb r27,1015(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1015, ctx.r27.u8);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r23,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r23.u32);
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// stw r22,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r22.u32);
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// bl 0x82f77010
	ctx.lr = 0x82F82840;
	sub_82F77010(ctx, base);
	// clrlwi. r31,r31,24
	ctx.r31.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r31,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r31.u32);
	// beq 0x82f82854
	if (ctx.cr0.eq) goto loc_82F82854;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,212(r1)
	PPC_STORE_U8(ctx.r1.u32 + 212, ctx.r11.u8);
loc_82F82854:
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
	// lwz r4,36(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 36);
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// mr r19,r21
	ctx.r19.u64 = ctx.r21.u64;
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// bl 0x82f75b08
	ctx.lr = 0x82F8286C;
	sub_82F75B08(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// lwz r4,32(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// bl 0x82f70d90
	ctx.lr = 0x82F82878;
	sub_82F70D90(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82f74580
	ctx.lr = 0x82F82880;
	sub_82F74580(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,32768
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 32768, ctx.xer);
	// beq cr6,0x82f83998
	if (ctx.cr6.eq) goto loc_82F83998;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lfs f31,2756(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2756);
	ctx.f31.f64 = double(temp.f32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lfd f30,11984(r6)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r6.u32 + 11984);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// addi r7,r7,-27472
	ctx.r7.s64 = ctx.r7.s64 + -27472;
	// addi r17,r11,3200
	ctx.r17.s64 = ctx.r11.s64 + 3200;
	// addi r16,r10,30124
	ctx.r16.s64 = ctx.r10.s64 + 30124;
	// stw r7,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r7.u32);
	// addi r14,r9,25232
	ctx.r14.s64 = ctx.r9.s64 + 25232;
	// addi r18,r8,13080
	ctx.r18.s64 = ctx.r8.s64 + 13080;
	// addi r15,r6,12712
	ctx.r15.s64 = ctx.r6.s64 + 12712;
	// b 0x82f828e0
	goto loc_82F828E0;
loc_82F828D4:
	// lwz r31,236(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// lwz r26,116(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lbz r27,1015(r1)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r1.u32 + 1015);
loc_82F828E0:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// beq cr6,0x82f82acc
	if (ctx.cr6.eq) goto loc_82F82ACC;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// beq cr6,0x82f82bb8
	if (ctx.cr6.eq) goto loc_82F82BB8;
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 3, ctx.xer);
	// beq cr6,0x82f82af4
	if (ctx.cr6.eq) goto loc_82F82AF4;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// beq cr6,0x82f82908
	if (ctx.cr6.eq) goto loc_82F82908;
	// cmplwi cr6,r28,32773
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 32773, ctx.xer);
	// bne cr6,0x82f82ab8
	if (!ctx.cr6.eq) goto loc_82F82AB8;
loc_82F82908:
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// bne cr6,0x82f82944
	if (!ctx.cr6.eq) goto loc_82F82944;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82f82928
	if (ctx.cr6.eq) goto loc_82F82928;
	// mulli r11,r22,148
	ctx.r11.s64 = ctx.r22.s64 * 148;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// addi r31,r11,-148
	ctx.r31.s64 = ctx.r11.s64 + -148;
loc_82F82928:
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82f74e08
	ctx.lr = 0x82F82938;
	sub_82F74E08(ctx, base);
	// lwz r29,136(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r30,164(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// b 0x82f8297c
	goto loc_82F8297C;
loc_82F82944:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82f82958
	if (ctx.cr6.eq) goto loc_82F82958;
	// lbz r11,9(r19)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r19.u32 + 9);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82f82ab8
	if (!ctx.cr0.eq) goto loc_82F82AB8;
loc_82F82958:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82f8296c
	if (ctx.cr6.eq) goto loc_82F8296C;
	// mulli r11,r22,148
	ctx.r11.s64 = ctx.r22.s64 * 148;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// addi r31,r11,-148
	ctx.r31.s64 = ctx.r11.s64 + -148;
loc_82F8296C:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
loc_82F8297C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f82ab8
	if (ctx.cr6.eq) goto loc_82F82AB8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82f70538
	ctx.lr = 0x82F82998;
	sub_82F70538(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82f82a40
	if (ctx.cr0.eq) goto loc_82F82A40;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f71778
	ctx.lr = 0x82F829B4;
	sub_82F71778(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82f82ab8
	if (ctx.cr0.eq) goto loc_82F82AB8;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82f82ab8
	if (ctx.cr6.eq) goto loc_82F82AB8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x82f829d8
	if (ctx.cr6.eq) goto loc_82F829D8;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82f82ab8
	if (!ctx.cr6.eq) goto loc_82F82AB8;
loc_82F829D8:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82f82ab8
	if (ctx.cr6.eq) goto loc_82F82AB8;
loc_82F829E0:
	// mulli r11,r22,148
	ctx.r11.s64 = ctx.r22.s64 * 148;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// addi r10,r11,-148
	ctx.r10.s64 = ctx.r11.s64 + -148;
	// lwz r11,-140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f82a08
	if (ctx.cr6.eq) goto loc_82F82A08;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82f82a24
	if (ctx.cr6.eq) goto loc_82F82A24;
loc_82F82A08:
	// addi r4,r22,-1
	ctx.r4.s64 = ctx.r22.s64 + -1;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82f791f8
	ctx.lr = 0x82F82A14;
	sub_82F791F8(ctx, base);
	// lwz r22,108(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r23,104(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x82f829e0
	if (!ctx.cr6.eq) goto loc_82F829E0;
loc_82F82A24:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82f82ab8
	if (ctx.cr6.eq) goto loc_82F82AB8;
	// mulli r11,r22,148
	ctx.r11.s64 = ctx.r22.s64 * 148;
	// lwz r26,116(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lbz r27,1015(r1)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r1.u32 + 1015);
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// addi r31,r11,-148
	ctx.r31.s64 = ctx.r11.s64 + -148;
loc_82F82A40:
	// addi r4,r22,-1
	ctx.r4.s64 = ctx.r22.s64 + -1;
	// lwz r19,8(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82f791f8
	ctx.lr = 0x82F82A50;
	sub_82F791F8(ctx, base);
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82f82ab0
	if (ctx.cr6.eq) goto loc_82F82AB0;
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82f82a7c
	if (ctx.cr6.eq) goto loc_82F82A7C;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82f82ab0
	if (!ctx.cr6.eq) goto loc_82F82AB0;
	// addi r11,r26,-1
	ctx.r11.s64 = ctx.r26.s64 + -1;
	// cmplwi cr6,r28,32773
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 32773, ctx.xer);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// beq cr6,0x82f82ab0
	if (ctx.cr6.eq) goto loc_82F82AB0;
loc_82F82A7C:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f82ab0
	if (ctx.cr0.eq) goto loc_82F82AB0;
	// lbz r11,40(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 40);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f82a98
	if (!ctx.cr0.eq) goto loc_82F82A98;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
loc_82F82A98:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r8,32(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r7,36(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 36);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82f800c0
	ctx.lr = 0x82F82AB0;
	sub_82F800C0(ctx, base);
loc_82F82AB0:
	// lwz r23,104(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r22,108(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_82F82AB8:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82f74580
	ctx.lr = 0x82F82AC0;
	sub_82F74580(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,32768
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 32768, ctx.xer);
	// bne cr6,0x82f828d4
	if (!ctx.cr6.eq) goto loc_82F828D4;
loc_82F82ACC:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82f83998
	if (ctx.cr6.eq) goto loc_82F83998;
	// mulli r11,r22,148
	ctx.r11.s64 = ctx.r22.s64 * 148;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r31,r11,-148
	ctx.r31.s64 = ctx.r11.s64 + -148;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// bl 0x82f7a7b0
	ctx.lr = 0x82F82AEC;
	sub_82F7A7B0(ctx, base);
	// addi r4,r31,108
	ctx.r4.s64 = ctx.r31.s64 + 108;
	// b 0x82f839a8
	goto loc_82F839A8;
loc_82F82AF4:
	// addi r5,r1,316
	ctx.r5.s64 = ctx.r1.s64 + 316;
	// addi r4,r1,276
	ctx.r4.s64 = ctx.r1.s64 + 276;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82f74eb8
	ctx.lr = 0x82F82B04;
	sub_82F74EB8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f82ab8
	if (ctx.cr0.eq) goto loc_82F82AB8;
	// lwz r5,316(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82f82ab8
	if (ctx.cr6.eq) goto loc_82F82AB8;
	// lwz r11,24(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// addic. r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x82f82b30
	if (ctx.cr0.lt) goto loc_82F82B30;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// blt cr6,0x82f82b34
	if (ctx.cr6.lt) goto loc_82F82B34;
loc_82F82B30:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F82B34:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f82b4c
	if (!ctx.cr0.eq) goto loc_82F82B4C;
	// lwz r11,20(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x82f82b50
	goto loc_82F82B50;
loc_82F82B4C:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
loc_82F82B50:
	// lwz r4,276(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f82b94
	if (ctx.cr6.eq) goto loc_82F82B94;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// bgt cr6,0x82f82b94
	if (ctx.cr6.gt) goto loc_82F82B94;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bne cr6,0x82f82b94
	if (!ctx.cr6.eq) goto loc_82F82B94;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82f82ab8
	if (ctx.cr6.eq) goto loc_82F82AB8;
	// bl 0x82f6d720
	ctx.lr = 0x82F82B80;
	sub_82F6D720(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f82b8c
	if (ctx.cr0.eq) goto loc_82F82B8C;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
loc_82F82B8C:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82f82ab8
	if (ctx.cr6.eq) goto loc_82F82AB8;
loc_82F82B94:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// li r6,1
	ctx.r6.s64 = 1;
	// beq cr6,0x82f82fdc
	if (ctx.cr6.eq) goto loc_82F82FDC;
	// mulli r11,r22,148
	ctx.r11.s64 = ctx.r22.s64 * 148;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// addi r11,r11,-148
	ctx.r11.s64 = ctx.r11.s64 + -148;
	// addi r8,r11,108
	ctx.r8.s64 = ctx.r11.s64 + 108;
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// b 0x82f82fe4
	goto loc_82F82FE4;
loc_82F82BB8:
	// addi r5,r1,312
	ctx.r5.s64 = ctx.r1.s64 + 312;
	// addi r4,r1,228
	ctx.r4.s64 = ctx.r1.s64 + 228;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82f74d38
	ctx.lr = 0x82F82BC8;
	sub_82F74D38(ctx, base);
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// li r6,12
	ctx.r6.s64 = 12;
	// lwz r31,312(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// lwz r30,228(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f71778
	ctx.lr = 0x82F82BE4;
	sub_82F71778(ctx, base);
	// mr. r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// beq 0x82f82ab8
	if (ctx.cr0.eq) goto loc_82F82AB8;
	// lbz r11,9(r19)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r19.u32 + 9);
	// addi r29,r22,-1
	ctx.r29.s64 = ctx.r22.s64 + -1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82f82ff0
	if (ctx.cr0.eq) goto loc_82F82FF0;
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82f82fb8
	if (ctx.cr6.eq) goto loc_82F82FB8;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82f82c20
	if (ctx.cr6.eq) goto loc_82F82C20;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x82f82ab8
	if (!ctx.cr6.eq) goto loc_82F82AB8;
	// lwz r4,284(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// b 0x82f82fd4
	goto loc_82F82FD4;
loc_82F82C20:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x82f82ab8
	if (ctx.cr6.eq) goto loc_82F82AB8;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x82f04e78
	ctx.lr = 0x82F82C30;
	sub_82F04E78(ctx, base);
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82f08838
	ctx.lr = 0x82F82C48;
	sub_82F08838(ctx, base);
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// mulli r10,r31,36
	ctx.r10.s64 = ctx.r31.s64 * 36;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,-36
	ctx.r3.s64 = ctx.r11.s64 + -36;
	// bl 0x82f6fd00
	ctx.lr = 0x82F82C60;
	sub_82F6FD00(ctx, base);
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x82f06b90
	ctx.lr = 0x82F82C68;
	sub_82F06B90(ctx, base);
	// lwz r9,4(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// lwz r8,0(r20)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// mulli r9,r9,36
	ctx.r9.s64 = ctx.r9.s64 * 36;
	// lwz r11,24(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addic. r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r30,r9,-36
	ctx.r30.s64 = ctx.r9.s64 + -36;
	// blt 0x82f82c94
	if (ctx.cr0.lt) goto loc_82F82C94;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// blt cr6,0x82f82c98
	if (ctx.cr6.lt) goto loc_82F82C98;
loc_82F82C94:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F82C98:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f82cb0
	if (!ctx.cr0.eq) goto loc_82F82CB0;
	// lwz r11,20(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x82f82cb4
	goto loc_82F82CB4;
loc_82F82CB0:
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
loc_82F82CB4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82f82ccc
	if (!ctx.cr6.eq) goto loc_82F82CCC;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82f7fce0
	ctx.lr = 0x82F82CC8;
	sub_82F7FCE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82F82CCC:
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// bl 0x82f08b70
	ctx.lr = 0x82F82CD4;
	sub_82F08B70(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// b 0x82f82e6c
	goto loc_82F82E6C;
loc_82F82CE0:
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r6,26
	ctx.r6.s64 = 26;
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x82f71778
	ctx.lr = 0x82F82CF4;
	sub_82F71778(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82f82e6c
	if (ctx.cr0.eq) goto loc_82F82E6C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82f74ab8
	ctx.lr = 0x82F82D0C;
	sub_82F74AB8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f82e6c
	if (ctx.cr0.eq) goto loc_82F82E6C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x82f82e1c
	if (ctx.cr6.eq) goto loc_82F82E1C;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x82f82dec
	if (ctx.cr6.eq) goto loc_82F82DEC;
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// beq cr6,0x82f82dc4
	if (ctx.cr6.eq) goto loc_82F82DC4;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// beq cr6,0x82f82dbc
	if (ctx.cr6.eq) goto loc_82F82DBC;
	// cmpwi cr6,r11,27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27, ctx.xer);
	// beq cr6,0x82f82da8
	if (ctx.cr6.eq) goto loc_82F82DA8;
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// beq cr6,0x82f82d80
	if (ctx.cr6.eq) goto loc_82F82D80;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bne cr6,0x82f82e6c
	if (!ctx.cr6.eq) goto loc_82F82E6C;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82f6dc80
	ctx.lr = 0x82F82D60;
	sub_82F6DC80(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f82e6c
	if (ctx.cr0.eq) goto loc_82F82E6C;
	// lwz r11,216(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82f82e6c
	if (ctx.cr6.lt) goto loc_82F82E6C;
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// b 0x82f82e6c
	goto loc_82F82E6C;
loc_82F82D80:
	// addi r3,r1,300
	ctx.r3.s64 = ctx.r1.s64 + 300;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82f6dc80
	ctx.lr = 0x82F82D90;
	sub_82F6DC80(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f82e6c
	if (ctx.cr0.eq) goto loc_82F82E6C;
	// lwz r11,300(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// b 0x82f82e6c
	goto loc_82F82E6C;
loc_82F82DA8:
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
loc_82F82DAC:
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82ef7ae8
	ctx.lr = 0x82F82DB8;
	sub_82EF7AE8(ctx, base);
	// b 0x82f82e6c
	goto loc_82F82E6C;
loc_82F82DBC:
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// b 0x82f82dac
	goto loc_82F82DAC;
loc_82F82DC4:
	// addi r3,r1,244
	ctx.r3.s64 = ctx.r1.s64 + 244;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82f6dc80
	ctx.lr = 0x82F82DD4;
	sub_82F6DC80(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f82e6c
	if (ctx.cr0.eq) goto loc_82F82E6C;
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// b 0x82f82e6c
	goto loc_82F82E6C;
loc_82F82DEC:
	// addi r3,r1,292
	ctx.r3.s64 = ctx.r1.s64 + 292;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82f6dc80
	ctx.lr = 0x82F82DFC;
	sub_82F6DC80(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f82e6c
	if (ctx.cr0.eq) goto loc_82F82E6C;
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82f82e6c
	if (ctx.cr6.lt) goto loc_82F82E6C;
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// b 0x82f82e6c
	goto loc_82F82E6C;
loc_82F82E1C:
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,26
	ctx.r6.s64 = 26;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82f71778
	ctx.lr = 0x82F82E30;
	sub_82F71778(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f82e6c
	if (ctx.cr0.eq) goto loc_82F82E6C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82f82e68
	if (ctx.cr6.eq) goto loc_82F82E68;
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// beq cr6,0x82f82e5c
	if (ctx.cr6.eq) goto loc_82F82E5C;
	// cmpwi cr6,r11,34
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 34, ctx.xer);
	// bne cr6,0x82f82e6c
	if (!ctx.cr6.eq) goto loc_82F82E6C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82f82e60
	goto loc_82F82E60;
loc_82F82E5C:
	// li r11,2
	ctx.r11.s64 = 2;
loc_82F82E60:
	// stb r11,32(r30)
	PPC_STORE_U8(ctx.r30.u32 + 32, ctx.r11.u8);
	// b 0x82f82e6c
	goto loc_82F82E6C;
loc_82F82E68:
	// stb r21,32(r30)
	PPC_STORE_U8(ctx.r30.u32 + 32, ctx.r21.u8);
loc_82F82E6C:
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82f74990
	ctx.lr = 0x82F82E7C;
	sub_82F74990(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f82ce0
	if (!ctx.cr0.eq) goto loc_82F82CE0;
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F82E8C;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f82eb8
	if (ctx.cr0.eq) goto loc_82F82EB8;
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
	// bl 0x82f6e550
	ctx.lr = 0x82F82EB0;
	sub_82F6E550(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82f82ebc
	goto loc_82F82EBC;
loc_82F82EB8:
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
loc_82F82EBC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// bl 0x82f6e660
	ctx.lr = 0x82F82EC8;
	sub_82F6E660(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// bl 0x82ef7e30
	ctx.lr = 0x82F82EF4;
	sub_82EF7E30(ctx, base);
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82ef7e30
	ctx.lr = 0x82F82F00;
	sub_82EF7E30(ctx, base);
	// lbz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r11.u8);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F82F1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f82f3c
	if (ctx.cr6.eq) goto loc_82F82F3C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F82F3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F82F3C:
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x82f82f5c
	if (ctx.cr6.lt) goto loc_82F82F5C;
	// mulli r11,r29,148
	ctx.r11.s64 = ctx.r29.s64 * 148;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// addi r30,r11,16
	ctx.r30.s64 = ctx.r11.s64 + 16;
	// addi r8,r11,108
	ctx.r8.s64 = ctx.r11.s64 + 108;
	// b 0x82f82f64
	goto loc_82F82F64;
loc_82F82F5C:
	// addi r30,r1,592
	ctx.r30.s64 = ctx.r1.s64 + 592;
	// addi r8,r1,336
	ctx.r8.s64 = ctx.r1.s64 + 336;
loc_82F82F64:
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// addi r7,r1,688
	ctx.r7.s64 = ctx.r1.s64 + 688;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82f800c0
	ctx.lr = 0x82F82F7C;
	sub_82F800C0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f6e660
	ctx.lr = 0x82F82F88;
	sub_82F6E660(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82f7a7b0
	ctx.lr = 0x82F82F94;
	sub_82F7A7B0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F82FAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// bl 0x82f08be0
	ctx.lr = 0x82F82FB4;
	sub_82F08BE0(ctx, base);
	// b 0x82f82ab8
	goto loc_82F82AB8;
loc_82F82FB8:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f82ab8
	if (ctx.cr0.eq) goto loc_82F82AB8;
	// lbz r11,40(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 40);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f82fd4
	if (!ctx.cr0.eq) goto loc_82F82FD4;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
loc_82F82FD4:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
loc_82F82FDC:
	// lwz r8,32(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// lwz r7,36(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 36);
loc_82F82FE4:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82f800c0
	ctx.lr = 0x82F82FEC;
	sub_82F800C0(ctx, base);
	// b 0x82f82ab8
	goto loc_82F82AB8;
loc_82F82FF0:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82f73b38
	ctx.lr = 0x82F82FF8;
	sub_82F73B38(ctx, base);
	// stw r30,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r30.u32);
	// stw r31,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r31.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r19,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r19.u32);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// stw r21,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r21.u32);
	// bl 0x82f08b70
	ctx.lr = 0x82F83014;
	sub_82F08B70(ctx, base);
	// addi r3,r1,492
	ctx.r3.s64 = ctx.r1.s64 + 492;
	// bl 0x82f04d70
	ctx.lr = 0x82F8301C;
	sub_82F04D70(ctx, base);
	// addi r31,r22,1
	ctx.r31.s64 = ctx.r22.s64 + 1;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82f791f8
	ctx.lr = 0x82F8302C;
	sub_82F791F8(ctx, base);
	// mulli r11,r31,148
	ctx.r11.s64 = ctx.r31.s64 * 148;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// lwz r23,104(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// addi r3,r11,-148
	ctx.r3.s64 = ctx.r11.s64 + -148;
	// bl 0x82f770f0
	ctx.lr = 0x82F83044;
	sub_82F770F0(ctx, base);
	// addi r3,r1,492
	ctx.r3.s64 = ctx.r1.s64 + 492;
	// bl 0x82f04dd8
	ctx.lr = 0x82F8304C;
	sub_82F04DD8(ctx, base);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82f08be0
	ctx.lr = 0x82F83054;
	sub_82F08BE0(ctx, base);
	// lwz r22,108(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mulli r11,r22,148
	ctx.r11.s64 = ctx.r22.s64 * 148;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// addi r31,r11,-148
	ctx.r31.s64 = ctx.r11.s64 + -148;
	// stw r30,-136(r11)
	PPC_STORE_U32(ctx.r11.u32 + -136, ctx.r30.u32);
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// blt cr6,0x82f83090
	if (ctx.cr6.lt) goto loc_82F83090;
	// mulli r11,r29,148
	ctx.r11.s64 = ctx.r29.s64 * 148;
	// add r29,r11,r23
	ctx.r29.u64 = ctx.r11.u64 + ctx.r23.u64;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// bl 0x82f08fe0
	ctx.lr = 0x82F83088;
	sub_82F08FE0(ctx, base);
	// addi r4,r29,108
	ctx.r4.s64 = ctx.r29.s64 + 108;
	// b 0x82f8309c
	goto loc_82F8309C;
loc_82F83090:
	// addi r4,r1,592
	ctx.r4.s64 = ctx.r1.s64 + 592;
	// bl 0x82f08fe0
	ctx.lr = 0x82F83098;
	sub_82F08FE0(ctx, base);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
loc_82F8309C:
	// addi r25,r31,108
	ctx.r25.s64 = ctx.r31.s64 + 108;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82f6ee08
	ctx.lr = 0x82F830A8;
	sub_82F6EE08(ctx, base);
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x82f82ab8
	if (ctx.cr6.gt) goto loc_82F82AB8;
	// lis r12,-32252
	ctx.r12.s64 = -2113667072;
	// addi r12,r12,12616
	ctx.r12.s64 = ctx.r12.s64 + 12616;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32008
	ctx.r12.s64 = -2097676288;
	// addi r12,r12,10936
	ctx.r12.s64 = ctx.r12.s64 + 10936;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82F8312C;
	case 1:
		goto loc_82F83424;
	case 2:
		goto loc_82F82AB8;
	case 3:
		goto loc_82F83674;
	case 4:
		goto loc_82F83434;
	case 5:
		goto loc_82F82AB8;
	case 6:
		goto loc_82F83148;
	case 7:
		goto loc_82F83254;
	case 8:
		goto loc_82F82AB8;
	case 9:
		goto loc_82F8397C;
	case 10:
		goto loc_82F83444;
	default:
		__builtin_unreachable();
	}
loc_82F830DC:
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r6,26
	ctx.r6.s64 = 26;
	// lwz r3,152(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x82f71778
	ctx.lr = 0x82F830F0;
	sub_82F71778(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82f8312c
	if (ctx.cr0.eq) goto loc_82F8312C;
	// addi r5,r1,252
	ctx.r5.s64 = ctx.r1.s64 + 252;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82f74ab8
	ctx.lr = 0x82F83108;
	sub_82F74AB8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8312c
	if (ctx.cr0.eq) goto loc_82F8312C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// bne cr6,0x82f8312c
	if (!ctx.cr6.eq) goto loc_82F8312C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,252(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x82f6d3d8
	ctx.lr = 0x82F8312C;
	sub_82F6D3D8(ctx, base);
loc_82F8312C:
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82f74990
	ctx.lr = 0x82F8313C;
	sub_82F74990(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f830dc
	if (!ctx.cr0.eq) goto loc_82F830DC;
	// b 0x82f82ab8
	goto loc_82F82AB8;
loc_82F83148:
	// li r11,1
	ctx.r11.s64 = 1;
	// lbz r10,37(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 37);
	// stb r11,36(r25)
	PPC_STORE_U8(ctx.r25.u32 + 36, ctx.r11.u8);
	// ori r11,r10,128
	ctx.r11.u64 = ctx.r10.u64 | 128;
	// stb r11,37(r25)
	PPC_STORE_U8(ctx.r25.u32 + 37, ctx.r11.u8);
	// lwz r11,24(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// addic. r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x82f83174
	if (ctx.cr0.lt) goto loc_82F83174;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// blt cr6,0x82f83178
	if (ctx.cr6.lt) goto loc_82F83178;
loc_82F83174:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F83178:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f83190
	if (!ctx.cr0.eq) goto loc_82F83190;
	// lwz r11,20(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x82f83194
	goto loc_82F83194;
loc_82F83190:
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
loc_82F83194:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82f831ac
	if (!ctx.cr6.eq) goto loc_82F831AC;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82f7fce0
	ctx.lr = 0x82F831A8;
	sub_82F7FCE0(ctx, base);
	// b 0x82f82ab8
	goto loc_82F82AB8;
loc_82F831AC:
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82f831d4
	if (ctx.cr6.eq) goto loc_82F831D4;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x82f6d720
	ctx.lr = 0x82F831C0;
	sub_82F6D720(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f831cc
	if (ctx.cr0.eq) goto loc_82F831CC;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
loc_82F831CC:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82f831dc
	if (!ctx.cr6.eq) goto loc_82F831DC;
loc_82F831D4:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// b 0x82f83248
	goto loc_82F83248;
loc_82F831DC:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f83210
	if (ctx.cr0.eq) goto loc_82F83210;
	// lbz r11,40(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 40);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f831f8
	if (!ctx.cr0.eq) goto loc_82F831F8;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
loc_82F831F8:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r8,32(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r7,36(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 36);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82f800c0
	ctx.lr = 0x82F83210;
	sub_82F800C0(ctx, base);
loc_82F83210:
	// lwz r11,24(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// addic. r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x82f83228
	if (ctx.cr0.lt) goto loc_82F83228;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// blt cr6,0x82f8322c
	if (ctx.cr6.lt) goto loc_82F8322C;
loc_82F83228:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F8322C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f83244
	if (!ctx.cr0.eq) goto loc_82F83244;
	// lwz r11,20(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x82f83248
	goto loc_82F83248;
loc_82F83244:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
loc_82F83248:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82f7a268
	ctx.lr = 0x82F83250;
	sub_82F7A268(ctx, base);
	// b 0x82f82ab8
	goto loc_82F82AB8;
loc_82F83254:
	// lwz r11,24(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// addic. r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x82f8326c
	if (ctx.cr0.lt) goto loc_82F8326C;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// blt cr6,0x82f83270
	if (ctx.cr6.lt) goto loc_82F83270;
loc_82F8326C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F83270:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f83288
	if (!ctx.cr0.eq) goto loc_82F83288;
	// lwz r11,20(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x82f8328c
	goto loc_82F8328C;
loc_82F83288:
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
loc_82F8328C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82f832a8
	if (!ctx.cr6.eq) goto loc_82F832A8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82f7fce0
	ctx.lr = 0x82F832A0;
	sub_82F7FCE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82f8331c
	goto loc_82F8331C;
loc_82F832A8:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82f8331c
	if (ctx.cr6.eq) goto loc_82F8331C;
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f832e4
	if (ctx.cr0.eq) goto loc_82F832E4;
	// lbz r11,40(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 40);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f832cc
	if (!ctx.cr0.eq) goto loc_82F832CC;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
loc_82F832CC:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r8,32(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r7,36(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 36);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82f800c0
	ctx.lr = 0x82F832E4;
	sub_82F800C0(ctx, base);
loc_82F832E4:
	// lwz r11,24(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// addic. r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x82f832fc
	if (ctx.cr0.lt) goto loc_82F832FC;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// blt cr6,0x82f83300
	if (ctx.cr6.lt) goto loc_82F83300;
loc_82F832FC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F83300:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f83318
	if (!ctx.cr0.eq) goto loc_82F83318;
	// lwz r11,20(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x82f8331c
	goto loc_82F8331C;
loc_82F83318:
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
loc_82F8331C:
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82f833f4
	if (ctx.cr6.eq) goto loc_82F833F4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f6d720
	ctx.lr = 0x82F83330;
	sub_82F6D720(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8333c
	if (ctx.cr0.eq) goto loc_82F8333C;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
loc_82F8333C:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82f83418
	if (!ctx.cr6.eq) goto loc_82F83418;
	// b 0x82f833f4
	goto loc_82F833F4;
loc_82F83348:
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r6,26
	ctx.r6.s64 = 26;
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x82f71778
	ctx.lr = 0x82F8335C;
	sub_82F71778(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82f833f4
	if (ctx.cr0.eq) goto loc_82F833F4;
	// addi r5,r1,260
	ctx.r5.s64 = ctx.r1.s64 + 260;
	// addi r4,r1,280
	ctx.r4.s64 = ctx.r1.s64 + 280;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82f74ab8
	ctx.lr = 0x82F83374;
	sub_82F74AB8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f833f4
	if (ctx.cr0.eq) goto loc_82F833F4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x82f833f4
	if (!ctx.cr6.eq) goto loc_82F833F4;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// lwz r4,260(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// li r6,26
	ctx.r6.s64 = 26;
	// lwz r3,280(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// bl 0x82f71778
	ctx.lr = 0x82F8339C;
	sub_82F71778(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f833f4
	if (ctx.cr0.eq) goto loc_82F833F4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// beq cr6,0x82f833e4
	if (ctx.cr6.eq) goto loc_82F833E4;
	// cmpwi cr6,r11,34
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 34, ctx.xer);
	// beq cr6,0x82f833dc
	if (ctx.cr6.eq) goto loc_82F833DC;
	// cmpwi cr6,r11,35
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 35, ctx.xer);
	// beq cr6,0x82f833d4
	if (ctx.cr6.eq) goto loc_82F833D4;
	// cmpwi cr6,r11,36
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 36, ctx.xer);
	// bne cr6,0x82f833f4
	if (!ctx.cr6.eq) goto loc_82F833F4;
	// li r10,2
	ctx.r10.s64 = 2;
loc_82F833CC:
	// stw r10,32(r25)
	PPC_STORE_U32(ctx.r25.u32 + 32, ctx.r10.u32);
	// b 0x82f833e8
	goto loc_82F833E8;
loc_82F833D4:
	// li r10,3
	ctx.r10.s64 = 3;
	// b 0x82f833cc
	goto loc_82F833CC;
loc_82F833DC:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82f833cc
	goto loc_82F833CC;
loc_82F833E4:
	// stw r21,32(r25)
	PPC_STORE_U32(ctx.r25.u32 + 32, ctx.r21.u32);
loc_82F833E8:
	// lbz r11,37(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 37);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stb r11,37(r25)
	PPC_STORE_U8(ctx.r25.u32 + 37, ctx.r11.u8);
loc_82F833F4:
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82f74990
	ctx.lr = 0x82F83404;
	sub_82F74990(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f83348
	if (!ctx.cr0.eq) goto loc_82F83348;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f7a268
	ctx.lr = 0x82F83418;
	sub_82F7A268(ctx, base);
loc_82F83418:
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// b 0x82f82ab8
	goto loc_82F82AB8;
loc_82F83424:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f75fb0
	ctx.lr = 0x82F83430;
	sub_82F75FB0(ctx, base);
	// b 0x82f82ab8
	goto loc_82F82AB8;
loc_82F83434:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f76038
	ctx.lr = 0x82F83440;
	sub_82F76038(ctx, base);
	// b 0x82f82ab8
	goto loc_82F82AB8;
loc_82F83444:
	// lbz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 36);
	// lhz r10,88(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 88);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
	// stb r11,36(r30)
	PPC_STORE_U8(ctx.r30.u32 + 36, ctx.r11.u8);
	// sth r10,88(r30)
	PPC_STORE_U16(ctx.r30.u32 + 88, ctx.r10.u16);
	// b 0x82f82ab8
	goto loc_82F82AB8;
loc_82F83460:
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r6,26
	ctx.r6.s64 = 26;
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x82f71778
	ctx.lr = 0x82F83474;
	sub_82F71778(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82f83674
	if (ctx.cr0.eq) goto loc_82F83674;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82f74ab8
	ctx.lr = 0x82F8348C;
	sub_82F74AB8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f83674
	if (ctx.cr0.eq) goto loc_82F83674;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x82f83628
	if (ctx.cr6.eq) goto loc_82F83628;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// beq cr6,0x82f835dc
	if (ctx.cr6.eq) goto loc_82F835DC;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// beq cr6,0x82f835c8
	if (ctx.cr6.eq) goto loc_82F835C8;
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// beq cr6,0x82f83570
	if (ctx.cr6.eq) goto loc_82F83570;
	// cmpwi cr6,r11,25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 25, ctx.xer);
	// beq cr6,0x82f83530
	if (ctx.cr6.eq) goto loc_82F83530;
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// bne cr6,0x82f83674
	if (!ctx.cr6.eq) goto loc_82F83674;
	// addi r3,r1,268
	ctx.r3.s64 = ctx.r1.s64 + 268;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82f6dc80
	ctx.lr = 0x82F834D8;
	sub_82F6DC80(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f83674
	if (ctx.cr0.eq) goto loc_82F83674;
	// lwz r11,268(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82f83674
	if (ctx.cr6.lt) goto loc_82F83674;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,320(r1)
	PPC_STORE_U64(ctx.r1.u32 + 320, ctx.r11.u64);
	// lfd f0,320(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 320);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x82f8351c
	if (!ctx.cr6.lt) goto loc_82F8351C;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,304(r1)
	PPC_STORE_U64(ctx.r1.u32 + 304, ctx.f0.u64);
	// lhz r11,310(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 310);
	// b 0x82f83520
	goto loc_82F83520;
loc_82F8351C:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82F83520:
	// lhz r10,88(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 88);
	// sth r11,34(r30)
	PPC_STORE_U16(ctx.r30.u32 + 34, ctx.r11.u16);
	// ori r11,r10,8
	ctx.r11.u64 = ctx.r10.u64 | 8;
	// b 0x82f83670
	goto loc_82F83670;
loc_82F83530:
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82f6dd30
	ctx.lr = 0x82F83540;
	sub_82F6DD30(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f83674
	if (ctx.cr0.eq) goto loc_82F83674;
	// lfs f0,288(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	ctx.f0.f64 = double(temp.f32);
	// lhz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 88);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// sth r11,88(r30)
	PPC_STORE_U16(ctx.r30.u32 + 88, ctx.r11.u16);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,304(r1)
	PPC_STORE_U64(ctx.r1.u32 + 304, ctx.f0.u64);
	// lhz r11,310(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 310);
	// sth r11,32(r30)
	PPC_STORE_U16(ctx.r30.u32 + 32, ctx.r11.u16);
	// b 0x82f83674
	goto loc_82F83674;
loc_82F83570:
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82f6dc80
	ctx.lr = 0x82F83580;
	sub_82F6DC80(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f83674
	if (ctx.cr0.eq) goto loc_82F83674;
	// lwz r11,296(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82f83674
	if (ctx.cr6.lt) goto loc_82F83674;
	// beq cr6,0x82f835ac
	if (ctx.cr6.eq) goto loc_82F835AC;
	// lbz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 36);
	// lhz r10,88(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 88);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// b 0x82f835bc
	goto loc_82F835BC;
loc_82F835AC:
	// lbz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 36);
	// lhz r10,88(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 88);
	// andi. r11,r11,247
	ctx.r11.u64 = ctx.r11.u64 & 247;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// andi. r10,r10,65407
	ctx.r10.u64 = ctx.r10.u64 & 65407;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
loc_82F835BC:
	// stb r11,36(r30)
	PPC_STORE_U8(ctx.r30.u32 + 36, ctx.r11.u8);
	// sth r10,88(r30)
	PPC_STORE_U16(ctx.r30.u32 + 88, ctx.r10.u16);
	// b 0x82f83674
	goto loc_82F83674;
loc_82F835C8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82f75d58
	ctx.lr = 0x82F835D8;
	sub_82F75D58(ctx, base);
	// b 0x82f83674
	goto loc_82F83674;
loc_82F835DC:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,35
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 35, ctx.xer);
	// bne cr6,0x82f83674
	if (!ctx.cr6.eq) goto loc_82F83674;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// addi r3,r1,220
	ctx.r3.s64 = ctx.r1.s64 + 220;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// bl 0x82f70138
	ctx.lr = 0x82F83600;
	sub_82F70138(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f83674
	if (ctx.cr0.eq) goto loc_82F83674;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lhz r10,88(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 88);
	// lwz r9,220(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// rlwimi r11,r9,0,8,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFFFF000000);
	// sth r10,88(r30)
	PPC_STORE_U16(ctx.r30.u32 + 88, ctx.r10.u16);
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// b 0x82f83674
	goto loc_82F83674;
loc_82F83628:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,35
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 35, ctx.xer);
	// bne cr6,0x82f83674
	if (!ctx.cr6.eq) goto loc_82F83674;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// bl 0x82f70138
	ctx.lr = 0x82F8364C;
	sub_82F70138(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f83674
	if (ctx.cr0.eq) goto loc_82F83674;
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lhz r9,88(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 88);
	// rlwimi r10,r11,24,0,7
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 24) & 0xFF000000) | (ctx.r10.u64 & 0xFFFFFFFF00FFFFFF);
	// ori r11,r9,1024
	ctx.r11.u64 = ctx.r9.u64 | 1024;
	// stw r10,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r10.u32);
loc_82F83670:
	// sth r11,88(r30)
	PPC_STORE_U16(ctx.r30.u32 + 88, ctx.r11.u16);
loc_82F83674:
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82f74990
	ctx.lr = 0x82F83684;
	sub_82F74990(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f83460
	if (!ctx.cr0.eq) goto loc_82F83460;
	// b 0x82f82ab8
	goto loc_82F82AB8;
loc_82F83690:
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r6,26
	ctx.r6.s64 = 26;
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// bl 0x82f71778
	ctx.lr = 0x82F836A4;
	sub_82F71778(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82f8397c
	if (ctx.cr0.eq) goto loc_82F8397C;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82f74ab8
	ctx.lr = 0x82F836BC;
	sub_82F74AB8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8397c
	if (ctx.cr0.eq) goto loc_82F8397C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// beq cr6,0x82f83948
	if (ctx.cr6.eq) goto loc_82F83948;
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// beq cr6,0x82f83918
	if (ctx.cr6.eq) goto loc_82F83918;
	// cmpwi cr6,r11,23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 23, ctx.xer);
	// beq cr6,0x82f838e8
	if (ctx.cr6.eq) goto loc_82F838E8;
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// beq cr6,0x82f838b4
	if (ctx.cr6.eq) goto loc_82F838B4;
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// beq cr6,0x82f83880
	if (ctx.cr6.eq) goto loc_82F83880;
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// bne cr6,0x82f8397c
	if (!ctx.cr6.eq) goto loc_82F8397C;
	// lwz r30,100(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// lwz r28,92(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f83730
	if (ctx.cr6.eq) goto loc_82F83730;
loc_82F8370C:
	// lbzx r11,r31,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x82ca6bd0
	ctx.lr = 0x82F8371C;
	sub_82CA6BD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82f83730
	if (ctx.cr0.eq) goto loc_82F83730;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82f8370c
	if (ctx.cr6.lt) goto loc_82F8370C;
loc_82F83730:
	// lbzx r11,r31,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// cmplwi cr6,r11,91
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 91, ctx.xer);
	// bne cr6,0x82f83740
	if (!ctx.cr6.eq) goto loc_82F83740;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82F83740:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82f83778
	if (!ctx.cr6.lt) goto loc_82F83778;
loc_82F83750:
	// lbzx r10,r11,r28
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,93
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 93, ctx.xer);
	// beq cr6,0x82f83778
	if (ctx.cr6.eq) goto loc_82F83778;
	// cmpwi cr6,r10,44
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 44, ctx.xer);
	// bne cr6,0x82f8376c
	if (!ctx.cr6.eq) goto loc_82F8376C;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_82F8376C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82f83750
	if (ctx.cr6.lt) goto loc_82F83750;
loc_82F83778:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82f6ed30
	ctx.lr = 0x82F83780;
	sub_82F6ED30(ctx, base);
	// lbz r11,37(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 37);
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// stb r11,37(r25)
	PPC_STORE_U8(ctx.r25.u32 + 37, ctx.r11.u8);
	// bge cr6,0x82f8397c
	if (!ctx.cr6.lt) goto loc_82F8397C;
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
loc_82F8379C:
	// lbzx r11,r31,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// cmplwi cr6,r11,93
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 93, ctx.xer);
	// beq cr6,0x82f8397c
	if (ctx.cr6.eq) goto loc_82F8397C;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82f83810
	if (!ctx.cr6.lt) goto loc_82F83810;
loc_82F837B4:
	// lbzx r11,r31,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82ca6b10
	ctx.lr = 0x82F837C0;
	sub_82CA6B10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82f83808
	if (ctx.cr0.eq) goto loc_82F83808;
	// lbzx r10,r31,r28
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// mulli r11,r29,10
	ctx.r11.s64 = ctx.r29.s64 * 10;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// addi r29,r11,-48
	ctx.r29.s64 = ctx.r11.s64 + -48;
	// blt cr6,0x82f837b4
	if (ctx.cr6.lt) goto loc_82F837B4;
	// b 0x82f83808
	goto loc_82F83808;
loc_82F837EC:
	// lbzx r11,r31,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x82ca6bd0
	ctx.lr = 0x82F837FC;
	sub_82CA6BD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82f83810
	if (ctx.cr0.eq) goto loc_82F83810;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82F83808:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82f837ec
	if (ctx.cr6.lt) goto loc_82F837EC;
loc_82F83810:
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f83830
	if (ctx.cr6.eq) goto loc_82F83830;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82f83830
	if (!ctx.cr6.lt) goto loc_82F83830;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
loc_82F83830:
	// lbzx r11,r31,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplwi cr6,r11,44
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 44, ctx.xer);
	// bne cr6,0x82f83874
	if (!ctx.cr6.eq) goto loc_82F83874;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82f8397c
	if (!ctx.cr6.lt) goto loc_82F8397C;
loc_82F83850:
	// lbzx r11,r31,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x82ca6bd0
	ctx.lr = 0x82F83860;
	sub_82CA6BD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82f83874
	if (ctx.cr0.eq) goto loc_82F83874;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82f83850
	if (ctx.cr6.lt) goto loc_82F83850;
loc_82F83874:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82f8379c
	if (ctx.cr6.lt) goto loc_82F8379C;
	// b 0x82f8397c
	goto loc_82F8397C;
loc_82F83880:
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82f6dc80
	ctx.lr = 0x82F83890;
	sub_82F6DC80(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8397c
	if (ctx.cr0.eq) goto loc_82F8397C;
	// lwz r11,232(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82f8397c
	if (ctx.cr6.lt) goto loc_82F8397C;
	// lbz r10,37(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 37);
	// sth r11,28(r25)
	PPC_STORE_U16(ctx.r25.u32 + 28, ctx.r11.u16);
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// b 0x82f83978
	goto loc_82F83978;
loc_82F838B4:
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82f6dc80
	ctx.lr = 0x82F838C4;
	sub_82F6DC80(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8397c
	if (ctx.cr0.eq) goto loc_82F8397C;
	// lwz r11,240(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82f8397c
	if (ctx.cr6.lt) goto loc_82F8397C;
	// lbz r10,37(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 37);
	// sth r11,26(r25)
	PPC_STORE_U16(ctx.r25.u32 + 26, ctx.r11.u16);
	// ori r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 16;
	// b 0x82f83978
	goto loc_82F83978;
loc_82F838E8:
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82f6dc80
	ctx.lr = 0x82F838F8;
	sub_82F6DC80(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8397c
	if (ctx.cr0.eq) goto loc_82F8397C;
	// lbz r11,37(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 37);
	// lwz r10,248(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stb r11,37(r25)
	PPC_STORE_U8(ctx.r25.u32 + 37, ctx.r11.u8);
	// sth r10,24(r25)
	PPC_STORE_U16(ctx.r25.u32 + 24, ctx.r10.u16);
	// b 0x82f8397c
	goto loc_82F8397C;
loc_82F83918:
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82f6dc80
	ctx.lr = 0x82F83928;
	sub_82F6DC80(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8397c
	if (ctx.cr0.eq) goto loc_82F8397C;
	// lbz r11,37(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 37);
	// lwz r10,256(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stb r11,37(r25)
	PPC_STORE_U8(ctx.r25.u32 + 37, ctx.r11.u8);
	// sth r10,22(r25)
	PPC_STORE_U16(ctx.r25.u32 + 22, ctx.r10.u16);
	// b 0x82f8397c
	goto loc_82F8397C;
loc_82F83948:
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82f6dc80
	ctx.lr = 0x82F83958;
	sub_82F6DC80(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8397c
	if (ctx.cr0.eq) goto loc_82F8397C;
	// lwz r11,264(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82f8397c
	if (ctx.cr6.lt) goto loc_82F8397C;
	// lbz r10,37(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 37);
	// sth r11,20(r25)
	PPC_STORE_U16(ctx.r25.u32 + 20, ctx.r11.u16);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
loc_82F83978:
	// stb r10,37(r25)
	PPC_STORE_U8(ctx.r25.u32 + 37, ctx.r10.u8);
loc_82F8397C:
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82f74990
	ctx.lr = 0x82F8398C;
	sub_82F74990(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f83690
	if (!ctx.cr0.eq) goto loc_82F83690;
	// b 0x82f82ab8
	goto loc_82F82AB8;
loc_82F83998:
	// addi r4,r1,592
	ctx.r4.s64 = ctx.r1.s64 + 592;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82f7a7b0
	ctx.lr = 0x82F839A4;
	sub_82F7A7B0(ctx, base);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
loc_82F839A8:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82f7a8c0
	ctx.lr = 0x82F839B0;
	sub_82F7A8C0(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82f7a528
	ctx.lr = 0x82F839B8;
	sub_82F7A528(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82f04dd8
	ctx.lr = 0x82F839C0;
	sub_82F04DD8(ctx, base);
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x82f08be0
	ctx.lr = 0x82F839C8;
	sub_82F08BE0(ctx, base);
	// lwz r3,200(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// bl 0x82ef6f38
	ctx.lr = 0x82F839D0;
	sub_82EF6F38(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82f791f8
	ctx.lr = 0x82F839DC;
	sub_82F791F8(ctx, base);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f839ec
	if (ctx.cr6.eq) goto loc_82F839EC;
	// bl 0x82ef6f38
	ctx.lr = 0x82F839EC;
	sub_82EF6F38(ctx, base);
loc_82F839EC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,960
	ctx.r1.s64 = ctx.r1.s64 + 960;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F83A00"))) PPC_WEAK_FUNC(sub_82F83A00);
PPC_FUNC_IMPL(__imp__sub_82F83A00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x82F83A08;
	sub_82CA2BB0(ctx, base);
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-960(r1)
	ea = -960 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r20,0
	ctx.r20.s64 = 0;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// stw r20,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r20.u32);
	// mr r22,r20
	ctx.r22.u64 = ctx.r20.u64;
	// mr r21,r20
	ctx.r21.u64 = ctx.r20.u64;
	// stb r27,1015(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1015, ctx.r27.u8);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r22,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r22.u32);
	// mr r19,r6
	ctx.r19.u64 = ctx.r6.u64;
	// stw r21,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r21.u32);
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// bl 0x82f77080
	ctx.lr = 0x82F83A48;
	sub_82F77080(ctx, base);
	// clrlwi. r31,r31,24
	ctx.r31.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// li r26,1
	ctx.r26.s64 = 1;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// beq 0x82f83a5c
	if (ctx.cr0.eq) goto loc_82F83A5C;
	// stb r26,212(r1)
	PPC_STORE_U8(ctx.r1.u32 + 212, ctx.r26.u8);
loc_82F83A5C:
	// mr r25,r20
	ctx.r25.u64 = ctx.r20.u64;
	// lwz r4,36(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 36);
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// mr r18,r20
	ctx.r18.u64 = ctx.r20.u64;
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// bl 0x82f75b08
	ctx.lr = 0x82F83A74;
	sub_82F75B08(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// lwz r4,32(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 32);
	// bl 0x82f70d90
	ctx.lr = 0x82F83A80;
	sub_82F70D90(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82f75130
	ctx.lr = 0x82F83A88;
	sub_82F75130(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,32768
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 32768, ctx.xer);
	// beq cr6,0x82f84bf8
	if (ctx.cr6.eq) goto loc_82F84BF8;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,2756(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2756);
	ctx.f31.f64 = double(temp.f32);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lfd f30,11984(r6)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r6.u32 + 11984);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// addi r9,r9,25232
	ctx.r9.s64 = ctx.r9.s64 + 25232;
	// addi r7,r7,-27472
	ctx.r7.s64 = ctx.r7.s64 + -27472;
	// addi r16,r11,3200
	ctx.r16.s64 = ctx.r11.s64 + 3200;
	// stw r9,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r9.u32);
	// addi r15,r10,30124
	ctx.r15.s64 = ctx.r10.s64 + 30124;
	// stw r7,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r7.u32);
	// addi r17,r8,13080
	ctx.r17.s64 = ctx.r8.s64 + 13080;
	// addi r14,r6,12712
	ctx.r14.s64 = ctx.r6.s64 + 12712;
	// b 0x82f83af0
	goto loc_82F83AF0;
loc_82F83AE0:
	// lwz r31,240(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// li r26,1
	ctx.r26.s64 = 1;
	// lwz r25,116(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lbz r27,1015(r1)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r1.u32 + 1015);
loc_82F83AF0:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// beq cr6,0x82f83cdc
	if (ctx.cr6.eq) goto loc_82F83CDC;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// beq cr6,0x82f83ddc
	if (ctx.cr6.eq) goto loc_82F83DDC;
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 3, ctx.xer);
	// beq cr6,0x82f83d04
	if (ctx.cr6.eq) goto loc_82F83D04;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// beq cr6,0x82f83b18
	if (ctx.cr6.eq) goto loc_82F83B18;
	// cmplwi cr6,r28,32773
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 32773, ctx.xer);
	// bne cr6,0x82f83cc8
	if (!ctx.cr6.eq) goto loc_82F83CC8;
loc_82F83B18:
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// bne cr6,0x82f83b54
	if (!ctx.cr6.eq) goto loc_82F83B54;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82f83b38
	if (ctx.cr6.eq) goto loc_82F83B38;
	// mulli r11,r21,148
	ctx.r11.s64 = ctx.r21.s64 * 148;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// addi r31,r11,-148
	ctx.r31.s64 = ctx.r11.s64 + -148;
loc_82F83B38:
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82f756e0
	ctx.lr = 0x82F83B48;
	sub_82F756E0(ctx, base);
	// lwz r29,136(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r30,164(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// b 0x82f83b8c
	goto loc_82F83B8C;
loc_82F83B54:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x82f83b68
	if (ctx.cr6.eq) goto loc_82F83B68;
	// lbz r11,9(r18)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r18.u32 + 9);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82f83cc8
	if (!ctx.cr0.eq) goto loc_82F83CC8;
loc_82F83B68:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82f83b7c
	if (ctx.cr6.eq) goto loc_82F83B7C;
	// mulli r11,r21,148
	ctx.r11.s64 = ctx.r21.s64 * 148;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// addi r31,r11,-148
	ctx.r31.s64 = ctx.r11.s64 + -148;
loc_82F83B7C:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
loc_82F83B8C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f83cc8
	if (ctx.cr6.eq) goto loc_82F83CC8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82f709c8
	ctx.lr = 0x82F83BA8;
	sub_82F709C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82f83c50
	if (ctx.cr0.eq) goto loc_82F83C50;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f717e0
	ctx.lr = 0x82F83BC4;
	sub_82F717E0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82f83cc8
	if (ctx.cr0.eq) goto loc_82F83CC8;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x82f83cc8
	if (ctx.cr6.eq) goto loc_82F83CC8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x82f83be8
	if (ctx.cr6.eq) goto loc_82F83BE8;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82f83cc8
	if (!ctx.cr6.eq) goto loc_82F83CC8;
loc_82F83BE8:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82f83cc8
	if (ctx.cr6.eq) goto loc_82F83CC8;
loc_82F83BF0:
	// mulli r11,r21,148
	ctx.r11.s64 = ctx.r21.s64 * 148;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// addi r10,r11,-148
	ctx.r10.s64 = ctx.r11.s64 + -148;
	// lwz r11,-140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f83c18
	if (ctx.cr6.eq) goto loc_82F83C18;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82f83c34
	if (ctx.cr6.eq) goto loc_82F83C34;
loc_82F83C18:
	// addi r4,r21,-1
	ctx.r4.s64 = ctx.r21.s64 + -1;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82f791f8
	ctx.lr = 0x82F83C24;
	sub_82F791F8(ctx, base);
	// lwz r21,108(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r22,104(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// bne cr6,0x82f83bf0
	if (!ctx.cr6.eq) goto loc_82F83BF0;
loc_82F83C34:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82f83cc8
	if (ctx.cr6.eq) goto loc_82F83CC8;
	// mulli r11,r21,148
	ctx.r11.s64 = ctx.r21.s64 * 148;
	// lwz r25,116(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lbz r27,1015(r1)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r1.u32 + 1015);
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// addi r31,r11,-148
	ctx.r31.s64 = ctx.r11.s64 + -148;
loc_82F83C50:
	// addi r4,r21,-1
	ctx.r4.s64 = ctx.r21.s64 + -1;
	// lwz r18,8(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82f791f8
	ctx.lr = 0x82F83C60;
	sub_82F791F8(ctx, base);
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x82f83cc0
	if (ctx.cr6.eq) goto loc_82F83CC0;
	// lwz r11,4(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82f83c8c
	if (ctx.cr6.eq) goto loc_82F83C8C;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82f83cc0
	if (!ctx.cr6.eq) goto loc_82F83CC0;
	// addi r11,r25,-1
	ctx.r11.s64 = ctx.r25.s64 + -1;
	// cmplwi cr6,r28,32773
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 32773, ctx.xer);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// beq cr6,0x82f83cc0
	if (ctx.cr6.eq) goto loc_82F83CC0;
loc_82F83C8C:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f83cc0
	if (ctx.cr0.eq) goto loc_82F83CC0;
	// lbz r11,40(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 40);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f83ca8
	if (!ctx.cr0.eq) goto loc_82F83CA8;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
loc_82F83CA8:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r8,32(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r7,36(r23)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r23.u32 + 36);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82f800c0
	ctx.lr = 0x82F83CC0;
	sub_82F800C0(ctx, base);
loc_82F83CC0:
	// lwz r22,104(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r21,108(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_82F83CC8:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82f75130
	ctx.lr = 0x82F83CD0;
	sub_82F75130(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,32768
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 32768, ctx.xer);
	// bne cr6,0x82f83ae0
	if (!ctx.cr6.eq) goto loc_82F83AE0;
loc_82F83CDC:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82f84bf8
	if (ctx.cr6.eq) goto loc_82F84BF8;
	// mulli r11,r21,148
	ctx.r11.s64 = ctx.r21.s64 * 148;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r31,r11,-148
	ctx.r31.s64 = ctx.r11.s64 + -148;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// bl 0x82f7a7b0
	ctx.lr = 0x82F83CFC;
	sub_82F7A7B0(ctx, base);
	// addi r4,r31,108
	ctx.r4.s64 = ctx.r31.s64 + 108;
	// b 0x82f84c08
	goto loc_82F84C08;
loc_82F83D04:
	// addi r5,r1,324
	ctx.r5.s64 = ctx.r1.s64 + 324;
	// addi r4,r1,280
	ctx.r4.s64 = ctx.r1.s64 + 280;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82f75758
	ctx.lr = 0x82F83D14;
	sub_82F75758(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f83cc8
	if (ctx.cr0.eq) goto loc_82F83CC8;
	// lwz r5,324(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82f83cc8
	if (ctx.cr6.eq) goto loc_82F83CC8;
	// lwz r11,24(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24);
	// addic. r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x82f83d40
	if (ctx.cr0.lt) goto loc_82F83D40;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// blt cr6,0x82f83d44
	if (ctx.cr6.lt) goto loc_82F83D44;
loc_82F83D40:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82F83D44:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f83d5c
	if (!ctx.cr0.eq) goto loc_82F83D5C;
	// lwz r11,20(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 20);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x82f83d60
	goto loc_82F83D60;
loc_82F83D5C:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
loc_82F83D60:
	// lwz r4,280(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f83da4
	if (ctx.cr6.eq) goto loc_82F83DA4;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// bgt cr6,0x82f83da4
	if (ctx.cr6.gt) goto loc_82F83DA4;
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bne cr6,0x82f83da4
	if (!ctx.cr6.eq) goto loc_82F83DA4;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82f83cc8
	if (ctx.cr6.eq) goto loc_82F83CC8;
	// bl 0x82f6d720
	ctx.lr = 0x82F83D90;
	sub_82F6D720(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f83d9c
	if (ctx.cr0.eq) goto loc_82F83D9C;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
loc_82F83D9C:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82f83cc8
	if (ctx.cr6.eq) goto loc_82F83CC8;
loc_82F83DA4:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// li r6,1
	ctx.r6.s64 = 1;
	// beq cr6,0x82f83dc8
	if (ctx.cr6.eq) goto loc_82F83DC8;
	// mulli r11,r21,148
	ctx.r11.s64 = ctx.r21.s64 * 148;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// addi r11,r11,-148
	ctx.r11.s64 = ctx.r11.s64 + -148;
	// addi r8,r11,108
	ctx.r8.s64 = ctx.r11.s64 + 108;
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// b 0x82f83dd0
	goto loc_82F83DD0;
loc_82F83DC8:
	// lwz r8,32(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 32);
	// lwz r7,36(r23)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r23.u32 + 36);
loc_82F83DD0:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82f80398
	ctx.lr = 0x82F83DD8;
	sub_82F80398(ctx, base);
	// b 0x82f83cc8
	goto loc_82F83CC8;
loc_82F83DDC:
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82f75648
	ctx.lr = 0x82F83DEC;
	sub_82F75648(ctx, base);
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// li r6,12
	ctx.r6.s64 = 12;
	// lwz r31,224(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r30,320(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f717e0
	ctx.lr = 0x82F83E08;
	sub_82F717E0(ctx, base);
	// mr. r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq 0x82f83cc8
	if (ctx.cr0.eq) goto loc_82F83CC8;
	// lbz r11,9(r18)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r18.u32 + 9);
	// addi r29,r21,-1
	ctx.r29.s64 = ctx.r21.s64 + -1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82f84214
	if (ctx.cr0.eq) goto loc_82F84214;
	// lwz r11,4(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82f841dc
	if (ctx.cr6.eq) goto loc_82F841DC;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82f83e44
	if (ctx.cr6.eq) goto loc_82F83E44;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x82f83cc8
	if (!ctx.cr6.eq) goto loc_82F83CC8;
	// lwz r4,232(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// b 0x82f841f8
	goto loc_82F841F8;
loc_82F83E44:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82f83cc8
	if (ctx.cr6.eq) goto loc_82F83CC8;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x82f04e78
	ctx.lr = 0x82F83E54;
	sub_82F04E78(ctx, base);
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82f08838
	ctx.lr = 0x82F83E6C;
	sub_82F08838(ctx, base);
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// mulli r10,r31,36
	ctx.r10.s64 = ctx.r31.s64 * 36;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,-36
	ctx.r3.s64 = ctx.r11.s64 + -36;
	// bl 0x82f6fd00
	ctx.lr = 0x82F83E84;
	sub_82F6FD00(ctx, base);
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x82f06b90
	ctx.lr = 0x82F83E8C;
	sub_82F06B90(ctx, base);
	// lwz r9,4(r19)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// lwz r8,0(r19)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// mulli r9,r9,36
	ctx.r9.s64 = ctx.r9.s64 * 36;
	// lwz r11,24(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addic. r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r30,r9,-36
	ctx.r30.s64 = ctx.r9.s64 + -36;
	// blt 0x82f83eb8
	if (ctx.cr0.lt) goto loc_82F83EB8;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// blt cr6,0x82f83ebc
	if (ctx.cr6.lt) goto loc_82F83EBC;
loc_82F83EB8:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82F83EBC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f83ed4
	if (!ctx.cr0.eq) goto loc_82F83ED4;
	// lwz r11,20(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 20);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x82f83ed8
	goto loc_82F83ED8;
loc_82F83ED4:
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
loc_82F83ED8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82f83ef0
	if (!ctx.cr6.eq) goto loc_82F83EF0;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82f7fce0
	ctx.lr = 0x82F83EEC;
	sub_82F7FCE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82F83EF0:
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// bl 0x82f08b70
	ctx.lr = 0x82F83EF8;
	sub_82F08B70(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// b 0x82f84090
	goto loc_82F84090;
loc_82F83F04:
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r6,26
	ctx.r6.s64 = 26;
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x82f717e0
	ctx.lr = 0x82F83F18;
	sub_82F717E0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82f84090
	if (ctx.cr0.eq) goto loc_82F84090;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82f75470
	ctx.lr = 0x82F83F30;
	sub_82F75470(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f84090
	if (ctx.cr0.eq) goto loc_82F84090;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x82f84040
	if (ctx.cr6.eq) goto loc_82F84040;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x82f84010
	if (ctx.cr6.eq) goto loc_82F84010;
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// beq cr6,0x82f83fe8
	if (ctx.cr6.eq) goto loc_82F83FE8;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// beq cr6,0x82f83fe0
	if (ctx.cr6.eq) goto loc_82F83FE0;
	// cmpwi cr6,r11,27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27, ctx.xer);
	// beq cr6,0x82f83fcc
	if (ctx.cr6.eq) goto loc_82F83FCC;
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// beq cr6,0x82f83fa4
	if (ctx.cr6.eq) goto loc_82F83FA4;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bne cr6,0x82f84090
	if (!ctx.cr6.eq) goto loc_82F84090;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82f6de98
	ctx.lr = 0x82F83F84;
	sub_82F6DE98(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f84090
	if (ctx.cr0.eq) goto loc_82F84090;
	// lwz r11,288(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82f84090
	if (ctx.cr6.lt) goto loc_82F84090;
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// b 0x82f84090
	goto loc_82F84090;
loc_82F83FA4:
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82f6de98
	ctx.lr = 0x82F83FB4;
	sub_82F6DE98(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f84090
	if (ctx.cr0.eq) goto loc_82F84090;
	// lwz r11,216(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// b 0x82f84090
	goto loc_82F84090;
loc_82F83FCC:
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
loc_82F83FD0:
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82ef79d8
	ctx.lr = 0x82F83FDC;
	sub_82EF79D8(ctx, base);
	// b 0x82f84090
	goto loc_82F84090;
loc_82F83FE0:
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// b 0x82f83fd0
	goto loc_82F83FD0;
loc_82F83FE8:
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82f6de98
	ctx.lr = 0x82F83FF8;
	sub_82F6DE98(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f84090
	if (ctx.cr0.eq) goto loc_82F84090;
	// lwz r11,304(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// b 0x82f84090
	goto loc_82F84090;
loc_82F84010:
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82f6de98
	ctx.lr = 0x82F84020;
	sub_82F6DE98(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f84090
	if (ctx.cr0.eq) goto loc_82F84090;
	// lwz r11,248(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82f84090
	if (ctx.cr6.lt) goto loc_82F84090;
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// b 0x82f84090
	goto loc_82F84090;
loc_82F84040:
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,26
	ctx.r6.s64 = 26;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82f717e0
	ctx.lr = 0x82F84054;
	sub_82F717E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f84090
	if (ctx.cr0.eq) goto loc_82F84090;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82f8408c
	if (ctx.cr6.eq) goto loc_82F8408C;
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// beq cr6,0x82f84080
	if (ctx.cr6.eq) goto loc_82F84080;
	// cmpwi cr6,r11,34
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 34, ctx.xer);
	// bne cr6,0x82f84090
	if (!ctx.cr6.eq) goto loc_82F84090;
	// stb r26,32(r30)
	PPC_STORE_U8(ctx.r30.u32 + 32, ctx.r26.u8);
	// b 0x82f84090
	goto loc_82F84090;
loc_82F84080:
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r11,32(r30)
	PPC_STORE_U8(ctx.r30.u32 + 32, ctx.r11.u8);
	// b 0x82f84090
	goto loc_82F84090;
loc_82F8408C:
	// stb r20,32(r30)
	PPC_STORE_U8(ctx.r30.u32 + 32, ctx.r20.u8);
loc_82F84090:
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82f75380
	ctx.lr = 0x82F840A0;
	sub_82F75380(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f83f04
	if (!ctx.cr0.eq) goto loc_82F83F04;
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F840B0;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f840dc
	if (ctx.cr0.eq) goto loc_82F840DC;
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
	// bl 0x82f6e550
	ctx.lr = 0x82F840D4;
	sub_82F6E550(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82f840e0
	goto loc_82F840E0;
loc_82F840DC:
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
loc_82F840E0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// bl 0x82f6e660
	ctx.lr = 0x82F840EC;
	sub_82F6E660(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// bl 0x82ef7e30
	ctx.lr = 0x82F84118;
	sub_82EF7E30(ctx, base);
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82ef7e30
	ctx.lr = 0x82F84124;
	sub_82EF7E30(ctx, base);
	// lbz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r11.u8);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F84140;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f84160
	if (ctx.cr6.eq) goto loc_82F84160;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F84160;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F84160:
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x82f84180
	if (ctx.cr6.lt) goto loc_82F84180;
	// mulli r11,r29,148
	ctx.r11.s64 = ctx.r29.s64 * 148;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// addi r30,r11,16
	ctx.r30.s64 = ctx.r11.s64 + 16;
	// addi r8,r11,108
	ctx.r8.s64 = ctx.r11.s64 + 108;
	// b 0x82f84188
	goto loc_82F84188;
loc_82F84180:
	// addi r30,r1,592
	ctx.r30.s64 = ctx.r1.s64 + 592;
	// addi r8,r1,336
	ctx.r8.s64 = ctx.r1.s64 + 336;
loc_82F84188:
	// addi r7,r1,688
	ctx.r7.s64 = ctx.r1.s64 + 688;
	// lwz r4,296(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82f800c0
	ctx.lr = 0x82F841A0;
	sub_82F800C0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f6e660
	ctx.lr = 0x82F841AC;
	sub_82F6E660(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82f7a7b0
	ctx.lr = 0x82F841B8;
	sub_82F7A7B0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F841D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// bl 0x82f08be0
	ctx.lr = 0x82F841D8;
	sub_82F08BE0(ctx, base);
	// b 0x82f83cc8
	goto loc_82F83CC8;
loc_82F841DC:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f83cc8
	if (ctx.cr0.eq) goto loc_82F83CC8;
	// lbz r11,40(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 40);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f841f8
	if (!ctx.cr0.eq) goto loc_82F841F8;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
loc_82F841F8:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r7,36(r23)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r23.u32 + 36);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r8,32(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 32);
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x82f800c0
	ctx.lr = 0x82F84210;
	sub_82F800C0(ctx, base);
	// b 0x82f83cc8
	goto loc_82F83CC8;
loc_82F84214:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82f73b38
	ctx.lr = 0x82F8421C;
	sub_82F73B38(ctx, base);
	// stw r30,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r30.u32);
	// stw r31,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r31.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r18,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r18.u32);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// stw r20,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r20.u32);
	// bl 0x82f08b70
	ctx.lr = 0x82F84238;
	sub_82F08B70(ctx, base);
	// addi r3,r1,492
	ctx.r3.s64 = ctx.r1.s64 + 492;
	// bl 0x82f04d70
	ctx.lr = 0x82F84240;
	sub_82F04D70(ctx, base);
	// addi r31,r21,1
	ctx.r31.s64 = ctx.r21.s64 + 1;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82f791f8
	ctx.lr = 0x82F84250;
	sub_82F791F8(ctx, base);
	// mulli r11,r31,148
	ctx.r11.s64 = ctx.r31.s64 * 148;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// lwz r22,104(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// addi r3,r11,-148
	ctx.r3.s64 = ctx.r11.s64 + -148;
	// bl 0x82f770f0
	ctx.lr = 0x82F84268;
	sub_82F770F0(ctx, base);
	// addi r3,r1,492
	ctx.r3.s64 = ctx.r1.s64 + 492;
	// bl 0x82f04dd8
	ctx.lr = 0x82F84270;
	sub_82F04DD8(ctx, base);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82f08be0
	ctx.lr = 0x82F84278;
	sub_82F08BE0(ctx, base);
	// lwz r21,108(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mulli r11,r21,148
	ctx.r11.s64 = ctx.r21.s64 * 148;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// addi r31,r11,-148
	ctx.r31.s64 = ctx.r11.s64 + -148;
	// stw r30,-136(r11)
	PPC_STORE_U32(ctx.r11.u32 + -136, ctx.r30.u32);
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// blt cr6,0x82f842b4
	if (ctx.cr6.lt) goto loc_82F842B4;
	// mulli r11,r29,148
	ctx.r11.s64 = ctx.r29.s64 * 148;
	// add r29,r11,r22
	ctx.r29.u64 = ctx.r11.u64 + ctx.r22.u64;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// bl 0x82f08fe0
	ctx.lr = 0x82F842AC;
	sub_82F08FE0(ctx, base);
	// addi r4,r29,108
	ctx.r4.s64 = ctx.r29.s64 + 108;
	// b 0x82f842c0
	goto loc_82F842C0;
loc_82F842B4:
	// addi r4,r1,592
	ctx.r4.s64 = ctx.r1.s64 + 592;
	// bl 0x82f08fe0
	ctx.lr = 0x82F842BC;
	sub_82F08FE0(ctx, base);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
loc_82F842C0:
	// addi r24,r31,108
	ctx.r24.s64 = ctx.r31.s64 + 108;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82f6ee08
	ctx.lr = 0x82F842CC;
	sub_82F6EE08(ctx, base);
	// lwz r11,4(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x82f83cc8
	if (ctx.cr6.gt) goto loc_82F83CC8;
	// lis r12,-32252
	ctx.r12.s64 = -2113667072;
	// addi r12,r12,12640
	ctx.r12.s64 = ctx.r12.s64 + 12640;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32008
	ctx.r12.s64 = -2097676288;
	// addi r12,r12,15560
	ctx.r12.s64 = ctx.r12.s64 + 15560;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82F84350;
	case 1:
		goto loc_82F84644;
	case 2:
		goto loc_82F83CC8;
	case 3:
		goto loc_82F84894;
	case 4:
		goto loc_82F84654;
	case 5:
		goto loc_82F83CC8;
	case 6:
		goto loc_82F8436C;
	case 7:
		goto loc_82F84474;
	case 8:
		goto loc_82F83CC8;
	case 9:
		goto loc_82F848B0;
	case 10:
		goto loc_82F84664;
	default:
		__builtin_unreachable();
	}
loc_82F84300:
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r6,26
	ctx.r6.s64 = 26;
	// lwz r3,152(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x82f717e0
	ctx.lr = 0x82F84314;
	sub_82F717E0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82f84350
	if (ctx.cr0.eq) goto loc_82F84350;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// addi r4,r1,276
	ctx.r4.s64 = ctx.r1.s64 + 276;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82f75470
	ctx.lr = 0x82F8432C;
	sub_82F75470(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f84350
	if (ctx.cr0.eq) goto loc_82F84350;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// bne cr6,0x82f84350
	if (!ctx.cr6.eq) goto loc_82F84350;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,256(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r4,276(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// bl 0x82f6d450
	ctx.lr = 0x82F84350;
	sub_82F6D450(ctx, base);
loc_82F84350:
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82f75380
	ctx.lr = 0x82F84360;
	sub_82F75380(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f84300
	if (!ctx.cr0.eq) goto loc_82F84300;
	// b 0x82f83cc8
	goto loc_82F83CC8;
loc_82F8436C:
	// lbz r11,37(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 37);
	// stb r26,36(r24)
	PPC_STORE_U8(ctx.r24.u32 + 36, ctx.r26.u8);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stb r11,37(r24)
	PPC_STORE_U8(ctx.r24.u32 + 37, ctx.r11.u8);
	// lwz r11,24(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24);
	// addic. r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x82f84394
	if (ctx.cr0.lt) goto loc_82F84394;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// blt cr6,0x82f84398
	if (ctx.cr6.lt) goto loc_82F84398;
loc_82F84394:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82F84398:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f843b0
	if (!ctx.cr0.eq) goto loc_82F843B0;
	// lwz r11,20(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 20);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x82f843b4
	goto loc_82F843B4;
loc_82F843B0:
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
loc_82F843B4:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82f843cc
	if (!ctx.cr6.eq) goto loc_82F843CC;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82f7fce0
	ctx.lr = 0x82F843C8;
	sub_82F7FCE0(ctx, base);
	// b 0x82f83cc8
	goto loc_82F83CC8;
loc_82F843CC:
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82f843f4
	if (ctx.cr6.eq) goto loc_82F843F4;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x82f6d720
	ctx.lr = 0x82F843E0;
	sub_82F6D720(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f843ec
	if (ctx.cr0.eq) goto loc_82F843EC;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
loc_82F843EC:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82f843fc
	if (!ctx.cr6.eq) goto loc_82F843FC;
loc_82F843F4:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// b 0x82f84468
	goto loc_82F84468;
loc_82F843FC:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f84430
	if (ctx.cr0.eq) goto loc_82F84430;
	// lbz r11,40(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 40);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f84418
	if (!ctx.cr0.eq) goto loc_82F84418;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
loc_82F84418:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r8,32(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r7,36(r23)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r23.u32 + 36);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82f800c0
	ctx.lr = 0x82F84430;
	sub_82F800C0(ctx, base);
loc_82F84430:
	// lwz r11,24(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24);
	// addic. r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x82f84448
	if (ctx.cr0.lt) goto loc_82F84448;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// blt cr6,0x82f8444c
	if (ctx.cr6.lt) goto loc_82F8444C;
loc_82F84448:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82F8444C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f84464
	if (!ctx.cr0.eq) goto loc_82F84464;
	// lwz r11,20(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 20);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x82f84468
	goto loc_82F84468;
loc_82F84464:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
loc_82F84468:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82f7a268
	ctx.lr = 0x82F84470;
	sub_82F7A268(ctx, base);
	// b 0x82f83cc8
	goto loc_82F83CC8;
loc_82F84474:
	// lwz r11,24(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24);
	// addic. r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x82f8448c
	if (ctx.cr0.lt) goto loc_82F8448C;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// blt cr6,0x82f84490
	if (ctx.cr6.lt) goto loc_82F84490;
loc_82F8448C:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82F84490:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f844a8
	if (!ctx.cr0.eq) goto loc_82F844A8;
	// lwz r11,20(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 20);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x82f844ac
	goto loc_82F844AC;
loc_82F844A8:
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
loc_82F844AC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82f844c8
	if (!ctx.cr6.eq) goto loc_82F844C8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82f7fce0
	ctx.lr = 0x82F844C0;
	sub_82F7FCE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82f8453c
	goto loc_82F8453C;
loc_82F844C8:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x82f8453c
	if (ctx.cr6.eq) goto loc_82F8453C;
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f84504
	if (ctx.cr0.eq) goto loc_82F84504;
	// lbz r11,40(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 40);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f844ec
	if (!ctx.cr0.eq) goto loc_82F844EC;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
loc_82F844EC:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r8,32(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r7,36(r23)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r23.u32 + 36);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82f800c0
	ctx.lr = 0x82F84504;
	sub_82F800C0(ctx, base);
loc_82F84504:
	// lwz r11,24(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24);
	// addic. r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x82f8451c
	if (ctx.cr0.lt) goto loc_82F8451C;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// blt cr6,0x82f84520
	if (ctx.cr6.lt) goto loc_82F84520;
loc_82F8451C:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82F84520:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f84538
	if (!ctx.cr0.eq) goto loc_82F84538;
	// lwz r11,20(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 20);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x82f8453c
	goto loc_82F8453C;
loc_82F84538:
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
loc_82F8453C:
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82f84614
	if (ctx.cr6.eq) goto loc_82F84614;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f6d720
	ctx.lr = 0x82F84550;
	sub_82F6D720(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8455c
	if (ctx.cr0.eq) goto loc_82F8455C;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
loc_82F8455C:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82f84638
	if (!ctx.cr6.eq) goto loc_82F84638;
	// b 0x82f84614
	goto loc_82F84614;
loc_82F84568:
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r6,26
	ctx.r6.s64 = 26;
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x82f717e0
	ctx.lr = 0x82F8457C;
	sub_82F717E0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82f84614
	if (ctx.cr0.eq) goto loc_82F84614;
	// addi r5,r1,264
	ctx.r5.s64 = ctx.r1.s64 + 264;
	// addi r4,r1,284
	ctx.r4.s64 = ctx.r1.s64 + 284;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82f75470
	ctx.lr = 0x82F84594;
	sub_82F75470(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f84614
	if (ctx.cr0.eq) goto loc_82F84614;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x82f84614
	if (!ctx.cr6.eq) goto loc_82F84614;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// lwz r4,264(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// li r6,26
	ctx.r6.s64 = 26;
	// lwz r3,284(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// bl 0x82f717e0
	ctx.lr = 0x82F845BC;
	sub_82F717E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f84614
	if (ctx.cr0.eq) goto loc_82F84614;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// beq cr6,0x82f84604
	if (ctx.cr6.eq) goto loc_82F84604;
	// cmpwi cr6,r11,34
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 34, ctx.xer);
	// beq cr6,0x82f845fc
	if (ctx.cr6.eq) goto loc_82F845FC;
	// cmpwi cr6,r11,35
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 35, ctx.xer);
	// beq cr6,0x82f845f4
	if (ctx.cr6.eq) goto loc_82F845F4;
	// cmpwi cr6,r11,36
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 36, ctx.xer);
	// bne cr6,0x82f84614
	if (!ctx.cr6.eq) goto loc_82F84614;
	// li r10,2
	ctx.r10.s64 = 2;
loc_82F845EC:
	// stw r10,32(r24)
	PPC_STORE_U32(ctx.r24.u32 + 32, ctx.r10.u32);
	// b 0x82f84608
	goto loc_82F84608;
loc_82F845F4:
	// li r10,3
	ctx.r10.s64 = 3;
	// b 0x82f845ec
	goto loc_82F845EC;
loc_82F845FC:
	// stw r26,32(r24)
	PPC_STORE_U32(ctx.r24.u32 + 32, ctx.r26.u32);
	// b 0x82f84608
	goto loc_82F84608;
loc_82F84604:
	// stw r20,32(r24)
	PPC_STORE_U32(ctx.r24.u32 + 32, ctx.r20.u32);
loc_82F84608:
	// lbz r11,37(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 37);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stb r11,37(r24)
	PPC_STORE_U8(ctx.r24.u32 + 37, ctx.r11.u8);
loc_82F84614:
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82f75380
	ctx.lr = 0x82F84624;
	sub_82F75380(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f84568
	if (!ctx.cr0.eq) goto loc_82F84568;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f7a268
	ctx.lr = 0x82F84638;
	sub_82F7A268(ctx, base);
loc_82F84638:
	// addi r11,r25,1
	ctx.r11.s64 = ctx.r25.s64 + 1;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// b 0x82f83cc8
	goto loc_82F83CC8;
loc_82F84644:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f75fb0
	ctx.lr = 0x82F84650;
	sub_82F75FB0(ctx, base);
	// b 0x82f83cc8
	goto loc_82F83CC8;
loc_82F84654:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f76038
	ctx.lr = 0x82F84660;
	sub_82F76038(ctx, base);
	// b 0x82f83cc8
	goto loc_82F83CC8;
loc_82F84664:
	// lbz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 36);
	// lhz r10,88(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 88);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
	// stb r11,36(r30)
	PPC_STORE_U8(ctx.r30.u32 + 36, ctx.r11.u8);
	// sth r10,88(r30)
	PPC_STORE_U16(ctx.r30.u32 + 88, ctx.r10.u16);
	// b 0x82f83cc8
	goto loc_82F83CC8;
loc_82F84680:
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r6,26
	ctx.r6.s64 = 26;
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x82f717e0
	ctx.lr = 0x82F84694;
	sub_82F717E0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82f84894
	if (ctx.cr0.eq) goto loc_82F84894;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82f75470
	ctx.lr = 0x82F846AC;
	sub_82F75470(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f84894
	if (ctx.cr0.eq) goto loc_82F84894;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x82f84848
	if (ctx.cr6.eq) goto loc_82F84848;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// beq cr6,0x82f847fc
	if (ctx.cr6.eq) goto loc_82F847FC;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// beq cr6,0x82f847e8
	if (ctx.cr6.eq) goto loc_82F847E8;
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// beq cr6,0x82f84790
	if (ctx.cr6.eq) goto loc_82F84790;
	// cmpwi cr6,r11,25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 25, ctx.xer);
	// beq cr6,0x82f84750
	if (ctx.cr6.eq) goto loc_82F84750;
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// bne cr6,0x82f84894
	if (!ctx.cr6.eq) goto loc_82F84894;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82f6de98
	ctx.lr = 0x82F846F8;
	sub_82F6DE98(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f84894
	if (ctx.cr0.eq) goto loc_82F84894;
	// lwz r11,272(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82f84894
	if (ctx.cr6.lt) goto loc_82F84894;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,328(r1)
	PPC_STORE_U64(ctx.r1.u32 + 328, ctx.r11.u64);
	// lfd f0,328(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 328);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x82f8473c
	if (!ctx.cr6.lt) goto loc_82F8473C;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,312(r1)
	PPC_STORE_U64(ctx.r1.u32 + 312, ctx.f0.u64);
	// lhz r11,318(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 318);
	// b 0x82f84740
	goto loc_82F84740;
loc_82F8473C:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82F84740:
	// lhz r10,88(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 88);
	// sth r11,34(r30)
	PPC_STORE_U16(ctx.r30.u32 + 34, ctx.r11.u16);
	// ori r11,r10,8
	ctx.r11.u64 = ctx.r10.u64 | 8;
	// b 0x82f84890
	goto loc_82F84890;
loc_82F84750:
	// addi r3,r1,292
	ctx.r3.s64 = ctx.r1.s64 + 292;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82f6df40
	ctx.lr = 0x82F84760;
	sub_82F6DF40(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f84894
	if (ctx.cr0.eq) goto loc_82F84894;
	// lfs f0,292(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	ctx.f0.f64 = double(temp.f32);
	// lhz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 88);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// sth r11,88(r30)
	PPC_STORE_U16(ctx.r30.u32 + 88, ctx.r11.u16);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,312(r1)
	PPC_STORE_U64(ctx.r1.u32 + 312, ctx.f0.u64);
	// lhz r11,318(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 318);
	// sth r11,32(r30)
	PPC_STORE_U16(ctx.r30.u32 + 32, ctx.r11.u16);
	// b 0x82f84894
	goto loc_82F84894;
loc_82F84790:
	// addi r3,r1,300
	ctx.r3.s64 = ctx.r1.s64 + 300;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82f6de98
	ctx.lr = 0x82F847A0;
	sub_82F6DE98(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f84894
	if (ctx.cr0.eq) goto loc_82F84894;
	// lwz r11,300(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82f84894
	if (ctx.cr6.lt) goto loc_82F84894;
	// beq cr6,0x82f847cc
	if (ctx.cr6.eq) goto loc_82F847CC;
	// lbz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 36);
	// lhz r10,88(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 88);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// b 0x82f847dc
	goto loc_82F847DC;
loc_82F847CC:
	// lbz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 36);
	// lhz r10,88(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 88);
	// andi. r11,r11,247
	ctx.r11.u64 = ctx.r11.u64 & 247;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// andi. r10,r10,65407
	ctx.r10.u64 = ctx.r10.u64 & 65407;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
loc_82F847DC:
	// stb r11,36(r30)
	PPC_STORE_U8(ctx.r30.u32 + 36, ctx.r11.u8);
	// sth r10,88(r30)
	PPC_STORE_U16(ctx.r30.u32 + 88, ctx.r10.u16);
	// b 0x82f84894
	goto loc_82F84894;
loc_82F847E8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82f75e30
	ctx.lr = 0x82F847F8;
	sub_82F75E30(ctx, base);
	// b 0x82f84894
	goto loc_82F84894;
loc_82F847FC:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,35
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 35, ctx.xer);
	// bne cr6,0x82f84894
	if (!ctx.cr6.eq) goto loc_82F84894;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// addi r3,r1,220
	ctx.r3.s64 = ctx.r1.s64 + 220;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// bl 0x82f705e8
	ctx.lr = 0x82F84820;
	sub_82F705E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f84894
	if (ctx.cr0.eq) goto loc_82F84894;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lhz r10,88(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 88);
	// lwz r9,220(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// rlwimi r11,r9,0,8,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFFFF000000);
	// sth r10,88(r30)
	PPC_STORE_U16(ctx.r30.u32 + 88, ctx.r10.u16);
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// b 0x82f84894
	goto loc_82F84894;
loc_82F84848:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,35
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 35, ctx.xer);
	// bne cr6,0x82f84894
	if (!ctx.cr6.eq) goto loc_82F84894;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// addi r3,r1,228
	ctx.r3.s64 = ctx.r1.s64 + 228;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// bl 0x82f705e8
	ctx.lr = 0x82F8486C;
	sub_82F705E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f84894
	if (ctx.cr0.eq) goto loc_82F84894;
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lhz r9,88(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 88);
	// rlwimi r10,r11,24,0,7
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 24) & 0xFF000000) | (ctx.r10.u64 & 0xFFFFFFFF00FFFFFF);
	// ori r11,r9,1024
	ctx.r11.u64 = ctx.r9.u64 | 1024;
	// stw r10,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r10.u32);
loc_82F84890:
	// sth r11,88(r30)
	PPC_STORE_U16(ctx.r30.u32 + 88, ctx.r11.u16);
loc_82F84894:
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82f75380
	ctx.lr = 0x82F848A4;
	sub_82F75380(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f84680
	if (!ctx.cr0.eq) goto loc_82F84680;
	// b 0x82f83cc8
	goto loc_82F83CC8;
loc_82F848B0:
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82f75380
	ctx.lr = 0x82F848C0;
	sub_82F75380(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f83cc8
	if (ctx.cr0.eq) goto loc_82F83CC8;
	// b 0x82f848d0
	goto loc_82F848D0;
loc_82F848CC:
	// li r26,1
	ctx.r26.s64 = 1;
loc_82F848D0:
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r6,26
	ctx.r6.s64 = 26;
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// bl 0x82f717e0
	ctx.lr = 0x82F848E4;
	sub_82F717E0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82f84bdc
	if (ctx.cr0.eq) goto loc_82F84BDC;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82f75470
	ctx.lr = 0x82F848FC;
	sub_82F75470(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f84bdc
	if (ctx.cr0.eq) goto loc_82F84BDC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// beq cr6,0x82f84ba8
	if (ctx.cr6.eq) goto loc_82F84BA8;
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// beq cr6,0x82f84b78
	if (ctx.cr6.eq) goto loc_82F84B78;
	// cmpwi cr6,r11,23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 23, ctx.xer);
	// beq cr6,0x82f84b48
	if (ctx.cr6.eq) goto loc_82F84B48;
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// beq cr6,0x82f84b14
	if (ctx.cr6.eq) goto loc_82F84B14;
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// beq cr6,0x82f84ae0
	if (ctx.cr6.eq) goto loc_82F84AE0;
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// bne cr6,0x82f84bdc
	if (!ctx.cr6.eq) goto loc_82F84BDC;
	// lwz r28,100(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// lwz r25,92(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82f84970
	if (ctx.cr6.eq) goto loc_82F84970;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_82F84950:
	// lhz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// bl 0x82ca6bd0
	ctx.lr = 0x82F84958;
	sub_82CA6BD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82f84970
	if (ctx.cr0.eq) goto loc_82F84970;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82f84950
	if (ctx.cr6.lt) goto loc_82F84950;
loc_82F84970:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r11,r25
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r25.u32);
	// cmplwi cr6,r11,91
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 91, ctx.xer);
	// bne cr6,0x82f84984
	if (!ctx.cr6.eq) goto loc_82F84984;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82F84984:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x82f849c4
	if (!ctx.cr6.lt) goto loc_82F849C4;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
loc_82F8499C:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,93
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 93, ctx.xer);
	// beq cr6,0x82f849c4
	if (ctx.cr6.eq) goto loc_82F849C4;
	// cmplwi cr6,r9,44
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 44, ctx.xer);
	// bne cr6,0x82f849b4
	if (!ctx.cr6.eq) goto loc_82F849B4;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_82F849B4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82f8499c
	if (ctx.cr6.lt) goto loc_82F8499C;
loc_82F849C4:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82f6ed30
	ctx.lr = 0x82F849CC;
	sub_82F6ED30(ctx, base);
	// lbz r11,37(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 37);
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// stb r11,37(r24)
	PPC_STORE_U8(ctx.r24.u32 + 37, ctx.r11.u8);
	// bge cr6,0x82f84bdc
	if (!ctx.cr6.lt) goto loc_82F84BDC;
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
loc_82F849E8:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r11,r25
	ctx.r30.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lhzx r11,r11,r25
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r25.u32);
	// cmplwi cr6,r11,93
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 93, ctx.xer);
	// beq cr6,0x82f84bdc
	if (ctx.cr6.eq) goto loc_82F84BDC;
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x82f84a68
	if (!ctx.cr6.lt) goto loc_82F84A68;
loc_82F84A08:
	// lhz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// bl 0x82ca6b10
	ctx.lr = 0x82F84A10;
	sub_82CA6B10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82f84a38
	if (ctx.cr0.eq) goto loc_82F84A38;
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// mulli r11,r29,10
	ctx.r11.s64 = ctx.r29.s64 * 10;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r11,-48
	ctx.r29.s64 = ctx.r11.s64 + -48;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82f84a08
	if (ctx.cr6.lt) goto loc_82F84A08;
loc_82F84A38:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x82f84a68
	if (!ctx.cr6.lt) goto loc_82F84A68;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r11,r25
	ctx.r30.u64 = ctx.r11.u64 + ctx.r25.u64;
loc_82F84A48:
	// lhz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// bl 0x82ca6bd0
	ctx.lr = 0x82F84A50;
	sub_82CA6BD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82f84a68
	if (ctx.cr0.eq) goto loc_82F84A68;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82f84a48
	if (ctx.cr6.lt) goto loc_82F84A48;
loc_82F84A68:
	// lwz r11,16(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f84a88
	if (ctx.cr6.eq) goto loc_82F84A88;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82f84a88
	if (!ctx.cr6.lt) goto loc_82F84A88;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
loc_82F84A88:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// lhzx r11,r11,r25
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r25.u32);
	// cmplwi cr6,r11,44
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 44, ctx.xer);
	// bne cr6,0x82f84ad4
	if (!ctx.cr6.eq) goto loc_82F84AD4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x82f84bdc
	if (!ctx.cr6.lt) goto loc_82F84BDC;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r11,r25
	ctx.r30.u64 = ctx.r11.u64 + ctx.r25.u64;
loc_82F84AB4:
	// lhz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// bl 0x82ca6bd0
	ctx.lr = 0x82F84ABC;
	sub_82CA6BD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82f84ad4
	if (ctx.cr0.eq) goto loc_82F84AD4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82f84ab4
	if (ctx.cr6.lt) goto loc_82F84AB4;
loc_82F84AD4:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82f849e8
	if (ctx.cr6.lt) goto loc_82F849E8;
	// b 0x82f84bdc
	goto loc_82F84BDC;
loc_82F84AE0:
	// addi r3,r1,236
	ctx.r3.s64 = ctx.r1.s64 + 236;
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82f6de98
	ctx.lr = 0x82F84AF0;
	sub_82F6DE98(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f84bdc
	if (ctx.cr0.eq) goto loc_82F84BDC;
	// lwz r11,236(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82f84bdc
	if (ctx.cr6.lt) goto loc_82F84BDC;
	// lbz r10,37(r24)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r24.u32 + 37);
	// sth r11,28(r24)
	PPC_STORE_U16(ctx.r24.u32 + 28, ctx.r11.u16);
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// b 0x82f84bd8
	goto loc_82F84BD8;
loc_82F84B14:
	// addi r3,r1,244
	ctx.r3.s64 = ctx.r1.s64 + 244;
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82f6de98
	ctx.lr = 0x82F84B24;
	sub_82F6DE98(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f84bdc
	if (ctx.cr0.eq) goto loc_82F84BDC;
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82f84bdc
	if (ctx.cr6.lt) goto loc_82F84BDC;
	// lbz r10,37(r24)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r24.u32 + 37);
	// sth r11,26(r24)
	PPC_STORE_U16(ctx.r24.u32 + 26, ctx.r11.u16);
	// ori r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 16;
	// b 0x82f84bd8
	goto loc_82F84BD8;
loc_82F84B48:
	// addi r3,r1,252
	ctx.r3.s64 = ctx.r1.s64 + 252;
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82f6de98
	ctx.lr = 0x82F84B58;
	sub_82F6DE98(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f84bdc
	if (ctx.cr0.eq) goto loc_82F84BDC;
	// lbz r11,37(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 37);
	// lwz r10,252(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stb r11,37(r24)
	PPC_STORE_U8(ctx.r24.u32 + 37, ctx.r11.u8);
	// sth r10,24(r24)
	PPC_STORE_U16(ctx.r24.u32 + 24, ctx.r10.u16);
	// b 0x82f84bdc
	goto loc_82F84BDC;
loc_82F84B78:
	// addi r3,r1,260
	ctx.r3.s64 = ctx.r1.s64 + 260;
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82f6de98
	ctx.lr = 0x82F84B88;
	sub_82F6DE98(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f84bdc
	if (ctx.cr0.eq) goto loc_82F84BDC;
	// lbz r11,37(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 37);
	// lwz r10,260(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stb r11,37(r24)
	PPC_STORE_U8(ctx.r24.u32 + 37, ctx.r11.u8);
	// sth r10,22(r24)
	PPC_STORE_U16(ctx.r24.u32 + 22, ctx.r10.u16);
	// b 0x82f84bdc
	goto loc_82F84BDC;
loc_82F84BA8:
	// addi r3,r1,268
	ctx.r3.s64 = ctx.r1.s64 + 268;
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82f6de98
	ctx.lr = 0x82F84BB8;
	sub_82F6DE98(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f84bdc
	if (ctx.cr0.eq) goto loc_82F84BDC;
	// lwz r11,268(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82f84bdc
	if (ctx.cr6.lt) goto loc_82F84BDC;
	// lbz r10,37(r24)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r24.u32 + 37);
	// sth r11,20(r24)
	PPC_STORE_U16(ctx.r24.u32 + 20, ctx.r11.u16);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
loc_82F84BD8:
	// stb r10,37(r24)
	PPC_STORE_U8(ctx.r24.u32 + 37, ctx.r10.u8);
loc_82F84BDC:
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82f75380
	ctx.lr = 0x82F84BEC;
	sub_82F75380(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f848cc
	if (!ctx.cr0.eq) goto loc_82F848CC;
	// b 0x82f83cc8
	goto loc_82F83CC8;
loc_82F84BF8:
	// addi r4,r1,592
	ctx.r4.s64 = ctx.r1.s64 + 592;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82f7a7b0
	ctx.lr = 0x82F84C04;
	sub_82F7A7B0(ctx, base);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
loc_82F84C08:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82f7a8c0
	ctx.lr = 0x82F84C10;
	sub_82F7A8C0(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82f7a528
	ctx.lr = 0x82F84C18;
	sub_82F7A528(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82f04dd8
	ctx.lr = 0x82F84C20;
	sub_82F04DD8(ctx, base);
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x82f08be0
	ctx.lr = 0x82F84C28;
	sub_82F08BE0(ctx, base);
	// lwz r3,200(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// bl 0x82ef6f38
	ctx.lr = 0x82F84C30;
	sub_82EF6F38(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82f791f8
	ctx.lr = 0x82F84C3C;
	sub_82F791F8(ctx, base);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f84c4c
	if (ctx.cr6.eq) goto loc_82F84C4C;
	// bl 0x82ef6f38
	ctx.lr = 0x82F84C4C;
	sub_82EF6F38(ctx, base);
loc_82F84C4C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,960
	ctx.r1.s64 = ctx.r1.s64 + 960;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F84C60"))) PPC_WEAK_FUNC(sub_82F84C60);
PPC_FUNC_IMPL(__imp__sub_82F84C60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82F84C68;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82ef6fe0
	ctx.lr = 0x82F84C78;
	sub_82EF6FE0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,12436
	ctx.r11.s64 = ctx.r11.s64 + 12436;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// beq cr6,0x82f84ca8
	if (ctx.cr6.eq) goto loc_82F84CA8;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F84CA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F84CA8:
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// bl 0x82f97690
	ctx.lr = 0x82F84CBC;
	sub_82F97690(ctx, base);
	// sth r29,316(r31)
	PPC_STORE_U16(ctx.r31.u32 + 316, ctx.r29.u16);
	// stw r29,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r29.u32);
	// addi r30,r31,332
	ctx.r30.s64 = ctx.r31.s64 + 332;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f27280
	ctx.lr = 0x82F84CD0;
	sub_82F27280(ctx, base);
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F84CD8;
	sub_82EF6EF8(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x82f84d14
	if (ctx.cr0.eq) goto loc_82F84D14;
	// lis r11,22087
	ctx.r11.s64 = 1447493632;
	// lis r10,-24607
	ctx.r10.s64 = -1612644352;
	// ori r11,r11,7817
	ctx.r11.u64 = ctx.r11.u64 | 7817;
	// ori r10,r10,9034
	ctx.r10.u64 = ctx.r10.u64 | 9034;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r10.u32);
	// bl 0x82f817e0
	ctx.lr = 0x82F84D00;
	sub_82F817E0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r31,44(r28)
	PPC_STORE_U32(ctx.r28.u32 + 44, ctx.r31.u32);
	// addi r11,r11,13392
	ctx.r11.s64 = ctx.r11.s64 + 13392;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x82f84d18
	goto loc_82F84D18;
loc_82F84D14:
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_82F84D18:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f84d38
	if (ctx.cr6.eq) goto loc_82F84D38;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F84D38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F84D38:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// lbz r9,328(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 328);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r29,330(r31)
	PPC_STORE_U8(ctx.r31.u32 + 330, ctx.r29.u8);
	// rlwinm r9,r9,0,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFC0;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lfs f0,3084(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// sth r8,324(r31)
	PPC_STORE_U16(ctx.r31.u32 + 324, ctx.r8.u16);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stb r9,328(r31)
	PPC_STORE_U8(ctx.r31.u32 + 328, ctx.r9.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r29,329(r31)
	PPC_STORE_U8(ctx.r31.u32 + 329, ctx.r29.u8);
	// stfs f0,288(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 288, temp.u32);
	// stfs f0,292(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 292, temp.u32);
	// stfs f0,296(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 296, temp.u32);
	// stfs f0,300(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 300, temp.u32);
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// lfs f1,3080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82f6f790
	ctx.lr = 0x82F84D90;
	sub_82F6F790(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// li r10,64
	ctx.r10.s64 = 64;
	// li r11,57
	ctx.r11.s64 = 57;
	// li r8,128
	ctx.r8.s64 = 128;
	// li r7,255
	ctx.r7.s64 = 255;
	// li r6,450
	ctx.r6.s64 = 450;
	// li r5,80
	ctx.r5.s64 = 80;
	// lbz r4,329(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 329);
	// ori r4,r4,128
	ctx.r4.u64 = ctx.r4.u64 | 128;
	// stb r4,329(r31)
	PPC_STORE_U8(ctx.r31.u32 + 329, ctx.r4.u8);
	// stb r29,16(r30)
	PPC_STORE_U8(ctx.r30.u32 + 16, ctx.r29.u8);
	// stb r29,17(r30)
	PPC_STORE_U8(ctx.r30.u32 + 17, ctx.r29.u8);
	// stb r9,18(r30)
	PPC_STORE_U8(ctx.r30.u32 + 18, ctx.r9.u8);
	// stb r8,19(r30)
	PPC_STORE_U8(ctx.r30.u32 + 19, ctx.r8.u8);
	// stb r10,20(r30)
	PPC_STORE_U8(ctx.r30.u32 + 20, ctx.r10.u8);
	// stb r10,21(r30)
	PPC_STORE_U8(ctx.r30.u32 + 21, ctx.r10.u8);
	// stb r9,22(r30)
	PPC_STORE_U8(ctx.r30.u32 + 22, ctx.r9.u8);
	// stb r7,23(r30)
	PPC_STORE_U8(ctx.r30.u32 + 23, ctx.r7.u8);
	// sth r6,24(r30)
	PPC_STORE_U16(ctx.r30.u32 + 24, ctx.r6.u16);
	// sth r5,26(r30)
	PPC_STORE_U16(ctx.r30.u32 + 26, ctx.r5.u16);
	// sth r11,28(r30)
	PPC_STORE_U16(ctx.r30.u32 + 28, ctx.r11.u16);
	// sth r11,30(r30)
	PPC_STORE_U16(ctx.r30.u32 + 30, ctx.r11.u16);
	// stw r29,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82F84DF4"))) PPC_WEAK_FUNC(sub_82F84DF4);
PPC_FUNC_IMPL(__imp__sub_82F84DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F84DF8"))) PPC_WEAK_FUNC(sub_82F84DF8);
PPC_FUNC_IMPL(__imp__sub_82F84DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82F84E00;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// bl 0x82f7b4b8
	ctx.lr = 0x82F84E28;
	sub_82F7B4B8(ctx, base);
	// lbz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 40);
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r11,40(r30)
	PPC_STORE_U8(ctx.r30.u32 + 40, ctx.r11.u8);
	// bne cr6,0x82f84e5c
	if (!ctx.cr6.eq) goto loc_82F84E5C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82F84E40:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82f84e40
	if (!ctx.cr6.eq) goto loc_82F84E40;
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r29,r11,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82F84E5C:
	// lbz r11,329(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 329);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r7,r11,30,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82f827f8
	ctx.lr = 0x82F84E7C;
	sub_82F827F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,262
	ctx.r4.s64 = 262;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F84E94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82F84E9C"))) PPC_WEAK_FUNC(sub_82F84E9C);
PPC_FUNC_IMPL(__imp__sub_82F84E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F84EA0"))) PPC_WEAK_FUNC(sub_82F84EA0);
PPC_FUNC_IMPL(__imp__sub_82F84EA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82F84EA8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// bl 0x82f7b4b8
	ctx.lr = 0x82F84ED0;
	sub_82F7B4B8(ctx, base);
	// lbz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 40);
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r11,40(r30)
	PPC_STORE_U8(ctx.r30.u32 + 40, ctx.r11.u8);
	// bne cr6,0x82f84ef0
	if (!ctx.cr6.eq) goto loc_82F84EF0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f040d0
	ctx.lr = 0x82F84EEC;
	sub_82F040D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82F84EF0:
	// lbz r11,329(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 329);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r7,r11,30,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82f83a00
	ctx.lr = 0x82F84F10;
	sub_82F83A00(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,262
	ctx.r4.s64 = 262;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F84F28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82F84F30"))) PPC_WEAK_FUNC(sub_82F84F30);
PPC_FUNC_IMPL(__imp__sub_82F84F30) {
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
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// bne cr6,0x82f84f70
	if (!ctx.cr6.eq) goto loc_82F84F70;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82F84F54:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82f84f54
	if (!ctx.cr6.eq) goto loc_82F84F54;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82F84F70:
	// lbz r11,329(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 329);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r7,r11,30,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// bl 0x82f827f8
	ctx.lr = 0x82F84F84;
	sub_82F827F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F84F9C;
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

__attribute__((alias("__imp__sub_82F84FB0"))) PPC_WEAK_FUNC(sub_82F84FB0);
PPC_FUNC_IMPL(__imp__sub_82F84FB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bcc
	ctx.lr = 0x82F84FB8;
	sub_82CA2BCC(ctx, base);
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r23,16(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,16(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// bl 0x82f73b38
	ctx.lr = 0x82F84FD4;
	sub_82F73B38(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,24(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r30,28(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r22,r27
	ctx.r22.u64 = ctx.r27.u64;
	// beq cr6,0x82f8500c
	if (ctx.cr6.eq) goto loc_82F8500C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F85008;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82F8500C:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
	// lbz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// rlwinm r21,r9,26,31,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x1;
	// lfs f31,3800(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3800);
	ctx.f31.f64 = double(temp.f32);
	// lwz r26,36(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// lwz r25,40(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// beq cr6,0x82f85094
	if (ctx.cr6.eq) goto loc_82F85094;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82f06a10
	ctx.lr = 0x82F85044;
	sub_82F06A10(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f85094
	if (ctx.cr0.eq) goto loc_82F85094;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// bgt cr6,0x82f85094
	if (ctx.cr6.gt) goto loc_82F85094;
	// lis r12,-32252
	ctx.r12.s64 = -2113667072;
	// addi r12,r12,12664
	ctx.r12.s64 = ctx.r12.s64 + 12664;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32008
	ctx.r12.s64 = -2097676288;
	// addi r12,r12,20612
	ctx.r12.s64 = ctx.r12.s64 + 20612;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82F85084;
	case 1:
		goto loc_82F85094;
	case 2:
		goto loc_82F850C0;
	case 3:
		goto loc_82F850F4;
	case 4:
		goto loc_82F852E0;
	case 5:
		goto loc_82F85338;
	case 6:
		goto loc_82F85210;
	case 7:
		goto loc_82F85274;
	case 8:
		goto loc_82F8512C;
	case 9:
		goto loc_82F85154;
	case 10:
		goto loc_82F851B8;
	case 11:
		goto loc_82F851C4;
	case 12:
		goto loc_82F851A8;
	case 13:
		goto loc_82F851B0;
	case 14:
		goto loc_82F853A0;
	case 15:
		goto loc_82F85408;
	case 16:
		goto loc_82F8544C;
	case 17:
		goto loc_82F85524;
	case 18:
		goto loc_82F8556C;
	case 19:
		goto loc_82F85540;
	case 20:
		goto loc_82F854F8;
	default:
		__builtin_unreachable();
	}
loc_82F85084:
	// lbz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f85094
	if (ctx.cr0.eq) goto loc_82F85094;
	// li r21,1
	ctx.r21.s64 = 1;
loc_82F85094:
	// li r24,1
	ctx.r24.s64 = 1;
loc_82F85098:
	// clrlwi. r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f855f4
	if (!ctx.cr0.eq) goto loc_82F855F4;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82f85594
	if (ctx.cr6.eq) goto loc_82F85594;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f81230
	ctx.lr = 0x82F850B8;
	sub_82F81230(ctx, base);
	// stfs f31,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// b 0x82f855b4
	goto loc_82F855B4;
loc_82F850C0:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x82f850cc
	if (!ctx.cr6.eq) goto loc_82F850CC;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82F850CC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f850d8
	if (ctx.cr6.eq) goto loc_82F850D8;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
loc_82F850D8:
	// lbz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f85098
	if (!ctx.cr0.eq) goto loc_82F85098;
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, ctx.xer);
	// b 0x82f85120
	goto loc_82F85120;
loc_82F850EC:
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// b 0x82f85098
	goto loc_82F85098;
loc_82F850F4:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x82f85104
	if (!ctx.cr6.eq) goto loc_82F85104;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// b 0x82f85110
	goto loc_82F85110;
loc_82F85104:
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x82f85110
	if (!ctx.cr6.lt) goto loc_82F85110;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82F85110:
	// lbz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f85098
	if (!ctx.cr0.eq) goto loc_82F85098;
	// cmplw cr6,r25,r26
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r26.u32, ctx.xer);
loc_82F85120:
	// beq cr6,0x82f85098
	if (ctx.cr6.eq) goto loc_82F85098;
loc_82F85124:
	// bge cr6,0x82f850ec
	if (!ctx.cr6.lt) goto loc_82F850EC;
	// b 0x82f85564
	goto loc_82F85564;
loc_82F8512C:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82f7ddf8
	ctx.lr = 0x82F85138;
	sub_82F7DDF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82f85098
	if (ctx.cr6.eq) goto loc_82F85098;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
loc_82F85148:
	// bl 0x82f7de80
	ctx.lr = 0x82F8514C;
	sub_82F7DE80(ctx, base);
loc_82F8514C:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82f85098
	goto loc_82F85098;
loc_82F85154:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82f7ddf8
	ctx.lr = 0x82F85160;
	sub_82F7DDF8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x82f85098
	if (ctx.cr6.eq) goto loc_82F85098;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r27.u8);
	// bl 0x82f7df20
	ctx.lr = 0x82F85180;
	sub_82F7DF20(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82f85194
	if (ctx.cr0.eq) goto loc_82F85194;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
loc_82F85194:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82f7de80
	ctx.lr = 0x82F851A0;
	sub_82F7DE80(ctx, base);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// b 0x82f85098
	goto loc_82F85098;
loc_82F851A8:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// b 0x82f85098
	goto loc_82F85098;
loc_82F851B0:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// b 0x82f85098
	goto loc_82F85098;
loc_82F851B8:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,80(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// b 0x82f85148
	goto loc_82F85148;
loc_82F851C4:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82f7e748
	ctx.lr = 0x82F851CC;
	sub_82F7E748(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r27.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82f7df20
	ctx.lr = 0x82F851E8;
	sub_82F7DF20(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82f851fc
	if (ctx.cr0.eq) goto loc_82F851FC;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
loc_82F851FC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82f7de80
	ctx.lr = 0x82F85208;
	sub_82F7DE80(ctx, base);
	// add r30,r3,r29
	ctx.r30.u64 = ctx.r3.u64 + ctx.r29.u64;
	// b 0x82f85098
	goto loc_82F85098;
loc_82F85210:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f7f280
	ctx.lr = 0x82F85228;
	sub_82F7F280(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f85098
	if (ctx.cr0.eq) goto loc_82F85098;
	// lfs f0,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fsel f31,f0,f0,f13
	ctx.f31.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// bl 0x82f7e748
	ctx.lr = 0x82F85244;
	sub_82F7E748(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// subf r10,r10,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r10.s64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82f851a8
	if (ctx.cr6.lt) goto loc_82F851A8;
	// subf r4,r10,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r10.s64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_82F85268:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82f7d920
	ctx.lr = 0x82F85270;
	sub_82F7D920(ctx, base);
	// b 0x82f8514c
	goto loc_82F8514C;
loc_82F85274:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f7f280
	ctx.lr = 0x82F8528C;
	sub_82F7F280(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f85098
	if (ctx.cr0.eq) goto loc_82F85098;
	// lfs f0,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fsel f31,f0,f0,f13
	ctx.f31.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// bl 0x82f7e748
	ctx.lr = 0x82F852A8;
	sub_82F7E748(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r8,80(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// subf r10,r8,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r8.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// bl 0x82f7d648
	ctx.lr = 0x82F852CC;
	sub_82F7D648(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x82f851b0
	if (!ctx.cr6.lt) goto loc_82F851B0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// b 0x82f85268
	goto loc_82F85268;
loc_82F852E0:
	// lbz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f852f4
	if (!ctx.cr0.eq) goto loc_82F852F4;
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x82f85124
	if (!ctx.cr6.eq) goto loc_82F85124;
loc_82F852F4:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f7f280
	ctx.lr = 0x82F8530C;
	sub_82F7F280(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f85098
	if (ctx.cr0.eq) goto loc_82F85098;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f851a8
	if (ctx.cr6.eq) goto loc_82F851A8;
	// lfs f0,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// fsel f31,f0,f0,f13
	ctx.f31.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// b 0x82f85268
	goto loc_82F85268;
loc_82F85338:
	// lbz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f8534c
	if (!ctx.cr0.eq) goto loc_82F8534C;
	// cmplw cr6,r25,r26
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82f85124
	if (!ctx.cr6.eq) goto loc_82F85124;
loc_82F8534C:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f7f280
	ctx.lr = 0x82F85364;
	sub_82F7F280(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f85098
	if (ctx.cr0.eq) goto loc_82F85098;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// bl 0x82f7d648
	ctx.lr = 0x82F8537C;
	sub_82F7D648(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x82f851b0
	if (!ctx.cr6.lt) goto loc_82F851B0;
	// lfs f0,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fsel f31,f0,f0,f13
	ctx.f31.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// b 0x82f85268
	goto loc_82F85268;
loc_82F853A0:
	// lbz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f85098
	if (!ctx.cr0.eq) goto loc_82F85098;
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x82f853d0
	if (!ctx.cr6.eq) goto loc_82F853D0;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82f81f40
	ctx.lr = 0x82F853C8;
	sub_82F81F40(ctx, base);
	// subf r30,r3,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r3.s64;
	// b 0x82f854f0
	goto loc_82F854F0;
loc_82F853D0:
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
loc_82F853D8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, ctx.xer);
	// ble cr6,0x82f853f0
	if (!ctx.cr6.gt) goto loc_82F853F0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// b 0x82f853f8
	goto loc_82F853F8;
loc_82F853F0:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
loc_82F853F8:
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82f81b78
	ctx.lr = 0x82F85400;
	sub_82F81B78(ctx, base);
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, ctx.xer);
	// b 0x82f85124
	goto loc_82F85124;
loc_82F85408:
	// lbz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f85098
	if (!ctx.cr0.eq) goto loc_82F85098;
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x82f85440
	if (!ctx.cr6.eq) goto loc_82F85440;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x82f85098
	if (!ctx.cr6.lt) goto loc_82F85098;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r5,r30,1
	ctx.r5.s64 = ctx.r30.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82f81b78
	ctx.lr = 0x82F8543C;
	sub_82F81B78(ctx, base);
	// b 0x82f854f0
	goto loc_82F854F0;
loc_82F85440:
	// stw r26,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r26.u32);
	// stw r25,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r25.u32);
	// b 0x82f853d8
	goto loc_82F853D8;
loc_82F8544C:
	// lbz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82f85098
	if (!ctx.cr0.eq) goto loc_82F85098;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lbz r10,329(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 329);
	// rlwinm. r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f85098
	if (ctx.cr0.eq) goto loc_82F85098;
	// andi. r11,r11,191
	ctx.r11.u64 = ctx.r11.u64 & 191;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r11.u8);
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, ctx.xer);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lbz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// bne cr6,0x82f854c4
	if (!ctx.cr6.eq) goto loc_82F854C4;
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r7,1
	ctx.r7.s64 = 1;
	// sth r11,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r11.u16);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r8,36(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// bl 0x82f808b0
	ctx.lr = 0x82F854BC;
	sub_82F808B0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// b 0x82f854f0
	goto loc_82F854F0;
loc_82F854C4:
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// sth r11,136(r1)
	PPC_STORE_U16(ctx.r1.u32 + 136, ctx.r11.u16);
	// bl 0x82f81f40
	ctx.lr = 0x82F854DC;
	sub_82F81F40(ctx, base);
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, ctx.xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// blt cr6,0x82f854ec
	if (ctx.cr6.lt) goto loc_82F854EC;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82F854EC:
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
loc_82F854F0:
	// li r27,1
	ctx.r27.s64 = 1;
	// b 0x82f85098
	goto loc_82F85098;
loc_82F854F8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// bl 0x82f81230
	ctx.lr = 0x82F85510;
	sub_82F81230(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f7aac8
	ctx.lr = 0x82F85520;
	sub_82F7AAC8(ctx, base);
	// b 0x82f85094
	goto loc_82F85094;
loc_82F85524:
	// lbz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// rlwinm r6,r11,30,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f824d8
	ctx.lr = 0x82F8553C;
	sub_82F824D8(ctx, base);
	// b 0x82f85094
	goto loc_82F85094;
loc_82F85540:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f85098
	if (ctx.cr6.eq) goto loc_82F85098;
	// lbz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// rlwinm r6,r11,30,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f82600
	ctx.lr = 0x82F85564;
	sub_82F82600(ctx, base);
loc_82F85564:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// b 0x82f85098
	goto loc_82F85098;
loc_82F8556C:
	// lbz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// rlwinm r6,r11,30,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f82668
	ctx.lr = 0x82F85584;
	sub_82F82668(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82f85098
	if (ctx.cr6.eq) goto loc_82F85098;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82f854f0
	goto loc_82F854F0;
loc_82F85594:
	// lbz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f855b8
	if (!ctx.cr0.eq) goto loc_82F855B8;
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x82f855b8
	if (ctx.cr6.eq) goto loc_82F855B8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f81230
	ctx.lr = 0x82F855B4;
	sub_82F81230(ctx, base);
loc_82F855B4:
	// li r22,1
	ctx.r22.s64 = 1;
loc_82F855B8:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f855f4
	if (ctx.cr0.eq) goto loc_82F855F4;
	// clrlwi. r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f855d4
	if (!ctx.cr0.eq) goto loc_82F855D4;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82f7b1e8
	ctx.lr = 0x82F855D4;
	sub_82F7B1E8(ctx, base);
loc_82F855D4:
	// lwz r3,24(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82f855f4
	if (ctx.cr6.eq) goto loc_82F855F4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F855F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F855F4:
	// clrlwi. r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f85608
	if (ctx.cr0.eq) goto loc_82F85608;
	// lbz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stb r11,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r11.u8);
loc_82F85608:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x82ca2c1c
	// ERROR 82CA2C1C
	return;
}

__attribute__((alias("__imp__sub_82F85618"))) PPC_WEAK_FUNC(sub_82F85618);
PPC_FUNC_IMPL(__imp__sub_82F85618) {
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F8563C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// blt cr6,0x82f85650
	if (ctx.cr6.lt) goto loc_82F85650;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82f85654
	if (!ctx.cr6.gt) goto loc_82F85654;
loc_82F85650:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F85654:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r3,r31,-128
	ctx.r3.s64 = ctx.r31.s64 + -128;
	// bne 0x82f85664
	if (!ctx.cr0.eq) goto loc_82F85664;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F85664:
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

__attribute__((alias("__imp__sub_82F85678"))) PPC_WEAK_FUNC(sub_82F85678);
PPC_FUNC_IMPL(__imp__sub_82F85678) {
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F8569C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// blt cr6,0x82f856b0
	if (ctx.cr6.lt) goto loc_82F856B0;
	// cmpwi cr6,r3,28
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 28, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82f856b4
	if (!ctx.cr6.gt) goto loc_82F856B4;
loc_82F856B0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F856B4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r3,r31,-16
	ctx.r3.s64 = ctx.r31.s64 + -16;
	// bne 0x82f856c4
	if (!ctx.cr0.eq) goto loc_82F856C4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F856C4:
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

__attribute__((alias("__imp__sub_82F856D8"))) PPC_WEAK_FUNC(sub_82F856D8);
PPC_FUNC_IMPL(__imp__sub_82F856D8) {
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F856FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// addi r3,r31,-128
	ctx.r3.s64 = ctx.r31.s64 + -128;
	// beq cr6,0x82f8570c
	if (ctx.cr6.eq) goto loc_82F8570C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F8570C:
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

__attribute__((alias("__imp__sub_82F85720"))) PPC_WEAK_FUNC(sub_82F85720);
PPC_FUNC_IMPL(__imp__sub_82F85720) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f67e90
	ctx.lr = 0x82F85740;
	sub_82F67E90(ctx, base);
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

__attribute__((alias("__imp__sub_82F85758"))) PPC_WEAK_FUNC(sub_82F85758);
PPC_FUNC_IMPL(__imp__sub_82F85758) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F85764"))) PPC_WEAK_FUNC(sub_82F85764);
PPC_FUNC_IMPL(__imp__sub_82F85764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F85768"))) PPC_WEAK_FUNC(sub_82F85768);
PPC_FUNC_IMPL(__imp__sub_82F85768) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x82f858fc
	if (ctx.cr6.lt) goto loc_82F858FC;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,24(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82f6c2d0
	ctx.lr = 0x82F85798;
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82f6b390
	ctx.lr = 0x82F857AC;
	sub_82F6B390(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6c2d0
	ctx.lr = 0x82F857B8;
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82f6ae90
	ctx.lr = 0x82F857C4;
	sub_82F6AE90(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f858ac
	if (ctx.cr6.eq) goto loc_82F858AC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f67e90
	ctx.lr = 0x82F857E0;
	sub_82F67E90(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82f85830
	if (ctx.cr6.lt) goto loc_82F85830;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6c2d0
	ctx.lr = 0x82F857F8;
	sub_82F6C2D0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x82f85830
	if (!ctx.cr6.eq) goto loc_82F85830;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6c2d0
	ctx.lr = 0x82F85810;
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82f6ae90
	ctx.lr = 0x82F8581C;
	sub_82F6AE90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f68378
	ctx.lr = 0x82F85828;
	sub_82F68378(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82f67f08
	ctx.lr = 0x82F85830;
	sub_82F67F08(ctx, base);
loc_82F85830:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82f6afb8
	ctx.lr = 0x82F85840;
	sub_82F6AFB8(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,120
	ctx.r4.s64 = ctx.r11.s64 + 120;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F85870;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8587C;
	sub_82F6BAA0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// stb r10,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r10.u8);
	// lbz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f858a0
	if (ctx.cr6.lt) goto loc_82F858A0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82f6baa0
	ctx.lr = 0x82F858A0;
	sub_82F6BAA0(ctx, base);
loc_82F858A0:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f67f08
	ctx.lr = 0x82F858A8;
	sub_82F67F08(ctx, base);
	// b 0x82f858c8
	goto loc_82F858C8;
loc_82F858AC:
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6baa0
	ctx.lr = 0x82F858B8;
	sub_82F6BAA0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// stb r10,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r10.u8);
loc_82F858C8:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82f67f08
	ctx.lr = 0x82F858D0;
	sub_82F67F08(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f85918
	if (!ctx.cr6.eq) goto loc_82F85918;
	// bl 0x82f670f0
	ctx.lr = 0x82F858F8;
	sub_82F670F0(ctx, base);
	// b 0x82f85918
	goto loc_82F85918;
loc_82F858FC:
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6baa0
	ctx.lr = 0x82F85908;
	sub_82F6BAA0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// stb r10,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r10.u8);
loc_82F85918:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

__attribute__((alias("__imp__sub_82F85930"))) PPC_WEAK_FUNC(sub_82F85930);
PPC_FUNC_IMPL(__imp__sub_82F85930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82F85938;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r31,24(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// addi r30,r31,120
	ctx.r30.s64 = ctx.r31.s64 + 120;
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82f6c2d0
	ctx.lr = 0x82F85958;
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82f6b390
	ctx.lr = 0x82F8596C;
	sub_82F6B390(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F85988;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,4(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6baa0
	ctx.lr = 0x82F85998;
	sub_82F6BAA0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f859cc
	if (!ctx.cr6.eq) goto loc_82F859CC;
	// bl 0x82f670f0
	ctx.lr = 0x82F859CC;
	sub_82F670F0(ctx, base);
loc_82F859CC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82F859D4"))) PPC_WEAK_FUNC(sub_82F859D4);
PPC_FUNC_IMPL(__imp__sub_82F859D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F859D8"))) PPC_WEAK_FUNC(sub_82F859D8);
PPC_FUNC_IMPL(__imp__sub_82F859D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82F859E0;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x82f85b1c
	if (ctx.cr6.lt) goto loc_82F85B1C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82f6c2d0
	ctx.lr = 0x82F859FC;
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f6ae90
	ctx.lr = 0x82F85A08;
	sub_82F6AE90(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f85af4
	if (ctx.cr6.eq) goto loc_82F85AF4;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82f85a40
	if (ctx.cr6.lt) goto loc_82F85A40;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6c2d0
	ctx.lr = 0x82F85A34;
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6bbb0
	ctx.lr = 0x82F85A40;
	sub_82F6BBB0(ctx, base);
loc_82F85A40:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,24(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r27,r1,112
	ctx.r27.s64 = ctx.r1.s64 + 112;
	// addi r29,r30,120
	ctx.r29.s64 = ctx.r30.s64 + 120;
	// addi r26,r1,88
	ctx.r26.s64 = ctx.r1.s64 + 88;
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82f6c2d0
	ctx.lr = 0x82F85A64;
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82f6b390
	ctx.lr = 0x82F85A78;
	sub_82F6B390(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,72(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F85A98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6baa0
	ctx.lr = 0x82F85AA8;
	sub_82F6BAA0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f85adc
	if (!ctx.cr6.eq) goto loc_82F85ADC;
	// bl 0x82f670f0
	ctx.lr = 0x82F85ADC;
	sub_82F670F0(ctx, base);
loc_82F85ADC:
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f85b10
	if (ctx.cr6.lt) goto loc_82F85B10;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	ctx.lr = 0x82F85AF0;
	sub_82F6BAA0(ctx, base);
	// b 0x82f85b10
	goto loc_82F85B10;
loc_82F85AF4:
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6baa0
	ctx.lr = 0x82F85B00;
	sub_82F6BAA0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// stb r10,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r10.u8);
loc_82F85B10:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f67f08
	ctx.lr = 0x82F85B18;
	sub_82F67F08(ctx, base);
	// b 0x82f85b38
	goto loc_82F85B38;
loc_82F85B1C:
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6baa0
	ctx.lr = 0x82F85B28;
	sub_82F6BAA0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// stb r10,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r10.u8);
loc_82F85B38:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82F85B40"))) PPC_WEAK_FUNC(sub_82F85B40);
PPC_FUNC_IMPL(__imp__sub_82F85B40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82F85B48;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x82f85be8
	if (ctx.cr6.lt) goto loc_82F85BE8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,24(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r29,r30,120
	ctx.r29.s64 = ctx.r30.s64 + 120;
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82f6c2d0
	ctx.lr = 0x82F85B74;
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82f6b390
	ctx.lr = 0x82F85B88;
	sub_82F6B390(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,76(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F85BA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6baa0
	ctx.lr = 0x82F85BB0;
	sub_82F6BAA0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f85c04
	if (!ctx.cr6.eq) goto loc_82F85C04;
	// bl 0x82f670f0
	ctx.lr = 0x82F85BE4;
	sub_82F670F0(ctx, base);
	// b 0x82f85c04
	goto loc_82F85C04;
loc_82F85BE8:
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6baa0
	ctx.lr = 0x82F85BF4;
	sub_82F6BAA0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// stb r10,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r10.u8);
loc_82F85C04:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82F85C0C"))) PPC_WEAK_FUNC(sub_82F85C0C);
PPC_FUNC_IMPL(__imp__sub_82F85C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F85C10"))) PPC_WEAK_FUNC(sub_82F85C10);
PPC_FUNC_IMPL(__imp__sub_82F85C10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F85C18;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x82f85d14
	if (ctx.cr6.lt) goto loc_82F85D14;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,24(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82f6c2d0
	ctx.lr = 0x82F85C38;
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82f6b390
	ctx.lr = 0x82F85C4C;
	sub_82F6B390(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,120
	ctx.r4.s64 = ctx.r11.s64 + 120;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F85C70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f85cd0
	if (ctx.cr0.eq) goto loc_82F85CD0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,120
	ctx.r4.s64 = ctx.r11.s64 + 120;
	// stb r29,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r29.u8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F85CAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,97(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 97);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f85cbc
	if (ctx.cr0.eq) goto loc_82F85CBC;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82F85CBC:
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f85cd0
	if (ctx.cr6.lt) goto loc_82F85CD0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	ctx.lr = 0x82F85CD0;
	sub_82F6BAA0(ctx, base);
loc_82F85CD0:
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6baa0
	ctx.lr = 0x82F85CDC;
	sub_82F6BAA0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f85d30
	if (!ctx.cr6.eq) goto loc_82F85D30;
	// bl 0x82f670f0
	ctx.lr = 0x82F85D10;
	sub_82F670F0(ctx, base);
	// b 0x82f85d30
	goto loc_82F85D30;
loc_82F85D14:
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6baa0
	ctx.lr = 0x82F85D20;
	sub_82F6BAA0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// stb r10,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r10.u8);
loc_82F85D30:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F85D38"))) PPC_WEAK_FUNC(sub_82F85D38);
PPC_FUNC_IMPL(__imp__sub_82F85D38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F85D40;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x82f85df0
	if (ctx.cr6.lt) goto loc_82F85DF0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F85D68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// blt cr6,0x82f85d7c
	if (ctx.cr6.lt) goto loc_82F85D7C;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82f85d80
	if (!ctx.cr6.gt) goto loc_82F85D80;
loc_82F85D7C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F85D80:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f85df0
	if (!ctx.cr0.eq) goto loc_82F85DF0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r30,r11,-16
	ctx.r30.s64 = ctx.r11.s64 + -16;
	// bne cr6,0x82f85d9c
	if (!ctx.cr6.eq) goto loc_82F85D9C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82F85D9C:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r29,24(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6c2d0
	ctx.lr = 0x82F85DAC;
	sub_82F6C2D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82f6ae18
	ctx.lr = 0x82F85DB4;
	sub_82F6AE18(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f85df0
	if (ctx.cr0.eq) goto loc_82F85DF0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F85DD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6baa0
	ctx.lr = 0x82F85DE8;
	sub_82F6BAA0(ctx, base);
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
	// b 0x82f85e04
	goto loc_82F85E04;
loc_82F85DF0:
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6baa0
	ctx.lr = 0x82F85DFC;
	sub_82F6BAA0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r10.u8);
loc_82F85E04:
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F85E14"))) PPC_WEAK_FUNC(sub_82F85E14);
PPC_FUNC_IMPL(__imp__sub_82F85E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F85E18"))) PPC_WEAK_FUNC(sub_82F85E18);
PPC_FUNC_IMPL(__imp__sub_82F85E18) {
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
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F85E40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,21
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 21, ctx.xer);
	// bne cr6,0x82f85e58
	if (!ctx.cr6.eq) goto loc_82F85E58;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// addi r4,r11,284
	ctx.r4.s64 = ctx.r11.s64 + 284;
	// b 0x82f85ebc
	goto loc_82F85EBC;
loc_82F85E58:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F85E6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// blt cr6,0x82f85e80
	if (ctx.cr6.lt) goto loc_82F85E80;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82f85e84
	if (!ctx.cr6.gt) goto loc_82F85E84;
loc_82F85E80:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F85E84:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f85eb0
	if (ctx.cr0.eq) goto loc_82F85EB0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,-128
	ctx.r3.s64 = ctx.r11.s64 + -128;
	// bne cr6,0x82f85ea0
	if (!ctx.cr6.eq) goto loc_82F85EA0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F85EA0:
	// bl 0x82f63440
	ctx.lr = 0x82F85EA4;
	sub_82F63440(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// b 0x82f85ebc
	goto loc_82F85EBC;
loc_82F85EB0:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// addi r4,r11,292
	ctx.r4.s64 = ctx.r11.s64 + 292;
loc_82F85EBC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82f041a0
	ctx.lr = 0x82F85EC4;
	sub_82F041A0(ctx, base);
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

__attribute__((alias("__imp__sub_82F85ED8"))) PPC_WEAK_FUNC(sub_82F85ED8);
PPC_FUNC_IMPL(__imp__sub_82F85ED8) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82f6c3e8
	sub_82F6C3E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F85EE4"))) PPC_WEAK_FUNC(sub_82F85EE4);
PPC_FUNC_IMPL(__imp__sub_82F85EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F85EE8"))) PPC_WEAK_FUNC(sub_82F85EE8);
PPC_FUNC_IMPL(__imp__sub_82F85EE8) {
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
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// bl 0x82f6aa30
	ctx.lr = 0x82F85F24;
	sub_82F6AA30(ctx, base);
	// lbz r11,9(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82F85F48"))) PPC_WEAK_FUNC(sub_82F85F48);
PPC_FUNC_IMPL(__imp__sub_82F85F48) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r30,4(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f6aa30
	ctx.lr = 0x82F85F88;
	sub_82F6AA30(ctx, base);
	// lbz r11,1(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82F85FAC"))) PPC_WEAK_FUNC(sub_82F85FAC);
PPC_FUNC_IMPL(__imp__sub_82F85FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F85FB0"))) PPC_WEAK_FUNC(sub_82F85FB0);
PPC_FUNC_IMPL(__imp__sub_82F85FB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F85FB8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r29,4(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82f682f0
	ctx.lr = 0x82F85FF0;
	sub_82F682F0(ctx, base);
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x82f6aa30
	ctx.lr = 0x82F85FFC;
	sub_82F6AA30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F86008"))) PPC_WEAK_FUNC(sub_82F86008);
PPC_FUNC_IMPL(__imp__sub_82F86008) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,13632
	ctx.r11.s64 = ctx.r11.s64 + 13632;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F86020"))) PPC_WEAK_FUNC(sub_82F86020);
PPC_FUNC_IMPL(__imp__sub_82F86020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,13632
	ctx.r11.s64 = ctx.r11.s64 + 13632;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F8604C"))) PPC_WEAK_FUNC(sub_82F8604C);
PPC_FUNC_IMPL(__imp__sub_82F8604C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F86050"))) PPC_WEAK_FUNC(sub_82F86050);
PPC_FUNC_IMPL(__imp__sub_82F86050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F86058;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f860b4
	if (ctx.cr6.eq) goto loc_82F860B4;
loc_82F86070:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F86090;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f860c0
	if (!ctx.cr0.eq) goto loc_82F860C0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// bne cr6,0x82f860ac
	if (!ctx.cr6.eq) goto loc_82F860AC;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82F860AC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82f86070
	if (!ctx.cr6.eq) goto loc_82F86070;
loc_82F860B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F860B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82F860C0:
	// addi r3,r31,-16
	ctx.r3.s64 = ctx.r31.s64 + -16;
	// b 0x82f860b8
	goto loc_82F860B8;
}

__attribute__((alias("__imp__sub_82F860C8"))) PPC_WEAK_FUNC(sub_82F860C8);
PPC_FUNC_IMPL(__imp__sub_82F860C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82F860D0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addic. r31,r3,-16
	ctx.xer.ca = ctx.r3.u32 > 15;
	ctx.r31.s64 = ctx.r3.s64 + -16;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82f86130
	if (ctx.cr0.eq) goto loc_82F86130;
	// clrlwi r28,r6,24
	ctx.r28.u64 = ctx.r6.u32 & 0xFF;
loc_82F860E8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82f8611c
	if (ctx.cr6.eq) goto loc_82F8611C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F8610C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f86124
	if (ctx.cr0.eq) goto loc_82F86124;
loc_82F86114:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f86134
	goto loc_82F86134;
loc_82F8611C:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82f86114
	if (ctx.cr6.eq) goto loc_82F86114;
loc_82F86124:
	// lwz r31,20(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82f860e8
	if (!ctx.cr6.eq) goto loc_82F860E8;
loc_82F86130:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F86134:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82F8613C"))) PPC_WEAK_FUNC(sub_82F8613C);
PPC_FUNC_IMPL(__imp__sub_82F8613C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F86140"))) PPC_WEAK_FUNC(sub_82F86140);
PPC_FUNC_IMPL(__imp__sub_82F86140) {
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
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82f0b778
	ctx.lr = 0x82F86168;
	sub_82F0B778(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f6bbb0
	ctx.lr = 0x82F86178;
	sub_82F6BBB0(ctx, base);
	// lbz r11,1(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// stb r11,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82F86198"))) PPC_WEAK_FUNC(sub_82F86198);
PPC_FUNC_IMPL(__imp__sub_82F86198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F861A0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r4,8
	ctx.r29.s64 = ctx.r4.s64 + 8;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// bl 0x82f682f0
	ctx.lr = 0x82F861D4;
	sub_82F682F0(ctx, base);
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x82f6aa30
	ctx.lr = 0x82F861E0;
	sub_82F6AA30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F861EC"))) PPC_WEAK_FUNC(sub_82F861EC);
PPC_FUNC_IMPL(__imp__sub_82F861EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F861F0"))) PPC_WEAK_FUNC(sub_82F861F0);
PPC_FUNC_IMPL(__imp__sub_82F861F0) {
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
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82f0b778
	ctx.lr = 0x82F86218;
	sub_82F0B778(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f68378
	ctx.lr = 0x82F8622C;
	sub_82F68378(ctx, base);
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82f6bbb0
	ctx.lr = 0x82F86238;
	sub_82F6BBB0(ctx, base);
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

__attribute__((alias("__imp__sub_82F86250"))) PPC_WEAK_FUNC(sub_82F86250);
PPC_FUNC_IMPL(__imp__sub_82F86250) {
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
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82f0b778
	ctx.lr = 0x82F86274;
	sub_82F0B778(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// bl 0x82f6bbb0
	ctx.lr = 0x82F86280;
	sub_82F6BBB0(ctx, base);
	// lbz r11,9(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82F862A4"))) PPC_WEAK_FUNC(sub_82F862A4);
PPC_FUNC_IMPL(__imp__sub_82F862A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F862A8"))) PPC_WEAK_FUNC(sub_82F862A8);
PPC_FUNC_IMPL(__imp__sub_82F862A8) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,13632
	ctx.r11.s64 = ctx.r11.s64 + 13632;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f862f0
	if (ctx.cr6.eq) goto loc_82F862F0;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F862F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F862F0:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f86300
	if (ctx.cr0.eq) goto loc_82F86300;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824fe010
	ctx.lr = 0x82F86300;
	sub_824FE010(ctx, base);
loc_82F86300:
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

__attribute__((alias("__imp__sub_82F8631C"))) PPC_WEAK_FUNC(sub_82F8631C);
PPC_FUNC_IMPL(__imp__sub_82F8631C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F86320"))) PPC_WEAK_FUNC(sub_82F86320);
PPC_FUNC_IMPL(__imp__sub_82F86320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82F86328;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8633C;
	sub_82F6BAA0(ctx, base);
	// li r29,2
	ctx.r29.s64 = 2;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// stb r11,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r11.u8);
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bge cr6,0x82f8636c
	if (!ctx.cr6.lt) goto loc_82F8636C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r4,r11,13796
	ctx.r4.s64 = ctx.r11.s64 + 13796;
	// bl 0x82f150f8
	ctx.lr = 0x82F86368;
	sub_82F150F8(ctx, base);
	// b 0x82f864d4
	goto loc_82F864D4;
loc_82F8636C:
	// lwz r28,24(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,120(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 120);
	// bl 0x82f6c2d0
	ctx.lr = 0x82F86380;
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82f6b390
	ctx.lr = 0x82F86394;
	sub_82F6B390(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6c2d0
	ctx.lr = 0x82F863A0;
	sub_82F6C2D0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82f86400
	if (!ctx.cr6.eq) goto loc_82F86400;
	// bl 0x82f6c2d0
	ctx.lr = 0x82F863B8;
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f6ae90
	ctx.lr = 0x82F863C4;
	sub_82F6AE90(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,120
	ctx.r4.s64 = ctx.r11.s64 + 120;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f1cce8
	ctx.lr = 0x82F863DC;
	sub_82F1CCE8(ctx, base);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6baa0
	ctx.lr = 0x82F863EC;
	sub_82F6BAA0(ctx, base);
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f67f08
	ctx.lr = 0x82F863FC;
	sub_82F67F08(ctx, base);
	// b 0x82f864ac
	goto loc_82F864AC;
loc_82F86400:
	// bl 0x82f6c2d0
	ctx.lr = 0x82F86404;
	sub_82F6C2D0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82f86440
	if (!ctx.cr6.eq) goto loc_82F86440;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,120
	ctx.r4.s64 = ctx.r11.s64 + 120;
	// bl 0x82f1c5e8
	ctx.lr = 0x82F86424;
	sub_82F1C5E8(ctx, base);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6baa0
	ctx.lr = 0x82F86434;
	sub_82F6BAA0(ctx, base);
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// b 0x82f864ac
	goto loc_82F864AC;
loc_82F86440:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r30,24(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6c2d0
	ctx.lr = 0x82F86450;
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82f6b390
	ctx.lr = 0x82F86464;
	sub_82F6B390(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r11,13712
	ctx.r4.s64 = ctx.r11.s64 + 13712;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82f150f8
	ctx.lr = 0x82F86484;
	sub_82F150F8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f864ac
	if (!ctx.cr6.eq) goto loc_82F864AC;
	// bl 0x82f670f0
	ctx.lr = 0x82F864AC;
	sub_82F670F0(ctx, base);
loc_82F864AC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f864d4
	if (!ctx.cr6.eq) goto loc_82F864D4;
	// bl 0x82f670f0
	ctx.lr = 0x82F864D4;
	sub_82F670F0(ctx, base);
loc_82F864D4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82F864DC"))) PPC_WEAK_FUNC(sub_82F864DC);
PPC_FUNC_IMPL(__imp__sub_82F864DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F864E0"))) PPC_WEAK_FUNC(sub_82F864E0);
PPC_FUNC_IMPL(__imp__sub_82F864E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r5,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,-2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -2, ctx.xer);
	// beq cr6,0x82f86558
	if (ctx.cr6.eq) goto loc_82F86558;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82f86558
	if (!ctx.cr6.eq) goto loc_82F86558;
loc_82F86518:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,16(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// and r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 & ctx.r8.u64;
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82f8653c
	if (!ctx.cr6.eq) goto loc_82F8653C;
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r7,0(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82F8653C:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82f86558
	if (ctx.cr6.eq) goto loc_82F86558;
	// rlwinm r11,r3,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x82f86518
	goto loc_82F86518;
loc_82F86558:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F86560"))) PPC_WEAK_FUNC(sub_82F86560);
PPC_FUNC_IMPL(__imp__sub_82F86560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82F86568;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f8669c
	if (ctx.cr6.eq) goto loc_82F8669C;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// and r30,r9,r10
	ctx.r30.u64 = ctx.r9.u64 & ctx.r10.u64;
	// mulli r9,r30,48
	ctx.r9.s64 = ctx.r30.s64 * 48;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r31,r9,8
	ctx.r31.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r9,-2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -2, ctx.xer);
	// beq cr6,0x82f8669c
	if (ctx.cr6.eq) goto loc_82F8669C;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82f8669c
	if (!ctx.cr6.eq) goto loc_82F8669C;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// li r28,-1
	ctx.r28.s64 = -1;
loc_82F865C8:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82f865f4
	if (!ctx.cr6.eq) goto loc_82F865F4;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82f11068
	ctx.lr = 0x82F865EC;
	sub_82F11068(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f86618
	if (!ctx.cr0.eq) goto loc_82F86618;
loc_82F865F4:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x82f8669c
	if (ctx.cr6.eq) goto loc_82F8669C;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mulli r10,r30,48
	ctx.r10.s64 = ctx.r30.s64 * 48;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r31,r10,8
	ctx.r31.s64 = ctx.r10.s64 + 8;
	// b 0x82f865c8
	goto loc_82F865C8;
loc_82F86618:
	// li r27,-2
	ctx.r27.s64 = -2;
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x82f8666c
	if (!ctx.cr6.eq) goto loc_82F8666C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82f86680
	if (ctx.cr6.eq) goto loc_82F86680;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mulli r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 * 48;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r28,r29,8
	ctx.r28.s64 = ctx.r29.s64 + 8;
	// bl 0x82f06d18
	ctx.lr = 0x82F8664C;
	sub_82F06D18(ctx, base);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r4,r28,8
	ctx.r4.s64 = ctx.r28.s64 + 8;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f86198
	ctx.lr = 0x82F86664;
	sub_82F86198(ctx, base);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// b 0x82f86680
	goto loc_82F86680;
loc_82F8666C:
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mulli r11,r28,48
	ctx.r11.s64 = ctx.r28.s64 * 48;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
loc_82F86680:
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82f06d18
	ctx.lr = 0x82F86688;
	sub_82F06D18(ctx, base);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_82F8669C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82F866A4"))) PPC_WEAK_FUNC(sub_82F866A4);
PPC_FUNC_IMPL(__imp__sub_82F866A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F866A8"))) PPC_WEAK_FUNC(sub_82F866A8);
PPC_FUNC_IMPL(__imp__sub_82F866A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r5,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,-2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -2, ctx.xer);
	// beq cr6,0x82f8671c
	if (ctx.cr6.eq) goto loc_82F8671C;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82f8671c
	if (!ctx.cr6.eq) goto loc_82F8671C;
loc_82F866E0:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,16(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// and r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 & ctx.r8.u64;
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82f86700
	if (!ctx.cr6.eq) goto loc_82F86700;
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82F86700:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82f8671c
	if (ctx.cr6.eq) goto loc_82F8671C;
	// rlwinm r11,r3,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x82f866e0
	goto loc_82F866E0;
loc_82F8671C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F86724"))) PPC_WEAK_FUNC(sub_82F86724);
PPC_FUNC_IMPL(__imp__sub_82F86724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F86728"))) PPC_WEAK_FUNC(sub_82F86728);
PPC_FUNC_IMPL(__imp__sub_82F86728) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r5,48
	ctx.r11.s64 = ctx.r5.s64 * 48;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,-2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -2, ctx.xer);
	// beq cr6,0x82f8679c
	if (ctx.cr6.eq) goto loc_82F8679C;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82f8679c
	if (!ctx.cr6.eq) goto loc_82F8679C;
loc_82F86760:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,16(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// and r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 & ctx.r8.u64;
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82f86780
	if (!ctx.cr6.eq) goto loc_82F86780;
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82F86780:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82f8679c
	if (ctx.cr6.eq) goto loc_82F8679C;
	// mulli r11,r3,48
	ctx.r11.s64 = ctx.r3.s64 * 48;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x82f86760
	goto loc_82F86760;
loc_82F8679C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F867A4"))) PPC_WEAK_FUNC(sub_82F867A4);
PPC_FUNC_IMPL(__imp__sub_82F867A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F867A8"))) PPC_WEAK_FUNC(sub_82F867A8);
PPC_FUNC_IMPL(__imp__sub_82F867A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82F867B0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mulli r10,r30,48
	ctx.r10.s64 = ctx.r30.s64 * 48;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// addi r31,r10,8
	ctx.r31.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r10,-2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -2, ctx.xer);
	// beq cr6,0x82f8684c
	if (ctx.cr6.eq) goto loc_82F8684C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82f8684c
	if (!ctx.cr6.eq) goto loc_82F8684C;
loc_82F867F8:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82f86824
	if (!ctx.cr6.eq) goto loc_82F86824;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82f11068
	ctx.lr = 0x82F8681C;
	sub_82F11068(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f86844
	if (!ctx.cr0.eq) goto loc_82F86844;
loc_82F86824:
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// beq cr6,0x82f8684c
	if (ctx.cr6.eq) goto loc_82F8684C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mulli r10,r28,48
	ctx.r10.s64 = ctx.r28.s64 * 48;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r31,r10,8
	ctx.r31.s64 = ctx.r10.s64 + 8;
	// b 0x82f867f8
	goto loc_82F867F8;
loc_82F86844:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x82f86850
	goto loc_82F86850;
loc_82F8684C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82F86850:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82F86858"))) PPC_WEAK_FUNC(sub_82F86858);
PPC_FUNC_IMPL(__imp__sub_82F86858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82F86860;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82f86970
	if (ctx.cr6.eq) goto loc_82F86970;
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,16(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// and r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
	// rlwinm r9,r11,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r31,r9,8
	ctx.r31.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r9,-2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -2, ctx.xer);
	// beq cr6,0x82f86970
	if (ctx.cr6.eq) goto loc_82F86970;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82f86970
	if (!ctx.cr6.eq) goto loc_82F86970;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
loc_82F868B8:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,16(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// and r4,r4,r8
	ctx.r4.u64 = ctx.r4.u64 & ctx.r8.u64;
	// cmplw cr6,r4,r7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82f868d4
	if (!ctx.cr6.eq) goto loc_82F868D4;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82f868f4
	if (ctx.cr6.eq) goto loc_82F868F4;
loc_82F868D4:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82f86970
	if (ctx.cr6.eq) goto loc_82F86970;
	// rlwinm r9,r11,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r31,r9,8
	ctx.r31.s64 = ctx.r9.s64 + 8;
	// b 0x82f868b8
	goto loc_82F868B8;
loc_82F868F4:
	// li r27,-2
	ctx.r27.s64 = -2;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82f86944
	if (!ctx.cr6.eq) goto loc_82F86944;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82f86954
	if (ctx.cr6.eq) goto loc_82F86954;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r28,r29,8
	ctx.r28.s64 = ctx.r29.s64 + 8;
	// bl 0x82f04738
	ctx.lr = 0x82F86924;
	sub_82F04738(ctx, base);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r4,r28,8
	ctx.r4.s64 = ctx.r28.s64 + 8;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f85ee8
	ctx.lr = 0x82F8693C;
	sub_82F85EE8(ctx, base);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// b 0x82f86954
	goto loc_82F86954;
loc_82F86944:
	// rlwinm r11,r5,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
loc_82F86954:
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82f04738
	ctx.lr = 0x82F8695C;
	sub_82F04738(ctx, base);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_82F86970:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82F86978"))) PPC_WEAK_FUNC(sub_82F86978);
PPC_FUNC_IMPL(__imp__sub_82F86978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82F86980;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82f86a90
	if (ctx.cr6.eq) goto loc_82F86A90;
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,16(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// and r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
	// mulli r9,r11,48
	ctx.r9.s64 = ctx.r11.s64 * 48;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r31,r9,8
	ctx.r31.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r9,-2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -2, ctx.xer);
	// beq cr6,0x82f86a90
	if (ctx.cr6.eq) goto loc_82F86A90;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82f86a90
	if (!ctx.cr6.eq) goto loc_82F86A90;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
loc_82F869D8:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,16(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// and r4,r4,r8
	ctx.r4.u64 = ctx.r4.u64 & ctx.r8.u64;
	// cmplw cr6,r4,r7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82f869f4
	if (!ctx.cr6.eq) goto loc_82F869F4;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82f86a14
	if (ctx.cr6.eq) goto loc_82F86A14;
loc_82F869F4:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82f86a90
	if (ctx.cr6.eq) goto loc_82F86A90;
	// mulli r9,r11,48
	ctx.r9.s64 = ctx.r11.s64 * 48;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r31,r9,8
	ctx.r31.s64 = ctx.r9.s64 + 8;
	// b 0x82f869d8
	goto loc_82F869D8;
loc_82F86A14:
	// li r27,-2
	ctx.r27.s64 = -2;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82f86a64
	if (!ctx.cr6.eq) goto loc_82F86A64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82f86a74
	if (ctx.cr6.eq) goto loc_82F86A74;
	// mulli r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 * 48;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r28,r29,8
	ctx.r28.s64 = ctx.r29.s64 + 8;
	// bl 0x82f06d18
	ctx.lr = 0x82F86A44;
	sub_82F06D18(ctx, base);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r4,r28,8
	ctx.r4.s64 = ctx.r28.s64 + 8;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f86198
	ctx.lr = 0x82F86A5C;
	sub_82F86198(ctx, base);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// b 0x82f86a74
	goto loc_82F86A74;
loc_82F86A64:
	// mulli r11,r5,48
	ctx.r11.s64 = ctx.r5.s64 * 48;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
loc_82F86A74:
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82f06d18
	ctx.lr = 0x82F86A7C;
	sub_82F06D18(ctx, base);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_82F86A90:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82F86A98"))) PPC_WEAK_FUNC(sub_82F86A98);
PPC_FUNC_IMPL(__imp__sub_82F86A98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82F86AA0;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82f86ab4
	if (!ctx.cr6.eq) goto loc_82F86AB4;
	// b 0x82f86bd4
	goto loc_82F86BD4;
loc_82F86AB4:
	// cmplwi cr6,r4,8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 8, ctx.xer);
	// bge cr6,0x82f86ac4
	if (!ctx.cr6.lt) goto loc_82F86AC4;
	// li r31,8
	ctx.r31.s64 = 8;
	// b 0x82f86b0c
	goto loc_82F86B0C;
loc_82F86AC4:
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x821f3c80
	ctx.lr = 0x82F86AE0;
	sub_821F3C80(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f0,16264(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16264);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// slw r31,r9,r11
	ctx.r31.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
loc_82F86B0C:
	// li r27,0
	ctx.r27.s64 = 0;
	// rlwinm r11,r31,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F86B20;
	sub_82EF6EF8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r26,-2
	ctx.r26.s64 = -2;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// beq cr6,0x82f86b5c
	if (ctx.cr6.eq) goto loc_82F86B5C;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82F86B44:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stw r26,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r26.u32);
	// bne 0x82f86b44
	if (!ctx.cr0.eq) goto loc_82F86B44;
loc_82F86B5C:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f86bc4
	if (ctx.cr6.eq) goto loc_82F86BC4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
loc_82F86B74:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// beq cr6,0x82f86bb0
	if (ctx.cr6.eq) goto loc_82F86BB0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82f87170
	ctx.lr = 0x82F86BA4;
	sub_82F87170(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f04738
	ctx.lr = 0x82F86BAC;
	sub_82F04738(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_82F86BB0:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// bne 0x82f86b74
	if (!ctx.cr0.eq) goto loc_82F86B74;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x82ef6f38
	ctx.lr = 0x82F86BC4;
	sub_82EF6F38(ctx, base);
loc_82F86BC4:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_82F86BD4:
	// bl 0x82f087c0
	ctx.lr = 0x82F86BD8;
	sub_82F087C0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82F86BE0"))) PPC_WEAK_FUNC(sub_82F86BE0);
PPC_FUNC_IMPL(__imp__sub_82F86BE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82F86BE8;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// addi r4,r27,8
	ctx.r4.s64 = ctx.r27.s64 + 8;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// bl 0x82f16788
	ctx.lr = 0x82F86C08;
	sub_82F16788(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// bl 0x82ef1068
	ctx.lr = 0x82F86C28;
	sub_82EF1068(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f86d1c
	if (!ctx.cr0.eq) goto loc_82F86D1C;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
loc_82F86C40:
	// lwz r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r31,r11,5,0,26
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r28,25(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// clrlwi. r10,r28,31
	ctx.r10.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f86c68
	if (ctx.cr0.eq) goto loc_82F86C68;
	// rlwinm. r10,r24,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f86d00
	if (ctx.cr0.eq) goto loc_82F86D00;
loc_82F86C68:
	// lbz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// addi r5,r11,24
	ctx.r5.s64 = ctx.r11.s64 + 24;
	// cmplwi cr6,r10,9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 9, ctx.xer);
	// beq cr6,0x82f86c98
	if (ctx.cr6.eq) goto loc_82F86C98;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F86C94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82f86d00
	goto loc_82F86D00;
loc_82F86C98:
	// stb r26,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r26.u8);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,44(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82F86CC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F86CEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f86d00
	if (ctx.cr6.lt) goto loc_82F86D00;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	ctx.lr = 0x82F86D00;
	sub_82F6BAA0(ctx, base);
loc_82F86D00:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f149f0
	ctx.lr = 0x82F86D08;
	sub_82F149F0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82ef1068
	ctx.lr = 0x82F86D14;
	sub_82EF1068(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f86c40
	if (ctx.cr0.eq) goto loc_82F86C40;
loc_82F86D1C:
	// clrlwi. r11,r24,31
	ctx.r11.u64 = ctx.r24.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f86d50
	if (ctx.cr0.eq) goto loc_82F86D50;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f86d50
	if (ctx.cr6.eq) goto loc_82F86D50;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F86D50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F86D50:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82F86D58"))) PPC_WEAK_FUNC(sub_82F86D58);
PPC_FUNC_IMPL(__imp__sub_82F86D58) {
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
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f86dac
	if (ctx.cr6.eq) goto loc_82F86DAC;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// and r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 & ctx.r11.u64;
	// bl 0x82f866a8
	ctx.lr = 0x82F86D9C;
	sub_82F866A8(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82f86dac
	if (ctx.cr0.lt) goto loc_82F86DAC;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82f86db4
	goto loc_82F86DB4;
loc_82F86DAC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82F86DB4:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82F86DD4"))) PPC_WEAK_FUNC(sub_82F86DD4);
PPC_FUNC_IMPL(__imp__sub_82F86DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F86DD8"))) PPC_WEAK_FUNC(sub_82F86DD8);
PPC_FUNC_IMPL(__imp__sub_82F86DD8) {
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
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f86e20
	if (ctx.cr6.eq) goto loc_82F86E20;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// and r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 & ctx.r10.u64;
	// bl 0x82f86728
	ctx.lr = 0x82F86E08;
	sub_82F86728(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f86e20
	if (ctx.cr0.lt) goto loc_82F86E20;
	// mulli r11,r3,48
	ctx.r11.s64 = ctx.r3.s64 * 48;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// b 0x82f86e24
	goto loc_82F86E24;
loc_82F86E20:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F86E24:
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

__attribute__((alias("__imp__sub_82F86E38"))) PPC_WEAK_FUNC(sub_82F86E38);
PPC_FUNC_IMPL(__imp__sub_82F86E38) {
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
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f86e8c
	if (ctx.cr6.eq) goto loc_82F86E8C;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// and r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 & ctx.r11.u64;
	// bl 0x82f86728
	ctx.lr = 0x82F86E7C;
	sub_82F86728(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82f86e8c
	if (ctx.cr0.lt) goto loc_82F86E8C;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82f86e94
	goto loc_82F86E94;
loc_82F86E8C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82F86E94:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82F86EB4"))) PPC_WEAK_FUNC(sub_82F86EB4);
PPC_FUNC_IMPL(__imp__sub_82F86EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F86EB8"))) PPC_WEAK_FUNC(sub_82F86EB8);
PPC_FUNC_IMPL(__imp__sub_82F86EB8) {
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
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f86f10
	if (ctx.cr6.eq) goto loc_82F86F10;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// and r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 & ctx.r11.u64;
	// bl 0x82f16fd8
	ctx.lr = 0x82F86F00;
	sub_82F16FD8(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82f86f10
	if (ctx.cr0.lt) goto loc_82F86F10;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82f86f18
	goto loc_82F86F18;
loc_82F86F10:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82F86F18:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82F86F38"))) PPC_WEAK_FUNC(sub_82F86F38);
PPC_FUNC_IMPL(__imp__sub_82F86F38) {
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f86f8c
	if (ctx.cr6.eq) goto loc_82F86F8C;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// and r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 & ctx.r11.u64;
	// bl 0x82f867a8
	ctx.lr = 0x82F86F70;
	sub_82F867A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f86f8c
	if (ctx.cr0.lt) goto loc_82F86F8C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r3,48
	ctx.r11.s64 = ctx.r3.s64 * 48;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// b 0x82f86f90
	goto loc_82F86F90;
loc_82F86F8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F86F90:
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

__attribute__((alias("__imp__sub_82F86FA4"))) PPC_WEAK_FUNC(sub_82F86FA4);
PPC_FUNC_IMPL(__imp__sub_82F86FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F86FA8"))) PPC_WEAK_FUNC(sub_82F86FA8);
PPC_FUNC_IMPL(__imp__sub_82F86FA8) {
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
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f87000
	if (ctx.cr6.eq) goto loc_82F87000;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// and r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 & ctx.r11.u64;
	// bl 0x82f867a8
	ctx.lr = 0x82F86FF0;
	sub_82F867A8(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82f87000
	if (ctx.cr0.lt) goto loc_82F87000;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82f87008
	goto loc_82F87008;
loc_82F87000:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82F87008:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82F87028"))) PPC_WEAK_FUNC(sub_82F87028);
PPC_FUNC_IMPL(__imp__sub_82F87028) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82F87030;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82f87044
	if (!ctx.cr6.eq) goto loc_82F87044;
	// b 0x82f87164
	goto loc_82F87164;
loc_82F87044:
	// cmplwi cr6,r4,8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 8, ctx.xer);
	// bge cr6,0x82f87054
	if (!ctx.cr6.lt) goto loc_82F87054;
	// li r31,8
	ctx.r31.s64 = 8;
	// b 0x82f8709c
	goto loc_82F8709C;
loc_82F87054:
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x821f3c80
	ctx.lr = 0x82F87070;
	sub_821F3C80(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f0,16264(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16264);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// slw r31,r9,r11
	ctx.r31.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
loc_82F8709C:
	// li r27,0
	ctx.r27.s64 = 0;
	// mulli r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 * 48;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F870B0;
	sub_82EF6EF8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r26,-2
	ctx.r26.s64 = -2;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// beq cr6,0x82f870ec
	if (ctx.cr6.eq) goto loc_82F870EC;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82F870D4:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// stw r26,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r26.u32);
	// bne 0x82f870d4
	if (!ctx.cr0.eq) goto loc_82F870D4;
loc_82F870EC:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f87154
	if (ctx.cr6.eq) goto loc_82F87154;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
loc_82F87104:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// beq cr6,0x82f87140
	if (ctx.cr6.eq) goto loc_82F87140;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82f87598
	ctx.lr = 0x82F87134;
	sub_82F87598(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f06d18
	ctx.lr = 0x82F8713C;
	sub_82F06D18(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_82F87140:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// bne 0x82f87104
	if (!ctx.cr0.eq) goto loc_82F87104;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x82ef6f38
	ctx.lr = 0x82F87154;
	sub_82EF6F38(ctx, base);
loc_82F87154:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_82F87164:
	// bl 0x82f095b8
	ctx.lr = 0x82F87168;
	sub_82F095B8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82F87170"))) PPC_WEAK_FUNC(sub_82F87170);
PPC_FUNC_IMPL(__imp__sub_82F87170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82F87178;
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f8719c
	if (!ctx.cr6.eq) goto loc_82F8719C;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x82f871c4
	goto loc_82F871C4;
loc_82F8719C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mulli r9,r9,5
	ctx.r9.s64 = ctx.r9.s64 * 5;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82f871cc
	if (!ctx.cr6.gt) goto loc_82F871CC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_82F871C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f86a98
	ctx.lr = 0x82F871CC;
	sub_82F86A98(ctx, base);
loc_82F871CC:
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// and r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 & ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r10,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r28,r9,8
	ctx.r28.s64 = ctx.r9.s64 + 8;
	// cmpwi cr6,r6,-2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -2, ctx.xer);
	// bne cr6,0x82f87218
	if (!ctx.cr6.eq) goto loc_82F87218;
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r3,r28,8
	ctx.r3.s64 = ctx.r28.s64 + 8;
	// bl 0x82f85ee8
	ctx.lr = 0x82F87214;
	sub_82F85EE8(ctx, base);
	// b 0x82f872d8
	goto loc_82F872D8;
loc_82F87218:
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
loc_82F87220:
	// addi r9,r29,1
	ctx.r9.s64 = ctx.r29.s64 + 1;
	// and r29,r9,r8
	ctx.r29.u64 = ctx.r9.u64 & ctx.r8.u64;
	// rlwinm r9,r29,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r9,-2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -2, ctx.xer);
	// bne cr6,0x82f87220
	if (!ctx.cr6.eq) goto loc_82F87220;
	// rlwinm r9,r29,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r5,8(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r30,r28,8
	ctx.r30.s64 = ctx.r28.s64 + 8;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r7,r9,8
	ctx.r7.s64 = ctx.r9.s64 + 8;
	// lwz r9,16(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f87290
	if (!ctx.cr6.eq) goto loc_82F87290;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82f87278
	if (ctx.cr6.eq) goto loc_82F87278;
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r7,8
	ctx.r3.s64 = ctx.r7.s64 + 8;
	// bl 0x82f85ee8
	ctx.lr = 0x82F87278;
	sub_82F85EE8(ctx, base);
loc_82F87278:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f86250
	ctx.lr = 0x82F87284;
	sub_82F86250(ctx, base);
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// b 0x82f872d8
	goto loc_82F872D8;
loc_82F8728C:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82F87290:
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r31,r9,8
	ctx.r31.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82f8728c
	if (!ctx.cr6.eq) goto loc_82F8728C;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82f872c0
	if (ctx.cr6.eq) goto loc_82F872C0;
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r7,8
	ctx.r3.s64 = ctx.r7.s64 + 8;
	// bl 0x82f85ee8
	ctx.lr = 0x82F872C0;
	sub_82F85EE8(ctx, base);
loc_82F872C0:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f86250
	ctx.lr = 0x82F872D0;
	sub_82F86250(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82F872D8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82F872E0"))) PPC_WEAK_FUNC(sub_82F872E0);
PPC_FUNC_IMPL(__imp__sub_82F872E0) {
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
	// bl 0x82f18a30
	ctx.lr = 0x82F872FC;
	sub_82F18A30(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82f87328
	if (ctx.cr0.eq) goto loc_82F87328;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f87320
	if (ctx.cr6.eq) goto loc_82F87320;
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6bbb0
	ctx.lr = 0x82F87318;
	sub_82F6BBB0(ctx, base);
	// lbz r11,9(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9);
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
loc_82F87320:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f8732c
	goto loc_82F8732C;
loc_82F87328:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F8732C:
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

__attribute__((alias("__imp__sub_82F87344"))) PPC_WEAK_FUNC(sub_82F87344);
PPC_FUNC_IMPL(__imp__sub_82F87344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F87348"))) PPC_WEAK_FUNC(sub_82F87348);
PPC_FUNC_IMPL(__imp__sub_82F87348) {
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
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8736c
	if (ctx.cr0.eq) goto loc_82F8736C;
	// bl 0x82f86978
	ctx.lr = 0x82F87368;
	sub_82F86978(ctx, base);
	// b 0x82f87390
	goto loc_82F87390;
loc_82F8736C:
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f87384
	if (!ctx.cr6.eq) goto loc_82F87384;
	// bl 0x82f67818
	ctx.lr = 0x82F87384;
	sub_82F67818(ctx, base);
loc_82F87384:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f86560
	ctx.lr = 0x82F87390;
	sub_82F86560(ctx, base);
loc_82F87390:
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

__attribute__((alias("__imp__sub_82F873A4"))) PPC_WEAK_FUNC(sub_82F873A4);
PPC_FUNC_IMPL(__imp__sub_82F873A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F873A8"))) PPC_WEAK_FUNC(sub_82F873A8);
PPC_FUNC_IMPL(__imp__sub_82F873A8) {
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
	// bl 0x82f18e80
	ctx.lr = 0x82F873C4;
	sub_82F18E80(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82f873f0
	if (ctx.cr0.eq) goto loc_82F873F0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f873e8
	if (ctx.cr6.eq) goto loc_82F873E8;
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6bbb0
	ctx.lr = 0x82F873E0;
	sub_82F6BBB0(ctx, base);
	// lbz r11,9(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9);
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
loc_82F873E8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f873f4
	goto loc_82F873F4;
loc_82F873F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F873F4:
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

__attribute__((alias("__imp__sub_82F8740C"))) PPC_WEAK_FUNC(sub_82F8740C);
PPC_FUNC_IMPL(__imp__sub_82F8740C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F87410"))) PPC_WEAK_FUNC(sub_82F87410);
PPC_FUNC_IMPL(__imp__sub_82F87410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82F87418;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f8743c
	if (!ctx.cr6.eq) goto loc_82F8743C;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x82f87464
	goto loc_82F87464;
loc_82F8743C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mulli r9,r9,5
	ctx.r9.s64 = ctx.r9.s64 * 5;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82f8746c
	if (!ctx.cr6.gt) goto loc_82F8746C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_82F87464:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f86a98
	ctx.lr = 0x82F8746C;
	sub_82F86A98(ctx, base);
loc_82F8746C:
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// and r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 & ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r10,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r28,r9,8
	ctx.r28.s64 = ctx.r9.s64 + 8;
	// cmpwi cr6,r6,-2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -2, ctx.xer);
	// bne cr6,0x82f874cc
	if (!ctx.cr6.eq) goto loc_82F874CC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f85f48
	ctx.lr = 0x82F874AC;
	sub_82F85F48(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r3,r28,8
	ctx.r3.s64 = ctx.r28.s64 + 8;
	// bl 0x82f85ee8
	ctx.lr = 0x82F874C0;
	sub_82F85EE8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f04738
	ctx.lr = 0x82F874C8;
	sub_82F04738(ctx, base);
	// b 0x82f8758c
	goto loc_82F8758C;
loc_82F874CC:
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
loc_82F874D4:
	// addi r9,r29,1
	ctx.r9.s64 = ctx.r29.s64 + 1;
	// and r29,r9,r8
	ctx.r29.u64 = ctx.r9.u64 & ctx.r8.u64;
	// rlwinm r9,r29,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r9,-2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -2, ctx.xer);
	// bne cr6,0x82f874d4
	if (!ctx.cr6.eq) goto loc_82F874D4;
	// rlwinm r9,r29,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r5,8(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r30,r28,8
	ctx.r30.s64 = ctx.r28.s64 + 8;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r7,r9,8
	ctx.r7.s64 = ctx.r9.s64 + 8;
	// lwz r9,16(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f87544
	if (!ctx.cr6.eq) goto loc_82F87544;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82f8752c
	if (ctx.cr6.eq) goto loc_82F8752C;
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r7,8
	ctx.r3.s64 = ctx.r7.s64 + 8;
	// bl 0x82f85ee8
	ctx.lr = 0x82F8752C;
	sub_82F85EE8(ctx, base);
loc_82F8752C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f86140
	ctx.lr = 0x82F87538;
	sub_82F86140(ctx, base);
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// b 0x82f8758c
	goto loc_82F8758C;
loc_82F87540:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82F87544:
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r31,r9,8
	ctx.r31.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82f87540
	if (!ctx.cr6.eq) goto loc_82F87540;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82f87574
	if (ctx.cr6.eq) goto loc_82F87574;
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r7,8
	ctx.r3.s64 = ctx.r7.s64 + 8;
	// bl 0x82f85ee8
	ctx.lr = 0x82F87574;
	sub_82F85EE8(ctx, base);
loc_82F87574:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f86140
	ctx.lr = 0x82F87584;
	sub_82F86140(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82F8758C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82F87594"))) PPC_WEAK_FUNC(sub_82F87594);
PPC_FUNC_IMPL(__imp__sub_82F87594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F87598"))) PPC_WEAK_FUNC(sub_82F87598);
PPC_FUNC_IMPL(__imp__sub_82F87598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82F875A0;
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f875c4
	if (!ctx.cr6.eq) goto loc_82F875C4;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x82f875ec
	goto loc_82F875EC;
loc_82F875C4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mulli r9,r9,5
	ctx.r9.s64 = ctx.r9.s64 * 5;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82f875f4
	if (!ctx.cr6.gt) goto loc_82F875F4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_82F875EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f87028
	ctx.lr = 0x82F875F4;
	sub_82F87028(ctx, base);
loc_82F875F4:
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// and r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 & ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulli r9,r10,48
	ctx.r9.s64 = ctx.r10.s64 * 48;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r28,r9,8
	ctx.r28.s64 = ctx.r9.s64 + 8;
	// cmpwi cr6,r6,-2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -2, ctx.xer);
	// bne cr6,0x82f87640
	if (!ctx.cr6.eq) goto loc_82F87640;
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r3,r28,8
	ctx.r3.s64 = ctx.r28.s64 + 8;
	// bl 0x82f86198
	ctx.lr = 0x82F8763C;
	sub_82F86198(ctx, base);
	// b 0x82f87740
	goto loc_82F87740;
loc_82F87640:
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
loc_82F87648:
	// addi r9,r29,1
	ctx.r9.s64 = ctx.r29.s64 + 1;
	// and r29,r9,r8
	ctx.r29.u64 = ctx.r9.u64 & ctx.r8.u64;
	// mulli r9,r29,48
	ctx.r9.s64 = ctx.r29.s64 * 48;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r9,-2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -2, ctx.xer);
	// bne cr6,0x82f87648
	if (!ctx.cr6.eq) goto loc_82F87648;
	// lwz r7,8(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mulli r9,r29,48
	ctx.r9.s64 = ctx.r29.s64 * 48;
	// lwz r5,16(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r31,r28,8
	ctx.r31.s64 = ctx.r28.s64 + 8;
	// addi r7,r9,8
	ctx.r7.s64 = ctx.r9.s64 + 8;
	// and r9,r5,r8
	ctx.r9.u64 = ctx.r5.u64 & ctx.r8.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f876d8
	if (!ctx.cr6.eq) goto loc_82F876D8;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82f876a0
	if (ctx.cr6.eq) goto loc_82F876A0;
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r7,8
	ctx.r3.s64 = ctx.r7.s64 + 8;
	// bl 0x82f86198
	ctx.lr = 0x82F876A0;
	sub_82F86198(ctx, base);
loc_82F876A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82f0b778
	ctx.lr = 0x82F876AC;
	sub_82F0B778(ctx, base);
	// addi r30,r27,8
	ctx.r30.s64 = ctx.r27.s64 + 8;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f68378
	ctx.lr = 0x82F876C0;
	sub_82F68378(ctx, base);
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82f6bbb0
	ctx.lr = 0x82F876CC;
	sub_82F6BBB0(ctx, base);
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// b 0x82f87740
	goto loc_82F87740;
loc_82F876D4:
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82F876D8:
	// mulli r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 * 48;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r30,r9,8
	ctx.r30.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82f876d4
	if (!ctx.cr6.eq) goto loc_82F876D4;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82f87708
	if (ctx.cr6.eq) goto loc_82F87708;
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r7,8
	ctx.r3.s64 = ctx.r7.s64 + 8;
	// bl 0x82f86198
	ctx.lr = 0x82F87708;
	sub_82F86198(ctx, base);
loc_82F87708:
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82f0b778
	ctx.lr = 0x82F87718;
	sub_82F0B778(ctx, base);
	// addi r30,r27,8
	ctx.r30.s64 = ctx.r27.s64 + 8;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f68378
	ctx.lr = 0x82F8772C;
	sub_82F68378(ctx, base);
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82f6bbb0
	ctx.lr = 0x82F87738;
	sub_82F6BBB0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82F87740:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82F87748"))) PPC_WEAK_FUNC(sub_82F87748);
PPC_FUNC_IMPL(__imp__sub_82F87748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82F87750;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// addi r4,r28,120
	ctx.r4.s64 = ctx.r28.s64 + 120;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F87778;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// clrlwi. r25,r26,24
	ctx.r25.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq 0x82f87808
	if (ctx.cr0.eq) goto loc_82F87808;
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x82f87808
	if (!ctx.cr6.eq) goto loc_82F87808;
	// lwz r11,-16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -16);
	// addi r3,r29,-16
	ctx.r3.s64 = ctx.r29.s64 + -16;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F877A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82f877c8
	if (ctx.cr0.eq) goto loc_82F877C8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F877C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r5,r31,128
	ctx.r5.s64 = ctx.r31.s64 + 128;
	// b 0x82f877d8
	goto loc_82F877D8;
loc_82F877C8:
	// addic. r11,r29,-16
	ctx.xer.ca = ctx.r29.u32 > 15;
	ctx.r11.s64 = ctx.r29.s64 + -16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bne 0x82f877d8
	if (!ctx.cr0.eq) goto loc_82F877D8;
	// li r5,0
	ctx.r5.s64 = 0;
loc_82F877D8:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82f6c1d0
	ctx.lr = 0x82F877E8;
	sub_82F6C1D0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f87808
	if (ctx.cr6.eq) goto loc_82F87808;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F87808;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F87808:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82f87914
	if (!ctx.cr6.eq) goto loc_82F87914;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r25,r29,12
	ctx.r25.s64 = ctx.r29.s64 + 12;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f87914
	if (ctx.cr6.eq) goto loc_82F87914;
	// addi r31,r28,8
	ctx.r31.s64 = ctx.r28.s64 + 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f18d30
	ctx.lr = 0x82F87830;
	sub_82F18D30(ctx, base);
	// lwz r11,-16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -16);
	// addi r3,r29,-16
	ctx.r3.s64 = ctx.r29.s64 + -16;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F87844;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82f87868
	if (ctx.cr0.eq) goto loc_82F87868;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F87860;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r30,128
	ctx.r29.s64 = ctx.r30.s64 + 128;
	// b 0x82f87874
	goto loc_82F87874;
loc_82F87868:
	// addic. r11,r29,-16
	ctx.xer.ca = ctx.r29.u32 > 15;
	ctx.r11.s64 = ctx.r29.s64 + -16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f87874
	if (!ctx.cr0.eq) goto loc_82F87874;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82F87874:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r27,r11,-3936
	ctx.r27.s64 = ctx.r11.s64 + -3936;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// srawi r10,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r29,r11,-32
	ctx.r29.s64 = ctx.r11.s64 + -32;
	// bl 0x82f67e90
	ctx.lr = 0x82F878B8;
	sub_82F67E90(ctx, base);
	// li r26,1
	ctx.r26.s64 = 1;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// bl 0x82f680d8
	ctx.lr = 0x82F878D4;
	sub_82F680D8(ctx, base);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82f67f08
	ctx.lr = 0x82F878E0;
	sub_82F67F08(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-5240
	ctx.r11.s64 = ctx.r11.s64 + -5240;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82f09c90
	ctx.lr = 0x82F878F4;
	sub_82F09C90(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f87914
	if (ctx.cr6.eq) goto loc_82F87914;
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
	ctx.lr = 0x82F87914;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F87914:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82F87920"))) PPC_WEAK_FUNC(sub_82F87920);
PPC_FUNC_IMPL(__imp__sub_82F87920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82F87928;
	sub_82CA2BD4(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// addi r31,r23,-16
	ctx.r31.s64 = ctx.r23.s64 + -16;
	// lbz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 4);
	// subfic r11,r11,6
	ctx.xer.ca = ctx.r11.u32 <= 6;
	ctx.r11.s64 = 6 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f87a70
	if (ctx.cr0.eq) goto loc_82F87A70;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f879c0
	if (ctx.cr6.eq) goto loc_82F879C0;
	// lwz r30,0(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r27,264(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
loc_82F8796C:
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82f879cc
	if (ctx.cr6.eq) goto loc_82F879CC;
	// lwz r11,280(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82f879f4
	if (ctx.cr6.eq) goto loc_82F879F4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f86d58
	ctx.lr = 0x82F87990;
	sub_82F86D58(ctx, base);
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// bl 0x82ef1068
	ctx.lr = 0x82F879AC;
	sub_82EF1068(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f87a10
	if (ctx.cr0.eq) goto loc_82F87A10;
	// lwz r31,20(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82f8796c
	if (!ctx.cr6.eq) goto loc_82F8796C;
loc_82F879C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F879C4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
loc_82F879CC:
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82f879e4
	if (ctx.cr6.eq) goto loc_82F879E4;
	// bl 0x82f6c328
	ctx.lr = 0x82F879E0;
	sub_82F6C328(ctx, base);
	// b 0x82f879ec
	goto loc_82F879EC;
loc_82F879E4:
	// bl 0x82f6baa0
	ctx.lr = 0x82F879E8;
	sub_82F6BAA0(ctx, base);
	// stb r26,0(r24)
	PPC_STORE_U8(ctx.r24.u32 + 0, ctx.r26.u8);
loc_82F879EC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f879c4
	goto loc_82F879C4;
loc_82F879F4:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f879e4
	if (ctx.cr6.eq) goto loc_82F879E4;
	// bl 0x82f6bea0
	ctx.lr = 0x82F87A0C;
	sub_82F6BEA0(ctx, base);
	// b 0x82f879ec
	goto loc_82F879EC;
loc_82F87A10:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82F87A18:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,24
	ctx.r4.s64 = ctx.r11.s64 + 24;
	// lbz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bne cr6,0x82f87a64
	if (!ctx.cr6.eq) goto loc_82F87A64;
	// addi r11,r23,-16
	ctx.r11.s64 = ctx.r23.s64 + -16;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82f87a64
	if (ctx.cr6.eq) goto loc_82F87A64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F87A60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82f879c4
	goto loc_82F879C4;
loc_82F87A64:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82f6bbb0
	ctx.lr = 0x82F87A6C;
	sub_82F6BBB0(ctx, base);
	// b 0x82f879ec
	goto loc_82F879EC;
loc_82F87A70:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f87a84
	if (!ctx.cr6.eq) goto loc_82F87A84;
	// bl 0x82f67818
	ctx.lr = 0x82F87A84;
	sub_82F67818(ctx, base);
loc_82F87A84:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f87a9c
	if (!ctx.cr6.eq) goto loc_82F87A9C;
	// bl 0x82f67818
	ctx.lr = 0x82F87A9C;
	sub_82F67818(ctx, base);
loc_82F87A9C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f879c0
	if (ctx.cr6.eq) goto loc_82F879C0;
	// li r26,0
	ctx.r26.s64 = 0;
loc_82F87AA8:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,264(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f879cc
	if (ctx.cr6.eq) goto loc_82F879CC;
	// lwz r11,280(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f879f4
	if (ctx.cr6.eq) goto loc_82F879F4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f86eb8
	ctx.lr = 0x82F87AE4;
	sub_82F86EB8(ctx, base);
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// bl 0x82ef1068
	ctx.lr = 0x82F87B00;
	sub_82EF1068(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f87b18
	if (ctx.cr0.eq) goto loc_82F87B18;
	// lwz r31,20(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82f87aa8
	if (!ctx.cr6.eq) goto loc_82F87AA8;
	// b 0x82f879c0
	goto loc_82F879C0;
loc_82F87B18:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x82f87a18
	goto loc_82F87A18;
}

__attribute__((alias("__imp__sub_82F87B24"))) PPC_WEAK_FUNC(sub_82F87B24);
PPC_FUNC_IMPL(__imp__sub_82F87B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F87B28"))) PPC_WEAK_FUNC(sub_82F87B28);
PPC_FUNC_IMPL(__imp__sub_82F87B28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82F87B30;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82f872e0
	ctx.lr = 0x82F87B60;
	sub_82F872E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f87b84
	if (ctx.cr0.eq) goto loc_82F87B84;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f87b7c
	if (ctx.cr6.lt) goto loc_82F87B7C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6baa0
	ctx.lr = 0x82F87B7C;
	sub_82F6BAA0(ctx, base);
loc_82F87B7C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f87bf0
	goto loc_82F87BF0;
loc_82F87B84:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f87bd8
	if (ctx.cr0.eq) goto loc_82F87BD8;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f87bd8
	if (ctx.cr6.eq) goto loc_82F87BD8;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,36(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F87BB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f87bd0
	if (ctx.cr6.lt) goto loc_82F87BD0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6baa0
	ctx.lr = 0x82F87BD0;
	sub_82F6BAA0(ctx, base);
loc_82F87BD0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82f87bf0
	goto loc_82F87BF0;
loc_82F87BD8:
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f87bec
	if (ctx.cr6.lt) goto loc_82F87BEC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6baa0
	ctx.lr = 0x82F87BEC;
	sub_82F6BAA0(ctx, base);
loc_82F87BEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F87BF0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82F87BF8"))) PPC_WEAK_FUNC(sub_82F87BF8);
PPC_FUNC_IMPL(__imp__sub_82F87BF8) {
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
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f87c2c
	if (!ctx.cr6.eq) goto loc_82F87C2C;
	// bl 0x82f67818
	ctx.lr = 0x82F87C2C;
	sub_82F67818(ctx, base);
loc_82F87C2C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f86eb8
	ctx.lr = 0x82F87C3C;
	sub_82F86EB8(ctx, base);
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

__attribute__((alias("__imp__sub_82F87C58"))) PPC_WEAK_FUNC(sub_82F87C58);
PPC_FUNC_IMPL(__imp__sub_82F87C58) {
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
	// clrlwi. r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f87c84
	if (ctx.cr0.eq) goto loc_82F87C84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f86d58
	ctx.lr = 0x82F87C7C;
	sub_82F86D58(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// b 0x82f87c90
	goto loc_82F87C90;
loc_82F87C84:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f87bf8
	ctx.lr = 0x82F87C8C;
	sub_82F87BF8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82F87C90:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82F87CB8"))) PPC_WEAK_FUNC(sub_82F87CB8);
PPC_FUNC_IMPL(__imp__sub_82F87CB8) {
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
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f87cec
	if (!ctx.cr6.eq) goto loc_82F87CEC;
	// bl 0x82f67818
	ctx.lr = 0x82F87CEC;
	sub_82F67818(ctx, base);
loc_82F87CEC:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f873a8
	ctx.lr = 0x82F87CFC;
	sub_82F873A8(ctx, base);
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

__attribute__((alias("__imp__sub_82F87D14"))) PPC_WEAK_FUNC(sub_82F87D14);
PPC_FUNC_IMPL(__imp__sub_82F87D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F87D18"))) PPC_WEAK_FUNC(sub_82F87D18);
PPC_FUNC_IMPL(__imp__sub_82F87D18) {
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
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f87d44
	if (!ctx.cr6.eq) goto loc_82F87D44;
	// bl 0x82f67818
	ctx.lr = 0x82F87D44;
	sub_82F67818(ctx, base);
loc_82F87D44:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f86f38
	ctx.lr = 0x82F87D50;
	sub_82F86F38(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bne 0x82f87d60
	if (!ctx.cr0.eq) goto loc_82F87D60;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F87D60:
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

__attribute__((alias("__imp__sub_82F87D74"))) PPC_WEAK_FUNC(sub_82F87D74);
PPC_FUNC_IMPL(__imp__sub_82F87D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F87D78"))) PPC_WEAK_FUNC(sub_82F87D78);
PPC_FUNC_IMPL(__imp__sub_82F87D78) {
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
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f87dac
	if (!ctx.cr6.eq) goto loc_82F87DAC;
	// bl 0x82f67818
	ctx.lr = 0x82F87DAC;
	sub_82F67818(ctx, base);
loc_82F87DAC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f86fa8
	ctx.lr = 0x82F87DBC;
	sub_82F86FA8(ctx, base);
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

__attribute__((alias("__imp__sub_82F87DD8"))) PPC_WEAK_FUNC(sub_82F87DD8);
PPC_FUNC_IMPL(__imp__sub_82F87DD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82F87DE0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r28,16(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// beq cr6,0x82f87e30
	if (ctx.cr6.eq) goto loc_82F87E30;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// and r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 & ctx.r28.u64;
	// bl 0x82f864e0
	ctx.lr = 0x82F87E10;
	sub_82F864E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f87e30
	if (ctx.cr0.lt) goto loc_82F87E30;
	// rlwinm r11,r3,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x82f86140
	ctx.lr = 0x82F87E2C;
	sub_82F86140(ctx, base);
	// b 0x82f87e40
	goto loc_82F87E40;
loc_82F87E30:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f87410
	ctx.lr = 0x82F87E40;
	sub_82F87410(ctx, base);
loc_82F87E40:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82F87E48"))) PPC_WEAK_FUNC(sub_82F87E48);
PPC_FUNC_IMPL(__imp__sub_82F87E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82F87E50;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f87e74
	if (!ctx.cr6.eq) goto loc_82F87E74;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x82f87e9c
	goto loc_82F87E9C;
loc_82F87E74:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mulli r9,r9,5
	ctx.r9.s64 = ctx.r9.s64 * 5;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82f87ea4
	if (!ctx.cr6.gt) goto loc_82F87EA4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_82F87E9C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f87028
	ctx.lr = 0x82F87EA4;
	sub_82F87028(ctx, base);
loc_82F87EA4:
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// and r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 & ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulli r9,r10,48
	ctx.r9.s64 = ctx.r10.s64 * 48;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r28,r9,8
	ctx.r28.s64 = ctx.r9.s64 + 8;
	// cmpwi cr6,r6,-2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -2, ctx.xer);
	// bne cr6,0x82f87f04
	if (!ctx.cr6.eq) goto loc_82F87F04;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f85fb0
	ctx.lr = 0x82F87EE4;
	sub_82F85FB0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r3,r28,8
	ctx.r3.s64 = ctx.r28.s64 + 8;
	// bl 0x82f86198
	ctx.lr = 0x82F87EF8;
	sub_82F86198(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f06d18
	ctx.lr = 0x82F87F00;
	sub_82F06D18(ctx, base);
	// b 0x82f87fc4
	goto loc_82F87FC4;
loc_82F87F04:
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
loc_82F87F0C:
	// addi r9,r29,1
	ctx.r9.s64 = ctx.r29.s64 + 1;
	// and r29,r9,r8
	ctx.r29.u64 = ctx.r9.u64 & ctx.r8.u64;
	// mulli r9,r29,48
	ctx.r9.s64 = ctx.r29.s64 * 48;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r9,-2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -2, ctx.xer);
	// bne cr6,0x82f87f0c
	if (!ctx.cr6.eq) goto loc_82F87F0C;
	// lwz r7,8(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mulli r9,r29,48
	ctx.r9.s64 = ctx.r29.s64 * 48;
	// lwz r5,16(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r30,r28,8
	ctx.r30.s64 = ctx.r28.s64 + 8;
	// addi r7,r9,8
	ctx.r7.s64 = ctx.r9.s64 + 8;
	// and r9,r5,r8
	ctx.r9.u64 = ctx.r5.u64 & ctx.r8.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f87f7c
	if (!ctx.cr6.eq) goto loc_82F87F7C;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82f87f64
	if (ctx.cr6.eq) goto loc_82F87F64;
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r7,8
	ctx.r3.s64 = ctx.r7.s64 + 8;
	// bl 0x82f86198
	ctx.lr = 0x82F87F64;
	sub_82F86198(ctx, base);
loc_82F87F64:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f861f0
	ctx.lr = 0x82F87F70;
	sub_82F861F0(ctx, base);
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// b 0x82f87fc4
	goto loc_82F87FC4;
loc_82F87F78:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82F87F7C:
	// mulli r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 * 48;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r31,r9,8
	ctx.r31.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82f87f78
	if (!ctx.cr6.eq) goto loc_82F87F78;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82f87fac
	if (ctx.cr6.eq) goto loc_82F87FAC;
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r7,8
	ctx.r3.s64 = ctx.r7.s64 + 8;
	// bl 0x82f86198
	ctx.lr = 0x82F87FAC;
	sub_82F86198(ctx, base);
loc_82F87FAC:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f861f0
	ctx.lr = 0x82F87FBC;
	sub_82F861F0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82F87FC4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82F87FCC"))) PPC_WEAK_FUNC(sub_82F87FCC);
PPC_FUNC_IMPL(__imp__sub_82F87FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F87FD0"))) PPC_WEAK_FUNC(sub_82F87FD0);
PPC_FUNC_IMPL(__imp__sub_82F87FD0) {
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
	// bl 0x82ef6fe0
	ctx.lr = 0x82F87FEC;
	sub_82EF6FE0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r11,r11,13632
	ctx.r11.s64 = ctx.r11.s64 + 13632;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r9,-6624
	ctx.r11.s64 = ctx.r9.s64 + -6624;
	// addi r10,r10,23760
	ctx.r10.s64 = ctx.r10.s64 + 23760;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// bl 0x82f67e90
	ctx.lr = 0x82F88030;
	sub_82F67E90(ctx, base);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stb r30,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r30.u8);
	// stb r30,45(r31)
	PPC_STORE_U8(ctx.r31.u32 + 45, ctx.r30.u8);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f8805c
	if (ctx.cr6.eq) goto loc_82F8805C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F8805C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F8805C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82F8807C"))) PPC_WEAK_FUNC(sub_82F8807C);
PPC_FUNC_IMPL(__imp__sub_82F8807C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F88080"))) PPC_WEAK_FUNC(sub_82F88080);
PPC_FUNC_IMPL(__imp__sub_82F88080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82F88088;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x82ef6fe0
	ctx.lr = 0x82F8809C;
	sub_82EF6FE0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r11,r11,13632
	ctx.r11.s64 = ctx.r11.s64 + 13632;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r10,23760
	ctx.r10.s64 = ctx.r10.s64 + 23760;
	// addi r11,r9,-6624
	ctx.r11.s64 = ctx.r9.s64 + -6624;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// bl 0x82f67e90
	ctx.lr = 0x82F880E0;
	sub_82F67E90(ctx, base);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stb r30,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r30.u8);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stb r30,45(r31)
	PPC_STORE_U8(ctx.r31.u32 + 45, ctx.r30.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f04b00
	ctx.lr = 0x82F880FC;
	sub_82F04B00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82F88108"))) PPC_WEAK_FUNC(sub_82F88108);
PPC_FUNC_IMPL(__imp__sub_82F88108) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// subfic r11,r11,6
	ctx.xer.ca = ctx.r11.u32 <= 6;
	ctx.r11.s64 = 6 - ctx.r11.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// clrlwi r6,r11,31
	ctx.r6.u64 = ctx.r11.u32 & 0x1;
	// bl 0x82f87c58
	ctx.lr = 0x82F88140;
	sub_82F87C58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ld r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x82ef1068
	ctx.lr = 0x82F88164;
	sub_82EF1068(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f88174
	if (ctx.cr0.eq) goto loc_82F88174;
loc_82F8816C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f881a4
	goto loc_82F881A4;
loc_82F88174:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r11,25(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f8816c
	if (!ctx.cr0.eq) goto loc_82F8816C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f86858
	ctx.lr = 0x82F881A0;
	sub_82F86858(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82F881A4:
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

__attribute__((alias("__imp__sub_82F881BC"))) PPC_WEAK_FUNC(sub_82F881BC);
PPC_FUNC_IMPL(__imp__sub_82F881BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F881C0"))) PPC_WEAK_FUNC(sub_82F881C0);
PPC_FUNC_IMPL(__imp__sub_82F881C0) {
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
	// clrlwi. r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f881ec
	if (ctx.cr0.eq) goto loc_82F881EC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f86e38
	ctx.lr = 0x82F881E4;
	sub_82F86E38(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// b 0x82f881f8
	goto loc_82F881F8;
loc_82F881EC:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f87d78
	ctx.lr = 0x82F881F4;
	sub_82F87D78(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82F881F8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82F88220"))) PPC_WEAK_FUNC(sub_82F88220);
PPC_FUNC_IMPL(__imp__sub_82F88220) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82F88228;
	sub_82CA2BD4(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r25,r11,-27616
	ctx.r25.s64 = ctx.r11.s64 + -27616;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,-27600(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27600);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f88274
	if (!ctx.cr0.eq) goto loc_82F88274;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// li r9,9
	ctx.r9.s64 = 9;
	// stw r11,-27600(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27600, ctx.r11.u32);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// stb r9,0(r25)
	PPC_STORE_U8(ctx.r25.u32 + 0, ctx.r9.u8);
	// addi r3,r11,6648
	ctx.r3.s64 = ctx.r11.s64 + 6648;
	// bl 0x82ca3700
	ctx.lr = 0x82F88274;
	sub_82CA3700(ctx, base);
loc_82F88274:
	// lbz r11,29(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 29);
	// li r24,1
	ctx.r24.s64 = 1;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82f882d8
	if (!ctx.cr0.eq) goto loc_82F882D8;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x82f882d8
	if (!ctx.cr6.eq) goto loc_82F882D8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,276(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82f882d8
	if (!ctx.cr6.eq) goto loc_82F882D8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f6ad80
	ctx.lr = 0x82F882B0;
	sub_82F6AD80(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f882d8
	if (ctx.cr0.eq) goto loc_82F882D8;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F882CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// bne cr6,0x82f882d8
	if (!ctx.cr6.eq) goto loc_82F882D8;
	// stb r24,29(r29)
	PPC_STORE_U8(ctx.r29.u32 + 29, ctx.r24.u8);
loc_82F882D8:
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// subfic r11,r11,6
	ctx.xer.ca = ctx.r11.u32 <= 6;
	ctx.r11.s64 = 6 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8838c
	if (ctx.cr0.eq) goto loc_82F8838C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r9,264(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82f88334
	if (!ctx.cr6.eq) goto loc_82F88334;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// beq cr6,0x82f8836c
	if (ctx.cr6.eq) goto loc_82F8836C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82f6ad80
	ctx.lr = 0x82F88318;
	sub_82F6AD80(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F88330;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82f8836c
	goto loc_82F8836C;
loc_82F88334:
	// lwz r11,280(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82f88370
	if (!ctx.cr6.eq) goto loc_82F88370;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// beq cr6,0x82f8836c
	if (ctx.cr6.eq) goto loc_82F8836C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6ae90
	ctx.lr = 0x82F88358;
	sub_82F6AE90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r29,12
	ctx.r3.s64 = ctx.r29.s64 + 12;
	// bl 0x82f68378
	ctx.lr = 0x82F88364;
	sub_82F68378(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f67f08
	ctx.lr = 0x82F8836C;
	sub_82F67F08(ctx, base);
loc_82F8836C:
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
loc_82F88370:
	// addi r31,r29,8
	ctx.r31.s64 = ctx.r29.s64 + 8;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f86d58
	ctx.lr = 0x82F88384;
	sub_82F86D58(ctx, base);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// b 0x82f88448
	goto loc_82F88448;
loc_82F8838C:
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f883a0
	if (!ctx.cr6.eq) goto loc_82F883A0;
	// bl 0x82f67818
	ctx.lr = 0x82F883A0;
	sub_82F67818(ctx, base);
loc_82F883A0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r9,264(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f883f0
	if (!ctx.cr6.eq) goto loc_82F883F0;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// beq cr6,0x82f8842c
	if (ctx.cr6.eq) goto loc_82F8842C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82f6ad80
	ctx.lr = 0x82F883D4;
	sub_82F6AD80(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F883EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82f8842c
	goto loc_82F8842C;
loc_82F883F0:
	// lwz r11,280(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f88430
	if (!ctx.cr6.eq) goto loc_82F88430;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// beq cr6,0x82f8842c
	if (ctx.cr6.eq) goto loc_82F8842C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6ae90
	ctx.lr = 0x82F88418;
	sub_82F6AE90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r29,12
	ctx.r3.s64 = ctx.r29.s64 + 12;
	// bl 0x82f68378
	ctx.lr = 0x82F88424;
	sub_82F68378(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f67f08
	ctx.lr = 0x82F8842C;
	sub_82F67F08(ctx, base);
loc_82F8842C:
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
loc_82F88430:
	// addi r31,r29,8
	ctx.r31.s64 = ctx.r29.s64 + 8;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f87bf8
	ctx.lr = 0x82F88444;
	sub_82F87BF8(ctx, base);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
loc_82F88448:
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x82f8845c
	if (!ctx.cr6.eq) goto loc_82F8845C;
	// stb r24,28(r29)
	PPC_STORE_U8(ctx.r29.u32 + 28, ctx.r24.u8);
loc_82F8845C:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x82ef1068
	ctx.lr = 0x82F88474;
	sub_82EF1068(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bne 0x82f884a0
	if (!ctx.cr0.eq) goto loc_82F884A0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x82f6bbb0
	ctx.lr = 0x82F8849C;
	sub_82F6BBB0(ctx, base);
	// b 0x82f884dc
	goto loc_82F884DC;
loc_82F884A0:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lbz r30,0(r23)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r23.u32 + 0);
	// bl 0x82f6aa30
	ctx.lr = 0x82F884AC;
	sub_82F6AA30(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stb r30,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, ctx.r30.u8);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x82f87dd8
	ctx.lr = 0x82F884C8;
	sub_82F87DD8(ctx, base);
	// lbz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f884dc
	if (ctx.cr6.lt) goto loc_82F884DC;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f6baa0
	ctx.lr = 0x82F884DC;
	sub_82F6BAA0(ctx, base);
loc_82F884DC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_82F884E8"))) PPC_WEAK_FUNC(sub_82F884E8);
PPC_FUNC_IMPL(__imp__sub_82F884E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// subfic r10,r10,6
	ctx.xer.ca = ctx.r10.u32 <= 6;
	ctx.r10.s64 = 6 - ctx.r10.s64;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f88510
	if (ctx.cr0.eq) goto loc_82F88510;
	// b 0x82f872e0
	sub_82F872E0(ctx, base);
	return;
loc_82F88510:
	// b 0x82f87cb8
	sub_82F87CB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F88514"))) PPC_WEAK_FUNC(sub_82F88514);
PPC_FUNC_IMPL(__imp__sub_82F88514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F88518"))) PPC_WEAK_FUNC(sub_82F88518);
PPC_FUNC_IMPL(__imp__sub_82F88518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F88520;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stb r11,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r11.u8);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F88550;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f88590
	if (ctx.cr0.eq) goto loc_82F88590;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stb r29,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r29.u8);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82f87dd8
	ctx.lr = 0x82F88574;
	sub_82F87DD8(ctx, base);
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f88588
	if (ctx.cr6.lt) goto loc_82F88588;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	ctx.lr = 0x82F88588;
	sub_82F6BAA0(ctx, base);
loc_82F88588:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f885a8
	goto loc_82F885A8;
loc_82F88590:
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f885a4
	if (ctx.cr6.lt) goto loc_82F885A4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	ctx.lr = 0x82F885A4;
	sub_82F6BAA0(ctx, base);
loc_82F885A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F885A8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F885B0"))) PPC_WEAK_FUNC(sub_82F885B0);
PPC_FUNC_IMPL(__imp__sub_82F885B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F885B8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f88674
	if (ctx.cr6.eq) goto loc_82F88674;
	// lbz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// subfic r11,r11,6
	ctx.xer.ca = ctx.r11.u32 <= 6;
	ctx.r11.s64 = 6 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f88608
	if (ctx.cr0.eq) goto loc_82F88608;
	// bl 0x82f86dd8
	ctx.lr = 0x82F885F0;
	sub_82F86DD8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f88600
	if (ctx.cr0.eq) goto loc_82F88600;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// b 0x82f8860c
	goto loc_82F8860C;
loc_82F88600:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f8860c
	goto loc_82F8860C;
loc_82F88608:
	// bl 0x82f87d18
	ctx.lr = 0x82F8860C;
	sub_82F87D18(ctx, base);
loc_82F8860C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f88674
	if (ctx.cr6.eq) goto loc_82F88674;
	// lbz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// subfic r11,r11,6
	ctx.xer.ca = ctx.r11.u32 <= 6;
	ctx.r11.s64 = 6 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r5,r11,31
	ctx.r5.u64 = ctx.r11.u32 & 0x1;
	// bl 0x82f87348
	ctx.lr = 0x82F88630;
	sub_82F87348(ctx, base);
	// lwz r31,24(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f8864c
	if (ctx.cr6.eq) goto loc_82F8864C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f8866c
	if (!ctx.cr6.eq) goto loc_82F8866C;
loc_82F8864C:
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x82f88664
	if (ctx.cr0.eq) goto loc_82F88664;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f095b8
	ctx.lr = 0x82F8865C;
	sub_82F095B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F88664;
	sub_82EF6F38(ctx, base);
loc_82F88664:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
loc_82F8866C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f88678
	goto loc_82F88678;
loc_82F88674:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F88678:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F88680"))) PPC_WEAK_FUNC(sub_82F88680);
PPC_FUNC_IMPL(__imp__sub_82F88680) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82F88688;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r25,r27,16
	ctx.r25.s64 = ctx.r27.s64 + 16;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// stb r28,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r28.u8);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F886C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,124(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 124);
	// lwz r3,40(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// subfic r11,r11,6
	ctx.xer.ca = ctx.r11.u32 <= 6;
	ctx.r11.s64 = 6 - ctx.r11.s64;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f886f8
	if (ctx.cr0.eq) goto loc_82F886F8;
	// bl 0x82f86dd8
	ctx.lr = 0x82F886E8;
	sub_82F86DD8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f88700
	if (ctx.cr0.eq) goto loc_82F88700;
	// addi r28,r3,8
	ctx.r28.s64 = ctx.r3.s64 + 8;
	// b 0x82f88700
	goto loc_82F88700;
loc_82F886F8:
	// bl 0x82f87d18
	ctx.lr = 0x82F886FC;
	sub_82F87D18(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82F88700:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82f8889c
	if (ctx.cr6.eq) goto loc_82F8889C;
	// lwz r11,40(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f8889c
	if (ctx.cr6.eq) goto loc_82F8889C;
	// addi r31,r29,8
	ctx.r31.s64 = ctx.r29.s64 + 8;
	// addi r4,r28,16
	ctx.r4.s64 = ctx.r28.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f09630
	ctx.lr = 0x82F88724;
	sub_82F09630(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82f09630
	ctx.lr = 0x82F88730;
	sub_82F09630(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82f09630
	ctx.lr = 0x82F8873C;
	sub_82F09630(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r26,4
	ctx.r26.s64 = 4;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stb r26,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r26.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// bl 0x82f09630
	ctx.lr = 0x82F88764;
	sub_82F09630(ctx, base);
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f88778
	if (ctx.cr6.lt) goto loc_82F88778;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	ctx.lr = 0x82F88778;
	sub_82F6BAA0(ctx, base);
loc_82F88778:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F8878C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x82f887b0
	if (ctx.cr0.eq) goto loc_82F887B0;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F887A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r27,128
	ctx.r11.s64 = ctx.r27.s64 + 128;
	// b 0x82f887b4
	goto loc_82F887B4;
loc_82F887B0:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82F887B4:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r25,r10,-3936
	ctx.r25.s64 = ctx.r10.s64 + -3936;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// subf r11,r10,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r4,0
	ctx.r4.s64 = 0;
	// srawi r10,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r30,r11,-32
	ctx.r30.s64 = ctx.r11.s64 + -32;
	// bl 0x82f67e90
	ctx.lr = 0x82F887FC;
	sub_82F67E90(ctx, base);
	// stw r29,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r29.u32);
	// stw r26,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r26.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f680d8
	ctx.lr = 0x82F88814;
	sub_82F680D8(ctx, base);
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x82f67f08
	ctx.lr = 0x82F88820;
	sub_82F67F08(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// addi r11,r11,-5240
	ctx.r11.s64 = ctx.r11.s64 + -5240;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
loc_82F88830:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f09c90
	ctx.lr = 0x82F88838;
	sub_82F09C90(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82f88830
	if (!ctx.cr0.eq) goto loc_82F88830;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82f6bbb0
	ctx.lr = 0x82F8884C;
	sub_82F6BBB0(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82f8886c
	if (ctx.cr6.eq) goto loc_82F8886C;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F8886C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F8886C:
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f88880
	if (ctx.cr6.lt) goto loc_82F88880;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6baa0
	ctx.lr = 0x82F88880;
	sub_82F6BAA0(ctx, base);
loc_82F88880:
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f88894
	if (ctx.cr6.lt) goto loc_82F88894;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	ctx.lr = 0x82F88894;
	sub_82F6BAA0(ctx, base);
loc_82F88894:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f888c8
	goto loc_82F888C8;
loc_82F8889C:
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f888b0
	if (ctx.cr6.lt) goto loc_82F888B0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6baa0
	ctx.lr = 0x82F888B0;
	sub_82F6BAA0(ctx, base);
loc_82F888B0:
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f888c4
	if (ctx.cr6.lt) goto loc_82F888C4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	ctx.lr = 0x82F888C4;
	sub_82F6BAA0(ctx, base);
loc_82F888C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F888C8:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82F888D0"))) PPC_WEAK_FUNC(sub_82F888D0);
PPC_FUNC_IMPL(__imp__sub_82F888D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82F888D8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f88990
	if (ctx.cr6.eq) goto loc_82F88990;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r29,r3,16
	ctx.r29.s64 = ctx.r3.s64 + 16;
loc_82F88904:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82f6acb8
	ctx.lr = 0x82F88910;
	sub_82F6ACB8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// bl 0x82f04130
	ctx.lr = 0x82F88924;
	sub_82F04130(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f88220
	ctx.lr = 0x82F8893C;
	sub_82F88220(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f88964
	if (!ctx.cr6.eq) goto loc_82F88964;
	// bl 0x82f670f0
	ctx.lr = 0x82F88964;
	sub_82F670F0(ctx, base);
loc_82F88964:
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f88978
	if (ctx.cr6.lt) goto loc_82F88978;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	ctx.lr = 0x82F88978;
	sub_82F6BAA0(ctx, base);
loc_82F88978:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// rlwinm r11,r27,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f88904
	if (!ctx.cr6.eq) goto loc_82F88904;
loc_82F88990:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82F88998"))) PPC_WEAK_FUNC(sub_82F88998);
PPC_FUNC_IMPL(__imp__sub_82F88998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82F889A0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82ef6fe0
	ctx.lr = 0x82F889B0;
	sub_82EF6FE0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r11,r11,13632
	ctx.r11.s64 = ctx.r11.s64 + 13632;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r10,23760
	ctx.r10.s64 = ctx.r10.s64 + 23760;
	// addi r11,r9,-6624
	ctx.r11.s64 = ctx.r9.s64 + -6624;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// bl 0x82f67e90
	ctx.lr = 0x82F889F4;
	sub_82F67E90(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r30,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r30.u8);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stb r30,45(r31)
	PPC_STORE_U8(ctx.r31.u32 + 45, ctx.r30.u8);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r30,r28,120
	ctx.r30.s64 = ctx.r28.s64 + 120;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,120(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 120);
	// addi r3,r11,588
	ctx.r3.s64 = ctx.r11.s64 + 588;
	// bl 0x82f0ad10
	ctx.lr = 0x82F88A24;
	sub_82F0AD10(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82f04b00
	ctx.lr = 0x82F88A38;
	sub_82F04B00(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f88a58
	if (ctx.cr6.eq) goto loc_82F88A58;
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
	ctx.lr = 0x82F88A58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F88A58:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82F88A64"))) PPC_WEAK_FUNC(sub_82F88A64);
PPC_FUNC_IMPL(__imp__sub_82F88A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F88A68"))) PPC_WEAK_FUNC(sub_82F88A68);
PPC_FUNC_IMPL(__imp__sub_82F88A68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82F88A70;
	sub_82CA2BD4(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r23,r11,-27592
	ctx.r23.s64 = ctx.r11.s64 + -27592;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,-27576(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27576);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f88abc
	if (!ctx.cr0.eq) goto loc_82F88ABC;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// li r9,9
	ctx.r9.s64 = 9;
	// stw r11,-27576(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27576, ctx.r11.u32);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// stb r9,0(r23)
	PPC_STORE_U8(ctx.r23.u32 + 0, ctx.r9.u8);
	// addi r3,r11,6616
	ctx.r3.s64 = ctx.r11.s64 + 6616;
	// bl 0x82ca3700
	ctx.lr = 0x82F88ABC;
	sub_82CA3700(ctx, base);
loc_82F88ABC:
	// li r29,0
	ctx.r29.s64 = 0;
	// lbz r11,124(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 124);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// subfic r11,r11,6
	ctx.xer.ca = ctx.r11.u32 <= 6;
	ctx.r11.s64 = 6 - ctx.r11.s64;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// clrlwi r6,r11,31
	ctx.r6.u64 = ctx.r11.u32 & 0x1;
	// bl 0x82f87c58
	ctx.lr = 0x82F88AE4;
	sub_82F87C58(ctx, base);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82ef1068
	ctx.lr = 0x82F88AF8;
	sub_82EF1068(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f88b88
	if (ctx.cr0.eq) goto loc_82F88B88;
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x82f88b54
	goto loc_82F88B54;
loc_82F88B08:
	// lbz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 44);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82f88b50
	if (ctx.cr0.eq) goto loc_82F88B50;
	// lbz r11,124(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 124);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r30,24
	ctx.r4.s64 = ctx.r30.s64 + 24;
	// subfic r11,r11,6
	ctx.xer.ca = ctx.r11.u32 <= 6;
	ctx.r11.s64 = 6 - ctx.r11.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r6,r11,31
	ctx.r6.u64 = ctx.r11.u32 & 0x1;
	// bl 0x82f87c58
	ctx.lr = 0x82F88B34;
	sub_82F87C58(ctx, base);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ef1068
	ctx.lr = 0x82F88B48;
	sub_82EF1068(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f88b60
	if (ctx.cr0.eq) goto loc_82F88B60;
loc_82F88B50:
	// lwz r30,20(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
loc_82F88B54:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82f88b08
	if (!ctx.cr6.eq) goto loc_82F88B08;
	// b 0x82f88b88
	goto loc_82F88B88;
loc_82F88B60:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x82f88b88
	if (!ctx.cr6.eq) goto loc_82F88B88;
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
loc_82F88B88:
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82ef1068
	ctx.lr = 0x82F88B9C;
	sub_82EF1068(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f88c78
	if (!ctx.cr0.eq) goto loc_82F88C78;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r24,r11,24
	ctx.r24.s64 = ctx.r11.s64 + 24;
	// lbz r11,25(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// beq 0x82f88bd4
	if (ctx.cr0.eq) goto loc_82F88BD4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f88e4c
	goto loc_82F88E4C;
loc_82F88BD4:
	// lbz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 0);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x82f88c84
	if (!ctx.cr6.eq) goto loc_82F88C84;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82f6aa30
	ctx.lr = 0x82F88BEC;
	sub_82F6AA30(ctx, base);
	// lwz r11,-16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// addi r3,r31,-16
	ctx.r3.s64 = ctx.r31.s64 + -16;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F88C00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82f88c24
	if (ctx.cr0.eq) goto loc_82F88C24;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F88C1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r5,r30,128
	ctx.r5.s64 = ctx.r30.s64 + 128;
	// b 0x82f88c34
	goto loc_82F88C34;
loc_82F88C24:
	// addic. r11,r31,-16
	ctx.xer.ca = ctx.r31.u32 > 15;
	ctx.r11.s64 = ctx.r31.s64 + -16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bne 0x82f88c34
	if (!ctx.cr0.eq) goto loc_82F88C34;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_82F88C34:
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82f6d060
	ctx.lr = 0x82F88C44;
	sub_82F6D060(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f88c64
	if (ctx.cr6.eq) goto loc_82F88C64;
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
	ctx.lr = 0x82F88C64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F88C64:
	// lbz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f88e48
	if (ctx.cr6.lt) goto loc_82F88E48;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// b 0x82f88e44
	goto loc_82F88E44;
loc_82F88C78:
	// lbz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// mr r24,r29
	ctx.r24.u64 = ctx.r29.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
loc_82F88C84:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// stb r29,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r29.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f88cbc
	if (ctx.cr6.eq) goto loc_82F88CBC;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,-16
	ctx.r3.s64 = ctx.r31.s64 + -16;
	// bl 0x82f88680
	ctx.lr = 0x82F88CB0;
	sub_82F88680(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f88cbc
	if (ctx.cr0.eq) goto loc_82F88CBC;
	// addi r26,r1,144
	ctx.r26.s64 = ctx.r1.s64 + 144;
loc_82F88CBC:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x82f88d08
	if (!ctx.cr6.eq) goto loc_82F88D08;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r27,120
	ctx.r4.s64 = ctx.r27.s64 + 120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F88CE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 144);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f88d00
	if (ctx.cr6.lt) goto loc_82F88D00;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82f6baa0
	ctx.lr = 0x82F88D00;
	sub_82F6BAA0(ctx, base);
loc_82F88D00:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82f88e4c
	goto loc_82F88E4C;
loc_82F88D08:
	// lbz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x82f88d1c
	if (!ctx.cr6.eq) goto loc_82F88D1C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r11.u8);
loc_82F88D1C:
	// lbz r11,124(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 124);
	// subfic r11,r11,6
	ctx.xer.ca = ctx.r11.u32 <= 6;
	ctx.r11.s64 = 6 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f88db4
	if (ctx.cr0.eq) goto loc_82F88DB4;
	// lwz r10,120(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 120);
	// addi r30,r27,120
	ctx.r30.s64 = ctx.r27.s64 + 120;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r9,264(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 264);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82f88d7c
	if (!ctx.cr6.eq) goto loc_82F88D7C;
loc_82F88D48:
	// lbz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// beq cr6,0x82f88e24
	if (ctx.cr6.eq) goto loc_82F88E24;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82f6ad80
	ctx.lr = 0x82F88D60;
	sub_82F6AD80(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F88D78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82f88e24
	goto loc_82F88E24;
loc_82F88D7C:
	// lwz r10,280(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 280);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f88e28
	if (!ctx.cr6.eq) goto loc_82F88E28;
	// lbz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// beq cr6,0x82f88e24
	if (ctx.cr6.eq) goto loc_82F88E24;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6ae90
	ctx.lr = 0x82F88DA0;
	sub_82F6AE90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82f68378
	ctx.lr = 0x82F88DAC;
	sub_82F68378(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// b 0x82f88e20
	goto loc_82F88E20;
loc_82F88DB4:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f88dc8
	if (!ctx.cr6.eq) goto loc_82F88DC8;
	// bl 0x82f67818
	ctx.lr = 0x82F88DC8;
	sub_82F67818(ctx, base);
loc_82F88DC8:
	// lwz r11,120(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 120);
	// addi r30,r27,120
	ctx.r30.s64 = ctx.r27.s64 + 120;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r9,264(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f88d48
	if (ctx.cr6.eq) goto loc_82F88D48;
	// lwz r11,280(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f88e28
	if (!ctx.cr6.eq) goto loc_82F88E28;
	// lbz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// beq cr6,0x82f88e24
	if (ctx.cr6.eq) goto loc_82F88E24;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f6ae90
	ctx.lr = 0x82F88E10;
	sub_82F6AE90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82f68378
	ctx.lr = 0x82F88E1C;
	sub_82F68378(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
loc_82F88E20:
	// bl 0x82f67f08
	ctx.lr = 0x82F88E24;
	sub_82F67F08(ctx, base);
loc_82F88E24:
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
loc_82F88E28:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82f6bbb0
	ctx.lr = 0x82F88E34;
	sub_82F6BBB0(ctx, base);
	// lbz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f88e48
	if (ctx.cr6.lt) goto loc_82F88E48;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
loc_82F88E44:
	// bl 0x82f6baa0
	ctx.lr = 0x82F88E48;
	sub_82F6BAA0(ctx, base);
loc_82F88E48:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82F88E4C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_82F88E54"))) PPC_WEAK_FUNC(sub_82F88E54);
PPC_FUNC_IMPL(__imp__sub_82F88E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F88E58"))) PPC_WEAK_FUNC(sub_82F88E58);
PPC_FUNC_IMPL(__imp__sub_82F88E58) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x82f88f28
	if (ctx.cr6.lt) goto loc_82F88F28;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f6c2d0
	ctx.lr = 0x82F88E88;
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82f88ec8
	if (ctx.cr6.eq) goto loc_82F88EC8;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82f88ec8
	if (ctx.cr6.eq) goto loc_82F88EC8;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82f88ec8
	if (ctx.cr6.eq) goto loc_82F88EC8;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x82f88ebc
	if (ctx.cr6.eq) goto loc_82F88EBC;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bne cr6,0x82f88ef8
	if (!ctx.cr6.eq) goto loc_82F88EF8;
loc_82F88EBC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6bbb0
	ctx.lr = 0x82F88EC4;
	sub_82F6BBB0(ctx, base);
	// b 0x82f88ef8
	goto loc_82F88EF8;
loc_82F88EC8:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f1c128
	ctx.lr = 0x82F88ED8;
	sub_82F1C128(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6bbb0
	ctx.lr = 0x82F88EE4;
	sub_82F6BBB0(ctx, base);
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f88ef8
	if (ctx.cr6.lt) goto loc_82F88EF8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	ctx.lr = 0x82F88EF8;
	sub_82F6BAA0(ctx, base);
loc_82F88EF8:
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82f88f28
	if (ctx.cr0.eq) goto loc_82F88F28;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82f6bbb0
	ctx.lr = 0x82F88F10;
	sub_82F6BBB0(ctx, base);
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f88fb4
	if (ctx.cr6.lt) goto loc_82F88FB4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	ctx.lr = 0x82F88F24;
	sub_82F6BAA0(ctx, base);
	// b 0x82f88fb4
	goto loc_82F88FB4;
loc_82F88F28:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F88F30;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f88f5c
	if (ctx.cr0.eq) goto loc_82F88F5C;
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
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x82f88998
	ctx.lr = 0x82F88F58;
	sub_82F88998(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82F88F5C:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f14940
	ctx.lr = 0x82F88F6C;
	sub_82F14940(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r4,r11,120
	ctx.r4.s64 = ctx.r11.s64 + 120;
	// bl 0x82f68178
	ctx.lr = 0x82F88F80;
	sub_82F68178(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82f6c328
	ctx.lr = 0x82F88F8C;
	sub_82F6C328(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f67f08
	ctx.lr = 0x82F88F94;
	sub_82F67F08(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f88fb4
	if (ctx.cr6.eq) goto loc_82F88FB4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F88FB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F88FB4:
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

__attribute__((alias("__imp__sub_82F88FCC"))) PPC_WEAK_FUNC(sub_82F88FCC);
PPC_FUNC_IMPL(__imp__sub_82F88FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F88FD0"))) PPC_WEAK_FUNC(sub_82F88FD0);
PPC_FUNC_IMPL(__imp__sub_82F88FD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82F88FD8;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32007
	ctx.r11.s64 = -2097610752;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r11,-29096
	ctx.r4.s64 = ctx.r11.s64 + -29096;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82f6a308
	ctx.lr = 0x82F88FF0;
	sub_82F6A308(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r10,r10,25712
	ctx.r10.s64 = ctx.r10.s64 + 25712;
	// addi r9,r9,11640
	ctx.r9.s64 = ctx.r9.s64 + 11640;
	// addi r31,r11,13616
	ctx.r31.s64 = ctx.r11.s64 + 13616;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// stw r9,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r9.u32);
	// addi r28,r27,16
	ctx.r28.s64 = ctx.r27.s64 + 16;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r11,13616(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13616);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f890c8
	if (ctx.cr6.eq) goto loc_82F890C8;
	// li r10,7
	ctx.r10.s64 = 7;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// li r30,0
	ctx.r30.s64 = 0;
loc_82F89034:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r10,536
	ctx.r4.s64 = ctx.r10.s64 + 536;
	// bl 0x82f04130
	ctx.lr = 0x82F89048;
	sub_82F04130(ctx, base);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r25,r1,80
	ctx.r25.s64 = ctx.r1.s64 + 80;
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x82f6acb8
	ctx.lr = 0x82F8905C;
	sub_82F6ACB8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// bl 0x82f88220
	ctx.lr = 0x82F89074;
	sub_82F88220(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f8909c
	if (!ctx.cr6.eq) goto loc_82F8909C;
	// bl 0x82f670f0
	ctx.lr = 0x82F8909C;
	sub_82F670F0(ctx, base);
loc_82F8909C:
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f890b0
	if (ctx.cr6.lt) goto loc_82F890B0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	ctx.lr = 0x82F890B0;
	sub_82F6BAA0(ctx, base);
loc_82F890B0:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// rlwinm r30,r26,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82f89034
	if (!ctx.cr6.eq) goto loc_82F89034;
loc_82F890C8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82F890D4"))) PPC_WEAK_FUNC(sub_82F890D4);
PPC_FUNC_IMPL(__imp__sub_82F890D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F890D8"))) PPC_WEAK_FUNC(sub_82F890D8);
PPC_FUNC_IMPL(__imp__sub_82F890D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F890E0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f881c0
	ctx.lr = 0x82F89100;
	sub_82F881C0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x82ef1068
	ctx.lr = 0x82F89118;
	sub_82EF1068(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f89154
	if (!ctx.cr0.eq) goto loc_82F89154;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mulli r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 * 48;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r30,r11,24
	ctx.r30.s64 = ctx.r11.s64 + 24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f68378
	ctx.lr = 0x82F89144;
	sub_82F68378(ctx, base);
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x82f6bbb0
	ctx.lr = 0x82F89150;
	sub_82F6BBB0(ctx, base);
	// b 0x82f89170
	goto loc_82F89170;
loc_82F89154:
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82f87e48
	ctx.lr = 0x82F89170;
	sub_82F87E48(ctx, base);
loc_82F89170:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F89178"))) PPC_WEAK_FUNC(sub_82F89178);
PPC_FUNC_IMPL(__imp__sub_82F89178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82F89180;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x82f87fd0
	ctx.lr = 0x82F89194;
	sub_82F87FD0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,16360
	ctx.r11.s64 = ctx.r11.s64 + 16360;
	// addi r10,r10,13856
	ctx.r10.s64 = ctx.r10.s64 + 13856;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r29,r31,48
	ctx.r29.s64 = ctx.r31.s64 + 48;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f67e90
	ctx.lr = 0x82F891C0;
	sub_82F67E90(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f67fa0
	ctx.lr = 0x82F891CC;
	sub_82F67FA0(ctx, base);
	// addi r28,r31,60
	ctx.r28.s64 = ctx.r31.s64 + 60;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f67e90
	ctx.lr = 0x82F891E0;
	sub_82F67E90(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f67fa0
	ctx.lr = 0x82F891EC;
	sub_82F67FA0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6ad40
	ctx.lr = 0x82F89200;
	sub_82F6AD40(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f68b10
	ctx.lr = 0x82F89210;
	sub_82F68B10(ctx, base);
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f89224
	if (ctx.cr6.lt) goto loc_82F89224;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	ctx.lr = 0x82F89224;
	sub_82F6BAA0(ctx, base);
loc_82F89224:
	// li r9,3
	ctx.r9.s64 = 3;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r29,r11,16
	ctx.r29.s64 = ctx.r11.s64 + 16;
	// addi r28,r10,260
	ctx.r28.s64 = ctx.r10.s64 + 260;
	// lwz r27,16(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r26,r1,80
	ctx.r26.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6aba0
	ctx.lr = 0x82F89250;
	sub_82F6ABA0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,40(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F89270;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f89284
	if (ctx.cr6.lt) goto loc_82F89284;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	ctx.lr = 0x82F89284;
	sub_82F6BAA0(ctx, base);
loc_82F89284:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82F89290"))) PPC_WEAK_FUNC(sub_82F89290);
PPC_FUNC_IMPL(__imp__sub_82F89290) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82F89298;
	sub_82CA2BE0(ctx, base);
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x82f67e90
	ctx.lr = 0x82F892C0;
	sub_82F67E90(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f68378
	ctx.lr = 0x82F892D4;
	sub_82F68378(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6bbb0
	ctx.lr = 0x82F892E0;
	sub_82F6BBB0(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f89310
	if (!ctx.cr6.eq) goto loc_82F89310;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F892F4;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f89308
	if (ctx.cr0.eq) goto loc_82F89308;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// b 0x82f8930c
	goto loc_82F8930C;
loc_82F89308:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82F8930C:
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_82F89310:
	// lbz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// subfic r11,r11,6
	ctx.xer.ca = ctx.r11.u32 <= 6;
	ctx.r11.s64 = 6 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r6,r11,31
	ctx.r6.u64 = ctx.r11.u32 & 0x1;
	// bl 0x82f890d8
	ctx.lr = 0x82F89330;
	sub_82F890D8(ctx, base);
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f89344
	if (ctx.cr6.lt) goto loc_82F89344;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	ctx.lr = 0x82F89344;
	sub_82F6BAA0(ctx, base);
loc_82F89344:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f67f08
	ctx.lr = 0x82F8934C;
	sub_82F67F08(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82F89358"))) PPC_WEAK_FUNC(sub_82F89358);
PPC_FUNC_IMPL(__imp__sub_82F89358) {
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
	// bl 0x82f89178
	ctx.lr = 0x82F89378;
	sub_82F89178(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,16360
	ctx.r11.s64 = ctx.r11.s64 + 16360;
	// addi r10,r10,13856
	ctx.r10.s64 = ctx.r10.s64 + 13856;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,13544
	ctx.r5.s64 = ctx.r11.s64 + 13544;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f888d0
	ctx.lr = 0x82F893A4;
	sub_82F888D0(ctx, base);
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

__attribute__((alias("__imp__sub_82F893C0"))) PPC_WEAK_FUNC(sub_82F893C0);
PPC_FUNC_IMPL(__imp__sub_82F893C0) {
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
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82F893D8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82f893d8
	if (!ctx.cr6.eq) goto loc_82F893D8;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// lwz r31,4(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r5,5381
	ctx.r5.s64 = 5381;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82ef7468
	ctx.lr = 0x82F89400;
	sub_82EF7468(ctx, base);
	// clrlwi r11,r31,30
	ctx.r11.u64 = ctx.r31.u32 & 0x3;
	// xor r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r11.u64;
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

__attribute__((alias("__imp__sub_82F8941C"))) PPC_WEAK_FUNC(sub_82F8941C);
PPC_FUNC_IMPL(__imp__sub_82F8941C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F89420"))) PPC_WEAK_FUNC(sub_82F89420);
PPC_FUNC_IMPL(__imp__sub_82F89420) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_82F89464:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r7,r10
	ctx.r9.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stwcx. r9,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82f89464
	if (!ctx.cr0.eq) goto loc_82F89464;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f89490
	if (ctx.cr6.eq) goto loc_82F89490;
	// bl 0x82ef1710
	ctx.lr = 0x82F89490;
	sub_82EF1710(ctx, base);
loc_82F89490:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f894a8
	if (ctx.cr6.eq) goto loc_82F894A8;
	// bl 0x82ef1710
	ctx.lr = 0x82F894A8;
	sub_82EF1710(ctx, base);
loc_82F894A8:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lfs f0,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
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

__attribute__((alias("__imp__sub_82F894D4"))) PPC_WEAK_FUNC(sub_82F894D4);
PPC_FUNC_IMPL(__imp__sub_82F894D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F894D8"))) PPC_WEAK_FUNC(sub_82F894D8);
PPC_FUNC_IMPL(__imp__sub_82F894D8) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82f89508
	if (!ctx.cr6.eq) goto loc_82F89508;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f895c4
	goto loc_82F895C4;
loc_82F89508:
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r8,28(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// lwz r9,28(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// andi. r10,r10,787
	ctx.r10.u64 = ctx.r10.u64 & 787;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82f895bc
	if (!ctx.cr0.eq) goto loc_82F895BC;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi. r9,r9,1
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f89570
	if (!ctx.cr0.eq) goto loc_82F89570;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F89568;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82f89574
	goto loc_82F89574;
loc_82F89570:
	// addi r30,r10,12
	ctx.r30.s64 = ctx.r10.s64 + 12;
loc_82F89574:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi. r9,r9,1
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f895a4
	if (!ctx.cr0.eq) goto loc_82F895A4;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F895A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82f895a8
	goto loc_82F895A8;
loc_82F895A4:
	// addi r3,r10,12
	ctx.r3.s64 = ctx.r10.s64 + 12;
loc_82F895A8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ef7350
	ctx.lr = 0x82F895B0;
	sub_82EF7350(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x82f895c0
	if (ctx.cr0.eq) goto loc_82F895C0;
loc_82F895BC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F895C0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
loc_82F895C4:
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

__attribute__((alias("__imp__sub_82F895DC"))) PPC_WEAK_FUNC(sub_82F895DC);
PPC_FUNC_IMPL(__imp__sub_82F895DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F895E0"))) PPC_WEAK_FUNC(sub_82F895E0);
PPC_FUNC_IMPL(__imp__sub_82F895E0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r9,r10,0,22,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x300;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// andi. r8,r10,787
	ctx.r8.u64 = ctx.r10.u64 & 787;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r9.s64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwimi r9,r10,0,27,27
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x10) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFEF);
	// lwz r10,12(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// andi. r9,r9,784
	ctx.r9.u64 = ctx.r9.u64 & 784;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r10,28(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// ori r9,r9,3
	ctx.r9.u64 = ctx.r9.u64 | 3;
	// or r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 | ctx.r6.u64;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82f8967c
	if (!ctx.cr6.eq) goto loc_82F8967C;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi. r9,r9,1
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f89664
	if (!ctx.cr0.eq) goto loc_82F89664;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F89660;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82f89668
	goto loc_82F89668;
loc_82F89664:
	// addi r3,r10,12
	ctx.r3.s64 = ctx.r10.s64 + 12;
loc_82F89668:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82ef7350
	ctx.lr = 0x82F89670;
	sub_82EF7350(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x82f89680
	if (ctx.cr0.eq) goto loc_82F89680;
loc_82F8967C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F89680:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_82F89698"))) PPC_WEAK_FUNC(sub_82F89698);
PPC_FUNC_IMPL(__imp__sub_82F89698) {
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
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r10,r10,1
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82f896dc
	if (!ctx.cr0.eq) goto loc_82F896DC;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F896D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82f896e0
	goto loc_82F896E0;
loc_82F896DC:
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
loc_82F896E0:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r31,28(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// or r10,r9,r31
	ctx.r10.u64 = ctx.r9.u64 | ctx.r31.u64;
	// clrlwi r30,r10,30
	ctx.r30.u64 = ctx.r10.u32 & 0x3;
loc_82F896FC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82f896fc
	if (!ctx.cr6.eq) goto loc_82F896FC;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// li r5,5381
	ctx.r5.s64 = 5381;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82ef7468
	ctx.lr = 0x82F89720;
	sub_82EF7468(ctx, base);
	// or r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 | ctx.r30.u64;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// xor r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r11.u64;
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

__attribute__((alias("__imp__sub_82F89744"))) PPC_WEAK_FUNC(sub_82F89744);
PPC_FUNC_IMPL(__imp__sub_82F89744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F89748"))) PPC_WEAK_FUNC(sub_82F89748);
PPC_FUNC_IMPL(__imp__sub_82F89748) {
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
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r10,r10,1
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82f8978c
	if (!ctx.cr0.eq) goto loc_82F8978C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F89788;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82f89790
	goto loc_82F89790;
loc_82F8978C:
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
loc_82F89790:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r31,28(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// or r10,r9,r31
	ctx.r10.u64 = ctx.r9.u64 | ctx.r31.u64;
	// clrlwi r30,r10,30
	ctx.r30.u64 = ctx.r10.u32 & 0x3;
loc_82F897AC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82f897ac
	if (!ctx.cr6.eq) goto loc_82F897AC;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// li r5,5381
	ctx.r5.s64 = 5381;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82ef7468
	ctx.lr = 0x82F897D0;
	sub_82EF7468(ctx, base);
	// or r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 | ctx.r30.u64;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// xor r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r11.u64;
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

__attribute__((alias("__imp__sub_82F897F4"))) PPC_WEAK_FUNC(sub_82F897F4);
PPC_FUNC_IMPL(__imp__sub_82F897F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F897F8"))) PPC_WEAK_FUNC(sub_82F897F8);
PPC_FUNC_IMPL(__imp__sub_82F897F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82F89800;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f89928
	if (ctx.cr6.eq) goto loc_82F89928;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// bl 0x82f89748
	ctx.lr = 0x82F89830;
	sub_82F89748(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// and r30,r10,r3
	ctx.r30.u64 = ctx.r10.u64 & ctx.r3.u64;
	// mulli r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 * 12;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// beq cr6,0x82f89928
	if (ctx.cr6.eq) goto loc_82F89928;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82f89928
	if (!ctx.cr6.eq) goto loc_82F89928;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// li r28,-1
	ctx.r28.s64 = -1;
loc_82F89868:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82f89890
	if (!ctx.cr6.eq) goto loc_82F89890;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82f894d8
	ctx.lr = 0x82F89888;
	sub_82F894D8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f898b4
	if (!ctx.cr0.eq) goto loc_82F898B4;
loc_82F89890:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x82f89928
	if (ctx.cr6.eq) goto loc_82F89928;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mulli r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 * 12;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// b 0x82f89868
	goto loc_82F89868;
loc_82F898B4:
	// li r9,-2
	ctx.r9.s64 = -2;
	// cmpw cr6,r27,r30
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x82f89900
	if (!ctx.cr6.eq) goto loc_82F89900;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82f89914
	if (ctx.cr6.eq) goto loc_82F89914;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// b 0x82f89914
	goto loc_82F89914;
loc_82F89900:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mulli r11,r28,12
	ctx.r11.s64 = ctx.r28.s64 * 12;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
loc_82F89914:
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_82F89928:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82F89930"))) PPC_WEAK_FUNC(sub_82F89930);
PPC_FUNC_IMPL(__imp__sub_82F89930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82F89938;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mulli r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 * 12;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// beq cr6,0x82f899bc
	if (ctx.cr6.eq) goto loc_82F899BC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82f899bc
	if (!ctx.cr6.eq) goto loc_82F899BC;
loc_82F89974:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82f89994
	if (!ctx.cr6.eq) goto loc_82F89994;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82f895e0
	ctx.lr = 0x82F8998C;
	sub_82F895E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f899b4
	if (!ctx.cr0.eq) goto loc_82F899B4;
loc_82F89994:
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// beq cr6,0x82f899bc
	if (ctx.cr6.eq) goto loc_82F899BC;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mulli r11,r28,12
	ctx.r11.s64 = ctx.r28.s64 * 12;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// b 0x82f89974
	goto loc_82F89974;
loc_82F899B4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x82f899c0
	goto loc_82F899C0;
loc_82F899BC:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82F899C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82F899C8"))) PPC_WEAK_FUNC(sub_82F899C8);
PPC_FUNC_IMPL(__imp__sub_82F899C8) {
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
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// bl 0x82f89698
	ctx.lr = 0x82F899F8;
	sub_82F89698(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f89c08
	ctx.lr = 0x82F89A08;
	sub_82F89C08(ctx, base);
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

__attribute__((alias("__imp__sub_82F89A20"))) PPC_WEAK_FUNC(sub_82F89A20);
PPC_FUNC_IMPL(__imp__sub_82F89A20) {
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f89a50
	if (!ctx.cr6.eq) goto loc_82F89A50;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82f89a80
	goto loc_82F89A80;
loc_82F89A50:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// bl 0x82f893c0
	ctx.lr = 0x82F89A68;
	sub_82F893C0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// and r5,r3,r11
	ctx.r5.u64 = ctx.r3.u64 & ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f89930
	ctx.lr = 0x82F89A80;
	sub_82F89930(ctx, base);
loc_82F89A80:
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

__attribute__((alias("__imp__sub_82F89A98"))) PPC_WEAK_FUNC(sub_82F89A98);
PPC_FUNC_IMPL(__imp__sub_82F89A98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82F89AA0;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82f89ab4
	if (!ctx.cr6.eq) goto loc_82F89AB4;
	// b 0x82f89bc0
	goto loc_82F89BC0;
loc_82F89AB4:
	// cmplwi cr6,r4,8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 8, ctx.xer);
	// bge cr6,0x82f89ac4
	if (!ctx.cr6.lt) goto loc_82F89AC4;
	// li r31,8
	ctx.r31.s64 = 8;
	// b 0x82f89b0c
	goto loc_82F89B0C;
loc_82F89AC4:
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x821f3c80
	ctx.lr = 0x82F89AE0;
	sub_821F3C80(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f0,16264(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16264);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// slw r31,r9,r11
	ctx.r31.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
loc_82F89B0C:
	// li r28,0
	ctx.r28.s64 = 0;
	// mulli r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 * 12;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F89B20;
	sub_82EF6EF8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r27,-2
	ctx.r27.s64 = -2;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// beq cr6,0x82f89b5c
	if (ctx.cr6.eq) goto loc_82F89B5C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82F89B44:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r27,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r27.u32);
	// bne 0x82f89b44
	if (!ctx.cr0.eq) goto loc_82F89B44;
loc_82F89B5C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f89bb0
	if (ctx.cr6.eq) goto loc_82F89BB0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
loc_82F89B74:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// beq cr6,0x82f89b9c
	if (ctx.cr6.eq) goto loc_82F89B9C;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f899c8
	ctx.lr = 0x82F89B98;
	sub_82F899C8(ctx, base);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_82F89B9C:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x82f89b74
	if (!ctx.cr0.eq) goto loc_82F89B74;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x82ef6f38
	ctx.lr = 0x82F89BB0;
	sub_82EF6F38(ctx, base);
loc_82F89BB0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_82F89BC0:
	// bl 0x82f14bf0
	ctx.lr = 0x82F89BC4;
	sub_82F14BF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82F89BCC"))) PPC_WEAK_FUNC(sub_82F89BCC);
PPC_FUNC_IMPL(__imp__sub_82F89BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F89BD0"))) PPC_WEAK_FUNC(sub_82F89BD0);
PPC_FUNC_IMPL(__imp__sub_82F89BD0) {
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
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82f89bf8
	if (ctx.cr6.eq) goto loc_82F89BF8;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x82f897f8
	ctx.lr = 0x82F89BF8;
	sub_82F897F8(ctx, base);
loc_82F89BF8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F89C08"))) PPC_WEAK_FUNC(sub_82F89C08);
PPC_FUNC_IMPL(__imp__sub_82F89C08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F89C10;
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f89c34
	if (!ctx.cr6.eq) goto loc_82F89C34;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x82f89c5c
	goto loc_82F89C5C;
loc_82F89C34:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mulli r9,r9,5
	ctx.r9.s64 = ctx.r9.s64 * 5;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82f89c64
	if (!ctx.cr6.gt) goto loc_82F89C64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_82F89C5C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f89a98
	ctx.lr = 0x82F89C64;
	sub_82F89A98(ctx, base);
loc_82F89C64:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// and r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 & ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulli r10,r8,12
	ctx.r10.s64 = ctx.r8.s64 * 12;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r5,-2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -2, ctx.xer);
	// bne cr6,0x82f89ca8
	if (!ctx.cr6.eq) goto loc_82F89CA8;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x82f89d08
	goto loc_82F89D08;
loc_82F89CA8:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
loc_82F89CB0:
	// addi r7,r6,1
	ctx.r7.s64 = ctx.r6.s64 + 1;
	// and r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 & ctx.r9.u64;
	// mulli r7,r6,12
	ctx.r7.s64 = ctx.r6.s64 * 12;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwz r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// cmpwi cr6,r7,-2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -2, ctx.xer);
	// bne cr6,0x82f89cb0
	if (!ctx.cr6.eq) goto loc_82F89CB0;
	// mulli r7,r6,12
	ctx.r7.s64 = ctx.r6.s64 * 12;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// bne cr6,0x82f89d14
	if (!ctx.cr6.eq) goto loc_82F89D14;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82f89d00
	if (ctx.cr6.eq) goto loc_82F89D00;
	// stw r5,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r5.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r11.u32);
loc_82F89D00:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
loc_82F89D08:
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// b 0x82f89d5c
	goto loc_82F89D5C;
loc_82F89D10:
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82F89D14:
	// mulli r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 * 12;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpw cr6,r4,r8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82f89d10
	if (!ctx.cr6.eq) goto loc_82F89D10;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82f89d48
	if (ctx.cr6.eq) goto loc_82F89D48;
	// stw r5,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r5.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r11.u32);
loc_82F89D48:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
loc_82F89D5C:
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F89D68"))) PPC_WEAK_FUNC(sub_82F89D68);
PPC_FUNC_IMPL(__imp__sub_82F89D68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F89D70;
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f89d94
	if (!ctx.cr6.eq) goto loc_82F89D94;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x82f89dbc
	goto loc_82F89DBC;
loc_82F89D94:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mulli r9,r9,5
	ctx.r9.s64 = ctx.r9.s64 * 5;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82f89dc4
	if (!ctx.cr6.gt) goto loc_82F89DC4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_82F89DBC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f89a98
	ctx.lr = 0x82F89DC4;
	sub_82F89A98(ctx, base);
loc_82F89DC4:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// and r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 & ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulli r10,r8,12
	ctx.r10.s64 = ctx.r8.s64 * 12;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r5,-2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -2, ctx.xer);
	// bne cr6,0x82f89e08
	if (!ctx.cr6.eq) goto loc_82F89E08;
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// b 0x82f89e68
	goto loc_82F89E68;
loc_82F89E08:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
loc_82F89E10:
	// addi r7,r6,1
	ctx.r7.s64 = ctx.r6.s64 + 1;
	// and r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 & ctx.r9.u64;
	// mulli r7,r6,12
	ctx.r7.s64 = ctx.r6.s64 * 12;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwz r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// cmpwi cr6,r7,-2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -2, ctx.xer);
	// bne cr6,0x82f89e10
	if (!ctx.cr6.eq) goto loc_82F89E10;
	// mulli r7,r6,12
	ctx.r7.s64 = ctx.r6.s64 * 12;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// bne cr6,0x82f89e74
	if (!ctx.cr6.eq) goto loc_82F89E74;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82f89e60
	if (ctx.cr6.eq) goto loc_82F89E60;
	// stw r5,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r5.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r11.u32);
loc_82F89E60:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
loc_82F89E68:
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// b 0x82f89ebc
	goto loc_82F89EBC;
loc_82F89E70:
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82F89E74:
	// mulli r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 * 12;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpw cr6,r4,r8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82f89e70
	if (!ctx.cr6.eq) goto loc_82F89E70;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82f89ea8
	if (ctx.cr6.eq) goto loc_82F89EA8;
	// stw r5,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r5.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r11.u32);
loc_82F89EA8:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
loc_82F89EBC:
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F89EC8"))) PPC_WEAK_FUNC(sub_82F89EC8);
PPC_FUNC_IMPL(__imp__sub_82F89EC8) {
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
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82f89748
	ctx.lr = 0x82F89EFC;
	sub_82F89748(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f89d68
	ctx.lr = 0x82F89F0C;
	sub_82F89D68(ctx, base);
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

__attribute__((alias("__imp__sub_82F89F24"))) PPC_WEAK_FUNC(sub_82F89F24);
PPC_FUNC_IMPL(__imp__sub_82F89F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F89F28"))) PPC_WEAK_FUNC(sub_82F89F28);
PPC_FUNC_IMPL(__imp__sub_82F89F28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc4
	ctx.lr = 0x82F89F30;
	sub_82CA2BC4(ctx, base);
	// stfd f30,-128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f30.u64);
	// stfd f31,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r21,0
	ctx.r21.s64 = 0;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r19,r6
	ctx.r19.u64 = ctx.r6.u64;
	// addi r25,r30,16
	ctx.r25.s64 = ctx.r30.s64 + 16;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r23,44(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r22,40(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r20,48(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,3080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f30.f64 = double(temp.f32);
loc_82F89F7C:
	// stw r24,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82f89a20
	ctx.lr = 0x82F89F8C;
	sub_82F89A20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f89fa8
	if (ctx.cr0.lt) goto loc_82F89FA8;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mulli r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 * 12;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// b 0x82f89fac
	goto loc_82F89FAC;
loc_82F89FA8:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82F89FAC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f8a2a4
	if (!ctx.cr6.eq) goto loc_82F8A2A4;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F89FD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82f8a034
	if (ctx.cr0.eq) goto loc_82F8A034;
	// clrlwi. r11,r24,30
	ctx.r11.u64 = ctx.r24.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f89ffc
	if (ctx.cr0.eq) goto loc_82F89FFC;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F89FF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8a2bc
	if (ctx.cr0.eq) goto loc_82F8A2BC;
loc_82F89FFC:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F8A004;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f8a02c
	if (ctx.cr0.eq) goto loc_82F8A02C;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f04bc8
	ctx.lr = 0x82F8A024;
	sub_82F04BC8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x82f8a030
	goto loc_82F8A030;
loc_82F8A02C:
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
loc_82F8A030:
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
loc_82F8A034:
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f30.f64;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82f8a2dc
	if (!ctx.cr6.eq) goto loc_82F8A2DC;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x82f8a108
	if (ctx.cr6.eq) goto loc_82F8A108;
	// addi r31,r30,32
	ctx.r31.s64 = ctx.r30.s64 + 32;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82fb42b8
	ctx.lr = 0x82F8A064;
	sub_82FB42B8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8a108
	if (ctx.cr0.eq) goto loc_82F8A108;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r28,r10,12
	ctx.r28.s64 = ctx.r10.s64 + 12;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82f8a084
	if (!ctx.cr6.eq) goto loc_82F8A084;
	// b 0x82f8a08c
	goto loc_82F8A08C;
loc_82F8A084:
	// rlwinm r10,r24,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xFFFFFFFC;
	// or r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_82F8A08C:
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lfs f31,36(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x82f89a20
	ctx.lr = 0x82F8A0A4;
	sub_82F89A20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f8a0c0
	if (ctx.cr0.lt) goto loc_82F8A0C0;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mulli r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 * 12;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// b 0x82f8a0c4
	goto loc_82F8A0C4;
loc_82F8A0C0:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82F8A0C4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f8a2a4
	if (!ctx.cr6.eq) goto loc_82F8A2A4;
	// stw r26,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r26.u32);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82f89a20
	ctx.lr = 0x82F8A0E0;
	sub_82F89A20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f8a0fc
	if (ctx.cr0.lt) goto loc_82F8A0FC;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mulli r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 * 12;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// b 0x82f8a100
	goto loc_82F8A100;
loc_82F8A0FC:
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82F8A100:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f8a2a4
	if (!ctx.cr6.eq) goto loc_82F8A2A4;
loc_82F8A108:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82f8a190
	if (ctx.cr6.eq) goto loc_82F8A190;
	// stw r21,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r21.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r21,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r8,24(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F8A140;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8a180
	if (ctx.cr0.eq) goto loc_82F8A180;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F8A150;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f8a178
	if (ctx.cr0.eq) goto loc_82F8A178;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f04bc8
	ctx.lr = 0x82F8A170;
	sub_82F04BC8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x82f8a17c
	goto loc_82F8A17C;
loc_82F8A178:
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
loc_82F8A17C:
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
loc_82F8A180:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82fb3420
	ctx.lr = 0x82F8A188;
	sub_82FB3420(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82f8a2dc
	if (!ctx.cr6.eq) goto loc_82F8A2DC;
loc_82F8A190:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82f8a204
	if (ctx.cr6.eq) goto loc_82F8A204;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r6,32(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x82f49170
	ctx.lr = 0x82F8A1B4;
	sub_82F49170(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82f8a204
	if (ctx.cr0.eq) goto loc_82F8A204;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F8A1C4;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f8a1ec
	if (ctx.cr0.eq) goto loc_82F8A1EC;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f04bc8
	ctx.lr = 0x82F8A1E4;
	sub_82F04BC8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x82f8a1f0
	goto loc_82F8A1F0;
loc_82F8A1EC:
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
loc_82F8A1F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// bl 0x82ef1bf0
	ctx.lr = 0x82F8A1FC;
	sub_82EF1BF0(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82f8a2dc
	if (!ctx.cr6.eq) goto loc_82F8A2DC;
loc_82F8A204:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82f8a28c
	if (ctx.cr6.eq) goto loc_82F8A28C;
	// stw r21,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r21.u32);
	// rlwinm r6,r29,0,28,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r21,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r21.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r8,24(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F8A23C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8a27c
	if (ctx.cr0.eq) goto loc_82F8A27C;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F8A24C;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f8a274
	if (ctx.cr0.eq) goto loc_82F8A274;
	// li r7,16
	ctx.r7.s64 = 16;
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f04bc8
	ctx.lr = 0x82F8A26C;
	sub_82F04BC8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x82f8a278
	goto loc_82F8A278;
loc_82F8A274:
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
loc_82F8A278:
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
loc_82F8A27C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82fb3420
	ctx.lr = 0x82F8A284;
	sub_82FB3420(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82f8a2dc
	if (!ctx.cr6.eq) goto loc_82F8A2DC;
loc_82F8A28C:
	// rlwinm. r11,r24,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8a2c8
	if (ctx.cr0.eq) goto loc_82F8A2C8;
	// rlwinm r24,r24,0,28,26
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// mr r22,r21
	ctx.r22.u64 = ctx.r21.u64;
	// mr r23,r21
	ctx.r23.u64 = ctx.r21.u64;
	// b 0x82f89f7c
	goto loc_82F89F7C;
loc_82F8A2A4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82f8a2cc
	goto loc_82F8A2CC;
loc_82F8A2BC:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82f8a2c8
	if (ctx.cr6.eq) goto loc_82F8A2C8;
	// stw r31,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r31.u32);
loc_82F8A2C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F8A2CC:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f30,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x82ca2c14
	// ERROR 82CA2C14
	return;
loc_82F8A2DC:
	// stfs f31,24(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r27.u32 + 24, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82f89ec8
	ctx.lr = 0x82F8A2EC;
	sub_82F89EC8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// b 0x82f8a2cc
	goto loc_82F8A2CC;
}

__attribute__((alias("__imp__sub_82F8A2F4"))) PPC_WEAK_FUNC(sub_82F8A2F4);
PPC_FUNC_IMPL(__imp__sub_82F8A2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8A2F8"))) PPC_WEAK_FUNC(sub_82F8A2F8);
PPC_FUNC_IMPL(__imp__sub_82F8A2F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82F8A300;
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82ef6fe0
	ctx.lr = 0x82F8A318;
	sub_82EF6FE0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,13936
	ctx.r11.s64 = ctx.r11.s64 + 13936;
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// stw r29,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r29.u32);
	// bl 0x82ef7600
	ctx.lr = 0x82F8A338;
	sub_82EF7600(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r3,72
	ctx.r3.s64 = 72;
	// stw r10,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r10.u32);
	// lfs f31,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,36(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// stw r31,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r31.u32);
	// stw r28,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r28.u32);
	// bl 0x82ef6ef8
	ctx.lr = 0x82F8A35C;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f8a388
	if (ctx.cr0.eq) goto loc_82F8A388;
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
	// bl 0x82f4a3d0
	ctx.lr = 0x82F8A380;
	sub_82F4A3D0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// b 0x82f8a38c
	goto loc_82F8A38C;
loc_82F8A388:
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
loc_82F8A38C:
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F8A394;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f8a3b0
	if (ctx.cr0.eq) goto loc_82F8A3B0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82f48ea8
	ctx.lr = 0x82F8A3A8;
	sub_82F48EA8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x82f8a3b4
	goto loc_82F8A3B4;
loc_82F8A3B0:
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_82F8A3B4:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F8A3BC;
	sub_82EF6EF8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82f8a400
	if (ctx.cr0.eq) goto loc_82F8A400;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82ef7600
	ctx.lr = 0x82F8A3DC;
	sub_82EF7600(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82f8a3ec
	if (ctx.cr6.eq) goto loc_82F8A3EC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ef1710
	ctx.lr = 0x82F8A3EC;
	sub_82EF1710(ctx, base);
loc_82F8A3EC:
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stfs f31,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// b 0x82f8a404
	goto loc_82F8A404;
loc_82F8A400:
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
loc_82F8A404:
	// lwz r31,28(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f8a430
	if (ctx.cr6.eq) goto loc_82F8A430;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bne 0x82f8a430
	if (!ctx.cr0.eq) goto loc_82F8A430;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f04c78
	ctx.lr = 0x82F8A428;
	sub_82F04C78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F8A430;
	sub_82EF6F38(ctx, base);
loc_82F8A430:
	// stw r27,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r27.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82f8a444
	if (ctx.cr6.eq) goto loc_82F8A444;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ef1bf0
	ctx.lr = 0x82F8A444;
	sub_82EF1BF0(ctx, base);
loc_82F8A444:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82f8a464
	if (ctx.cr6.eq) goto loc_82F8A464;
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F8A464;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F8A464:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82F8A474"))) PPC_WEAK_FUNC(sub_82F8A474);
PPC_FUNC_IMPL(__imp__sub_82F8A474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8A478"))) PPC_WEAK_FUNC(sub_82F8A478);
PPC_FUNC_IMPL(__imp__sub_82F8A478) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,-1
	ctx.r8.s64 = -1;
	// addi r11,r11,13936
	ctx.r11.s64 = ctx.r11.s64 + 13936;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r6,r3,8
	ctx.r6.s64 = ctx.r3.s64 + 8;
loc_82F8A4A8:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stwcx. r9,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82f8a4a8
	if (!ctx.cr0.eq) goto loc_82F8A4A8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f8a4d4
	if (!ctx.cr0.eq) goto loc_82F8A4D4;
	// bl 0x82ef6f38
	ctx.lr = 0x82F8A4D4;
	sub_82EF6F38(ctx, base);
loc_82F8A4D4:
	// lwz r31,28(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f8a500
	if (ctx.cr6.eq) goto loc_82F8A500;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bne 0x82f8a500
	if (!ctx.cr0.eq) goto loc_82F8A500;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f04c78
	ctx.lr = 0x82F8A4F8;
	sub_82F04C78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F8A500;
	sub_82EF6F38(ctx, base);
loc_82F8A500:
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x82f14bf0
	ctx.lr = 0x82F8A508;
	sub_82F14BF0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ef70b0
	ctx.lr = 0x82F8A510;
	sub_82EF70B0(ctx, base);
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

__attribute__((alias("__imp__sub_82F8A528"))) PPC_WEAK_FUNC(sub_82F8A528);
PPC_FUNC_IMPL(__imp__sub_82F8A528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82F8A530;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82f89f28
	ctx.lr = 0x82F8A550;
	sub_82F89F28(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82f8a630
	if (!ctx.cr0.eq) goto loc_82F8A630;
	// clrlwi. r27,r30,30
	ctx.r27.u64 = ctx.r30.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x82f8a5e0
	if (ctx.cr0.eq) goto loc_82F8A5E0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r5,r30,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f89f28
	ctx.lr = 0x82F8A574;
	sub_82F89F28(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82f8a5e0
	if (ctx.cr0.eq) goto loc_82F8A5E0;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F8A584;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f8a59c
	if (ctx.cr0.eq) goto loc_82F8A59C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f89420
	ctx.lr = 0x82F8A594;
	sub_82F89420(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82f8a5a0
	goto loc_82F8A5A0;
loc_82F8A59C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82F8A5A0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r28,16
	ctx.r3.s64 = ctx.r28.s64 + 16;
	// or r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 | ctx.r27.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82f89ec8
	ctx.lr = 0x82F8A5BC;
	sub_82F89EC8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bne 0x82f8a630
	if (!ctx.cr0.eq) goto loc_82F8A630;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f04c78
	ctx.lr = 0x82F8A5D4;
	sub_82F04C78(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F8A5DC;
	sub_82EF6F38(ctx, base);
	// b 0x82f8a630
	goto loc_82F8A630;
loc_82F8A5E0:
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f8a630
	if (ctx.cr6.eq) goto loc_82F8A630;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F8A5F4;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f8a61c
	if (ctx.cr0.eq) goto loc_82F8A61C;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82f04bc8
	ctx.lr = 0x82F8A614;
	sub_82F04BC8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82f8a620
	goto loc_82F8A620;
loc_82F8A61C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82F8A620:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r28,16
	ctx.r3.s64 = ctx.r28.s64 + 16;
	// bl 0x82f89ec8
	ctx.lr = 0x82F8A630;
	sub_82F89EC8(ctx, base);
loc_82F8A630:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82F8A63C"))) PPC_WEAK_FUNC(sub_82F8A63C);
PPC_FUNC_IMPL(__imp__sub_82F8A63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8A640"))) PPC_WEAK_FUNC(sub_82F8A640);
PPC_FUNC_IMPL(__imp__sub_82F8A640) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f8a528
	ctx.lr = 0x82F8A65C;
	sub_82F8A528(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82f8a678
	if (!ctx.cr0.eq) goto loc_82F8A678;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
loc_82F8A678:
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

__attribute__((alias("__imp__sub_82F8A68C"))) PPC_WEAK_FUNC(sub_82F8A68C);
PPC_FUNC_IMPL(__imp__sub_82F8A68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8A690"))) PPC_WEAK_FUNC(sub_82F8A690);
PPC_FUNC_IMPL(__imp__sub_82F8A690) {
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
	// bl 0x82f8a478
	ctx.lr = 0x82F8A6B0;
	sub_82F8A478(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8a6c0
	if (ctx.cr0.eq) goto loc_82F8A6C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F8A6C0;
	sub_82EF6F38(ctx, base);
loc_82F8A6C0:
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

__attribute__((alias("__imp__sub_82F8A6DC"))) PPC_WEAK_FUNC(sub_82F8A6DC);
PPC_FUNC_IMPL(__imp__sub_82F8A6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8A6E0"))) PPC_WEAK_FUNC(sub_82F8A6E0);
PPC_FUNC_IMPL(__imp__sub_82F8A6E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F8A6E8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,160
	ctx.r3.s64 = 160;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F8A700;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f8a73c
	if (ctx.cr0.eq) goto loc_82F8A73C;
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
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82f64570
	ctx.lr = 0x82F8A738;
	sub_82F64570(ctx, base);
	// b 0x82f8a740
	goto loc_82F8A740;
loc_82F8A73C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F8A740:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F8A748"))) PPC_WEAK_FUNC(sub_82F8A748);
PPC_FUNC_IMPL(__imp__sub_82F8A748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82F8A750;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f8a7a0
	if (!ctx.cr6.gt) goto loc_82F8A7A0;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82F8A770:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F8A78C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f8a770
	if (ctx.cr6.lt) goto loc_82F8A770;
loc_82F8A7A0:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82F8A7B0"))) PPC_WEAK_FUNC(sub_82F8A7B0);
PPC_FUNC_IMPL(__imp__sub_82F8A7B0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f6ae90
	ctx.lr = 0x82F8A7D8;
	sub_82F6AE90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,180
	ctx.r3.s64 = ctx.r31.s64 + 180;
	// bl 0x82f68378
	ctx.lr = 0x82F8A7E4;
	sub_82F68378(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f67f08
	ctx.lr = 0x82F8A7EC;
	sub_82F67F08(ctx, base);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,9
	ctx.r9.s64 = 9;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r9,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r9.u8);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,268
	ctx.r5.s64 = ctx.r11.s64 + 268;
	// bl 0x82f88220
	ctx.lr = 0x82F8A818;
	sub_82F88220(ctx, base);
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8a82c
	if (ctx.cr6.lt) goto loc_82F8A82C;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8A82C;
	sub_82F6BAA0(ctx, base);
loc_82F8A82C:
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_82F8A848"))) PPC_WEAK_FUNC(sub_82F8A848);
PPC_FUNC_IMPL(__imp__sub_82F8A848) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd0
	ctx.lr = 0x82F8A850;
	sub_82CA2BD0(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r10,r11,14140
	ctx.r10.s64 = ctx.r11.s64 + 14140;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r9,0(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82F8A884:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82f8a8a8
	if (ctx.cr0.eq) goto loc_82F8A8A8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f8a884
	if (ctx.cr6.eq) goto loc_82F8A884;
loc_82F8A8A8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f8a9fc
	if (!ctx.cr0.eq) goto loc_82F8A9FC;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6b390
	ctx.lr = 0x82F8A8C4;
	sub_82F6B390(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r10,r11,-6028
	ctx.r10.s64 = ctx.r11.s64 + -6028;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82F8A8D8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82f8a8fc
	if (ctx.cr0.eq) goto loc_82F8A8FC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f8a8d8
	if (ctx.cr6.eq) goto loc_82F8A8D8;
loc_82F8A8FC:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f8a90c
	if (!ctx.cr0.eq) goto loc_82F8A90C;
	// stw r28,156(r25)
	PPC_STORE_U32(ctx.r25.u32 + 156, ctx.r28.u32);
	// b 0x82f8a9d0
	goto loc_82F8A9D0;
loc_82F8A90C:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,-6020
	ctx.r10.s64 = ctx.r10.s64 + -6020;
loc_82F8A918:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82f8a93c
	if (ctx.cr0.eq) goto loc_82F8A93C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f8a918
	if (ctx.cr6.eq) goto loc_82F8A918;
loc_82F8A93C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f8a950
	if (!ctx.cr0.eq) goto loc_82F8A950;
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r30,156(r25)
	PPC_STORE_U32(ctx.r25.u32 + 156, ctx.r30.u32);
	// b 0x82f8a9d4
	goto loc_82F8A9D4;
loc_82F8A950:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,-6012
	ctx.r10.s64 = ctx.r10.s64 + -6012;
loc_82F8A95C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82f8a980
	if (ctx.cr0.eq) goto loc_82F8A980;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f8a95c
	if (ctx.cr6.eq) goto loc_82F8A95C;
loc_82F8A980:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f8a990
	if (!ctx.cr0.eq) goto loc_82F8A990;
	// li r9,3
	ctx.r9.s64 = 3;
	// b 0x82f8a9cc
	goto loc_82F8A9CC;
loc_82F8A990:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,14132
	ctx.r10.s64 = ctx.r10.s64 + 14132;
loc_82F8A99C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f8a9c0
	if (ctx.cr0.eq) goto loc_82F8A9C0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f8a99c
	if (ctx.cr6.eq) goto loc_82F8A99C;
loc_82F8A9C0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f8a9e4
	if (!ctx.cr0.eq) goto loc_82F8A9E4;
	// li r9,2
	ctx.r9.s64 = 2;
loc_82F8A9CC:
	// stw r9,156(r25)
	PPC_STORE_U32(ctx.r25.u32 + 156, ctx.r9.u32);
loc_82F8A9D0:
	// li r30,1
	ctx.r30.s64 = 1;
loc_82F8A9D4:
	// lbz r10,161(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 161);
	// addi r11,r25,124
	ctx.r11.s64 = ctx.r25.s64 + 124;
	// ori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 | 1;
	// stb r11,161(r25)
	PPC_STORE_U8(ctx.r25.u32 + 161, ctx.r11.u8);
loc_82F8A9E4:
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82f8b1e8
	goto loc_82F8B1E8;
loc_82F8A9FC:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,14120
	ctx.r10.s64 = ctx.r10.s64 + 14120;
loc_82F8AA08:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82f8aa2c
	if (ctx.cr0.eq) goto loc_82F8AA2C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f8aa08
	if (ctx.cr6.eq) goto loc_82F8AA08;
loc_82F8AA2C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f8aa8c
	if (!ctx.cr0.eq) goto loc_82F8AA8C;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x82f6b480
	ctx.lr = 0x82F8AA44;
	sub_82F6B480(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,3376(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3376);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82f8aa64
	if (ctx.cr6.lt) goto loc_82F8AA64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfd f0,14112(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 14112);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82f8aa68
	if (!ctx.cr6.gt) goto loc_82F8AA68;
loc_82F8AA64:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
loc_82F8AA68:
	// lbz r11,161(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 161);
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// ori r9,r11,2
	ctx.r9.u64 = ctx.r11.u64 | 2;
	// sth r10,144(r25)
	PPC_STORE_U16(ctx.r25.u32 + 144, ctx.r10.u16);
	// addi r11,r25,124
	ctx.r11.s64 = ctx.r25.s64 + 124;
	// stb r9,161(r25)
	PPC_STORE_U8(ctx.r25.u32 + 161, ctx.r9.u8);
	// b 0x82f8b3dc
	goto loc_82F8B3DC;
loc_82F8AA8C:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,14104
	ctx.r10.s64 = ctx.r10.s64 + 14104;
loc_82F8AA98:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82f8aabc
	if (ctx.cr0.eq) goto loc_82F8AABC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f8aa98
	if (ctx.cr6.eq) goto loc_82F8AA98;
loc_82F8AABC:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f8aae4
	if (!ctx.cr0.eq) goto loc_82F8AAE4;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x82f6b840
	ctx.lr = 0x82F8AAD4;
	sub_82F6B840(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r25,32
	ctx.r3.s64 = ctx.r25.s64 + 32;
	// bl 0x82f75fb0
	ctx.lr = 0x82F8AAE0;
	sub_82F75FB0(ctx, base);
	// b 0x82f8b3dc
	goto loc_82F8B3DC;
loc_82F8AAE4:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,14096
	ctx.r10.s64 = ctx.r10.s64 + 14096;
loc_82F8AAF0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82f8ab14
	if (ctx.cr0.eq) goto loc_82F8AB14;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f8aaf0
	if (ctx.cr6.eq) goto loc_82F8AAF0;
loc_82F8AB14:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f8ab44
	if (!ctx.cr0.eq) goto loc_82F8AB44;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r31,r25,124
	ctx.r31.s64 = ctx.r25.s64 + 124;
	// bl 0x82f6b840
	ctx.lr = 0x82F8AB30;
	sub_82F6B840(ctx, base);
	// lbz r11,161(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 161);
	// stb r3,160(r25)
	PPC_STORE_U8(ctx.r25.u32 + 160, ctx.r3.u8);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stb r11,161(r25)
	PPC_STORE_U8(ctx.r25.u32 + 161, ctx.r11.u8);
	// b 0x82f8b3dc
	goto loc_82F8B3DC;
loc_82F8AB44:
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,-3060
	ctx.r10.s64 = ctx.r10.s64 + -3060;
loc_82F8AB50:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82f8ab74
	if (ctx.cr0.eq) goto loc_82F8AB74;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f8ab50
	if (ctx.cr6.eq) goto loc_82F8AB50;
loc_82F8AB74:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f8abc8
	if (!ctx.cr0.eq) goto loc_82F8ABC8;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x82f6b480
	ctx.lr = 0x82F8AB8C;
	sub_82F6B480(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,3376(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3376);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82f8b3dc
	if (ctx.cr6.lt) goto loc_82F8B3DC;
	// fctidz f0,f1
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r11,60(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 60);
	// lhz r10,120(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 120);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// sth r10,120(r25)
	PPC_STORE_U16(ctx.r25.u32 + 120, ctx.r10.u16);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwimi r9,r11,0,0,7
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFF000000) | (ctx.r9.u64 & 0xFFFFFFFF00FFFFFF);
	// addi r11,r25,32
	ctx.r11.s64 = ctx.r25.s64 + 32;
	// stw r9,60(r25)
	PPC_STORE_U32(ctx.r25.u32 + 60, ctx.r9.u32);
	// b 0x82f8b3dc
	goto loc_82F8B3DC;
loc_82F8ABC8:
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,-16208
	ctx.r10.s64 = ctx.r10.s64 + -16208;
loc_82F8ABD4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82f8abf8
	if (ctx.cr0.eq) goto loc_82F8ABF8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f8abd4
	if (ctx.cr6.eq) goto loc_82F8ABD4;
loc_82F8ABF8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f8ac38
	if (!ctx.cr0.eq) goto loc_82F8AC38;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x82f6b390
	ctx.lr = 0x82F8AC18;
	sub_82F6B390(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r25,32
	ctx.r3.s64 = ctx.r25.s64 + 32;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82f75d58
	ctx.lr = 0x82F8AC30;
	sub_82F75D58(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82f8b1d0
	goto loc_82F8B1D0;
loc_82F8AC38:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,14088
	ctx.r10.s64 = ctx.r10.s64 + 14088;
loc_82F8AC44:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82f8ac68
	if (ctx.cr0.eq) goto loc_82F8AC68;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f8ac44
	if (ctx.cr6.eq) goto loc_82F8AC44;
loc_82F8AC68:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f8acc8
	if (!ctx.cr0.eq) goto loc_82F8ACC8;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x82f6b480
	ctx.lr = 0x82F8AC80;
	sub_82F6B480(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfd f0,14080(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 14080);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82f8aca0
	if (ctx.cr6.lt) goto loc_82F8ACA0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfd f0,14112(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 14112);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82f8aca4
	if (!ctx.cr6.gt) goto loc_82F8ACA4;
loc_82F8ACA0:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
loc_82F8ACA4:
	// lbz r11,161(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 161);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// ori r9,r11,4
	ctx.r9.u64 = ctx.r11.u64 | 4;
	// sth r10,146(r25)
	PPC_STORE_U16(ctx.r25.u32 + 146, ctx.r10.u16);
	// addi r11,r25,124
	ctx.r11.s64 = ctx.r25.s64 + 124;
	// stb r9,161(r25)
	PPC_STORE_U8(ctx.r25.u32 + 161, ctx.r9.u8);
	// b 0x82f8b3dc
	goto loc_82F8B3DC;
loc_82F8ACC8:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,14068
	ctx.r10.s64 = ctx.r10.s64 + 14068;
loc_82F8ACD4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82f8acf8
	if (ctx.cr0.eq) goto loc_82F8ACF8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f8acd4
	if (ctx.cr6.eq) goto loc_82F8ACD4;
loc_82F8ACF8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f8ad20
	if (!ctx.cr0.eq) goto loc_82F8AD20;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x82f6b840
	ctx.lr = 0x82F8AD10;
	sub_82F6B840(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r25,32
	ctx.r3.s64 = ctx.r25.s64 + 32;
	// bl 0x82f76038
	ctx.lr = 0x82F8AD1C;
	sub_82F76038(ctx, base);
	// b 0x82f8b3dc
	goto loc_82F8B3DC;
loc_82F8AD20:
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,-16216
	ctx.r10.s64 = ctx.r10.s64 + -16216;
loc_82F8AD2C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82f8ad50
	if (ctx.cr0.eq) goto loc_82F8AD50;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f8ad2c
	if (ctx.cr6.eq) goto loc_82F8AD2C;
loc_82F8AD50:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f8adb0
	if (!ctx.cr0.eq) goto loc_82F8ADB0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x82f6b480
	ctx.lr = 0x82F8AD68;
	sub_82F6B480(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfd f0,14080(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 14080);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82f8ad88
	if (ctx.cr6.lt) goto loc_82F8AD88;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfd f0,14112(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 14112);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82f8ad8c
	if (!ctx.cr6.gt) goto loc_82F8AD8C;
loc_82F8AD88:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
loc_82F8AD8C:
	// lbz r10,161(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 161);
	// addi r11,r25,124
	ctx.r11.s64 = ctx.r25.s64 + 124;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// ori r11,r10,8
	ctx.r11.u64 = ctx.r10.u64 | 8;
	// stb r11,161(r25)
	PPC_STORE_U8(ctx.r25.u32 + 161, ctx.r11.u8);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// sth r11,148(r25)
	PPC_STORE_U16(ctx.r25.u32 + 148, ctx.r11.u16);
	// b 0x82f8b3dc
	goto loc_82F8B3DC;
loc_82F8ADB0:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,14056
	ctx.r10.s64 = ctx.r10.s64 + 14056;
loc_82F8ADBC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82f8ade0
	if (ctx.cr0.eq) goto loc_82F8ADE0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f8adbc
	if (ctx.cr6.eq) goto loc_82F8ADBC;
loc_82F8ADE0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f8ae40
	if (!ctx.cr0.eq) goto loc_82F8AE40;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x82f6b480
	ctx.lr = 0x82F8ADF8;
	sub_82F6B480(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,3376(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3376);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82f8ae18
	if (ctx.cr6.lt) goto loc_82F8AE18;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfd f0,14112(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 14112);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82f8ae1c
	if (!ctx.cr6.gt) goto loc_82F8AE1C;
loc_82F8AE18:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
loc_82F8AE1C:
	// lbz r11,161(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 161);
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// ori r9,r11,16
	ctx.r9.u64 = ctx.r11.u64 | 16;
	// sth r10,150(r25)
	PPC_STORE_U16(ctx.r25.u32 + 150, ctx.r10.u16);
	// addi r11,r25,124
	ctx.r11.s64 = ctx.r25.s64 + 124;
	// stb r9,161(r25)
	PPC_STORE_U8(ctx.r25.u32 + 161, ctx.r9.u8);
	// b 0x82f8b3dc
	goto loc_82F8B3DC;
loc_82F8AE40:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,14044
	ctx.r10.s64 = ctx.r10.s64 + 14044;
loc_82F8AE4C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82f8ae70
	if (ctx.cr0.eq) goto loc_82F8AE70;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f8ae4c
	if (ctx.cr6.eq) goto loc_82F8AE4C;
loc_82F8AE70:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f8aed0
	if (!ctx.cr0.eq) goto loc_82F8AED0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x82f6b480
	ctx.lr = 0x82F8AE88;
	sub_82F6B480(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,3376(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3376);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82f8aea8
	if (ctx.cr6.lt) goto loc_82F8AEA8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfd f0,14112(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 14112);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82f8aeac
	if (!ctx.cr6.gt) goto loc_82F8AEAC;
loc_82F8AEA8:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
loc_82F8AEAC:
	// lbz r10,161(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 161);
	// addi r11,r25,124
	ctx.r11.s64 = ctx.r25.s64 + 124;
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// ori r11,r10,32
	ctx.r11.u64 = ctx.r10.u64 | 32;
	// stb r11,161(r25)
	PPC_STORE_U8(ctx.r25.u32 + 161, ctx.r11.u8);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// sth r11,152(r25)
	PPC_STORE_U16(ctx.r25.u32 + 152, ctx.r11.u16);
	// b 0x82f8b3dc
	goto loc_82F8B3DC;
loc_82F8AED0:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,-22728
	ctx.r10.s64 = ctx.r10.s64 + -22728;
loc_82F8AEDC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82f8af00
	if (ctx.cr0.eq) goto loc_82F8AF00;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f8aedc
	if (ctx.cr6.eq) goto loc_82F8AEDC;
loc_82F8AF00:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f8afa8
	if (!ctx.cr0.eq) goto loc_82F8AFA8;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x82f6b480
	ctx.lr = 0x82F8AF18;
	sub_82F6B480(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,3376(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3376);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82f8b3dc
	if (ctx.cr6.lt) goto loc_82F8B3DC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,3536(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3536);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82f8af8c
	if (!ctx.cr6.lt) goto loc_82F8AF8C;
	// fctidz f0,f1
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfd f13,11984(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 11984);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82f8af80
	if (!ctx.cr6.lt) goto loc_82F8AF80;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2756(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2756);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lhz r11,102(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 102);
	// b 0x82f8af84
	goto loc_82F8AF84;
loc_82F8AF80:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82F8AF84:
	// sth r11,66(r25)
	PPC_STORE_U16(ctx.r25.u32 + 66, ctx.r11.u16);
	// b 0x82f8af98
	goto loc_82F8AF98;
loc_82F8AF8C:
	// li r9,2540
	ctx.r9.s64 = 2540;
	// addi r11,r25,32
	ctx.r11.s64 = ctx.r25.s64 + 32;
	// sth r9,66(r25)
	PPC_STORE_U16(ctx.r25.u32 + 66, ctx.r9.u16);
loc_82F8AF98:
	// lhz r10,120(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 120);
	// ori r11,r10,8
	ctx.r11.u64 = ctx.r10.u64 | 8;
	// sth r11,120(r25)
	PPC_STORE_U16(ctx.r25.u32 + 120, ctx.r11.u16);
	// b 0x82f8b3dc
	goto loc_82F8B3DC;
loc_82F8AFA8:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,14032
	ctx.r10.s64 = ctx.r10.s64 + 14032;
loc_82F8AFB4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82f8afd8
	if (ctx.cr0.eq) goto loc_82F8AFD8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f8afb4
	if (ctx.cr6.eq) goto loc_82F8AFB4;
loc_82F8AFD8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f8b10c
	if (!ctx.cr0.eq) goto loc_82F8B10C;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x82f8b3dc
	if (!ctx.cr6.eq) goto loc_82F8B3DC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f6ad80
	ctx.lr = 0x82F8AFF8;
	sub_82F6AD80(ctx, base);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F8B00C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// bne cr6,0x82f8b3dc
	if (!ctx.cr6.eq) goto loc_82F8B3DC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f6ad80
	ctx.lr = 0x82F8B01C;
	sub_82F6AD80(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r25,124
	ctx.r30.s64 = ctx.r25.s64 + 124;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82f6ed30
	ctx.lr = 0x82F8B030;
	sub_82F6ED30(ctx, base);
	// lbz r11,161(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 161);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stb r11,161(r25)
	PPC_STORE_U8(ctx.r25.u32 + 161, ctx.r11.u8);
	// lwz r26,56(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x82f8b0c8
	if (!ctx.cr6.gt) goto loc_82F8B0C8;
loc_82F8B04C:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwzx r3,r28,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// bl 0x82f6b480
	ctx.lr = 0x82F8B05C;
	sub_82F6B480(ctx, base);
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r27,100(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f0,104(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f0.u64);
	// bl 0x82f9bc28
	ctx.lr = 0x82F8B094;
	sub_82F9BC28(ctx, base);
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8b0a8
	if (ctx.cr6.lt) goto loc_82F8B0A8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8B0A8;
	sub_82F6BAA0(ctx, base);
loc_82F8B0A8:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f6d540
	ctx.lr = 0x82F8B0B8;
	sub_82F6D540(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r29,r26
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x82f8b04c
	if (ctx.cr6.lt) goto loc_82F8B04C;
loc_82F8B0C8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f6aba0
	ctx.lr = 0x82F8B0D4;
	sub_82F6ABA0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// bl 0x82f88a68
	ctx.lr = 0x82F8B0EC;
	sub_82F88A68(ctx, base);
	// lbz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8b104
	if (ctx.cr6.lt) goto loc_82F8B104;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8B104;
	sub_82F6BAA0(ctx, base);
loc_82F8B104:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82f8b404
	goto loc_82F8B404;
loc_82F8B10C:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,14020
	ctx.r10.s64 = ctx.r10.s64 + 14020;
loc_82F8B118:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82f8b13c
	if (ctx.cr0.eq) goto loc_82F8B13C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f8b118
	if (ctx.cr6.eq) goto loc_82F8B118;
loc_82F8B13C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f8b164
	if (!ctx.cr0.eq) goto loc_82F8B164;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x82f6b840
	ctx.lr = 0x82F8B154;
	sub_82F6B840(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r25,32
	ctx.r3.s64 = ctx.r25.s64 + 32;
	// bl 0x82f6d4b0
	ctx.lr = 0x82F8B160;
	sub_82F6D4B0(ctx, base);
	// b 0x82f8b3dc
	goto loc_82F8B3DC;
loc_82F8B164:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,14016
	ctx.r10.s64 = ctx.r10.s64 + 14016;
loc_82F8B170:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82f8b194
	if (ctx.cr0.eq) goto loc_82F8B194;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f8b170
	if (ctx.cr6.eq) goto loc_82F8B170;
loc_82F8B194:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f8b1f8
	if (!ctx.cr0.eq) goto loc_82F8B1F8;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x82f6b390
	ctx.lr = 0x82F8B1B4;
	sub_82F6B390(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r25,32
	ctx.r3.s64 = ctx.r25.s64 + 32;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82f6d3d8
	ctx.lr = 0x82F8B1CC;
	sub_82F6D3D8(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_82F8B1D0:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
loc_82F8B1E8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f8b3dc
	if (!ctx.cr6.eq) goto loc_82F8B3DC;
	// bl 0x82f670f0
	ctx.lr = 0x82F8B1F4;
	sub_82F670F0(ctx, base);
	// b 0x82f8b3dc
	goto loc_82F8B3DC;
loc_82F8B1F8:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,14008
	ctx.r10.s64 = ctx.r10.s64 + 14008;
loc_82F8B204:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82f8b228
	if (ctx.cr0.eq) goto loc_82F8B228;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f8b204
	if (ctx.cr6.eq) goto loc_82F8B204;
loc_82F8B228:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82f8b3d8
	if (ctx.cr0.eq) goto loc_82F8B3D8;
	// lbz r11,124(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 124);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x82f8b328
	if (ctx.cr6.lt) goto loc_82F8B328;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,13992
	ctx.r10.s64 = ctx.r10.s64 + 13992;
loc_82F8B248:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82f8b26c
	if (ctx.cr0.eq) goto loc_82F8B26C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f8b248
	if (ctx.cr6.eq) goto loc_82F8B248;
loc_82F8B26C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f8b2d8
	if (!ctx.cr0.eq) goto loc_82F8B2D8;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f6b480
	ctx.lr = 0x82F8B280;
	sub_82F6B480(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfd f0,14080(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 14080);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82f8b2a0
	if (ctx.cr6.lt) goto loc_82F8B2A0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfd f0,14112(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 14112);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82f8b2a4
	if (!ctx.cr6.gt) goto loc_82F8B2A4;
loc_82F8B2A0:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
loc_82F8B2A4:
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lhz r9,120(r25)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r25.u32 + 120);
	// addi r11,r25,32
	ctx.r11.s64 = ctx.r25.s64 + 32;
	// ori r11,r9,2
	ctx.r11.u64 = ctx.r9.u64 | 2;
	// lfs f0,2756(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2756);
	ctx.f0.f64 = double(temp.f32);
	// sth r11,120(r25)
	PPC_STORE_U16(ctx.r25.u32 + 120, ctx.r11.u16);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// lhz r11,110(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 110);
	// sth r11,64(r25)
	PPC_STORE_U16(ctx.r25.u32 + 64, ctx.r11.u16);
	// b 0x82f8b328
	goto loc_82F8B328;
loc_82F8B2D8:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,13984
	ctx.r10.s64 = ctx.r10.s64 + 13984;
loc_82F8B2E4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f8b308
	if (ctx.cr0.eq) goto loc_82F8B308;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f8b2e4
	if (ctx.cr6.eq) goto loc_82F8B2E4;
loc_82F8B308:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f8b328
	if (!ctx.cr0.eq) goto loc_82F8B328;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f6b840
	ctx.lr = 0x82F8B31C;
	sub_82F6B840(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r25,32
	ctx.r3.s64 = ctx.r25.s64 + 32;
	// bl 0x82f6d4e0
	ctx.lr = 0x82F8B328;
	sub_82F6D4E0(ctx, base);
loc_82F8B328:
	// lwz r11,120(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 120);
	// lbz r11,600(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 600);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82f8b3d8
	if (!ctx.cr6.eq) goto loc_82F8B3D8;
	// lwz r9,0(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r10,r11,9108
	ctx.r10.s64 = ctx.r11.s64 + 9108;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82F8B348:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f8b36c
	if (ctx.cr0.eq) goto loc_82F8B36C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f8b348
	if (ctx.cr6.eq) goto loc_82F8B348;
loc_82F8B36C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f8b3d8
	if (!ctx.cr0.eq) goto loc_82F8B3D8;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f6b480
	ctx.lr = 0x82F8B380;
	sub_82F6B480(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,3376(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3376);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82f8b3a0
	if (ctx.cr6.lt) goto loc_82F8B3A0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,31192(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 31192);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82f8b3a4
	if (!ctx.cr6.gt) goto loc_82F8B3A4;
loc_82F8B3A0:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
loc_82F8B3A4:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lhz r8,120(r25)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r25.u32 + 120);
	// addi r11,r25,32
	ctx.r11.s64 = ctx.r25.s64 + 32;
	// lwz r9,60(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 60);
	// ori r11,r8,1024
	ctx.r11.u64 = ctx.r8.u64 | 1024;
	// sth r11,120(r25)
	PPC_STORE_U16(ctx.r25.u32 + 120, ctx.r11.u16);
	// lfd f0,13976(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 13976);
	// fmul f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 * ctx.f0.f64;
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// lbz r11,111(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 111);
	// rlwimi r9,r11,24,0,7
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 24) & 0xFF000000) | (ctx.r9.u64 & 0xFFFFFFFF00FFFFFF);
	// stw r9,60(r25)
	PPC_STORE_U32(ctx.r25.u32 + 60, ctx.r9.u32);
loc_82F8B3D8:
	// li r30,1
	ctx.r30.s64 = 1;
loc_82F8B3DC:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8b400
	if (ctx.cr0.eq) goto loc_82F8B400;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82f88a68
	ctx.lr = 0x82F8B3FC;
	sub_82F88A68(ctx, base);
	// b 0x82f8b404
	goto loc_82F8B404;
loc_82F8B400:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F8B404:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c20
	// ERROR 82CA2C20
	return;
}

__attribute__((alias("__imp__sub_82F8B40C"))) PPC_WEAK_FUNC(sub_82F8B40C);
PPC_FUNC_IMPL(__imp__sub_82F8B40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8B410"))) PPC_WEAK_FUNC(sub_82F8B410);
PPC_FUNC_IMPL(__imp__sub_82F8B410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82F8B418;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r30,140
	ctx.r3.s64 = ctx.r30.s64 + 140;
	// bl 0x82f6ee08
	ctx.lr = 0x82F8B43C;
	sub_82F6EE08(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// lbz r11,37(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 37);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8b518
	if (ctx.cr0.eq) goto loc_82F8B518;
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r5,r10,-6028
	ctx.r5.s64 = ctx.r10.s64 + -6028;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82f8b48c
	if (ctx.cr6.eq) goto loc_82F8B48C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82f8b480
	if (ctx.cr6.eq) goto loc_82F8B480;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82f8b494
	if (!ctx.cr6.eq) goto loc_82F8B494;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-6012
	ctx.r5.s64 = ctx.r11.s64 + -6012;
	// b 0x82f8b494
	goto loc_82F8B494;
loc_82F8B480:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,14132
	ctx.r5.s64 = ctx.r11.s64 + 14132;
	// b 0x82f8b494
	goto loc_82F8B494;
loc_82F8B48C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-6020
	ctx.r5.s64 = ctx.r11.s64 + -6020;
loc_82F8B494:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f114a8
	ctx.lr = 0x82F8B4A0;
	sub_82F114A8(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stb r11,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r11.u8);
	// addi r28,r30,16
	ctx.r28.s64 = ctx.r30.s64 + 16;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r10,14140
	ctx.r5.s64 = ctx.r10.s64 + 14140;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f048d0
	ctx.lr = 0x82F8B4D8;
	sub_82F048D0(ctx, base);
	// lbz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8b4ec
	if (ctx.cr6.lt) goto loc_82F8B4EC;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8B4EC;
	sub_82F6BAA0(ctx, base);
loc_82F8B4EC:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f8b534
	if (!ctx.cr6.eq) goto loc_82F8B534;
	// bl 0x82f670f0
	ctx.lr = 0x82F8B514;
	sub_82F670F0(ctx, base);
	// b 0x82f8b534
	goto loc_82F8B534;
loc_82F8B518:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r28,r30,16
	ctx.r28.s64 = ctx.r30.s64 + 16;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r11,14140
	ctx.r5.s64 = ctx.r11.s64 + 14140;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f048d0
	ctx.lr = 0x82F8B534;
	sub_82F048D0(ctx, base);
loc_82F8B534:
	// lbz r11,37(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 37);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8b568
	if (ctx.cr0.eq) goto loc_82F8B568;
	// lbz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 36);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r31,1
	ctx.r31.s64 = 1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// stb r10,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r10.u8);
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stb r11,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r11.u8);
	// b 0x82f8b56c
	goto loc_82F8B56C;
loc_82F8B568:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
loc_82F8B56C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r5,r11,14096
	ctx.r5.s64 = ctx.r11.s64 + 14096;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f048d0
	ctx.lr = 0x82F8B580;
	sub_82F048D0(ctx, base);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8b5a0
	if (ctx.cr0.eq) goto loc_82F8B5A0;
	// lbz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 176);
	// rlwinm r31,r31,0,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8b5a0
	if (ctx.cr6.lt) goto loc_82F8B5A0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8B5A0;
	sub_82F6BAA0(ctx, base);
loc_82F8B5A0:
	// lbz r11,37(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 37);
	// li r26,3
	ctx.r26.s64 = 3;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8b5d4
	if (ctx.cr0.eq) goto loc_82F8B5D4;
	// lhz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 20);
	// ori r31,r31,2
	ctx.r31.u64 = ctx.r31.u64 | 2;
	// stb r26,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r26.u8);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f0.u64);
	// b 0x82f8b5d8
	goto loc_82F8B5D8;
loc_82F8B5D4:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
loc_82F8B5D8:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r5,r11,14120
	ctx.r5.s64 = ctx.r11.s64 + 14120;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f048d0
	ctx.lr = 0x82F8B5EC;
	sub_82F048D0(ctx, base);
	// rlwinm. r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8b60c
	if (ctx.cr0.eq) goto loc_82F8B60C;
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// rlwinm r31,r31,0,31,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8b60c
	if (ctx.cr6.lt) goto loc_82F8B60C;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8B60C;
	sub_82F6BAA0(ctx, base);
loc_82F8B60C:
	// lbz r11,37(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 37);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8b63c
	if (ctx.cr0.eq) goto loc_82F8B63C;
	// lha r11,22(r29)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r29.u32 + 22));
	// ori r31,r31,4
	ctx.r31.u64 = ctx.r31.u64 | 4;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.f0.u64);
	// stb r26,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r26.u8);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// b 0x82f8b640
	goto loc_82F8B640;
loc_82F8B63C:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
loc_82F8B640:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r5,r11,14088
	ctx.r5.s64 = ctx.r11.s64 + 14088;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f048d0
	ctx.lr = 0x82F8B654;
	sub_82F048D0(ctx, base);
	// rlwinm. r11,r31,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8b674
	if (ctx.cr0.eq) goto loc_82F8B674;
	// lbz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 192);
	// rlwinm r31,r31,0,30,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8b674
	if (ctx.cr6.lt) goto loc_82F8B674;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8B674;
	sub_82F6BAA0(ctx, base);
loc_82F8B674:
	// lbz r11,37(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 37);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8b6a4
	if (ctx.cr0.eq) goto loc_82F8B6A4;
	// lha r11,24(r29)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r29.u32 + 24));
	// ori r31,r31,8
	ctx.r31.u64 = ctx.r31.u64 | 8;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stb r26,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r26.u8);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f0.u64);
	// b 0x82f8b6a8
	goto loc_82F8B6A8;
loc_82F8B6A4:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
loc_82F8B6A8:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r5,r11,-16216
	ctx.r5.s64 = ctx.r11.s64 + -16216;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f048d0
	ctx.lr = 0x82F8B6BC;
	sub_82F048D0(ctx, base);
	// rlwinm. r11,r31,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8b6dc
	if (ctx.cr0.eq) goto loc_82F8B6DC;
	// lbz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// rlwinm r31,r31,0,29,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8b6dc
	if (ctx.cr6.lt) goto loc_82F8B6DC;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8B6DC;
	sub_82F6BAA0(ctx, base);
loc_82F8B6DC:
	// lbz r11,37(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 37);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8b70c
	if (ctx.cr0.eq) goto loc_82F8B70C;
	// lhz r11,26(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 26);
	// ori r31,r31,16
	ctx.r31.u64 = ctx.r31.u64 | 16;
	// stb r26,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r26.u8);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.f0.u64);
	// b 0x82f8b710
	goto loc_82F8B710;
loc_82F8B70C:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
loc_82F8B710:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r5,r11,14056
	ctx.r5.s64 = ctx.r11.s64 + 14056;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f048d0
	ctx.lr = 0x82F8B724;
	sub_82F048D0(ctx, base);
	// rlwinm. r11,r31,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8b744
	if (ctx.cr0.eq) goto loc_82F8B744;
	// lbz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 160);
	// rlwinm r31,r31,0,28,26
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8b744
	if (ctx.cr6.lt) goto loc_82F8B744;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8B744;
	sub_82F6BAA0(ctx, base);
loc_82F8B744:
	// lbz r11,37(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 37);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8b774
	if (ctx.cr0.eq) goto loc_82F8B774;
	// lhz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 28);
	// ori r31,r31,32
	ctx.r31.u64 = ctx.r31.u64 | 32;
	// stb r26,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r26.u8);
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.f0.u64);
	// b 0x82f8b778
	goto loc_82F8B778;
loc_82F8B774:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
loc_82F8B778:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r5,r11,14044
	ctx.r5.s64 = ctx.r11.s64 + 14044;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f048d0
	ctx.lr = 0x82F8B78C;
	sub_82F048D0(ctx, base);
	// rlwinm. r11,r31,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8b7a8
	if (ctx.cr0.eq) goto loc_82F8B7A8;
	// lbz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 224);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8b7a8
	if (ctx.cr6.lt) goto loc_82F8B7A8;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8B7A8;
	sub_82F6BAA0(ctx, base);
loc_82F8B7A8:
	// lbz r11,37(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 37);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8b8d0
	if (ctx.cr0.eq) goto loc_82F8B8D0;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f6d510
	ctx.lr = 0x82F8B7C8;
	sub_82F6D510(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F8B7D4;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f8b804
	if (ctx.cr0.eq) goto loc_82F8B804;
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
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// bl 0x82f9e610
	ctx.lr = 0x82F8B7FC;
	sub_82F9E610(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82f8b808
	goto loc_82F8B808;
loc_82F8B804:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82F8B808:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82f9c430
	ctx.lr = 0x82F8B814;
	sub_82F9C430(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f8b874
	if (ctx.cr6.eq) goto loc_82F8B874;
loc_82F8B824:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// stb r26,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r26.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r11.u64);
	// lfd f0,240(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.f0.u64);
	// bl 0x82f9bc28
	ctx.lr = 0x82F8B84C;
	sub_82F9BC28(ctx, base);
	// lbz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 208);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8b860
	if (ctx.cr6.lt) goto loc_82F8B860;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8B860;
	sub_82F6BAA0(ctx, base);
loc_82F8B860:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f8b824
	if (ctx.cr6.lt) goto loc_82F8B824;
loc_82F8B874:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82f6aba0
	ctx.lr = 0x82F8B880;
	sub_82F6ABA0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r11,14032
	ctx.r5.s64 = ctx.r11.s64 + 14032;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f048d0
	ctx.lr = 0x82F8B898;
	sub_82F048D0(ctx, base);
	// lbz r11,256(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 256);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8b8ac
	if (ctx.cr6.lt) goto loc_82F8B8AC;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8B8AC;
	sub_82F6BAA0(ctx, base);
loc_82F8B8AC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f8b8e8
	if (ctx.cr6.eq) goto loc_82F8B8E8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F8B8CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82f8b8e8
	goto loc_82F8B8E8;
loc_82F8B8D0:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r11,14032
	ctx.r5.s64 = ctx.r11.s64 + 14032;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f048d0
	ctx.lr = 0x82F8B8E8;
	sub_82F048D0(ctx, base);
loc_82F8B8E8:
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8b8fc
	if (ctx.cr6.lt) goto loc_82F8B8FC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8B8FC;
	sub_82F6BAA0(ctx, base);
loc_82F8B8FC:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82F8B904"))) PPC_WEAK_FUNC(sub_82F8B904);
PPC_FUNC_IMPL(__imp__sub_82F8B904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8B908"))) PPC_WEAK_FUNC(sub_82F8B908);
PPC_FUNC_IMPL(__imp__sub_82F8B908) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82F8B910;
	sub_82CA2BD4(ctx, base);
	// stfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-592(r1)
	ea = -592 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8B92C;
	sub_82F6BAA0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f8bf20
	if (ctx.cr6.eq) goto loc_82F8BF20;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f8bf20
	if (ctx.cr6.eq) goto loc_82F8BF20;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F8B960;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,28
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 28, ctx.xer);
	// bne cr6,0x82f8bf20
	if (!ctx.cr6.eq) goto loc_82F8BF20;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r27,r11,-16
	ctx.r27.s64 = ctx.r11.s64 + -16;
	// bne cr6,0x82f8b97c
	if (!ctx.cr6.eq) goto loc_82F8B97C;
	// li r27,0
	ctx.r27.s64 = 0;
loc_82F8B97C:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r23,116(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82f8bf20
	if (ctx.cr6.eq) goto loc_82F8BF20;
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F8B9A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F8B9A8;
	sub_82EF6EF8(ctx, base);
	// lis r11,22087
	ctx.r11.s64 = 1447493632;
	// lis r10,-24607
	ctx.r10.s64 = -1612644352;
	// ori r28,r11,7817
	ctx.r28.u64 = ctx.r11.u64 | 7817;
	// ori r29,r10,9034
	ctx.r29.u64 = ctx.r10.u64 | 9034;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f8b9d8
	if (ctx.cr0.eq) goto loc_82F8B9D8;
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x82f88998
	ctx.lr = 0x82F8B9D0;
	sub_82F88998(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// b 0x82f8b9dc
	goto loc_82F8B9DC;
loc_82F8B9D8:
	// li r24,0
	ctx.r24.s64 = 0;
loc_82F8B9DC:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,24(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f6c2d0
	ctx.lr = 0x82F8B9EC;
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82f6b390
	ctx.lr = 0x82F8BA00;
	sub_82F6B390(ctx, base);
	// li r3,368
	ctx.r3.s64 = 368;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F8BA08;
	sub_82EF6EF8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82f8ba40
	if (ctx.cr0.eq) goto loc_82F8BA40;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F8BA2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f84c60
	ctx.lr = 0x82F8BA38;
	sub_82F84C60(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82f8ba44
	goto loc_82F8BA44;
loc_82F8BA40:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82F8BA44:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stb r10,40(r11)
	PPC_STORE_U8(ctx.r11.u32 + 40, ctx.r10.u8);
	// bl 0x82f6d968
	ctx.lr = 0x82F8BA5C;
	sub_82F6D968(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6d990
	ctx.lr = 0x82F8BA64;
	sub_82F6D990(ctx, base);
	// lwz r29,24(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lbz r11,124(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 124);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// blt cr6,0x82f8bae4
	if (ctx.cr6.lt) goto loc_82F8BAE4;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x82f8bae4
	if (ctx.cr6.lt) goto loc_82F8BAE4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f6c2d0
	ctx.lr = 0x82F8BA8C;
	sub_82F6C2D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82f6b480
	ctx.lr = 0x82F8BA94;
	sub_82F6B480(ctx, base);
	// lbz r11,329(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 329);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r11,329(r31)
	PPC_STORE_U8(ctx.r31.u32 + 329, ctx.r11.u8);
	// bl 0x82f6d9b8
	ctx.lr = 0x82F8BAAC;
	sub_82F6D9B8(ctx, base);
	// frsp f12,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f31.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,2756(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2756);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3084(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f13,184(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// bl 0x82f73ee0
	ctx.lr = 0x82F8BAE4;
	sub_82F73EE0(ctx, base);
loc_82F8BAE4:
	// lbz r11,329(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 329);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stb r11,329(r31)
	PPC_STORE_U8(ctx.r31.u32 + 329, ctx.r11.u8);
	// bl 0x82f08b70
	ctx.lr = 0x82F8BAF8;
	sub_82F08B70(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82f04d70
	ctx.lr = 0x82F8BB00;
	sub_82F04D70(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82f76720
	ctx.lr = 0x82F8BB08;
	sub_82F76720(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82f6ecb8
	ctx.lr = 0x82F8BB10;
	sub_82F6ECB8(ctx, base);
	// addi r5,r27,48
	ctx.r5.s64 = ctx.r27.s64 + 48;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82f760c0
	ctx.lr = 0x82F8BB20;
	sub_82F760C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82f08fe0
	ctx.lr = 0x82F8BB2C;
	sub_82F08FE0(ctx, base);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82f08be0
	ctx.lr = 0x82F8BB34;
	sub_82F08BE0(ctx, base);
	// addi r5,r27,140
	ctx.r5.s64 = ctx.r27.s64 + 140;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82f72478
	ctx.lr = 0x82F8BB44;
	sub_82F72478(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82f6ee08
	ctx.lr = 0x82F8BB50;
	sub_82F6EE08(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r25,r11,-7472
	ctx.r25.s64 = ctx.r11.s64 + -7472;
	// stw r25,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r25.u32);
	// bl 0x82f6d568
	ctx.lr = 0x82F8BB64;
	sub_82F6D568(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82ef70b0
	ctx.lr = 0x82F8BB6C;
	sub_82EF70B0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82f7a7b0
	ctx.lr = 0x82F8BB78;
	sub_82F7A7B0(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82f7a8c0
	ctx.lr = 0x82F8BB84;
	sub_82F7A8C0(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82f81eb0
	ctx.lr = 0x82F8BB98;
	sub_82F81EB0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f7c868
	ctx.lr = 0x82F8BBA4;
	sub_82F7C868(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6d8f0
	ctx.lr = 0x82F8BBAC;
	sub_82F6D8F0(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r28,3
	ctx.r28.s64 = 3;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// stb r28,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r28.u8);
	// addi r29,r24,16
	ctx.r29.s64 = ctx.r24.s64 + 16;
	// lfd f30,14208(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r10.u32 + 14208);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// fadd f0,f1,f30
	ctx.f0.f64 = ctx.f1.f64 + ctx.f30.f64;
	// lfd f31,-8776(r9)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r9.u32 + -8776);
	// addi r5,r8,14192
	ctx.r5.s64 = ctx.r8.s64 + 14192;
	// addi r4,r11,120
	ctx.r4.s64 = ctx.r11.s64 + 120;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmul f0,f0,f31
	ctx.f0.f64 = ctx.f0.f64 * ctx.f31.f64;
	// stfd f0,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.f0.u64);
	// bl 0x82f048d0
	ctx.lr = 0x82F8BBF0;
	sub_82F048D0(ctx, base);
	// lbz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8bc04
	if (ctx.cr6.lt) goto loc_82F8BC04;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8BC04;
	sub_82F6BAA0(ctx, base);
loc_82F8BC04:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f7d5d0
	ctx.lr = 0x82F8BC0C;
	sub_82F7D5D0(ctx, base);
	// fadd f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64 + ctx.f30.f64;
	// stb r28,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r28.u8);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r10,14176
	ctx.r5.s64 = ctx.r10.s64 + 14176;
	// addi r4,r11,120
	ctx.r4.s64 = ctx.r11.s64 + 120;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmul f0,f0,f31
	ctx.f0.f64 = ctx.f0.f64 * ctx.f31.f64;
	// stfd f0,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.f0.u64);
	// bl 0x82f048d0
	ctx.lr = 0x82F8BC38;
	sub_82F048D0(ctx, base);
	// lbz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8bc4c
	if (ctx.cr6.lt) goto loc_82F8BC4C;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8BC4C;
	sub_82F6BAA0(ctx, base);
loc_82F8BC4C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6d8f0
	ctx.lr = 0x82F8BC54;
	sub_82F6D8F0(ctx, base);
	// fmul f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64 * ctx.f31.f64;
	// stfd f0,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.f0.u64);
	// stb r28,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r28.u8);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r10,-7424
	ctx.r5.s64 = ctx.r10.s64 + -7424;
	// addi r4,r11,120
	ctx.r4.s64 = ctx.r11.s64 + 120;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f048d0
	ctx.lr = 0x82F8BC7C;
	sub_82F048D0(ctx, base);
	// lbz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 192);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8bc90
	if (ctx.cr6.lt) goto loc_82F8BC90;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8BC90;
	sub_82F6BAA0(ctx, base);
loc_82F8BC90:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f7d5d0
	ctx.lr = 0x82F8BC98;
	sub_82F7D5D0(ctx, base);
	// fmul f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64 * ctx.f31.f64;
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// stb r28,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r28.u8);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r10,-7432
	ctx.r5.s64 = ctx.r10.s64 + -7432;
	// addi r4,r11,120
	ctx.r4.s64 = ctx.r11.s64 + 120;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f048d0
	ctx.lr = 0x82F8BCC0;
	sub_82F048D0(ctx, base);
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8bcd4
	if (ctx.cr6.lt) goto loc_82F8BCD4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8BCD4;
	sub_82F6BAA0(ctx, base);
loc_82F8BCD4:
	// lhz r10,344(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 344);
	// lbz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 292);
	// rlwinm r9,r10,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// beq 0x82f8bcf8
	if (ctx.cr0.eq) goto loc_82F8BCF8;
	// addi r4,r1,293
	ctx.r4.s64 = ctx.r1.s64 + 293;
	// b 0x82f8bd00
	goto loc_82F8BD00;
loc_82F8BCF8:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r4,r9,3224
	ctx.r4.s64 = ctx.r9.s64 + 3224;
loc_82F8BD00:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// ori r5,r11,16
	ctx.r5.u64 = ctx.r11.u64 | 16;
	// bl 0x82f8a528
	ctx.lr = 0x82F8BD30;
	sub_82F8A528(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// lfd f12,3376(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3376);
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// beq 0x82f8bd5c
	if (ctx.cr0.eq) goto loc_82F8BD5C;
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lfs f13,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bne cr6,0x82f8bd64
	if (!ctx.cr6.eq) goto loc_82F8BD64;
loc_82F8BD5C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfd f13,14168(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 14168);
loc_82F8BD64:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bne cr6,0x82f8bd78
	if (!ctx.cr6.eq) goto loc_82F8BD78;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfd f0,14160(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 14160);
	// fsub f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 - ctx.f13.f64;
loc_82F8BD78:
	// lhz r8,290(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 290);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stb r28,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r28.u8);
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// addi r4,r11,120
	ctx.r4.s64 = ctx.r11.s64 + 120;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f10,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// lfs f12,2736(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2736);
	ctx.f12.f64 = double(temp.f32);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// lfd f11,14152(r9)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 14152);
	// addi r5,r7,-7408
	ctx.r5.s64 = ctx.r7.s64 + -7408;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmuls f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmul f12,f12,f11
	ctx.f12.f64 = ctx.f12.f64 * ctx.f11.f64;
	// fmul f13,f12,f13
	ctx.f13.f64 = ctx.f12.f64 * ctx.f13.f64;
	// fmul f0,f12,f0
	ctx.f0.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fmul f13,f13,f31
	ctx.f13.f64 = ctx.f13.f64 * ctx.f31.f64;
	// fmul f0,f0,f31
	ctx.f0.f64 = ctx.f0.f64 * ctx.f31.f64;
	// fctidz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f13.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// stfd f13,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f13.u64);
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82f048d0
	ctx.lr = 0x82F8BDFC;
	sub_82F048D0(ctx, base);
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8be10
	if (ctx.cr6.lt) goto loc_82F8BE10;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8BE10;
	sub_82F6BAA0(ctx, base);
loc_82F8BE10:
	// clrldi r10,r27,32
	ctx.r10.u64 = ctx.r27.u64 & 0xFFFFFFFF;
	// stb r28,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r28.u8);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f0.u64);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r9,-7416
	ctx.r5.s64 = ctx.r9.s64 + -7416;
	// addi r4,r11,120
	ctx.r4.s64 = ctx.r11.s64 + 120;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f048d0
	ctx.lr = 0x82F8BE44;
	sub_82F048D0(ctx, base);
	// lbz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8be58
	if (ctx.cr6.lt) goto loc_82F8BE58;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8BE58;
	sub_82F6BAA0(ctx, base);
loc_82F8BE58:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82f6c328
	ctx.lr = 0x82F8BE64;
	sub_82F6C328(ctx, base);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82f8be8c
	if (ctx.cr6.eq) goto loc_82F8BE8C;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// bne 0x82f8be8c
	if (!ctx.cr0.eq) goto loc_82F8BE8C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82f04c78
	ctx.lr = 0x82F8BE84;
	sub_82F04C78(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F8BE8C;
	sub_82EF6F38(ctx, base);
loc_82F8BE8C:
	// stw r25,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r25.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82f6d568
	ctx.lr = 0x82F8BE98;
	sub_82F6D568(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82ef70b0
	ctx.lr = 0x82F8BEA0;
	sub_82EF70B0(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82f08be0
	ctx.lr = 0x82F8BEA8;
	sub_82F08BE0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F8BEC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f8bee8
	if (!ctx.cr6.eq) goto loc_82F8BEE8;
	// bl 0x82f670f0
	ctx.lr = 0x82F8BEE8;
	sub_82F670F0(ctx, base);
loc_82F8BEE8:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82f8bf08
	if (ctx.cr6.eq) goto loc_82F8BF08;
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F8BF08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F8BF08:
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F8BF20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F8BF20:
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_82F8BF30"))) PPC_WEAK_FUNC(sub_82F8BF30);
PPC_FUNC_IMPL(__imp__sub_82F8BF30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82F8BF38;
	sub_82CA2BDC(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r30,48
	ctx.r3.s64 = ctx.r30.s64 + 48;
	// bl 0x82f08fe0
	ctx.lr = 0x82F8BF60;
	sub_82F08FE0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r25,2
	ctx.r25.s64 = 2;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// lhz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 88);
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8bf98
	if (ctx.cr0.eq) goto loc_82F8BF98;
	// lbz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 36);
	// li r31,1
	ctx.r31.s64 = 1;
	// stb r25,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r25.u8);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// stb r11,196(r1)
	PPC_STORE_U8(ctx.r1.u32 + 196, ctx.r11.u8);
	// b 0x82f8bf9c
	goto loc_82F8BF9C;
loc_82F8BF98:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
loc_82F8BF9C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r27,r30,16
	ctx.r27.s64 = ctx.r30.s64 + 16;
	// addi r5,r11,14104
	ctx.r5.s64 = ctx.r11.s64 + 14104;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82f048d0
	ctx.lr = 0x82F8BFB4;
	sub_82F048D0(ctx, base);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8bfd4
	if (ctx.cr0.eq) goto loc_82F8BFD4;
	// lbz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 192);
	// rlwinm r31,r31,0,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8bfd4
	if (ctx.cr6.lt) goto loc_82F8BFD4;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8BFD4;
	sub_82F6BAA0(ctx, base);
loc_82F8BFD4:
	// lhz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 88);
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8c000
	if (ctx.cr0.eq) goto loc_82F8C000;
	// lbz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 36);
	// ori r31,r31,2
	ctx.r31.u64 = ctx.r31.u64 | 2;
	// stb r25,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r25.u8);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// rlwinm r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// stb r11,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r11.u8);
	// b 0x82f8c004
	goto loc_82F8C004;
loc_82F8C000:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
loc_82F8C004:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r11,14068
	ctx.r5.s64 = ctx.r11.s64 + 14068;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82f048d0
	ctx.lr = 0x82F8C018;
	sub_82F048D0(ctx, base);
	// rlwinm. r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8c038
	if (ctx.cr0.eq) goto loc_82F8C038;
	// lbz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 160);
	// rlwinm r31,r31,0,31,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8c038
	if (ctx.cr6.lt) goto loc_82F8C038;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8C038;
	sub_82F6BAA0(ctx, base);
loc_82F8C038:
	// lhz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 88);
	// rlwinm r11,r11,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8c064
	if (ctx.cr0.eq) goto loc_82F8C064;
	// lbz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 36);
	// ori r31,r31,4
	ctx.r31.u64 = ctx.r31.u64 | 4;
	// stb r25,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r25.u8);
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// rlwinm r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// stb r11,228(r1)
	PPC_STORE_U8(ctx.r1.u32 + 228, ctx.r11.u8);
	// b 0x82f8c068
	goto loc_82F8C068;
loc_82F8C064:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
loc_82F8C068:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r11,14020
	ctx.r5.s64 = ctx.r11.s64 + 14020;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82f048d0
	ctx.lr = 0x82F8C07C;
	sub_82F048D0(ctx, base);
	// rlwinm. r11,r31,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8c09c
	if (ctx.cr0.eq) goto loc_82F8C09C;
	// lbz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 224);
	// rlwinm r31,r31,0,30,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8c09c
	if (ctx.cr6.lt) goto loc_82F8C09C;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8C09C;
	sub_82F6BAA0(ctx, base);
loc_82F8C09C:
	// lhz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 88);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r26,3
	ctx.r26.s64 = 3;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f31,2736(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2736);
	ctx.f31.f64 = double(temp.f32);
	// beq 0x82f8c0e8
	if (ctx.cr0.eq) goto loc_82F8C0E8;
	// lhz r11,34(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 34);
	// ori r31,r31,8
	ctx.r31.u64 = ctx.r31.u64 | 8;
	// stb r26,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r26.u8);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfd f0,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f0.u64);
	// b 0x82f8c0ec
	goto loc_82F8C0EC;
loc_82F8C0E8:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
loc_82F8C0EC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r11,-22728
	ctx.r5.s64 = ctx.r11.s64 + -22728;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82f048d0
	ctx.lr = 0x82F8C100;
	sub_82F048D0(ctx, base);
	// rlwinm. r11,r31,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8c120
	if (ctx.cr0.eq) goto loc_82F8C120;
	// lbz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// rlwinm r31,r31,0,29,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8c120
	if (ctx.cr6.lt) goto loc_82F8C120;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8C120;
	sub_82F6BAA0(ctx, base);
loc_82F8C120:
	// lhz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 88);
	// li r30,4
	ctx.r30.s64 = 4;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8c16c
	if (ctx.cr0.eq) goto loc_82F8C16C;
	// ori r11,r31,16
	ctx.r11.u64 = ctx.r31.u64 | 16;
	// addi r5,r29,37
	ctx.r5.s64 = ctx.r29.s64 + 37;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// ori r31,r11,32
	ctx.r31.u64 = ctx.r11.u64 | 32;
	// bl 0x82f114a8
	ctx.lr = 0x82F8C14C;
	sub_82F114A8(ctx, base);
	// stb r30,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r30.u8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// stw r11,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r11.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// b 0x82f8c170
	goto loc_82F8C170;
loc_82F8C16C:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
loc_82F8C170:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r11,-16208
	ctx.r5.s64 = ctx.r11.s64 + -16208;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82f048d0
	ctx.lr = 0x82F8C184;
	sub_82F048D0(ctx, base);
	// rlwinm. r11,r31,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8c1a4
	if (ctx.cr0.eq) goto loc_82F8C1A4;
	// lbz r11,256(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 256);
	// rlwinm r31,r31,0,27,25
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8c1a4
	if (ctx.cr6.lt) goto loc_82F8C1A4;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8C1A4;
	sub_82F6BAA0(ctx, base);
loc_82F8C1A4:
	// rlwinm. r11,r31,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8c1d8
	if (ctx.cr0.eq) goto loc_82F8C1D8;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r31,r31,0,28,26
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f8c1d8
	if (!ctx.cr6.eq) goto loc_82F8C1D8;
	// bl 0x82f670f0
	ctx.lr = 0x82F8C1D8;
	sub_82F670F0(ctx, base);
loc_82F8C1D8:
	// lhz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 88);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8c20c
	if (ctx.cr0.eq) goto loc_82F8C20C;
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// ori r31,r31,64
	ctx.r31.u64 = ctx.r31.u64 | 64;
	// stb r26,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r26.u8);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// clrlwi r11,r11,8
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.f0.u64);
	// b 0x82f8c210
	goto loc_82F8C210;
loc_82F8C20C:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
loc_82F8C210:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r11,-3060
	ctx.r5.s64 = ctx.r11.s64 + -3060;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82f048d0
	ctx.lr = 0x82F8C224;
	sub_82F048D0(ctx, base);
	// rlwinm. r11,r31,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8c244
	if (ctx.cr0.eq) goto loc_82F8C244;
	// lbz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 144);
	// rlwinm r31,r31,0,26,24
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8c244
	if (ctx.cr6.lt) goto loc_82F8C244;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8C244;
	sub_82F6BAA0(ctx, base);
loc_82F8C244:
	// lhz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 88);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8c280
	if (ctx.cr0.eq) goto loc_82F8C280;
	// lha r11,32(r29)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r29.u32 + 32));
	// ori r31,r31,128
	ctx.r31.u64 = ctx.r31.u64 | 128;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// stb r26,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r26.u8);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfd f0,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.f0.u64);
	// b 0x82f8c284
	goto loc_82F8C284;
loc_82F8C280:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
loc_82F8C284:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r11,13992
	ctx.r5.s64 = ctx.r11.s64 + 13992;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82f048d0
	ctx.lr = 0x82F8C298;
	sub_82F048D0(ctx, base);
	// rlwinm. r11,r31,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8c2b8
	if (ctx.cr0.eq) goto loc_82F8C2B8;
	// lbz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 176);
	// rlwinm r31,r31,0,25,23
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8c2b8
	if (ctx.cr6.lt) goto loc_82F8C2B8;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8C2B8;
	sub_82F6BAA0(ctx, base);
loc_82F8C2B8:
	// lhz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 88);
	// rlwinm r11,r11,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8c2e4
	if (ctx.cr0.eq) goto loc_82F8C2E4;
	// lbz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 36);
	// ori r31,r31,256
	ctx.r31.u64 = ctx.r31.u64 | 256;
	// stb r25,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r25.u8);
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// rlwinm r11,r11,29,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// stb r11,212(r1)
	PPC_STORE_U8(ctx.r1.u32 + 212, ctx.r11.u8);
	// b 0x82f8c2e8
	goto loc_82F8C2E8;
loc_82F8C2E4:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
loc_82F8C2E8:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r11,13984
	ctx.r5.s64 = ctx.r11.s64 + 13984;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82f048d0
	ctx.lr = 0x82F8C2FC;
	sub_82F048D0(ctx, base);
	// rlwinm. r11,r31,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8c31c
	if (ctx.cr0.eq) goto loc_82F8C31C;
	// lbz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 208);
	// rlwinm r31,r31,0,24,22
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8c31c
	if (ctx.cr6.lt) goto loc_82F8C31C;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8C31C;
	sub_82F6BAA0(ctx, base);
loc_82F8C31C:
	// lbz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 88);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8c364
	if (ctx.cr0.eq) goto loc_82F8C364;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// ori r10,r31,512
	ctx.r10.u64 = ctx.r31.u64 | 512;
	// addi r5,r29,16
	ctx.r5.s64 = ctx.r29.s64 + 16;
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r31,r10,1024
	ctx.r31.u64 = ctx.r10.u64 | 1024;
	// bl 0x82f040d8
	ctx.lr = 0x82F8C344;
	sub_82F040D8(ctx, base);
	// stb r30,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r30.u8);
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// b 0x82f8c36c
	goto loc_82F8C36C;
loc_82F8C364:
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
loc_82F8C36C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r11,14016
	ctx.r5.s64 = ctx.r11.s64 + 14016;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82f048d0
	ctx.lr = 0x82F8C380;
	sub_82F048D0(ctx, base);
	// rlwinm. r11,r31,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8c3a0
	if (ctx.cr0.eq) goto loc_82F8C3A0;
	// lbz r11,240(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 240);
	// rlwinm r31,r31,0,22,20
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8c3a0
	if (ctx.cr6.lt) goto loc_82F8C3A0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8C3A0;
	sub_82F6BAA0(ctx, base);
loc_82F8C3A0:
	// rlwinm. r11,r31,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8c3c4
	if (ctx.cr0.eq) goto loc_82F8C3C4;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r31,r31,0,23,21
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// bne 0x82f8c3c4
	if (!ctx.cr0.eq) goto loc_82F8C3C4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f670f0
	ctx.lr = 0x82F8C3C4;
	sub_82F670F0(ctx, base);
loc_82F8C3C4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lbz r11,600(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 600);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82f8c444
	if (!ctx.cr6.eq) goto loc_82F8C444;
	// lhz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 88);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8c410
	if (ctx.cr0.eq) goto loc_82F8C410;
	// lbz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 28);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// ori r31,r31,2048
	ctx.r31.u64 = ctx.r31.u64 | 2048;
	// stb r26,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r26.u8);
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f0,14216(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 14216);
	// fmul f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 * ctx.f0.f64;
	// stfd f0,280(r1)
	PPC_STORE_U64(ctx.r1.u32 + 280, ctx.f0.u64);
	// b 0x82f8c414
	goto loc_82F8C414;
loc_82F8C410:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
loc_82F8C414:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r11,9108
	ctx.r5.s64 = ctx.r11.s64 + 9108;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82f048d0
	ctx.lr = 0x82F8C428;
	sub_82F048D0(ctx, base);
	// rlwinm. r11,r31,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8c444
	if (ctx.cr0.eq) goto loc_82F8C444;
	// lbz r11,272(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 272);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8c444
	if (ctx.cr6.lt) goto loc_82F8C444;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8C444;
	sub_82F6BAA0(ctx, base);
loc_82F8C444:
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8c458
	if (ctx.cr6.lt) goto loc_82F8C458;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8C458;
	sub_82F6BAA0(ctx, base);
loc_82F8C458:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82F8C464"))) PPC_WEAK_FUNC(sub_82F8C464);
PPC_FUNC_IMPL(__imp__sub_82F8C464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8C468"))) PPC_WEAK_FUNC(sub_82F8C468);
PPC_FUNC_IMPL(__imp__sub_82F8C468) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f87fd0
	ctx.lr = 0x82F8C484;
	sub_82F87FD0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,14304
	ctx.r11.s64 = ctx.r11.s64 + 14304;
	// addi r10,r10,14224
	ctx.r10.s64 = ctx.r10.s64 + 14224;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// bl 0x82f08b70
	ctx.lr = 0x82F8C4A4;
	sub_82F08B70(ctx, base);
	// addi r3,r31,140
	ctx.r3.s64 = ctx.r31.s64 + 140;
	// bl 0x82f04d70
	ctx.lr = 0x82F8C4AC;
	sub_82F04D70(ctx, base);
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

__attribute__((alias("__imp__sub_82F8C4C4"))) PPC_WEAK_FUNC(sub_82F8C4C4);
PPC_FUNC_IMPL(__imp__sub_82F8C4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8C4C8"))) PPC_WEAK_FUNC(sub_82F8C4C8);
PPC_FUNC_IMPL(__imp__sub_82F8C4C8) {
	PPC_FUNC_PROLOGUE();
	// li r3,28
	ctx.r3.s64 = 28;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F8C4D0"))) PPC_WEAK_FUNC(sub_82F8C4D0);
PPC_FUNC_IMPL(__imp__sub_82F8C4D0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82f8da60
	sub_82F8DA60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F8C4D8"))) PPC_WEAK_FUNC(sub_82F8C4D8);
PPC_FUNC_IMPL(__imp__sub_82F8C4D8) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r30,r31,140
	ctx.r30.s64 = ctx.r31.s64 + 140;
	// addi r11,r11,-7472
	ctx.r11.s64 = ctx.r11.s64 + -7472;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// bl 0x82f6d568
	ctx.lr = 0x82F8C508;
	sub_82F6D568(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ef70b0
	ctx.lr = 0x82F8C510;
	sub_82EF70B0(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x82f08be0
	ctx.lr = 0x82F8C518;
	sub_82F08BE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f0afc8
	ctx.lr = 0x82F8C520;
	sub_82F0AFC8(ctx, base);
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

__attribute__((alias("__imp__sub_82F8C538"))) PPC_WEAK_FUNC(sub_82F8C538);
PPC_FUNC_IMPL(__imp__sub_82F8C538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82F8C540;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82f87fd0
	ctx.lr = 0x82F8C554;
	sub_82F87FD0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,14304
	ctx.r11.s64 = ctx.r11.s64 + 14304;
	// addi r10,r10,14224
	ctx.r10.s64 = ctx.r10.s64 + 14224;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r3,r27,48
	ctx.r3.s64 = ctx.r27.s64 + 48;
	// stw r10,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r10.u32);
	// addi r30,r27,16
	ctx.r30.s64 = ctx.r27.s64 + 16;
	// bl 0x82f08b70
	ctx.lr = 0x82F8C578;
	sub_82F08B70(ctx, base);
	// addi r3,r27,140
	ctx.r3.s64 = ctx.r27.s64 + 140;
	// bl 0x82f04d70
	ctx.lr = 0x82F8C580;
	sub_82F04D70(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,31
	ctx.r9.s64 = 31;
	// lwz r11,120(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 120);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r11,588
	ctx.r3.s64 = ctx.r11.s64 + 588;
	// addi r31,r26,120
	ctx.r31.s64 = ctx.r26.s64 + 120;
	// bl 0x82f0ad10
	ctx.lr = 0x82F8C5A8;
	sub_82F0AD10(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,100(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82f04b00
	ctx.lr = 0x82F8C5BC;
	sub_82F04B00(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f8c5dc
	if (ctx.cr6.eq) goto loc_82F8C5DC;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F8C5DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F8C5DC:
	// li r28,2
	ctx.r28.s64 = 2;
	// li r29,1
	ctx.r29.s64 = 1;
	// stb r28,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r28.u8);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stb r29,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r29.u8);
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// addi r5,r11,14140
	ctx.r5.s64 = ctx.r11.s64 + 14140;
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f04960
	ctx.lr = 0x82F8C608;
	sub_82F04960(ctx, base);
	// lbz r11,256(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 256);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8c61c
	if (ctx.cr6.lt) goto loc_82F8C61C;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8C61C;
	sub_82F6BAA0(ctx, base);
loc_82F8C61C:
	// stb r28,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r28.u8);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stb r29,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r29.u8);
	// addi r7,r1,97
	ctx.r7.s64 = ctx.r1.s64 + 97;
	// addi r5,r11,14120
	ctx.r5.s64 = ctx.r11.s64 + 14120;
	// addi r6,r1,384
	ctx.r6.s64 = ctx.r1.s64 + 384;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f04960
	ctx.lr = 0x82F8C640;
	sub_82F04960(ctx, base);
	// lbz r11,384(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 384);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8c654
	if (ctx.cr6.lt) goto loc_82F8C654;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8C654;
	sub_82F6BAA0(ctx, base);
loc_82F8C654:
	// stb r28,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r28.u8);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stb r29,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r29.u8);
	// addi r7,r1,83
	ctx.r7.s64 = ctx.r1.s64 + 83;
	// addi r5,r11,14104
	ctx.r5.s64 = ctx.r11.s64 + 14104;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f04960
	ctx.lr = 0x82F8C678;
	sub_82F04960(ctx, base);
	// lbz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8c68c
	if (ctx.cr6.lt) goto loc_82F8C68C;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8C68C;
	sub_82F6BAA0(ctx, base);
loc_82F8C68C:
	// stb r28,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r28.u8);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stb r29,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r29.u8);
	// addi r7,r1,91
	ctx.r7.s64 = ctx.r1.s64 + 91;
	// addi r5,r11,14096
	ctx.r5.s64 = ctx.r11.s64 + 14096;
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f04960
	ctx.lr = 0x82F8C6B0;
	sub_82F04960(ctx, base);
	// lbz r11,288(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 288);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8c6c4
	if (ctx.cr6.lt) goto loc_82F8C6C4;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8C6C4;
	sub_82F6BAA0(ctx, base);
loc_82F8C6C4:
	// stb r28,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r28.u8);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// stb r29,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r29.u8);
	// addi r7,r1,85
	ctx.r7.s64 = ctx.r1.s64 + 85;
	// addi r5,r11,-3060
	ctx.r5.s64 = ctx.r11.s64 + -3060;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f04960
	ctx.lr = 0x82F8C6E8;
	sub_82F04960(ctx, base);
	// lbz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 192);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8c6fc
	if (ctx.cr6.lt) goto loc_82F8C6FC;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8C6FC;
	sub_82F6BAA0(ctx, base);
loc_82F8C6FC:
	// stb r28,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r28.u8);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// stb r29,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r29.u8);
	// addi r7,r1,95
	ctx.r7.s64 = ctx.r1.s64 + 95;
	// addi r5,r11,-16208
	ctx.r5.s64 = ctx.r11.s64 + -16208;
	// addi r6,r1,352
	ctx.r6.s64 = ctx.r1.s64 + 352;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f04960
	ctx.lr = 0x82F8C720;
	sub_82F04960(ctx, base);
	// lbz r11,352(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 352);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8c734
	if (ctx.cr6.lt) goto loc_82F8C734;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8C734;
	sub_82F6BAA0(ctx, base);
loc_82F8C734:
	// stb r28,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stb r29,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r29.u8);
	// addi r7,r1,87
	ctx.r7.s64 = ctx.r1.s64 + 87;
	// addi r5,r11,14088
	ctx.r5.s64 = ctx.r11.s64 + 14088;
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f04960
	ctx.lr = 0x82F8C758;
	sub_82F04960(ctx, base);
	// lbz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 224);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8c76c
	if (ctx.cr6.lt) goto loc_82F8C76C;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8C76C;
	sub_82F6BAA0(ctx, base);
loc_82F8C76C:
	// stb r28,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r28.u8);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stb r29,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r29.u8);
	// addi r7,r1,93
	ctx.r7.s64 = ctx.r1.s64 + 93;
	// addi r5,r11,14068
	ctx.r5.s64 = ctx.r11.s64 + 14068;
	// addi r6,r1,320
	ctx.r6.s64 = ctx.r1.s64 + 320;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f04960
	ctx.lr = 0x82F8C790;
	sub_82F04960(ctx, base);
	// lbz r11,320(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 320);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8c7a4
	if (ctx.cr6.lt) goto loc_82F8C7A4;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8C7A4;
	sub_82F6BAA0(ctx, base);
loc_82F8C7A4:
	// stb r28,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r28.u8);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// stb r29,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r29.u8);
	// addi r7,r1,89
	ctx.r7.s64 = ctx.r1.s64 + 89;
	// addi r5,r11,-16216
	ctx.r5.s64 = ctx.r11.s64 + -16216;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f04960
	ctx.lr = 0x82F8C7C8;
	sub_82F04960(ctx, base);
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8c7dc
	if (ctx.cr6.lt) goto loc_82F8C7DC;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8C7DC;
	sub_82F6BAA0(ctx, base);
loc_82F8C7DC:
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stb r29,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r29.u8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,14056
	ctx.r5.s64 = ctx.r11.s64 + 14056;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f04960
	ctx.lr = 0x82F8C800;
	sub_82F04960(ctx, base);
	// lbz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8c814
	if (ctx.cr6.lt) goto loc_82F8C814;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8C814;
	sub_82F6BAA0(ctx, base);
loc_82F8C814:
	// stb r28,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r28.u8);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stb r29,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r29.u8);
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// addi r5,r11,14044
	ctx.r5.s64 = ctx.r11.s64 + 14044;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f04960
	ctx.lr = 0x82F8C838;
	sub_82F04960(ctx, base);
	// lbz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8c84c
	if (ctx.cr6.lt) goto loc_82F8C84C;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8C84C;
	sub_82F6BAA0(ctx, base);
loc_82F8C84C:
	// stb r28,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r28.u8);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stb r29,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r29.u8);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r5,r11,-22728
	ctx.r5.s64 = ctx.r11.s64 + -22728;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f04960
	ctx.lr = 0x82F8C870;
	sub_82F04960(ctx, base);
	// lbz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 176);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8c884
	if (ctx.cr6.lt) goto loc_82F8C884;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8C884;
	sub_82F6BAA0(ctx, base);
loc_82F8C884:
	// stb r28,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r28.u8);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stb r29,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r29.u8);
	// addi r7,r1,86
	ctx.r7.s64 = ctx.r1.s64 + 86;
	// addi r5,r11,14032
	ctx.r5.s64 = ctx.r11.s64 + 14032;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f04960
	ctx.lr = 0x82F8C8A8;
	sub_82F04960(ctx, base);
	// lbz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 208);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8c8bc
	if (ctx.cr6.lt) goto loc_82F8C8BC;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8C8BC;
	sub_82F6BAA0(ctx, base);
loc_82F8C8BC:
	// stb r28,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r28.u8);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stb r29,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r29.u8);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r5,r11,14008
	ctx.r5.s64 = ctx.r11.s64 + 14008;
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f04960
	ctx.lr = 0x82F8C8E0;
	sub_82F04960(ctx, base);
	// lbz r11,240(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 240);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8c8f4
	if (ctx.cr6.lt) goto loc_82F8C8F4;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8C8F4;
	sub_82F6BAA0(ctx, base);
loc_82F8C8F4:
	// stb r28,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r28.u8);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stb r29,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r29.u8);
	// addi r7,r1,90
	ctx.r7.s64 = ctx.r1.s64 + 90;
	// addi r5,r11,14020
	ctx.r5.s64 = ctx.r11.s64 + 14020;
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f04960
	ctx.lr = 0x82F8C918;
	sub_82F04960(ctx, base);
	// lbz r11,272(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 272);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8c92c
	if (ctx.cr6.lt) goto loc_82F8C92C;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8C92C;
	sub_82F6BAA0(ctx, base);
loc_82F8C92C:
	// stb r28,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r28.u8);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stb r29,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r29.u8);
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r5,r11,14016
	ctx.r5.s64 = ctx.r11.s64 + 14016;
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f04960
	ctx.lr = 0x82F8C950;
	sub_82F04960(ctx, base);
	// lbz r11,304(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 304);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8c964
	if (ctx.cr6.lt) goto loc_82F8C964;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8C964;
	sub_82F6BAA0(ctx, base);
loc_82F8C964:
	// lbz r11,124(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 124);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x82f8c9e0
	if (ctx.cr6.lt) goto loc_82F8C9E0;
	// stb r28,94(r1)
	PPC_STORE_U8(ctx.r1.u32 + 94, ctx.r28.u8);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stb r29,336(r1)
	PPC_STORE_U8(ctx.r1.u32 + 336, ctx.r29.u8);
	// addi r7,r1,94
	ctx.r7.s64 = ctx.r1.s64 + 94;
	// addi r5,r11,13984
	ctx.r5.s64 = ctx.r11.s64 + 13984;
	// addi r6,r1,336
	ctx.r6.s64 = ctx.r1.s64 + 336;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f04960
	ctx.lr = 0x82F8C994;
	sub_82F04960(ctx, base);
	// lbz r11,336(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 336);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8c9a8
	if (ctx.cr6.lt) goto loc_82F8C9A8;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8C9A8;
	sub_82F6BAA0(ctx, base);
loc_82F8C9A8:
	// stb r28,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r28.u8);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stb r29,368(r1)
	PPC_STORE_U8(ctx.r1.u32 + 368, ctx.r29.u8);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r5,r11,13992
	ctx.r5.s64 = ctx.r11.s64 + 13992;
	// addi r6,r1,368
	ctx.r6.s64 = ctx.r1.s64 + 368;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f04960
	ctx.lr = 0x82F8C9CC;
	sub_82F04960(ctx, base);
	// lbz r11,368(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 368);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8c9e0
	if (ctx.cr6.lt) goto loc_82F8C9E0;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8C9E0;
	sub_82F6BAA0(ctx, base);
loc_82F8C9E0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r11,600(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 600);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82f8ca28
	if (!ctx.cr6.eq) goto loc_82F8CA28;
	// stb r28,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r28.u8);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stb r29,400(r1)
	PPC_STORE_U8(ctx.r1.u32 + 400, ctx.r29.u8);
	// addi r7,r1,98
	ctx.r7.s64 = ctx.r1.s64 + 98;
	// addi r5,r11,9108
	ctx.r5.s64 = ctx.r11.s64 + 9108;
	// addi r6,r1,400
	ctx.r6.s64 = ctx.r1.s64 + 400;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f04960
	ctx.lr = 0x82F8CA14;
	sub_82F04960(ctx, base);
	// lbz r11,400(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 400);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8ca28
	if (ctx.cr6.lt) goto loc_82F8CA28;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8CA28;
	sub_82F6BAA0(ctx, base);
loc_82F8CA28:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82F8CA34"))) PPC_WEAK_FUNC(sub_82F8CA34);
PPC_FUNC_IMPL(__imp__sub_82F8CA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8CA38"))) PPC_WEAK_FUNC(sub_82F8CA38);
PPC_FUNC_IMPL(__imp__sub_82F8CA38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82F8CA40;
	sub_82CA2BD4(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,180
	ctx.r3.s64 = 180;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F8CA50;
	sub_82EF6EF8(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f8ca84
	if (ctx.cr0.eq) goto loc_82F8CA84;
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
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82f8c538
	ctx.lr = 0x82F8CA7C;
	sub_82F8C538(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// b 0x82f8ca88
	goto loc_82F8CA88;
loc_82F8CA84:
	// mr r24,r28
	ctx.r24.u64 = ctx.r28.u64;
loc_82F8CA88:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x82f8d440
	if (ctx.cr6.lt) goto loc_82F8D440;
	// stb r28,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r28.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,24(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r30,r24,16
	ctx.r30.s64 = ctx.r24.s64 + 16;
	// bl 0x82f6c2d0
	ctx.lr = 0x82F8CAAC;
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82f6b390
	ctx.lr = 0x82F8CAC0;
	sub_82F6B390(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r26,4
	ctx.r26.s64 = 4;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// stb r26,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r26.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r5,r10,-16208
	ctx.r5.s64 = ctx.r10.s64 + -16208;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r11.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,120(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// bl 0x82f04130
	ctx.lr = 0x82F8CAF8;
	sub_82F04130(ctx, base);
	// lwz r11,16(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F8CB1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f8cb44
	if (!ctx.cr6.eq) goto loc_82F8CB44;
	// bl 0x82f670f0
	ctx.lr = 0x82F8CB44;
	sub_82F670F0(ctx, base);
loc_82F8CB44:
	// lbz r11,256(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 256);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8cb58
	if (ctx.cr6.lt) goto loc_82F8CB58;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8CB58;
	sub_82F6BAA0(ctx, base);
loc_82F8CB58:
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f8cb80
	if (!ctx.cr6.eq) goto loc_82F8CB80;
	// bl 0x82f670f0
	ctx.lr = 0x82F8CB80;
	sub_82F670F0(ctx, base);
loc_82F8CB80:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x82f8d440
	if (ctx.cr6.lt) goto loc_82F8D440;
	// stb r28,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r28.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r27,24(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82f6c2d0
	ctx.lr = 0x82F8CBA0;
	sub_82F6C2D0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82f6b480
	ctx.lr = 0x82F8CBA8;
	sub_82F6B480(ctx, base);
	// li r25,3
	ctx.r25.s64 = 3;
	// stfd f1,296(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 296, ctx.f1.u64);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stb r25,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r25.u8);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// lwz r11,120(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	// addi r5,r10,-22728
	ctx.r5.s64 = ctx.r10.s64 + -22728;
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// bl 0x82f04130
	ctx.lr = 0x82F8CBCC;
	sub_82F04130(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r7,r1,87
	ctx.r7.s64 = ctx.r1.s64 + 87;
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F8CBF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f8cc18
	if (!ctx.cr6.eq) goto loc_82F8CC18;
	// bl 0x82f670f0
	ctx.lr = 0x82F8CC18;
	sub_82F670F0(ctx, base);
loc_82F8CC18:
	// lbz r11,288(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 288);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8cc2c
	if (ctx.cr6.lt) goto loc_82F8CC2C;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8CC2C;
	sub_82F6BAA0(ctx, base);
loc_82F8CC2C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82f8d440
	if (ctx.cr6.lt) goto loc_82F8D440;
	// stb r28,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r28.u8);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r27,24(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82f6c2d0
	ctx.lr = 0x82F8CC4C;
	sub_82F6C2D0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82f6b480
	ctx.lr = 0x82F8CC54;
	sub_82F6B480(ctx, base);
	// stfd f1,232(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.f1.u64);
	// stb r25,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r25.u8);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// lwz r11,120(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// addi r5,r10,-3060
	ctx.r5.s64 = ctx.r10.s64 + -3060;
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// bl 0x82f04130
	ctx.lr = 0x82F8CC74;
	sub_82F04130(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r7,r1,83
	ctx.r7.s64 = ctx.r1.s64 + 83;
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F8CC98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f8ccc0
	if (!ctx.cr6.eq) goto loc_82F8CCC0;
	// bl 0x82f670f0
	ctx.lr = 0x82F8CCC0;
	sub_82F670F0(ctx, base);
loc_82F8CCC0:
	// lbz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 224);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8ccd4
	if (ctx.cr6.lt) goto loc_82F8CCD4;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8CCD4;
	sub_82F6BAA0(ctx, base);
loc_82F8CCD4:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x82f8d440
	if (ctx.cr6.lt) goto loc_82F8D440;
	// stb r28,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r28.u8);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r27,24(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82f6c2d0
	ctx.lr = 0x82F8CCF4;
	sub_82F6C2D0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82f6b840
	ctx.lr = 0x82F8CCFC;
	sub_82F6B840(ctx, base);
	// li r27,2
	ctx.r27.s64 = 2;
	// stb r3,356(r1)
	PPC_STORE_U8(ctx.r1.u32 + 356, ctx.r3.u8);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stb r27,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r27.u8);
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// addi r5,r10,14104
	ctx.r5.s64 = ctx.r10.s64 + 14104;
	// lwz r11,120(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// bl 0x82f04130
	ctx.lr = 0x82F8CD20;
	sub_82F04130(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r7,r1,91
	ctx.r7.s64 = ctx.r1.s64 + 91;
	// addi r6,r1,352
	ctx.r6.s64 = ctx.r1.s64 + 352;
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F8CD44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f8cd6c
	if (!ctx.cr6.eq) goto loc_82F8CD6C;
	// bl 0x82f670f0
	ctx.lr = 0x82F8CD6C;
	sub_82F670F0(ctx, base);
loc_82F8CD6C:
	// lbz r11,352(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 352);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8cd80
	if (ctx.cr6.lt) goto loc_82F8CD80;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8CD80;
	sub_82F6BAA0(ctx, base);
loc_82F8CD80:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x82f8d440
	if (ctx.cr6.lt) goto loc_82F8D440;
	// stb r28,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r28.u8);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r23,24(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82f6c2d0
	ctx.lr = 0x82F8CDA0;
	sub_82F6C2D0(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x82f6b840
	ctx.lr = 0x82F8CDA8;
	sub_82F6B840(ctx, base);
	// stb r3,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r3.u8);
	// stb r27,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r27.u8);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// addi r5,r11,14068
	ctx.r5.s64 = ctx.r11.s64 + 14068;
	// lwz r11,120(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// bl 0x82f04130
	ctx.lr = 0x82F8CDC8;
	sub_82F04130(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r7,r1,85
	ctx.r7.s64 = ctx.r1.s64 + 85;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F8CDEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f8ce14
	if (!ctx.cr6.eq) goto loc_82F8CE14;
	// bl 0x82f670f0
	ctx.lr = 0x82F8CE14;
	sub_82F670F0(ctx, base);
loc_82F8CE14:
	// lbz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 176);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8ce28
	if (ctx.cr6.lt) goto loc_82F8CE28;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8CE28;
	sub_82F6BAA0(ctx, base);
loc_82F8CE28:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x82f8d440
	if (ctx.cr6.lt) goto loc_82F8D440;
	// stb r28,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r28.u8);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r23,24(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82f6c2d0
	ctx.lr = 0x82F8CE48;
	sub_82F6C2D0(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x82f6b840
	ctx.lr = 0x82F8CE50;
	sub_82F6B840(ctx, base);
	// stb r3,324(r1)
	PPC_STORE_U8(ctx.r1.u32 + 324, ctx.r3.u8);
	// stb r27,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r27.u8);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r5,r11,14020
	ctx.r5.s64 = ctx.r11.s64 + 14020;
	// lwz r11,120(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// bl 0x82f04130
	ctx.lr = 0x82F8CE70;
	sub_82F04130(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r7,r1,89
	ctx.r7.s64 = ctx.r1.s64 + 89;
	// addi r6,r1,320
	ctx.r6.s64 = ctx.r1.s64 + 320;
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F8CE94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f8cebc
	if (!ctx.cr6.eq) goto loc_82F8CEBC;
	// bl 0x82f670f0
	ctx.lr = 0x82F8CEBC;
	sub_82F670F0(ctx, base);
loc_82F8CEBC:
	// lbz r11,320(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 320);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8ced0
	if (ctx.cr6.lt) goto loc_82F8CED0;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8CED0;
	sub_82F6BAA0(ctx, base);
loc_82F8CED0:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// blt cr6,0x82f8d440
	if (ctx.cr6.lt) goto loc_82F8D440;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r27,24(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82f6c2d0
	ctx.lr = 0x82F8CEF0;
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82f6b390
	ctx.lr = 0x82F8CF04;
	sub_82F6B390(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r26,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r26.u8);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// addi r5,r10,14016
	ctx.r5.s64 = ctx.r10.s64 + 14016;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,120(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// bl 0x82f04130
	ctx.lr = 0x82F8CF38;
	sub_82F04130(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F8CF5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f8cf84
	if (!ctx.cr6.eq) goto loc_82F8CF84;
	// bl 0x82f670f0
	ctx.lr = 0x82F8CF84;
	sub_82F670F0(ctx, base);
loc_82F8CF84:
	// lbz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 192);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8cf98
	if (ctx.cr6.lt) goto loc_82F8CF98;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8CF98;
	sub_82F6BAA0(ctx, base);
loc_82F8CF98:
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f8cfc0
	if (!ctx.cr6.eq) goto loc_82F8CFC0;
	// bl 0x82f670f0
	ctx.lr = 0x82F8CFC0;
	sub_82F670F0(ctx, base);
loc_82F8CFC0:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x82f8d440
	if (ctx.cr6.lt) goto loc_82F8D440;
	// stb r28,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r28.u8);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r27,24(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82f6c2d0
	ctx.lr = 0x82F8CFE0;
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82f6b390
	ctx.lr = 0x82F8CFF4;
	sub_82F6B390(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r26,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r26.u8);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addi r5,r10,14008
	ctx.r5.s64 = ctx.r10.s64 + 14008;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r11.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,120(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// bl 0x82f04130
	ctx.lr = 0x82F8D028;
	sub_82F04130(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F8D04C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f8d074
	if (!ctx.cr6.eq) goto loc_82F8D074;
	// bl 0x82f670f0
	ctx.lr = 0x82F8D074;
	sub_82F670F0(ctx, base);
loc_82F8D074:
	// lbz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 208);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8d088
	if (ctx.cr6.lt) goto loc_82F8D088;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8D088;
	sub_82F6BAA0(ctx, base);
loc_82F8D088:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f8d0b0
	if (!ctx.cr6.eq) goto loc_82F8D0B0;
	// bl 0x82f670f0
	ctx.lr = 0x82F8D0B0;
	sub_82F670F0(ctx, base);
loc_82F8D0B0:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// blt cr6,0x82f8d440
	if (ctx.cr6.lt) goto loc_82F8D440;
	// stb r28,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r28.u8);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r27,24(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82f6c2d0
	ctx.lr = 0x82F8D0D0;
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82f6b390
	ctx.lr = 0x82F8D0E4;
	sub_82F6B390(ctx, base);
	// stb r26,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r26.u8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r5,r10,14140
	ctx.r5.s64 = ctx.r10.s64 + 14140;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r11.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,120(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// bl 0x82f04130
	ctx.lr = 0x82F8D118;
	sub_82F04130(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F8D13C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f8d164
	if (!ctx.cr6.eq) goto loc_82F8D164;
	// bl 0x82f670f0
	ctx.lr = 0x82F8D164;
	sub_82F670F0(ctx, base);
loc_82F8D164:
	// lbz r11,240(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 240);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8d178
	if (ctx.cr6.lt) goto loc_82F8D178;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8D178;
	sub_82F6BAA0(ctx, base);
loc_82F8D178:
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f8d1a0
	if (!ctx.cr6.eq) goto loc_82F8D1A0;
	// bl 0x82f670f0
	ctx.lr = 0x82F8D1A0;
	sub_82F670F0(ctx, base);
loc_82F8D1A0:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x82f8d440
	if (ctx.cr6.lt) goto loc_82F8D440;
	// stb r28,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r28.u8);
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r27,24(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82f6c2d0
	ctx.lr = 0x82F8D1C0;
	sub_82F6C2D0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82f6b480
	ctx.lr = 0x82F8D1C8;
	sub_82F6B480(ctx, base);
	// stfd f1,280(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 280, ctx.f1.u64);
	// stb r25,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r25.u8);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addi r5,r11,14056
	ctx.r5.s64 = ctx.r11.s64 + 14056;
	// lwz r11,120(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// bl 0x82f04130
	ctx.lr = 0x82F8D1E8;
	sub_82F04130(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r7,r1,86
	ctx.r7.s64 = ctx.r1.s64 + 86;
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F8D20C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f8d234
	if (!ctx.cr6.eq) goto loc_82F8D234;
	// bl 0x82f670f0
	ctx.lr = 0x82F8D234;
	sub_82F670F0(ctx, base);
loc_82F8D234:
	// lbz r11,272(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 272);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8d248
	if (ctx.cr6.lt) goto loc_82F8D248;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8D248;
	sub_82F6BAA0(ctx, base);
loc_82F8D248:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// blt cr6,0x82f8d440
	if (ctx.cr6.lt) goto loc_82F8D440;
	// stb r28,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r28.u8);
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r27,24(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82f6c2d0
	ctx.lr = 0x82F8D268;
	sub_82F6C2D0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82f6b480
	ctx.lr = 0x82F8D270;
	sub_82F6B480(ctx, base);
	// stfd f1,312(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 312, ctx.f1.u64);
	// stb r25,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r25.u8);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r5,r11,14044
	ctx.r5.s64 = ctx.r11.s64 + 14044;
	// lwz r11,120(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// bl 0x82f04130
	ctx.lr = 0x82F8D290;
	sub_82F04130(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F8D2B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f8d2dc
	if (!ctx.cr6.eq) goto loc_82F8D2DC;
	// bl 0x82f670f0
	ctx.lr = 0x82F8D2DC;
	sub_82F670F0(ctx, base);
loc_82F8D2DC:
	// lbz r11,304(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 304);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8d2f0
	if (ctx.cr6.lt) goto loc_82F8D2F0;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8D2F0;
	sub_82F6BAA0(ctx, base);
loc_82F8D2F0:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// blt cr6,0x82f8d440
	if (ctx.cr6.lt) goto loc_82F8D440;
	// stb r28,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r28.u8);
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r27,24(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82f6c2d0
	ctx.lr = 0x82F8D310;
	sub_82F6C2D0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82f6b480
	ctx.lr = 0x82F8D318;
	sub_82F6B480(ctx, base);
	// stfd f1,344(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 344, ctx.f1.u64);
	// stb r25,336(r1)
	PPC_STORE_U8(ctx.r1.u32 + 336, ctx.r25.u8);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// addi r5,r11,14088
	ctx.r5.s64 = ctx.r11.s64 + 14088;
	// lwz r11,120(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// bl 0x82f04130
	ctx.lr = 0x82F8D338;
	sub_82F04130(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r7,r1,90
	ctx.r7.s64 = ctx.r1.s64 + 90;
	// addi r6,r1,336
	ctx.r6.s64 = ctx.r1.s64 + 336;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F8D35C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f8d384
	if (!ctx.cr6.eq) goto loc_82F8D384;
	// bl 0x82f670f0
	ctx.lr = 0x82F8D384;
	sub_82F670F0(ctx, base);
loc_82F8D384:
	// lbz r11,336(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 336);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8d398
	if (ctx.cr6.lt) goto loc_82F8D398;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8D398;
	sub_82F6BAA0(ctx, base);
loc_82F8D398:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// blt cr6,0x82f8d440
	if (ctx.cr6.lt) goto loc_82F8D440;
	// stb r28,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r28.u8);
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,24(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82f6c2d0
	ctx.lr = 0x82F8D3B8;
	sub_82F6C2D0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82f6b480
	ctx.lr = 0x82F8D3C0;
	sub_82F6B480(ctx, base);
	// stfd f1,376(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 376, ctx.f1.u64);
	// stb r25,368(r1)
	PPC_STORE_U8(ctx.r1.u32 + 368, ctx.r25.u8);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r5,r11,-16216
	ctx.r5.s64 = ctx.r11.s64 + -16216;
	// lwz r11,120(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// bl 0x82f04130
	ctx.lr = 0x82F8D3E0;
	sub_82F04130(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,368
	ctx.r6.s64 = ctx.r1.s64 + 368;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F8D404;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f8d42c
	if (!ctx.cr6.eq) goto loc_82F8D42C;
	// bl 0x82f670f0
	ctx.lr = 0x82F8D42C;
	sub_82F670F0(ctx, base);
loc_82F8D42C:
	// lbz r11,368(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 368);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8d440
	if (ctx.cr6.lt) goto loc_82F8D440;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8D440;
	sub_82F6BAA0(ctx, base);
loc_82F8D440:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82f6c328
	ctx.lr = 0x82F8D44C;
	sub_82F6C328(ctx, base);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82f8d46c
	if (ctx.cr6.eq) goto loc_82F8D46C;
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F8D46C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F8D46C:
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_82F8D474"))) PPC_WEAK_FUNC(sub_82F8D474);
PPC_FUNC_IMPL(__imp__sub_82F8D474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8D478"))) PPC_WEAK_FUNC(sub_82F8D478);
PPC_FUNC_IMPL(__imp__sub_82F8D478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82F8D480;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82f8c468
	ctx.lr = 0x82F8D498;
	sub_82F8C468(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,14328
	ctx.r11.s64 = ctx.r11.s64 + 14328;
	// addi r10,r10,14352
	ctx.r10.s64 = ctx.r10.s64 + 14352;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r29,r31,180
	ctx.r29.s64 = ctx.r31.s64 + 180;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r26,r31,16
	ctx.r26.s64 = ctx.r31.s64 + 16;
	// bl 0x82f67e90
	ctx.lr = 0x82F8D4C8;
	sub_82F67E90(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f67fa0
	ctx.lr = 0x82F8D4D4;
	sub_82F67FA0(ctx, base);
	// addi r28,r31,192
	ctx.r28.s64 = ctx.r31.s64 + 192;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f67e90
	ctx.lr = 0x82F8D4E8;
	sub_82F67E90(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f67fa0
	ctx.lr = 0x82F8D4F4;
	sub_82F67FA0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6ad40
	ctx.lr = 0x82F8D508;
	sub_82F6AD40(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f8a7b0
	ctx.lr = 0x82F8D518;
	sub_82F8A7B0(ctx, base);
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8d52c
	if (ctx.cr6.lt) goto loc_82F8D52C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8D52C;
	sub_82F6BAA0(ctx, base);
loc_82F8D52C:
	// li r9,3
	ctx.r9.s64 = 3;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r29,r11,16
	ctx.r29.s64 = ctx.r11.s64 + 16;
	// addi r28,r10,260
	ctx.r28.s64 = ctx.r10.s64 + 260;
	// lwz r27,16(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r24,r1,80
	ctx.r24.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6aba0
	ctx.lr = 0x82F8D558;
	sub_82F6ABA0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,40(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F8D578;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8d58c
	if (ctx.cr6.lt) goto loc_82F8D58C;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8D58C;
	sub_82F6BAA0(ctx, base);
loc_82F8D58C:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82f04b00
	ctx.lr = 0x82F8D59C;
	sub_82F04B00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82F8D5A8"))) PPC_WEAK_FUNC(sub_82F8D5A8);
PPC_FUNC_IMPL(__imp__sub_82F8D5A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82F8D5B0;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subfic r10,r10,6
	ctx.xer.ca = ctx.r10.u32 <= 6;
	ctx.r10.s64 = 6 - ctx.r10.s64;
	// addi r3,r11,272
	ctx.r3.s64 = ctx.r11.s64 + 272;
	// subfe r11,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r5,r11,31
	ctx.r5.u64 = ctx.r11.u32 & 0x1;
	// bl 0x82f10ab0
	ctx.lr = 0x82F8D5E4;
	sub_82F10AB0(ctx, base);
	// clrlwi. r28,r3,24
	ctx.r28.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x82f8d62c
	if (!ctx.cr0.eq) goto loc_82F8D62C;
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subfic r10,r10,6
	ctx.xer.ca = ctx.r10.u32 <= 6;
	ctx.r10.s64 = 6 - ctx.r10.s64;
	// addi r3,r11,268
	ctx.r3.s64 = ctx.r11.s64 + 268;
	// subfe r11,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r5,r11,31
	ctx.r5.u64 = ctx.r11.u32 & 0x1;
	// bl 0x82f10ab0
	ctx.lr = 0x82F8D60C;
	sub_82F10AB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f8d62c
	if (!ctx.cr0.eq) goto loc_82F8D62C;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f87920
	ctx.lr = 0x82F8D628;
	sub_82F87920(ctx, base);
	// b 0x82f8d788
	goto loc_82F8D788;
loc_82F8D62C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,9
	ctx.r10.s64 = 9;
	// stb r11,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r11.u8);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stb r11,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, ctx.r11.u8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f884e8
	ctx.lr = 0x82F8D654;
	sub_82F884E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8d668
	if (ctx.cr0.eq) goto loc_82F8D668;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6bbb0
	ctx.lr = 0x82F8D668;
	sub_82F6BBB0(ctx, base);
loc_82F8D668:
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// beq cr6,0x82f8d684
	if (ctx.cr6.eq) goto loc_82F8D684;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82f6bbb0
	ctx.lr = 0x82F8D680;
	sub_82F6BBB0(ctx, base);
	// b 0x82f8d75c
	goto loc_82F8D75C;
loc_82F8D684:
	// addi r27,r29,164
	ctx.r27.s64 = ctx.r29.s64 + 164;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f682f0
	ctx.lr = 0x82F8D698;
	sub_82F682F0(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82f8d6b0
	if (ctx.cr6.eq) goto loc_82F8D6B0;
	// addi r4,r29,176
	ctx.r4.s64 = ctx.r29.s64 + 176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f68378
	ctx.lr = 0x82F8D6AC;
	sub_82F68378(ctx, base);
	// b 0x82f8d6d4
	goto loc_82F8D6D4;
loc_82F8D6B0:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f682f0
	ctx.lr = 0x82F8D6C0;
	sub_82F682F0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f68378
	ctx.lr = 0x82F8D6CC;
	sub_82F68378(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f67f08
	ctx.lr = 0x82F8D6D4;
	sub_82F67F08(ctx, base);
loc_82F8D6D4:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f8d748
	if (!ctx.cr6.eq) goto loc_82F8D748;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f8d748
	if (ctx.cr6.eq) goto loc_82F8D748;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,44(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F8D70C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f67f08
	ctx.lr = 0x82F8D718;
	sub_82F67F08(ctx, base);
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8d72c
	if (ctx.cr6.lt) goto loc_82F8D72C;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8D72C;
	sub_82F6BAA0(ctx, base);
loc_82F8D72C:
	// lbz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8d740
	if (ctx.cr6.lt) goto loc_82F8D740;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8D740;
	sub_82F6BAA0(ctx, base);
loc_82F8D740:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82f8d788
	goto loc_82F8D788;
loc_82F8D748:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82f6bea0
	ctx.lr = 0x82F8D754;
	sub_82F6BEA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f67f08
	ctx.lr = 0x82F8D75C;
	sub_82F67F08(ctx, base);
loc_82F8D75C:
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8d770
	if (ctx.cr6.lt) goto loc_82F8D770;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8D770;
	sub_82F6BAA0(ctx, base);
loc_82F8D770:
	// lbz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8d784
	if (ctx.cr6.lt) goto loc_82F8D784;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8D784;
	sub_82F6BAA0(ctx, base);
loc_82F8D784:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82F8D788:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82F8D790"))) PPC_WEAK_FUNC(sub_82F8D790);
PPC_FUNC_IMPL(__imp__sub_82F8D790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82F8D798;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// cmplw cr6,r27,r26
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82f8d7b8
	if (!ctx.cr6.eq) goto loc_82F8D7B8;
loc_82F8D7B0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f8d878
	goto loc_82F8D878;
loc_82F8D7B8:
	// lwz r11,204(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f8d874
	if (ctx.cr6.eq) goto loc_82F8D874;
	// lwz r28,4(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82f8d874
	if (ctx.cr6.eq) goto loc_82F8D874;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82F8D7D8:
	// lwz r11,204(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 204);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82f68a70
	ctx.lr = 0x82F8D7EC;
	sub_82F68A70(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f8d864
	if (ctx.cr6.eq) goto loc_82F8D864;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F8D80C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F8D824;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F8D844;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bne 0x82f8d880
	if (!ctx.cr0.eq) goto loc_82F8D880;
	// bctrl 
	ctx.lr = 0x82F8D864;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F8D864:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82f8d7d8
	if (ctx.cr6.lt) goto loc_82F8D7D8;
loc_82F8D874:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F8D878:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_82F8D880:
	// bctrl 
	ctx.lr = 0x82F8D884;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82f8d7b0
	goto loc_82F8D7B0;
}

__attribute__((alias("__imp__sub_82F8D888"))) PPC_WEAK_FUNC(sub_82F8D888);
PPC_FUNC_IMPL(__imp__sub_82F8D888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82F8D890;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,188(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 188);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f8d8ec
	if (!ctx.cr6.eq) goto loc_82F8D8EC;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82f8d8ec
	if (!ctx.cr6.eq) goto loc_82F8D8EC;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F8D8B8;
	sub_82EF6EF8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82f8d8e0
	if (ctx.cr0.eq) goto loc_82F8D8E0;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// bl 0x82f168d8
	ctx.lr = 0x82F8D8DC;
	sub_82F168D8(ctx, base);
	// b 0x82f8d8e4
	goto loc_82F8D8E4;
loc_82F8D8E0:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82F8D8E4:
	// stw r31,188(r27)
	PPC_STORE_U32(ctx.r27.u32 + 188, ctx.r31.u32);
	// b 0x82f8d9e4
	goto loc_82F8D9E4;
loc_82F8D8EC:
	// lwz r10,16(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r6,16
	ctx.r3.s64 = ctx.r6.s64 + 16;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,260
	ctx.r5.s64 = ctx.r11.s64 + 260;
	// lwz r11,44(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F8D914;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8d9d0
	if (ctx.cr0.eq) goto loc_82F8D9D0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6ad80
	ctx.lr = 0x82F8D924;
	sub_82F6AD80(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82f8d940
	if (ctx.cr0.eq) goto loc_82F8D940;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F8D940;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F8D940:
	// lwz r10,188(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 188);
	// rlwinm r11,r28,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// beq cr6,0x82f8d98c
	if (ctx.cr6.eq) goto loc_82F8D98C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ef7138
	ctx.lr = 0x82F8D964;
	sub_82EF7138(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f8d9ac
	if (ctx.cr6.eq) goto loc_82F8D9AC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bne 0x82f8d9ac
	if (!ctx.cr0.eq) goto loc_82F8D9AC;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82f8d9a8
	goto loc_82F8D9A8;
loc_82F8D98C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f8d9ac
	if (ctx.cr6.eq) goto loc_82F8D9AC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bne 0x82f8d9ac
	if (!ctx.cr0.eq) goto loc_82F8D9AC;
loc_82F8D9A8:
	// bl 0x82ef6f38
	ctx.lr = 0x82F8D9AC;
	sub_82EF6F38(ctx, base);
loc_82F8D9AC:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f8d9d0
	if (ctx.cr6.eq) goto loc_82F8D9D0;
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
	ctx.lr = 0x82F8D9D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F8D9D0:
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8d9e4
	if (ctx.cr6.lt) goto loc_82F8D9E4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8D9E4;
	sub_82F6BAA0(ctx, base);
loc_82F8D9E4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82F8D9EC"))) PPC_WEAK_FUNC(sub_82F8D9EC);
PPC_FUNC_IMPL(__imp__sub_82F8D9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8D9F0"))) PPC_WEAK_FUNC(sub_82F8D9F0);
PPC_FUNC_IMPL(__imp__sub_82F8D9F0) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,14328
	ctx.r11.s64 = ctx.r11.s64 + 14328;
	// addi r10,r10,14352
	ctx.r10.s64 = ctx.r10.s64 + 14352;
	// lwz r3,204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// beq cr6,0x82f8da30
	if (ctx.cr6.eq) goto loc_82F8DA30;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82f0a3f0
	ctx.lr = 0x82F8DA30;
	sub_82F0A3F0(ctx, base);
loc_82F8DA30:
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// bl 0x82f67f08
	ctx.lr = 0x82F8DA38;
	sub_82F67F08(ctx, base);
	// addi r3,r31,180
	ctx.r3.s64 = ctx.r31.s64 + 180;
	// bl 0x82f67f08
	ctx.lr = 0x82F8DA40;
	sub_82F67F08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f8c4d8
	ctx.lr = 0x82F8DA48;
	sub_82F8C4D8(ctx, base);
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

__attribute__((alias("__imp__sub_82F8DA5C"))) PPC_WEAK_FUNC(sub_82F8DA5C);
PPC_FUNC_IMPL(__imp__sub_82F8DA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8DA60"))) PPC_WEAK_FUNC(sub_82F8DA60);
PPC_FUNC_IMPL(__imp__sub_82F8DA60) {
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
	// bl 0x82f8c4d8
	ctx.lr = 0x82F8DA80;
	sub_82F8C4D8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8da90
	if (ctx.cr0.eq) goto loc_82F8DA90;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F8DA90;
	sub_82EF6F38(ctx, base);
loc_82F8DA90:
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

__attribute__((alias("__imp__sub_82F8DAAC"))) PPC_WEAK_FUNC(sub_82F8DAAC);
PPC_FUNC_IMPL(__imp__sub_82F8DAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8DAB0"))) PPC_WEAK_FUNC(sub_82F8DAB0);
PPC_FUNC_IMPL(__imp__sub_82F8DAB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F8DAB8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82f8d478
	ctx.lr = 0x82F8DACC;
	sub_82F8D478(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,14328
	ctx.r11.s64 = ctx.r11.s64 + 14328;
	// addi r10,r10,14352
	ctx.r10.s64 = ctx.r10.s64 + 14352;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,13956
	ctx.r5.s64 = ctx.r11.s64 + 13956;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f57568
	ctx.lr = 0x82F8DAFC;
	sub_82F57568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F8DB08"))) PPC_WEAK_FUNC(sub_82F8DB08);
PPC_FUNC_IMPL(__imp__sub_82F8DB08) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82f8db60
	sub_82F8DB60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F8DB10"))) PPC_WEAK_FUNC(sub_82F8DB10);
PPC_FUNC_IMPL(__imp__sub_82F8DB10) {
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
	// lis r11,-32007
	ctx.r11.s64 = -2097610752;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-13768
	ctx.r4.s64 = ctx.r11.s64 + -13768;
	// bl 0x82f6a308
	ctx.lr = 0x82F8DB30;
	sub_82F6A308(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,25712
	ctx.r11.s64 = ctx.r11.s64 + 25712;
	// addi r10,r10,11640
	ctx.r10.s64 = ctx.r10.s64 + 11640;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82F8DB60"))) PPC_WEAK_FUNC(sub_82F8DB60);
PPC_FUNC_IMPL(__imp__sub_82F8DB60) {
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
	// bl 0x82f8d9f0
	ctx.lr = 0x82F8DB80;
	sub_82F8D9F0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8db90
	if (ctx.cr0.eq) goto loc_82F8DB90;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F8DB90;
	sub_82EF6F38(ctx, base);
loc_82F8DB90:
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

__attribute__((alias("__imp__sub_82F8DBAC"))) PPC_WEAK_FUNC(sub_82F8DBAC);
PPC_FUNC_IMPL(__imp__sub_82F8DBAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8DBB0"))) PPC_WEAK_FUNC(sub_82F8DBB0);
PPC_FUNC_IMPL(__imp__sub_82F8DBB0) {
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
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82ef2698
	ctx.lr = 0x82F8DBD0;
	sub_82EF2698(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stb r11,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r11.u8);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82F8DBFC"))) PPC_WEAK_FUNC(sub_82F8DBFC);
PPC_FUNC_IMPL(__imp__sub_82F8DBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8DC00"))) PPC_WEAK_FUNC(sub_82F8DC00);
PPC_FUNC_IMPL(__imp__sub_82F8DC00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82F8DC08;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r27,r31,8
	ctx.r27.s64 = ctx.r31.s64 + 8;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x832b227c
	ctx.lr = 0x82F8DC2C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82f8dc4c
	if (!ctx.cr6.lt) goto loc_82F8DC4C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82f8dc64
	goto loc_82F8DC64;
loc_82F8DC4C:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82F8DC64:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f070e8
	ctx.lr = 0x82F8DC6C;
	sub_82F070E8(ctx, base);
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8dc84
	if (ctx.cr0.eq) goto loc_82F8DC84;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f8dc84
	if (ctx.cr6.eq) goto loc_82F8DC84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef1bf0
	ctx.lr = 0x82F8DC84;
	sub_82EF1BF0(ctx, base);
loc_82F8DC84:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832b226c
	ctx.lr = 0x82F8DC8C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82F8DC94"))) PPC_WEAK_FUNC(sub_82F8DC94);
PPC_FUNC_IMPL(__imp__sub_82F8DC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8DC98"))) PPC_WEAK_FUNC(sub_82F8DC98);
PPC_FUNC_IMPL(__imp__sub_82F8DC98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F8DCA0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f8dcf4
	if (ctx.cr6.eq) goto loc_82F8DCF4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r31,4(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f8dce4
	if (ctx.cr6.eq) goto loc_82F8DCE4;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82F8DCC8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f8dcd8
	if (ctx.cr6.eq) goto loc_82F8DCD8;
	// bl 0x82ef1bf0
	ctx.lr = 0x82F8DCD8;
	sub_82EF1BF0(ctx, base);
loc_82F8DCD8:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x82f8dcc8
	if (!ctx.cr0.eq) goto loc_82F8DCC8;
loc_82F8DCE4:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82ef6f38
	ctx.lr = 0x82F8DCEC;
	sub_82EF6F38(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
loc_82F8DCF4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F8DCFC"))) PPC_WEAK_FUNC(sub_82F8DCFC);
PPC_FUNC_IMPL(__imp__sub_82F8DCFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8DD00"))) PPC_WEAK_FUNC(sub_82F8DD00);
PPC_FUNC_IMPL(__imp__sub_82F8DD00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82F8DD08;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r25,r31,8
	ctx.r25.s64 = ctx.r31.s64 + 8;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x832b227c
	ctx.lr = 0x82F8DD24;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r11,r26,16
	ctx.r11.s64 = ctx.r26.s64 + 16;
	// rlwinm r28,r11,0,0,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82f8de30
	if (!ctx.cr6.gt) goto loc_82F8DE30;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r3,r28,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f8dd84
	if (!ctx.cr6.eq) goto loc_82F8DD84;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F8DD4C;
	sub_82EF6EF8(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82f8de2c
	if (ctx.cr6.eq) goto loc_82F8DE2C;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82F8DD64:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f8dd74
	if (ctx.cr6.eq) goto loc_82F8DD74;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
loc_82F8DD74:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x82f8dd64
	if (!ctx.cr0.eq) goto loc_82F8DD64;
	// b 0x82f8de2c
	goto loc_82F8DE2C;
loc_82F8DD84:
	// bl 0x82ef6ef8
	ctx.lr = 0x82F8DD88;
	sub_82EF6EF8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// beq cr6,0x82f8ddbc
	if (ctx.cr6.eq) goto loc_82F8DDBC;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_82F8DDA0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f8ddb0
	if (ctx.cr6.eq) goto loc_82F8DDB0;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
loc_82F8DDB0:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x82f8dda0
	if (!ctx.cr0.eq) goto loc_82F8DDA0;
loc_82F8DDBC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f8ddf0
	if (ctx.cr6.eq) goto loc_82F8DDF0;
loc_82F8DDCC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r3,r30,r27
	ctx.r3.u64 = ctx.r30.u64 + ctx.r27.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82f070e8
	ctx.lr = 0x82F8DDDC;
	sub_82F070E8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f8ddcc
	if (ctx.cr6.lt) goto loc_82F8DDCC;
loc_82F8DDF0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f8de20
	if (ctx.cr6.eq) goto loc_82F8DE20;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_82F8DE04:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f8de14
	if (ctx.cr6.eq) goto loc_82F8DE14;
	// bl 0x82ef1bf0
	ctx.lr = 0x82F8DE14;
	sub_82EF1BF0(ctx, base);
loc_82F8DE14:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bne 0x82f8de04
	if (!ctx.cr0.eq) goto loc_82F8DE04;
loc_82F8DE20:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82ef6f38
	ctx.lr = 0x82F8DE28;
	sub_82EF6F38(ctx, base);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
loc_82F8DE2C:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_82F8DE30:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r26,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82f070e8
	ctx.lr = 0x82F8DE44;
	sub_82F070E8(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x832b226c
	ctx.lr = 0x82F8DE4C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82F8DE54"))) PPC_WEAK_FUNC(sub_82F8DE54);
PPC_FUNC_IMPL(__imp__sub_82F8DE54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8DE58"))) PPC_WEAK_FUNC(sub_82F8DE58);
PPC_FUNC_IMPL(__imp__sub_82F8DE58) {
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
	// bl 0x82f8dc98
	ctx.lr = 0x82F8DE70;
	sub_82F8DC98(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82f279e0
	ctx.lr = 0x82F8DE78;
	sub_82F279E0(ctx, base);
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

__attribute__((alias("__imp__sub_82F8DE8C"))) PPC_WEAK_FUNC(sub_82F8DE8C);
PPC_FUNC_IMPL(__imp__sub_82F8DE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8DE90"))) PPC_WEAK_FUNC(sub_82F8DE90);
PPC_FUNC_IMPL(__imp__sub_82F8DE90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82F8DE98;
	sub_82CA2BE0(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f8debc
	if (ctx.cr6.eq) goto loc_82F8DEBC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef1710
	ctx.lr = 0x82F8DEBC;
	sub_82EF1710(ctx, base);
loc_82F8DEBC:
	// lwz r3,48(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f8decc
	if (ctx.cr6.eq) goto loc_82F8DECC;
	// bl 0x82ef1bf0
	ctx.lr = 0x82F8DECC;
	sub_82EF1BF0(ctx, base);
loc_82F8DECC:
	// stw r31,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r31.u32);
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F8DED8;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f8df08
	if (ctx.cr0.eq) goto loc_82F8DF08;
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
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// bl 0x82f910a8
	ctx.lr = 0x82F8DF00;
	sub_82F910A8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x82f8df0c
	goto loc_82F8DF0C;
loc_82F8DF08:
	// li r27,0
	ctx.r27.s64 = 0;
loc_82F8DF0C:
	// li r30,3
	ctx.r30.s64 = 3;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82F8DF18:
	// li r9,0
	ctx.r9.s64 = 0;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bge 0x82f8df18
	if (!ctx.cr0.lt) goto loc_82F8DF18;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lfd f31,3376(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3376);
	// stfd f31,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f31.u64);
	// bl 0x82f6bbb0
	ctx.lr = 0x82F8DF48;
	sub_82F6BBB0(ctx, base);
	// lbz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8df5c
	if (ctx.cr6.lt) goto loc_82F8DF5C;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8DF5C;
	sub_82F6BAA0(ctx, base);
loc_82F8DF5C:
	// stfd f31,104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f31.u64);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82f6bbb0
	ctx.lr = 0x82F8DF70;
	sub_82F6BBB0(ctx, base);
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8df84
	if (ctx.cr6.lt) goto loc_82F8DF84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8DF84;
	sub_82F6BAA0(ctx, base);
loc_82F8DF84:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82f8dfa4
	if (ctx.cr6.eq) goto loc_82F8DFA4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F8DFA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82f8dfa8
	goto loc_82F8DFA8;
loc_82F8DFA4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F8DFA8:
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfd f0,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.f0.u64);
	// bl 0x82f6bbb0
	ctx.lr = 0x82F8DFD0;
	sub_82F6BBB0(ctx, base);
	// lbz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8dfe4
	if (ctx.cr6.lt) goto loc_82F8DFE4;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8DFE4;
	sub_82F6BAA0(ctx, base);
loc_82F8DFE4:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82f8e004
	if (ctx.cr6.eq) goto loc_82F8E004;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F8E000;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82f8e008
	goto loc_82F8E008;
loc_82F8E004:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F8E008:
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfd f0,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f0.u64);
	// bl 0x82f6bbb0
	ctx.lr = 0x82F8E030;
	sub_82F6BBB0(ctx, base);
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8e044
	if (ctx.cr6.lt) goto loc_82F8E044;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8E044;
	sub_82F6BAA0(ctx, base);
loc_82F8E044:
	// addi r4,r29,120
	ctx.r4.s64 = ctx.r29.s64 + 120;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82f8f118
	ctx.lr = 0x82F8E054;
	sub_82F8F118(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r11,120(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r5,r9,14476
	ctx.r5.s64 = ctx.r9.s64 + 14476;
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// bl 0x82f04130
	ctx.lr = 0x82F8E074;
	sub_82F04130(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r31,r28,16
	ctx.r31.s64 = ctx.r28.s64 + 16;
	// addi r26,r1,80
	ctx.r26.s64 = ctx.r1.s64 + 80;
	// lwz r28,16(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// bl 0x82f6aba0
	ctx.lr = 0x82F8E08C;
	sub_82F6ABA0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F8E0AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f8e0d4
	if (!ctx.cr6.eq) goto loc_82F8E0D4;
	// bl 0x82f670f0
	ctx.lr = 0x82F8E0D4;
	sub_82F670F0(ctx, base);
loc_82F8E0D4:
	// lbz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8e0e8
	if (ctx.cr6.lt) goto loc_82F8E0E8;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8E0E8;
	sub_82F6BAA0(ctx, base);
loc_82F8E0E8:
	// addi r31,r1,240
	ctx.r31.s64 = ctx.r1.s64 + 240;
loc_82F8E0EC:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8e104
	if (ctx.cr6.lt) goto loc_82F8E104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8E104;
	sub_82F6BAA0(ctx, base);
loc_82F8E104:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82f8e0ec
	if (!ctx.cr0.lt) goto loc_82F8E0EC;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82f8e12c
	if (ctx.cr6.eq) goto loc_82F8E12C;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F8E12C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F8E12C:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82F8E138"))) PPC_WEAK_FUNC(sub_82F8E138);
PPC_FUNC_IMPL(__imp__sub_82F8E138) {
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
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,29
	ctx.r8.s64 = 29;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r30,r11,120
	ctx.r30.s64 = ctx.r11.s64 + 120;
	// lwz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// addi r3,r10,588
	ctx.r3.s64 = ctx.r10.s64 + 588;
	// bl 0x82f0ad10
	ctx.lr = 0x82F8E17C;
	sub_82F0AD10(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F8E19C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f8e1bc
	if (ctx.cr6.eq) goto loc_82F8E1BC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F8E1BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F8E1BC:
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

__attribute__((alias("__imp__sub_82F8E1D4"))) PPC_WEAK_FUNC(sub_82F8E1D4);
PPC_FUNC_IMPL(__imp__sub_82F8E1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8E1D8"))) PPC_WEAK_FUNC(sub_82F8E1D8);
PPC_FUNC_IMPL(__imp__sub_82F8E1D8) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f87fd0
	ctx.lr = 0x82F8E1F4;
	sub_82F87FD0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,14568
	ctx.r11.s64 = ctx.r11.s64 + 14568;
	// addi r10,r10,14488
	ctx.r10.s64 = ctx.r10.s64 + 14488;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82F8E22C"))) PPC_WEAK_FUNC(sub_82F8E22C);
PPC_FUNC_IMPL(__imp__sub_82F8E22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8E230"))) PPC_WEAK_FUNC(sub_82F8E230);
PPC_FUNC_IMPL(__imp__sub_82F8E230) {
	PPC_FUNC_PROLOGUE();
	// li r3,24
	ctx.r3.s64 = 24;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F8E238"))) PPC_WEAK_FUNC(sub_82F8E238);
PPC_FUNC_IMPL(__imp__sub_82F8E238) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82f8ed60
	sub_82F8ED60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F8E240"))) PPC_WEAK_FUNC(sub_82F8E240);
PPC_FUNC_IMPL(__imp__sub_82F8E240) {
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
	// bl 0x82f87fd0
	ctx.lr = 0x82F8E264;
	sub_82F87FD0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,14568
	ctx.r11.s64 = ctx.r11.s64 + 14568;
	// addi r10,r10,14488
	ctx.r10.s64 = ctx.r10.s64 + 14488;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f8e138
	ctx.lr = 0x82F8E290;
	sub_82F8E138(ctx, base);
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

__attribute__((alias("__imp__sub_82F8E2AC"))) PPC_WEAK_FUNC(sub_82F8E2AC);
PPC_FUNC_IMPL(__imp__sub_82F8E2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8E2B0"))) PPC_WEAK_FUNC(sub_82F8E2B0);
PPC_FUNC_IMPL(__imp__sub_82F8E2B0) {
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
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F8E2D0;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f8e300
	if (ctx.cr0.eq) goto loc_82F8E300;
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
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x82f8e240
	ctx.lr = 0x82F8E2F8;
	sub_82F8E240(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82f8e304
	goto loc_82F8E304;
loc_82F8E300:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82F8E304:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82f6c328
	ctx.lr = 0x82F8E310;
	sub_82F6C328(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f8e330
	if (ctx.cr6.eq) goto loc_82F8E330;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F8E330;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F8E330:
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

__attribute__((alias("__imp__sub_82F8E348"))) PPC_WEAK_FUNC(sub_82F8E348);
PPC_FUNC_IMPL(__imp__sub_82F8E348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82F8E350;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82f8e1d8
	ctx.lr = 0x82F8E368;
	sub_82F8E1D8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,14672
	ctx.r11.s64 = ctx.r11.s64 + 14672;
	// addi r10,r10,14592
	ctx.r10.s64 = ctx.r10.s64 + 14592;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r29,r31,52
	ctx.r29.s64 = ctx.r31.s64 + 52;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r26,r31,16
	ctx.r26.s64 = ctx.r31.s64 + 16;
	// bl 0x82f67e90
	ctx.lr = 0x82F8E398;
	sub_82F67E90(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f67fa0
	ctx.lr = 0x82F8E3A4;
	sub_82F67FA0(ctx, base);
	// addi r28,r31,64
	ctx.r28.s64 = ctx.r31.s64 + 64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f67e90
	ctx.lr = 0x82F8E3B8;
	sub_82F67E90(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f67fa0
	ctx.lr = 0x82F8E3C4;
	sub_82F67FA0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6ad40
	ctx.lr = 0x82F8E3D8;
	sub_82F6AD40(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82faf9d0
	ctx.lr = 0x82F8E3E8;
	sub_82FAF9D0(ctx, base);
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8e3fc
	if (ctx.cr6.lt) goto loc_82F8E3FC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8E3FC;
	sub_82F6BAA0(ctx, base);
loc_82F8E3FC:
	// li r9,3
	ctx.r9.s64 = 3;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r29,r11,16
	ctx.r29.s64 = ctx.r11.s64 + 16;
	// addi r28,r10,260
	ctx.r28.s64 = ctx.r10.s64 + 260;
	// lwz r27,16(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r24,r1,80
	ctx.r24.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6aba0
	ctx.lr = 0x82F8E428;
	sub_82F6ABA0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,40(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F8E448;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8e45c
	if (ctx.cr6.lt) goto loc_82F8E45C;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8E45C;
	sub_82F6BAA0(ctx, base);
loc_82F8E45C:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82f04b00
	ctx.lr = 0x82F8E46C;
	sub_82F04B00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82F8E478"))) PPC_WEAK_FUNC(sub_82F8E478);
PPC_FUNC_IMPL(__imp__sub_82F8E478) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82f8e500
	sub_82F8E500(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F8E480"))) PPC_WEAK_FUNC(sub_82F8E480);
PPC_FUNC_IMPL(__imp__sub_82F8E480) {
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,14672
	ctx.r11.s64 = ctx.r11.s64 + 14672;
	// addi r10,r10,14592
	ctx.r10.s64 = ctx.r10.s64 + 14592;
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// beq cr6,0x82f8e4c0
	if (ctx.cr6.eq) goto loc_82F8E4C0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82f0a3f0
	ctx.lr = 0x82F8E4C0;
	sub_82F0A3F0(ctx, base);
loc_82F8E4C0:
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82f67f08
	ctx.lr = 0x82F8E4C8;
	sub_82F67F08(ctx, base);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x82f67f08
	ctx.lr = 0x82F8E4D0;
	sub_82F67F08(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f8e4e0
	if (ctx.cr6.eq) goto loc_82F8E4E0;
	// bl 0x82ef1bf0
	ctx.lr = 0x82F8E4E0;
	sub_82EF1BF0(ctx, base);
loc_82F8E4E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f0afc8
	ctx.lr = 0x82F8E4E8;
	sub_82F0AFC8(ctx, base);
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

__attribute__((alias("__imp__sub_82F8E4FC"))) PPC_WEAK_FUNC(sub_82F8E4FC);
PPC_FUNC_IMPL(__imp__sub_82F8E4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8E500"))) PPC_WEAK_FUNC(sub_82F8E500);
PPC_FUNC_IMPL(__imp__sub_82F8E500) {
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
	// bl 0x82f8e480
	ctx.lr = 0x82F8E520;
	sub_82F8E480(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8e530
	if (ctx.cr0.eq) goto loc_82F8E530;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F8E530;
	sub_82EF6F38(ctx, base);
loc_82F8E530:
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

__attribute__((alias("__imp__sub_82F8E54C"))) PPC_WEAK_FUNC(sub_82F8E54C);
PPC_FUNC_IMPL(__imp__sub_82F8E54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8E550"))) PPC_WEAK_FUNC(sub_82F8E550);
PPC_FUNC_IMPL(__imp__sub_82F8E550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82F8E558;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r3,116(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 116);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F8E57C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq 0x82f8e964
	if (ctx.cr0.eq) goto loc_82F8E964;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82ef1710
	ctx.lr = 0x82F8E58C;
	sub_82EF1710(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// addi r27,r11,12
	ctx.r27.s64 = ctx.r11.s64 + 12;
	// li r30,-1
	ctx.r30.s64 = -1;
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,105
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 105, ctx.xer);
	// beq cr6,0x82f8e5b4
	if (ctx.cr6.eq) goto loc_82F8E5B4;
	// cmpwi cr6,r11,73
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 73, ctx.xer);
	// bne cr6,0x82f8e71c
	if (!ctx.cr6.eq) goto loc_82F8E71C;
loc_82F8E5B4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ef8708
	ctx.lr = 0x82F8E5C0;
	sub_82EF8708(ctx, base);
	// li r6,6
	ctx.r6.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82ef8460
	ctx.lr = 0x82F8E5D4;
	sub_82EF8460(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// addi r10,r10,3724
	ctx.r10.s64 = ctx.r10.s64 + 3724;
loc_82F8E5E4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f8e608
	if (ctx.cr0.eq) goto loc_82F8E608;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f8e5e4
	if (ctx.cr6.eq) goto loc_82F8E5E4;
loc_82F8E608:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cntlzw r10,r9
	ctx.r10.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// rlwinm r31,r10,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82F8E61C:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r8,r30,r9
	ctx.r8.u64 = ctx.r30.u64 + ctx.r9.u64;
	// stwcx. r8,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82f8e61c
	if (!ctx.cr0.eq) goto loc_82F8E61C;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f8e648
	if (!ctx.cr0.eq) goto loc_82F8E648;
	// bl 0x82ef6f38
	ctx.lr = 0x82F8E648;
	sub_82EF6F38(ctx, base);
loc_82F8E648:
	// clrlwi. r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f8e6e0
	if (!ctx.cr0.eq) goto loc_82F8E6E0;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82ef8460
	ctx.lr = 0x82F8E664;
	sub_82EF8460(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// addi r10,r10,3732
	ctx.r10.s64 = ctx.r10.s64 + 3732;
loc_82F8E674:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f8e698
	if (ctx.cr0.eq) goto loc_82F8E698;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f8e674
	if (ctx.cr6.eq) goto loc_82F8E674;
loc_82F8E698:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cntlzw r10,r9
	ctx.r10.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// rlwinm r31,r10,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82F8E6AC:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r8,r30,r9
	ctx.r8.u64 = ctx.r30.u64 + ctx.r9.u64;
	// stwcx. r8,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82f8e6ac
	if (!ctx.cr0.eq) goto loc_82F8E6AC;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f8e6d8
	if (!ctx.cr0.eq) goto loc_82F8E6D8;
	// bl 0x82ef6f38
	ctx.lr = 0x82F8E6D8;
	sub_82EF6F38(ctx, base);
loc_82F8E6D8:
	// clrlwi. r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8e6e4
	if (ctx.cr0.eq) goto loc_82F8E6E4;
loc_82F8E6E0:
	// li r28,1
	ctx.r28.s64 = 1;
loc_82F8E6E4:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82F8E6F0:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r30,r10
	ctx.r9.u64 = ctx.r30.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82f8e6f0
	if (!ctx.cr0.eq) goto loc_82F8E6F0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f8e71c
	if (!ctx.cr0.eq) goto loc_82F8E71C;
	// bl 0x82ef6f38
	ctx.lr = 0x82F8E71C;
	sub_82EF6F38(ctx, base);
loc_82F8E71C:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8e840
	if (ctx.cr0.eq) goto loc_82F8E840;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82f12548
	ctx.lr = 0x82F8E72C;
	sub_82F12548(ctx, base);
	// lwz r11,192(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// bne cr6,0x82f8e740
	if (!ctx.cr6.eq) goto loc_82F8E740;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82F8E740:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F8E758;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F8E774;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82f03260
	ctx.lr = 0x82F8E788;
	sub_82F03260(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f8e7ac
	if (ctx.cr6.eq) goto loc_82F8E7AC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F8E7AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F8E7AC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f8e7cc
	if (ctx.cr6.eq) goto loc_82F8E7CC;
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
	ctx.lr = 0x82F8E7CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F8E7CC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f8e81c
	if (ctx.cr6.eq) goto loc_82F8E81C;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F8E7DC;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f8e808
	if (ctx.cr0.eq) goto loc_82F8E808;
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
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// bl 0x82f8e240
	ctx.lr = 0x82F8E804;
	sub_82F8E240(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_82F8E808:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82f8de90
	ctx.lr = 0x82F8E818;
	sub_82F8DE90(ctx, base);
	// b 0x82f8e830
	goto loc_82F8E830;
loc_82F8E81C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,14696
	ctx.r4.s64 = ctx.r11.s64 + 14696;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82f06e48
	ctx.lr = 0x82F8E830;
	sub_82F06E48(ctx, base);
loc_82F8E830:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f8e95c
	if (ctx.cr6.eq) goto loc_82F8E95C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82f8e958
	goto loc_82F8E958;
loc_82F8E840:
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// bl 0x82ef7638
	ctx.lr = 0x82F8E858;
	sub_82EF7638(ctx, base);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82f2f0d8
	ctx.lr = 0x82F8E868;
	sub_82F2F0D8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// rlwinm r31,r10,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82F8E880:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r8,r30,r9
	ctx.r8.u64 = ctx.r30.u64 + ctx.r9.u64;
	// stwcx. r8,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82f8e880
	if (!ctx.cr0.eq) goto loc_82F8E880;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f8e8ac
	if (!ctx.cr0.eq) goto loc_82F8E8AC;
	// bl 0x82ef6f38
	ctx.lr = 0x82F8E8AC;
	sub_82EF6F38(ctx, base);
loc_82F8E8AC:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// clrlwi. r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8e8d4
	if (ctx.cr0.eq) goto loc_82F8E8D4;
loc_82F8E8B8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f8e8c4
	if (ctx.cr6.eq) goto loc_82F8E8C4;
	// bl 0x82ef1bf0
	ctx.lr = 0x82F8E8C4;
	sub_82EF1BF0(ctx, base);
loc_82F8E8C4:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82ef1bf0
	ctx.lr = 0x82F8E8CC;
	sub_82EF1BF0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f8e968
	goto loc_82F8E968;
loc_82F8E8D4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F8E8E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r3,0,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFF00;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// beq cr6,0x82f8e8f8
	if (ctx.cr6.eq) goto loc_82F8E8F8;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// b 0x82f8e8b8
	goto loc_82F8E8B8;
loc_82F8E8F8:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f8e95c
	if (ctx.cr6.eq) goto loc_82F8E95C;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F8E910;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f8e93c
	if (ctx.cr0.eq) goto loc_82F8E93C;
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
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// bl 0x82f8e240
	ctx.lr = 0x82F8E938;
	sub_82F8E240(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_82F8E93C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82f8de90
	ctx.lr = 0x82F8E94C;
	sub_82F8DE90(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f8e95c
	if (ctx.cr6.eq) goto loc_82F8E95C;
loc_82F8E958:
	// bl 0x82ef1bf0
	ctx.lr = 0x82F8E95C;
	sub_82EF1BF0(ctx, base);
loc_82F8E95C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82ef1bf0
	ctx.lr = 0x82F8E964;
	sub_82EF1BF0(ctx, base);
loc_82F8E964:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82F8E968:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82F8E970"))) PPC_WEAK_FUNC(sub_82F8E970);
PPC_FUNC_IMPL(__imp__sub_82F8E970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82F8E978;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r3,116(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 116);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F8E99C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq 0x82f8ed54
	if (ctx.cr0.eq) goto loc_82F8ED54;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82ef1710
	ctx.lr = 0x82F8E9AC;
	sub_82EF1710(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,105
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 105, ctx.xer);
	// beq cr6,0x82f8e9d0
	if (ctx.cr6.eq) goto loc_82F8E9D0;
	// cmpwi cr6,r11,73
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 73, ctx.xer);
	// bne cr6,0x82f8eb08
	if (!ctx.cr6.eq) goto loc_82F8EB08;
loc_82F8E9D0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f67bc8
	ctx.lr = 0x82F8E9DC;
	sub_82F67BC8(ctx, base);
	// li r6,6
	ctx.r6.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f675a0
	ctx.lr = 0x82F8E9F0;
	sub_82F675A0(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r10,r11,3724
	ctx.r10.s64 = ctx.r11.s64 + 3724;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82F8EA00:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f8ea24
	if (ctx.cr0.eq) goto loc_82F8EA24;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f8ea00
	if (ctx.cr6.eq) goto loc_82F8EA00;
loc_82F8EA24:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r31,r9,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f8ea54
	if (!ctx.cr6.eq) goto loc_82F8EA54;
	// bl 0x82f670f0
	ctx.lr = 0x82F8EA54;
	sub_82F670F0(ctx, base);
loc_82F8EA54:
	// clrlwi. r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f8eadc
	if (!ctx.cr0.eq) goto loc_82F8EADC;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82f675a0
	ctx.lr = 0x82F8EA70;
	sub_82F675A0(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r10,r11,3732
	ctx.r10.s64 = ctx.r11.s64 + 3732;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82F8EA80:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82f8eaa4
	if (ctx.cr0.eq) goto loc_82F8EAA4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f8ea80
	if (ctx.cr6.eq) goto loc_82F8EA80;
loc_82F8EAA4:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r31,r9,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f8ead4
	if (!ctx.cr6.eq) goto loc_82F8EAD4;
	// bl 0x82f670f0
	ctx.lr = 0x82F8EAD4;
	sub_82F670F0(ctx, base);
loc_82F8EAD4:
	// clrlwi. r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8eae0
	if (ctx.cr0.eq) goto loc_82F8EAE0;
loc_82F8EADC:
	// li r29,1
	ctx.r29.s64 = 1;
loc_82F8EAE0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f8eb08
	if (!ctx.cr6.eq) goto loc_82F8EB08;
	// bl 0x82f670f0
	ctx.lr = 0x82F8EB08;
	sub_82F670F0(ctx, base);
loc_82F8EB08:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8ec2c
	if (ctx.cr0.eq) goto loc_82F8EC2C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82f12548
	ctx.lr = 0x82F8EB18;
	sub_82F12548(ctx, base);
	// lwz r11,192(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// bne cr6,0x82f8eb2c
	if (!ctx.cr6.eq) goto loc_82F8EB2C;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_82F8EB2C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F8EB44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F8EB60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f03260
	ctx.lr = 0x82F8EB74;
	sub_82F03260(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f8eb98
	if (ctx.cr6.eq) goto loc_82F8EB98;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F8EB98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F8EB98:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f8ebb8
	if (ctx.cr6.eq) goto loc_82F8EBB8;
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
	ctx.lr = 0x82F8EBB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F8EBB8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f8ec08
	if (ctx.cr6.eq) goto loc_82F8EC08;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F8EBC8;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f8ebf4
	if (ctx.cr0.eq) goto loc_82F8EBF4;
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
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// bl 0x82f8e240
	ctx.lr = 0x82F8EBF0;
	sub_82F8E240(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_82F8EBF4:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82f8de90
	ctx.lr = 0x82F8EC04;
	sub_82F8DE90(ctx, base);
	// b 0x82f8ec1c
	goto loc_82F8EC1C;
loc_82F8EC08:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,14696
	ctx.r4.s64 = ctx.r11.s64 + 14696;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82f06e48
	ctx.lr = 0x82F8EC1C;
	sub_82F06E48(ctx, base);
loc_82F8EC1C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f8ed4c
	if (ctx.cr6.eq) goto loc_82F8ED4C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82f8ed48
	goto loc_82F8ED48;
loc_82F8EC2C:
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82ef7638
	ctx.lr = 0x82F8EC44;
	sub_82EF7638(ctx, base);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82f2f0d8
	ctx.lr = 0x82F8EC54;
	sub_82F2F0D8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r6,-1
	ctx.r6.s64 = -1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// rlwinm r31,r10,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82F8EC70:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r8,r6,r9
	ctx.r8.u64 = ctx.r6.u64 + ctx.r9.u64;
	// stwcx. r8,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82f8ec70
	if (!ctx.cr0.eq) goto loc_82F8EC70;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f8ec9c
	if (!ctx.cr0.eq) goto loc_82F8EC9C;
	// bl 0x82ef6f38
	ctx.lr = 0x82F8EC9C;
	sub_82EF6F38(ctx, base);
loc_82F8EC9C:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// clrlwi. r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8ecc4
	if (ctx.cr0.eq) goto loc_82F8ECC4;
loc_82F8ECA8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f8ecb4
	if (ctx.cr6.eq) goto loc_82F8ECB4;
	// bl 0x82ef1bf0
	ctx.lr = 0x82F8ECB4;
	sub_82EF1BF0(ctx, base);
loc_82F8ECB4:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82ef1bf0
	ctx.lr = 0x82F8ECBC;
	sub_82EF1BF0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f8ed58
	goto loc_82F8ED58;
loc_82F8ECC4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F8ECD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r3,0,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFF00;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// beq cr6,0x82f8ece8
	if (ctx.cr6.eq) goto loc_82F8ECE8;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// b 0x82f8eca8
	goto loc_82F8ECA8;
loc_82F8ECE8:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f8ed4c
	if (ctx.cr6.eq) goto loc_82F8ED4C;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F8ED00;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f8ed2c
	if (ctx.cr0.eq) goto loc_82F8ED2C;
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
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// bl 0x82f8e240
	ctx.lr = 0x82F8ED28;
	sub_82F8E240(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_82F8ED2C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82f8de90
	ctx.lr = 0x82F8ED3C;
	sub_82F8DE90(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f8ed4c
	if (ctx.cr6.eq) goto loc_82F8ED4C;
loc_82F8ED48:
	// bl 0x82ef1bf0
	ctx.lr = 0x82F8ED4C;
	sub_82EF1BF0(ctx, base);
loc_82F8ED4C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82ef1bf0
	ctx.lr = 0x82F8ED54;
	sub_82EF1BF0(ctx, base);
loc_82F8ED54:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82F8ED58:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82F8ED60"))) PPC_WEAK_FUNC(sub_82F8ED60);
PPC_FUNC_IMPL(__imp__sub_82F8ED60) {
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
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f8ed8c
	if (ctx.cr6.eq) goto loc_82F8ED8C;
	// bl 0x82ef1bf0
	ctx.lr = 0x82F8ED8C;
	sub_82EF1BF0(ctx, base);
loc_82F8ED8C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f0afc8
	ctx.lr = 0x82F8ED94;
	sub_82F0AFC8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8eda4
	if (ctx.cr0.eq) goto loc_82F8EDA4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F8EDA4;
	sub_82EF6F38(ctx, base);
loc_82F8EDA4:
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

__attribute__((alias("__imp__sub_82F8EDC0"))) PPC_WEAK_FUNC(sub_82F8EDC0);
PPC_FUNC_IMPL(__imp__sub_82F8EDC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82f8e550
	sub_82F8E550(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F8EDC4"))) PPC_WEAK_FUNC(sub_82F8EDC4);
PPC_FUNC_IMPL(__imp__sub_82F8EDC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8EDC8"))) PPC_WEAK_FUNC(sub_82F8EDC8);
PPC_FUNC_IMPL(__imp__sub_82F8EDC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F8EDD0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82f8e348
	ctx.lr = 0x82F8EDE4;
	sub_82F8E348(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,14672
	ctx.r11.s64 = ctx.r11.s64 + 14672;
	// addi r10,r10,14592
	ctx.r10.s64 = ctx.r10.s64 + 14592;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,14444
	ctx.r5.s64 = ctx.r11.s64 + 14444;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f57568
	ctx.lr = 0x82F8EE14;
	sub_82F57568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F8EE20"))) PPC_WEAK_FUNC(sub_82F8EE20);
PPC_FUNC_IMPL(__imp__sub_82F8EE20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82F8EE28;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32007
	ctx.r11.s64 = -2097610752;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r4,r11,-7504
	ctx.r4.s64 = ctx.r11.s64 + -7504;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82f6a308
	ctx.lr = 0x82F8EE40;
	sub_82F6A308(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r10,r10,25712
	ctx.r10.s64 = ctx.r10.s64 + 25712;
	// addi r9,r9,11640
	ctx.r9.s64 = ctx.r9.s64 + 11640;
	// addi r31,r11,14460
	ctx.r31.s64 = ctx.r11.s64 + 14460;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r9,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r9.u32);
	// addi r28,r30,16
	ctx.r28.s64 = ctx.r30.s64 + 16;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,14460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14460);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f8eedc
	if (ctx.cr6.eq) goto loc_82F8EEDC;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F8EE7C:
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r25,r1,80
	ctx.r25.s64 = ctx.r1.s64 + 80;
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bl 0x82f6acb8
	ctx.lr = 0x82F8EE98;
	sub_82F6ACB8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// bl 0x82f04960
	ctx.lr = 0x82F8EEB0;
	sub_82F04960(ctx, base);
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8eec4
	if (ctx.cr6.lt) goto loc_82F8EEC4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8EEC4;
	sub_82F6BAA0(ctx, base);
loc_82F8EEC4:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// rlwinm r11,r27,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82f8ee7c
	if (!ctx.cr6.eq) goto loc_82F8EE7C;
loc_82F8EEDC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82F8EEE8"))) PPC_WEAK_FUNC(sub_82F8EEE8);
PPC_FUNC_IMPL(__imp__sub_82F8EEE8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82f8eef0
	sub_82F8EEF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F8EEF0"))) PPC_WEAK_FUNC(sub_82F8EEF0);
PPC_FUNC_IMPL(__imp__sub_82F8EEF0) {
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
	// bl 0x82f6a3f0
	ctx.lr = 0x82F8EF10;
	sub_82F6A3F0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8ef20
	if (ctx.cr0.eq) goto loc_82F8EF20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82F8EF20;
	sub_82EF6F38(ctx, base);
loc_82F8EF20:
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

__attribute__((alias("__imp__sub_82F8EF3C"))) PPC_WEAK_FUNC(sub_82F8EF3C);
PPC_FUNC_IMPL(__imp__sub_82F8EF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8EF40"))) PPC_WEAK_FUNC(sub_82F8EF40);
PPC_FUNC_IMPL(__imp__sub_82F8EF40) {
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
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8EF64;
	sub_82F6BAA0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x82f8effc
	if (ctx.cr6.lt) goto loc_82F8EFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,24(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6c2d0
	ctx.lr = 0x82F8EF88;
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82f6b390
	ctx.lr = 0x82F8EF9C;
	sub_82F6B390(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82f8e970
	ctx.lr = 0x82F8EFA8;
	sub_82F8E970(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82f8efd4
	if (ctx.cr0.eq) goto loc_82F8EFD4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82f6c328
	ctx.lr = 0x82F8EFBC;
	sub_82F6C328(ctx, base);
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
	ctx.lr = 0x82F8EFD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F8EFD4:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f8effc
	if (!ctx.cr6.eq) goto loc_82F8EFFC;
	// bl 0x82f670f0
	ctx.lr = 0x82F8EFFC;
	sub_82F670F0(ctx, base);
loc_82F8EFFC:
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

__attribute__((alias("__imp__sub_82F8F014"))) PPC_WEAK_FUNC(sub_82F8F014);
PPC_FUNC_IMPL(__imp__sub_82F8F014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8F018"))) PPC_WEAK_FUNC(sub_82F8F018);
PPC_FUNC_IMPL(__imp__sub_82F8F018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F8F020;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r31,r3,120
	ctx.r31.s64 = ctx.r3.s64 + 120;
	// addi r30,r4,16
	ctx.r30.s64 = ctx.r4.s64 + 16;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r11,-9824
	ctx.r5.s64 = ctx.r11.s64 + -9824;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x82f049e8
	ctx.lr = 0x82F8F048;
	sub_82F049E8(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r11,-9820
	ctx.r5.s64 = ctx.r11.s64 + -9820;
	// addi r6,r29,16
	ctx.r6.s64 = ctx.r29.s64 + 16;
	// bl 0x82f049e8
	ctx.lr = 0x82F8F060;
	sub_82F049E8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r11,-7424
	ctx.r5.s64 = ctx.r11.s64 + -7424;
	// addi r6,r29,32
	ctx.r6.s64 = ctx.r29.s64 + 32;
	// bl 0x82f049e8
	ctx.lr = 0x82F8F078;
	sub_82F049E8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r29,48
	ctx.r6.s64 = ctx.r29.s64 + 48;
	// addi r5,r11,-7432
	ctx.r5.s64 = ctx.r11.s64 + -7432;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f049e8
	ctx.lr = 0x82F8F090;
	sub_82F049E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F8F098"))) PPC_WEAK_FUNC(sub_82F8F098);
PPC_FUNC_IMPL(__imp__sub_82F8F098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F8F0A0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-9824
	ctx.r5.s64 = ctx.r11.s64 + -9824;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82f049e8
	ctx.lr = 0x82F8F0C4;
	sub_82F049E8(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-9820
	ctx.r5.s64 = ctx.r11.s64 + -9820;
	// addi r6,r30,16
	ctx.r6.s64 = ctx.r30.s64 + 16;
	// bl 0x82f049e8
	ctx.lr = 0x82F8F0DC;
	sub_82F049E8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-7424
	ctx.r5.s64 = ctx.r11.s64 + -7424;
	// addi r6,r30,32
	ctx.r6.s64 = ctx.r30.s64 + 32;
	// bl 0x82f049e8
	ctx.lr = 0x82F8F0F4;
	sub_82F049E8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r30,48
	ctx.r6.s64 = ctx.r30.s64 + 48;
	// addi r5,r11,-7432
	ctx.r5.s64 = ctx.r11.s64 + -7432;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f049e8
	ctx.lr = 0x82F8F10C;
	sub_82F049E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F8F114"))) PPC_WEAK_FUNC(sub_82F8F114);
PPC_FUNC_IMPL(__imp__sub_82F8F114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8F118"))) PPC_WEAK_FUNC(sub_82F8F118);
PPC_FUNC_IMPL(__imp__sub_82F8F118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F8F120;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-9824
	ctx.r5.s64 = ctx.r11.s64 + -9824;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82f048d0
	ctx.lr = 0x82F8F144;
	sub_82F048D0(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-9820
	ctx.r5.s64 = ctx.r11.s64 + -9820;
	// addi r6,r30,16
	ctx.r6.s64 = ctx.r30.s64 + 16;
	// bl 0x82f048d0
	ctx.lr = 0x82F8F15C;
	sub_82F048D0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-7424
	ctx.r5.s64 = ctx.r11.s64 + -7424;
	// addi r6,r30,32
	ctx.r6.s64 = ctx.r30.s64 + 32;
	// bl 0x82f048d0
	ctx.lr = 0x82F8F174;
	sub_82F048D0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r30,48
	ctx.r6.s64 = ctx.r30.s64 + 48;
	// addi r5,r11,-7432
	ctx.r5.s64 = ctx.r11.s64 + -7432;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f048d0
	ctx.lr = 0x82F8F18C;
	sub_82F048D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F8F194"))) PPC_WEAK_FUNC(sub_82F8F194);
PPC_FUNC_IMPL(__imp__sub_82F8F194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8F198"))) PPC_WEAK_FUNC(sub_82F8F198);
PPC_FUNC_IMPL(__imp__sub_82F8F198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82F8F1A0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r28,3
	ctx.r28.s64 = 3;
	// addi r30,r4,120
	ctx.r30.s64 = ctx.r4.s64 + 120;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// addi r29,r3,16
	ctx.r29.s64 = ctx.r3.s64 + 16;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lfd f0,0(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// addi r5,r11,-9824
	ctx.r5.s64 = ctx.r11.s64 + -9824;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f048d0
	ctx.lr = 0x82F8F1D8;
	sub_82F048D0(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8f1ec
	if (ctx.cr6.lt) goto loc_82F8F1EC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8F1EC;
	sub_82F6BAA0(ctx, base);
loc_82F8F1EC:
	// lfd f0,8(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// stb r28,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r28.u8);
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r11,-9820
	ctx.r5.s64 = ctx.r11.s64 + -9820;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f048d0
	ctx.lr = 0x82F8F210;
	sub_82F048D0(ctx, base);
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8f224
	if (ctx.cr6.lt) goto loc_82F8F224;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8F224;
	sub_82F6BAA0(ctx, base);
loc_82F8F224:
	// lfd f0,16(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// stb r28,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r28.u8);
	// lfd f13,0(r31)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fsub f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 - ctx.f13.f64;
	// stfd f0,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f0.u64);
	// addi r5,r11,-7424
	ctx.r5.s64 = ctx.r11.s64 + -7424;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f048d0
	ctx.lr = 0x82F8F250;
	sub_82F048D0(ctx, base);
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8f264
	if (ctx.cr6.lt) goto loc_82F8F264;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8F264;
	sub_82F6BAA0(ctx, base);
loc_82F8F264:
	// lfd f0,24(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// stb r28,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r28.u8);
	// lfd f13,8(r31)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fsub f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 - ctx.f13.f64;
	// stfd f0,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f0.u64);
	// addi r5,r11,-7432
	ctx.r5.s64 = ctx.r11.s64 + -7432;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f048d0
	ctx.lr = 0x82F8F290;
	sub_82F048D0(ctx, base);
	// lbz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8f2a4
	if (ctx.cr6.lt) goto loc_82F8F2A4;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8F2A4;
	sub_82F6BAA0(ctx, base);
loc_82F8F2A4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82F8F2AC"))) PPC_WEAK_FUNC(sub_82F8F2AC);
PPC_FUNC_IMPL(__imp__sub_82F8F2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8F2B0"))) PPC_WEAK_FUNC(sub_82F8F2B0);
PPC_FUNC_IMPL(__imp__sub_82F8F2B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82F8F2B8;
	sub_82CA2BE8(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// stb r28,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r28.u8);
	// stb r28,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r28.u8);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82f8f314
	if (!ctx.cr6.gt) goto loc_82F8F314;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f6c2d0
	ctx.lr = 0x82F8F2E4;
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f6bbb0
	ctx.lr = 0x82F8F2F0;
	sub_82F6BBB0(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x82f8f314
	if (!ctx.cr6.gt) goto loc_82F8F314;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6c2d0
	ctx.lr = 0x82F8F308;
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6bbb0
	ctx.lr = 0x82F8F314;
	sub_82F6BBB0(ctx, base);
loc_82F8F314:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r29,r11,-16
	ctx.r29.s64 = ctx.r11.s64 + -16;
	// bne cr6,0x82f8f328
	if (!ctx.cr6.eq) goto loc_82F8F328;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_82F8F328:
	// li r30,3
	ctx.r30.s64 = 3;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82F8F334:
	// stb r28,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r28.u8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bge 0x82f8f334
	if (!ctx.cr0.lt) goto loc_82F8F334;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,120
	ctx.r4.s64 = ctx.r11.s64 + 120;
	// bl 0x82f8f098
	ctx.lr = 0x82F8F358;
	sub_82F8F098(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82f6b480
	ctx.lr = 0x82F8F364;
	sub_82F6B480(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82f6b480
	ctx.lr = 0x82F8F374;
	sub_82F6B480(ctx, base);
	// fadd f0,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64 + ctx.f1.f64;
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82f6bbb0
	ctx.lr = 0x82F8F38C;
	sub_82F6BBB0(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8f3a0
	if (ctx.cr6.lt) goto loc_82F8F3A0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8F3A0;
	sub_82F6BAA0(ctx, base);
loc_82F8F3A0:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82f6b480
	ctx.lr = 0x82F8F3AC;
	sub_82F6B480(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82f6b480
	ctx.lr = 0x82F8F3BC;
	sub_82F6B480(ctx, base);
	// fadd f0,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64 + ctx.f1.f64;
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82f6bbb0
	ctx.lr = 0x82F8F3D4;
	sub_82F6BBB0(ctx, base);
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8f3e8
	if (ctx.cr6.lt) goto loc_82F8F3E8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8F3E8;
	sub_82F6BAA0(ctx, base);
loc_82F8F3E8:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,120
	ctx.r4.s64 = ctx.r11.s64 + 120;
	// bl 0x82f8f118
	ctx.lr = 0x82F8F3FC;
	sub_82F8F118(ctx, base);
	// addi r31,r1,208
	ctx.r31.s64 = ctx.r1.s64 + 208;
loc_82F8F400:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8f418
	if (ctx.cr6.lt) goto loc_82F8F418;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8F418;
	sub_82F6BAA0(ctx, base);
loc_82F8F418:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82f8f400
	if (!ctx.cr0.lt) goto loc_82F8F400;
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8f434
	if (ctx.cr6.lt) goto loc_82F8F434;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8F434;
	sub_82F6BAA0(ctx, base);
loc_82F8F434:
	// lbz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8f448
	if (ctx.cr6.lt) goto loc_82F8F448;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8F448;
	sub_82F6BAA0(ctx, base);
loc_82F8F448:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82F8F454"))) PPC_WEAK_FUNC(sub_82F8F454);
PPC_FUNC_IMPL(__imp__sub_82F8F454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8F458"))) PPC_WEAK_FUNC(sub_82F8F458);
PPC_FUNC_IMPL(__imp__sub_82F8F458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82F8F460;
	sub_82CA2BE4(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82f8f7ac
	if (!ctx.cr6.gt) goto loc_82F8F7AC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r30,r11,-16
	ctx.r30.s64 = ctx.r11.s64 + -16;
	// bne cr6,0x82f8f490
	if (!ctx.cr6.eq) goto loc_82F8F490;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82F8F490:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6c2d0
	ctx.lr = 0x82F8F49C;
	sub_82F6C2D0(ctx, base);
	// bl 0x82f6ad80
	ctx.lr = 0x82F8F4A0;
	sub_82F6AD80(ctx, base);
	// li r27,3
	ctx.r27.s64 = 3;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82F8F4B0:
	// stb r28,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r28.u8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bge 0x82f8f4b0
	if (!ctx.cr0.lt) goto loc_82F8F4B0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82f8f574
	if (!ctx.cr6.eq) goto loc_82F8F574;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,120
	ctx.r4.s64 = ctx.r11.s64 + 120;
	// bl 0x82f8f098
	ctx.lr = 0x82F8F4DC;
	sub_82F8F098(ctx, base);
	// bl 0x82f98458
	ctx.lr = 0x82F8F4E0;
	sub_82F98458(ctx, base);
	// stfd f1,152(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.f1.u64);
	// stb r27,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r27.u8);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82f6bbb0
	ctx.lr = 0x82F8F4F4;
	sub_82F6BBB0(ctx, base);
	// lbz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8f508
	if (ctx.cr6.lt) goto loc_82F8F508;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8F508;
	sub_82F6BAA0(ctx, base);
loc_82F8F508:
	// bl 0x82f98458
	ctx.lr = 0x82F8F50C;
	sub_82F98458(ctx, base);
	// stfd f1,120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f1.u64);
	// stb r27,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r27.u8);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82f6bbb0
	ctx.lr = 0x82F8F520;
	sub_82F6BBB0(ctx, base);
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8f534
	if (ctx.cr6.lt) goto loc_82F8F534;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8F534;
	sub_82F6BAA0(ctx, base);
loc_82F8F534:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,120
	ctx.r4.s64 = ctx.r11.s64 + 120;
	// bl 0x82f8f118
	ctx.lr = 0x82F8F548;
	sub_82F8F118(ctx, base);
	// addi r31,r1,240
	ctx.r31.s64 = ctx.r1.s64 + 240;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_82F8F550:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8f568
	if (ctx.cr6.lt) goto loc_82F8F568;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8F568;
	sub_82F6BAA0(ctx, base);
loc_82F8F568:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82f8f550
	if (!ctx.cr0.lt) goto loc_82F8F550;
	// b 0x82f8f7ac
	goto loc_82F8F7AC;
loc_82F8F574:
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F8F57C:
	// stb r28,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r28.u8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bge 0x82f8f57c
	if (!ctx.cr0.lt) goto loc_82F8F57C;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82fa9698
	ctx.lr = 0x82F8F59C;
	sub_82FA9698(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F8F5B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,14
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 14, ctx.xer);
	// beq cr6,0x82f8f6a4
	if (ctx.cr6.eq) goto loc_82F8F6A4;
	// lbz r11,240(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 240);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82f8f5d0
	if (ctx.cr0.eq) goto loc_82F8F5D0;
	// lbz r11,256(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 256);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82f8f6a4
	if (!ctx.cr0.eq) goto loc_82F8F6A4;
loc_82F8F5D0:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,120
	ctx.r4.s64 = ctx.r11.s64 + 120;
	// bl 0x82f8f098
	ctx.lr = 0x82F8F5E4;
	sub_82F8F098(ctx, base);
	// bl 0x82f98458
	ctx.lr = 0x82F8F5E8;
	sub_82F98458(ctx, base);
	// stfd f1,168(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.f1.u64);
	// stb r27,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r27.u8);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82f6bbb0
	ctx.lr = 0x82F8F5FC;
	sub_82F6BBB0(ctx, base);
	// lbz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8f610
	if (ctx.cr6.lt) goto loc_82F8F610;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8F610;
	sub_82F6BAA0(ctx, base);
loc_82F8F610:
	// bl 0x82f98458
	ctx.lr = 0x82F8F614;
	sub_82F98458(ctx, base);
	// stfd f1,88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f1.u64);
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r27.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82f6bbb0
	ctx.lr = 0x82F8F628;
	sub_82F6BBB0(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8f63c
	if (ctx.cr6.lt) goto loc_82F8F63C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8F63C;
	sub_82F6BAA0(ctx, base);
loc_82F8F63C:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,120
	ctx.r4.s64 = ctx.r11.s64 + 120;
	// bl 0x82f8f118
	ctx.lr = 0x82F8F650;
	sub_82F8F118(ctx, base);
	// addi r31,r1,272
	ctx.r31.s64 = ctx.r1.s64 + 272;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82F8F658:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8f670
	if (ctx.cr6.lt) goto loc_82F8F670;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8F670;
	sub_82F6BAA0(ctx, base);
loc_82F8F670:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82f8f658
	if (!ctx.cr0.lt) goto loc_82F8F658;
	// addi r31,r1,240
	ctx.r31.s64 = ctx.r1.s64 + 240;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_82F8F680:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8f698
	if (ctx.cr6.lt) goto loc_82F8F698;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8F698;
	sub_82F6BAA0(ctx, base);
loc_82F8F698:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82f8f680
	if (!ctx.cr0.lt) goto loc_82F8F680;
	// b 0x82f8f7ac
	goto loc_82F8F7AC;
loc_82F8F6A4:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,120
	ctx.r4.s64 = ctx.r11.s64 + 120;
	// bl 0x82f8f098
	ctx.lr = 0x82F8F6B8;
	sub_82F8F098(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82f6b480
	ctx.lr = 0x82F8F6C4;
	sub_82F6B480(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82f6b480
	ctx.lr = 0x82F8F6D4;
	sub_82F6B480(ctx, base);
	// fadd f0,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64 + ctx.f1.f64;
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// stb r27,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r27.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82f6bbb0
	ctx.lr = 0x82F8F6EC;
	sub_82F6BBB0(ctx, base);
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8f700
	if (ctx.cr6.lt) goto loc_82F8F700;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8F700;
	sub_82F6BAA0(ctx, base);
loc_82F8F700:
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82f6b480
	ctx.lr = 0x82F8F70C;
	sub_82F6B480(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82f6b480
	ctx.lr = 0x82F8F71C;
	sub_82F6B480(ctx, base);
	// fadd f0,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64 + ctx.f1.f64;
	// stfd f0,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f0.u64);
	// stb r27,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r27.u8);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82f6bbb0
	ctx.lr = 0x82F8F734;
	sub_82F6BBB0(ctx, base);
	// lbz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8f748
	if (ctx.cr6.lt) goto loc_82F8F748;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8F748;
	sub_82F6BAA0(ctx, base);
loc_82F8F748:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,120
	ctx.r4.s64 = ctx.r11.s64 + 120;
	// bl 0x82f8f118
	ctx.lr = 0x82F8F75C;
	sub_82F8F118(ctx, base);
	// addi r31,r1,272
	ctx.r31.s64 = ctx.r1.s64 + 272;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82F8F764:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8f77c
	if (ctx.cr6.lt) goto loc_82F8F77C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8F77C;
	sub_82F6BAA0(ctx, base);
loc_82F8F77C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82f8f764
	if (!ctx.cr0.lt) goto loc_82F8F764;
	// addi r31,r1,240
	ctx.r31.s64 = ctx.r1.s64 + 240;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_82F8F78C:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8f7a4
	if (ctx.cr6.lt) goto loc_82F8F7A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8F7A4;
	sub_82F6BAA0(ctx, base);
loc_82F8F7A4:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82f8f78c
	if (!ctx.cr0.lt) goto loc_82F8F78C;
loc_82F8F7AC:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82F8F7B8"))) PPC_WEAK_FUNC(sub_82F8F7B8);
PPC_FUNC_IMPL(__imp__sub_82F8F7B8) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// bne cr6,0x82f8f7e4
	if (!ctx.cr6.eq) goto loc_82F8F7E4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F8F7E4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f8f9cc
	if (ctx.cr6.eq) goto loc_82F8F9CC;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82F8F7F4:
	// li r9,0
	ctx.r9.s64 = 0;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bge 0x82f8f7f4
	if (!ctx.cr0.lt) goto loc_82F8F7F4;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,120
	ctx.r4.s64 = ctx.r11.s64 + 120;
	// bl 0x82f8f098
	ctx.lr = 0x82F8F818;
	sub_82F8F098(ctx, base);
	// li r6,6
	ctx.r6.s64 = 6;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6b390
	ctx.lr = 0x82F8F82C;
	sub_82F6B390(ctx, base);
	// li r6,6
	ctx.r6.s64 = 6;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82f6b390
	ctx.lr = 0x82F8F840;
	sub_82F6B390(ctx, base);
	// li r6,6
	ctx.r6.s64 = 6;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82f6b390
	ctx.lr = 0x82F8F854;
	sub_82F6B390(ctx, base);
	// li r6,6
	ctx.r6.s64 = 6;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82f6b390
	ctx.lr = 0x82F8F868;
	sub_82F6B390(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ef7600
	ctx.lr = 0x82F8F870;
	sub_82EF7600(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,15080
	ctx.r4.s64 = ctx.r11.s64 + 15080;
	// bl 0x82ef8018
	ctx.lr = 0x82F8F880;
	sub_82EF8018(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82ef8018
	ctx.lr = 0x82F8F890;
	sub_82EF8018(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,15072
	ctx.r4.s64 = ctx.r11.s64 + 15072;
	// bl 0x82ef8018
	ctx.lr = 0x82F8F8A0;
	sub_82EF8018(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82ef8018
	ctx.lr = 0x82F8F8B0;
	sub_82EF8018(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,15060
	ctx.r4.s64 = ctx.r11.s64 + 15060;
	// bl 0x82ef8018
	ctx.lr = 0x82F8F8C0;
	sub_82EF8018(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82ef8018
	ctx.lr = 0x82F8F8D0;
	sub_82EF8018(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,15048
	ctx.r4.s64 = ctx.r11.s64 + 15048;
	// bl 0x82ef8018
	ctx.lr = 0x82F8F8E0;
	sub_82EF8018(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82ef8018
	ctx.lr = 0x82F8F8F0;
	sub_82EF8018(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,25240
	ctx.r4.s64 = ctx.r11.s64 + 25240;
	// bl 0x82ef8018
	ctx.lr = 0x82F8F900;
	sub_82EF8018(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// addi r4,r11,536
	ctx.r4.s64 = ctx.r11.s64 + 536;
	// bl 0x82f040d8
	ctx.lr = 0x82F8F918;
	sub_82F040D8(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82f041a0
	ctx.lr = 0x82F8F924;
	sub_82F041A0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// bne 0x82f8f93c
	if (!ctx.cr0.eq) goto loc_82F8F93C;
	// bl 0x82f670f0
	ctx.lr = 0x82F8F93C;
	sub_82F670F0(ctx, base);
loc_82F8F93C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r8,-1
	ctx.r8.s64 = -1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82F8F94C:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82f8f94c
	if (!ctx.cr0.eq) goto loc_82F8F94C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f8f978
	if (!ctx.cr0.eq) goto loc_82F8F978;
	// bl 0x82ef6f38
	ctx.lr = 0x82F8F978;
	sub_82EF6F38(ctx, base);
loc_82F8F978:
	// addi r31,r1,112
	ctx.r31.s64 = ctx.r1.s64 + 112;
	// li r30,3
	ctx.r30.s64 = 3;
loc_82F8F980:
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// bne 0x82f8f99c
	if (!ctx.cr0.eq) goto loc_82F8F99C;
	// bl 0x82f670f0
	ctx.lr = 0x82F8F99C;
	sub_82F670F0(ctx, base);
loc_82F8F99C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82f8f980
	if (!ctx.cr0.lt) goto loc_82F8F980;
	// addi r31,r1,176
	ctx.r31.s64 = ctx.r1.s64 + 176;
	// li r30,3
	ctx.r30.s64 = 3;
loc_82F8F9AC:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8f9c4
	if (ctx.cr6.lt) goto loc_82F8F9C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8F9C4;
	sub_82F6BAA0(ctx, base);
loc_82F8F9C4:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82f8f9ac
	if (!ctx.cr0.lt) goto loc_82F8F9AC;
loc_82F8F9CC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
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

__attribute__((alias("__imp__sub_82F8F9E4"))) PPC_WEAK_FUNC(sub_82F8F9E4);
PPC_FUNC_IMPL(__imp__sub_82F8F9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8F9E8"))) PPC_WEAK_FUNC(sub_82F8F9E8);
PPC_FUNC_IMPL(__imp__sub_82F8F9E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82F8F9F0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F8FA08;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f8fa38
	if (ctx.cr0.eq) goto loc_82F8FA38;
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
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// bl 0x82faa240
	ctx.lr = 0x82F8FA30;
	sub_82FAA240(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82f8fa3c
	goto loc_82F8FA3C;
loc_82F8FA38:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82F8FA3C:
	// lfd f13,0(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfd f0,16(r30)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// fsub f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 - ctx.f13.f64;
	// lfd f12,24(r30)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r30.u32 + 24);
	// lfd f13,8(r30)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fsub f13,f12,f13
	ctx.f13.f64 = ctx.f12.f64 - ctx.f13.f64;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// bl 0x82fa97f0
	ctx.lr = 0x82F8FA6C;
	sub_82FA97F0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f6aba0
	ctx.lr = 0x82F8FA78;
	sub_82F6ABA0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f8fa98
	if (ctx.cr6.eq) goto loc_82F8FA98;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F8FA98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F8FA98:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82F8FAA4"))) PPC_WEAK_FUNC(sub_82F8FAA4);
PPC_FUNC_IMPL(__imp__sub_82F8FAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8FAA8"))) PPC_WEAK_FUNC(sub_82F8FAA8);
PPC_FUNC_IMPL(__imp__sub_82F8FAA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82F8FAB0;
	sub_82CA2BE8(ctx, base);
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r28,r31,120
	ctx.r28.s64 = ctx.r31.s64 + 120;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82F8FAD4:
	// li r9,0
	ctx.r9.s64 = 0;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bge 0x82f8fad4
	if (!ctx.cr0.lt) goto loc_82F8FAD4;
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r11,-9824
	ctx.r5.s64 = ctx.r11.s64 + -9824;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82f049e8
	ctx.lr = 0x82F8FB04;
	sub_82F049E8(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r11,-9820
	ctx.r5.s64 = ctx.r11.s64 + -9820;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82f049e8
	ctx.lr = 0x82F8FB1C;
	sub_82F049E8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r11,-7424
	ctx.r5.s64 = ctx.r11.s64 + -7424;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82f049e8
	ctx.lr = 0x82F8FB34;
	sub_82F049E8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r11,-7432
	ctx.r5.s64 = ctx.r11.s64 + -7432;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f049e8
	ctx.lr = 0x82F8FB4C;
	sub_82F049E8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f6b480
	ctx.lr = 0x82F8FB58;
	sub_82F6B480(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82f6b480
	ctx.lr = 0x82F8FB68;
	sub_82F6B480(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x82f6b480
	ctx.lr = 0x82F8FB78;
	sub_82F6B480(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// bl 0x82f6b480
	ctx.lr = 0x82F8FB88;
	sub_82F6B480(ctx, base);
	// fadd f0,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f29.f64 + ctx.f31.f64;
	// stfd f0,24(r29)
	PPC_STORE_U64(ctx.r29.u32 + 24, ctx.f0.u64);
	// fadd f0,f30,f1
	ctx.f0.f64 = ctx.f30.f64 + ctx.f1.f64;
	// stfd f1,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.f1.u64);
	// addi r31,r1,144
	ctx.r31.s64 = ctx.r1.s64 + 144;
	// stfd f29,8(r29)
	PPC_STORE_U64(ctx.r29.u32 + 8, ctx.f29.u64);
	// li r30,3
	ctx.r30.s64 = 3;
	// stfd f0,16(r29)
	PPC_STORE_U64(ctx.r29.u32 + 16, ctx.f0.u64);
loc_82F8FBA8:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8fbc0
	if (ctx.cr6.lt) goto loc_82F8FBC0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8FBC0;
	sub_82F6BAA0(ctx, base);
loc_82F8FBC0:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82f8fba8
	if (!ctx.cr0.lt) goto loc_82F8FBA8;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82F8FBDC"))) PPC_WEAK_FUNC(sub_82F8FBDC);
PPC_FUNC_IMPL(__imp__sub_82F8FBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8FBE0"))) PPC_WEAK_FUNC(sub_82F8FBE0);
PPC_FUNC_IMPL(__imp__sub_82F8FBE0) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x82f8fd0c
	if (!ctx.cr6.gt) goto loc_82F8FD0C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f6c2d0
	ctx.lr = 0x82F8FC10;
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6aa30
	ctx.lr = 0x82F8FC1C;
	sub_82F6AA30(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6c2d0
	ctx.lr = 0x82F8FC28;
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6aa30
	ctx.lr = 0x82F8FC34;
	sub_82F6AA30(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// bne cr6,0x82f8fc48
	if (!ctx.cr6.eq) goto loc_82F8FC48;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F8FC48:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82f8faa8
	ctx.lr = 0x82F8FC54;
	sub_82F8FAA8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82f6b480
	ctx.lr = 0x82F8FC60;
	sub_82F6B480(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82f6b480
	ctx.lr = 0x82F8FC70;
	sub_82F6B480(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f13,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcmpu cr6,f31,f13
	ctx.cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// lfd f0,3248(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3248);
	// bne cr6,0x82f8fc88
	if (!ctx.cr6.eq) goto loc_82F8FC88;
	// fadd f31,f31,f0
	ctx.f31.f64 = ctx.f31.f64 + ctx.f0.f64;
loc_82F8FC88:
	// lfd f12,136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcmpu cr6,f1,f12
	ctx.cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// bne cr6,0x82f8fc98
	if (!ctx.cr6.eq) goto loc_82F8FC98;
	// fadd f1,f1,f0
	ctx.f1.f64 = ctx.f1.f64 + ctx.f0.f64;
loc_82F8FC98:
	// fcmpu cr6,f31,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// bgt cr6,0x82f8fcc4
	if (ctx.cr6.gt) goto loc_82F8FCC4;
	// lfd f0,112(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x82f8fcc4
	if (ctx.cr6.lt) goto loc_82F8FCC4;
	// fcmpu cr6,f1,f12
	ctx.cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// bgt cr6,0x82f8fcc4
	if (ctx.cr6.gt) goto loc_82F8FCC4;
	// lfd f0,120(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// li r30,1
	ctx.r30.s64 = 1;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82f8fcc8
	if (!ctx.cr6.lt) goto loc_82F8FCC8;
loc_82F8FCC4:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82F8FCC8:
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8FCD4;
	sub_82F6BAA0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8fcf4
	if (ctx.cr6.lt) goto loc_82F8FCF4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8FCF4;
	sub_82F6BAA0(ctx, base);
loc_82F8FCF4:
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8fd28
	if (ctx.cr6.lt) goto loc_82F8FD28;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8FD08;
	sub_82F6BAA0(ctx, base);
	// b 0x82f8fd28
	goto loc_82F8FD28;
loc_82F8FD0C:
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8FD18;
	sub_82F6BAA0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// stb r10,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r10.u8);
loc_82F8FD28:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F8FD44"))) PPC_WEAK_FUNC(sub_82F8FD44);
PPC_FUNC_IMPL(__imp__sub_82F8FD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8FD48"))) PPC_WEAK_FUNC(sub_82F8FD48);
PPC_FUNC_IMPL(__imp__sub_82F8FD48) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82f8fee8
	if (!ctx.cr6.gt) goto loc_82F8FEE8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f6c2d0
	ctx.lr = 0x82F8FD74;
	sub_82F6C2D0(ctx, base);
	// bl 0x82f6ad80
	ctx.lr = 0x82F8FD78;
	sub_82F6AD80(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82f8fee8
	if (ctx.cr0.eq) goto loc_82F8FEE8;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// bne cr6,0x82f8fd94
	if (!ctx.cr6.eq) goto loc_82F8FD94;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F8FD94:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F8FD9C:
	// li r9,0
	ctx.r9.s64 = 0;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bge 0x82f8fd9c
	if (!ctx.cr0.lt) goto loc_82F8FD9C;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x82f8faa8
	ctx.lr = 0x82F8FDBC;
	sub_82F8FAA8(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x82fa9698
	ctx.lr = 0x82F8FDCC;
	sub_82FA9698(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F8FDE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,14
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 14, ctx.xer);
	// beq cr6,0x82f8fe2c
	if (ctx.cr6.eq) goto loc_82F8FE2C;
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82f8fe00
	if (ctx.cr0.eq) goto loc_82F8FE00;
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82f8fe2c
	if (!ctx.cr0.eq) goto loc_82F8FE2C;
loc_82F8FE00:
	// addi r31,r1,128
	ctx.r31.s64 = ctx.r1.s64 + 128;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82F8FE08:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8fe20
	if (ctx.cr6.lt) goto loc_82F8FE20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8FE20;
	sub_82F6BAA0(ctx, base);
loc_82F8FE20:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82f8fe08
	if (!ctx.cr0.lt) goto loc_82F8FE08;
	// b 0x82f8fee8
	goto loc_82F8FEE8;
loc_82F8FE2C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa9c08
	ctx.lr = 0x82F8FE3C;
	sub_82FA9C08(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f10,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcmpu cr6,f13,f10
	ctx.cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// lfd f12,3248(r11)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3248);
	// bne cr6,0x82f8fe5c
	if (!ctx.cr6.eq) goto loc_82F8FE5C;
	// fadd f13,f13,f12
	ctx.f13.f64 = ctx.f13.f64 + ctx.f12.f64;
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
loc_82F8FE5C:
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f11,152(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bne cr6,0x82f8fe74
	if (!ctx.cr6.eq) goto loc_82F8FE74;
	// fadd f0,f0,f12
	ctx.f0.f64 = ctx.f0.f64 + ctx.f12.f64;
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
loc_82F8FE74:
	// fcmpu cr6,f13,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// bgt cr6,0x82f8fea0
	if (ctx.cr6.gt) goto loc_82F8FEA0;
	// lfd f12,128(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x82f8fea0
	if (ctx.cr6.lt) goto loc_82F8FEA0;
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bgt cr6,0x82f8fea0
	if (ctx.cr6.gt) goto loc_82F8FEA0;
	// lfd f13,136(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// li r31,1
	ctx.r31.s64 = 1;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82f8fea4
	if (!ctx.cr6.lt) goto loc_82F8FEA4;
loc_82F8FEA0:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82F8FEA4:
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8FEB0;
	sub_82F6BAA0(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r11,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r11.u8);
	// addi r31,r1,128
	ctx.r31.s64 = ctx.r1.s64 + 128;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// li r30,1
	ctx.r30.s64 = 1;
loc_82F8FEC8:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f8fee0
	if (ctx.cr6.lt) goto loc_82F8FEE0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6baa0
	ctx.lr = 0x82F8FEE0;
	sub_82F6BAA0(ctx, base);
loc_82F8FEE0:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82f8fec8
	if (!ctx.cr0.lt) goto loc_82F8FEC8;
loc_82F8FEE8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

__attribute__((alias("__imp__sub_82F8FF00"))) PPC_WEAK_FUNC(sub_82F8FF00);
PPC_FUNC_IMPL(__imp__sub_82F8FF00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F8FF08;
	sub_82CA2BEC(ctx, base);
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82f900a0
	if (!ctx.cr6.gt) goto loc_82F900A0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f6c2d0
	ctx.lr = 0x82F8FF30;
	sub_82F6C2D0(ctx, base);
	// bl 0x82f6ad80
	ctx.lr = 0x82F8FF34;
	sub_82F6AD80(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82f900a0
	if (ctx.cr0.eq) goto loc_82F900A0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// bne cr6,0x82f8ff50
	if (!ctx.cr6.eq) goto loc_82F8FF50;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F8FF50:
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82F8FF58:
	// li r9,0
	ctx.r9.s64 = 0;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bge 0x82f8ff58
	if (!ctx.cr0.lt) goto loc_82F8FF58;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82f8faa8
	ctx.lr = 0x82F8FF78;
	sub_82F8FAA8(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82f8f018
	ctx.lr = 0x82F8FF88;
	sub_82F8F018(ctx, base);
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82f90078
	if (ctx.cr0.eq) goto loc_82F90078;
	// lbz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82f90078
	if (ctx.cr0.eq) goto loc_82F90078;
	// lbz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 144);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82f90078
	if (ctx.cr0.eq) goto loc_82F90078;
	// lbz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 160);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82f90078
	if (ctx.cr0.eq) goto loc_82F90078;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82f6b480
	ctx.lr = 0x82F8FFC4;
	sub_82F6B480(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x82f6b480
	ctx.lr = 0x82F8FFD4;
	sub_82F6B480(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// bl 0x82f6b480
	ctx.lr = 0x82F8FFE4;
	sub_82F6B480(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82f6b480
	ctx.lr = 0x82F8FFF4;
	sub_82F6B480(ctx, base);
	// fadd f12,f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f29.f64 + ctx.f1.f64;
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fadd f0,f31,f30
	ctx.f0.f64 = ctx.f31.f64 + ctx.f30.f64;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x82f90030
	if (ctx.cr6.lt) goto loc_82F90030;
	// lfd f13,104(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82f90030
	if (ctx.cr6.lt) goto loc_82F90030;
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bgt cr6,0x82f90030
	if (ctx.cr6.gt) goto loc_82F90030;
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// li r30,1
	ctx.r30.s64 = 1;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x82f90034
	if (!ctx.cr6.gt) goto loc_82F90034;
loc_82F90030:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82F90034:
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f6baa0
	ctx.lr = 0x82F90040;
	sub_82F6BAA0(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r30,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r30.u8);
	// addi r31,r1,176
	ctx.r31.s64 = ctx.r1.s64 + 176;
	// stb r10,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r10.u8);
	// li r30,3
	ctx.r30.s64 = 3;
loc_82F90054:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f9006c
	if (ctx.cr6.lt) goto loc_82F9006C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6baa0
	ctx.lr = 0x82F9006C;
	sub_82F6BAA0(ctx, base);
loc_82F9006C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82f90054
	if (!ctx.cr0.lt) goto loc_82F90054;
	// b 0x82f900a0
	goto loc_82F900A0;
loc_82F90078:
	// addi r31,r1,176
	ctx.r31.s64 = ctx.r1.s64 + 176;
	// li r30,3
	ctx.r30.s64 = 3;
loc_82F90080:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f90098
	if (ctx.cr6.lt) goto loc_82F90098;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6baa0
	ctx.lr = 0x82F90098;
	sub_82F6BAA0(ctx, base);
loc_82F90098:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82f90080
	if (!ctx.cr0.lt) goto loc_82F90080;
loc_82F900A0:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F900B4"))) PPC_WEAK_FUNC(sub_82F900B4);
PPC_FUNC_IMPL(__imp__sub_82F900B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F900B8"))) PPC_WEAK_FUNC(sub_82F900B8);
PPC_FUNC_IMPL(__imp__sub_82F900B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F900C0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82f901b4
	if (!ctx.cr6.gt) goto loc_82F901B4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f6c2d0
	ctx.lr = 0x82F900E0;
	sub_82F6C2D0(ctx, base);
	// bl 0x82f6ad80
	ctx.lr = 0x82F900E4;
	sub_82F6AD80(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82f901b4
	if (ctx.cr0.eq) goto loc_82F901B4;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F90100;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,15
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 15, ctx.xer);
	// bne cr6,0x82f901b4
	if (!ctx.cr6.eq) goto loc_82F901B4;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r30,r11,-16
	ctx.r30.s64 = ctx.r11.s64 + -16;
	// bne cr6,0x82f9011c
	if (!ctx.cr6.eq) goto loc_82F9011C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82F9011C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F90130;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x82f8faa8
	ctx.lr = 0x82F90140;
	sub_82F8FAA8(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x82f8faa8
	ctx.lr = 0x82F90150;
	sub_82F8FAA8(ctx, base);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82f90194
	if (!ctx.cr6.eq) goto loc_82F90194;
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lfd f13,128(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82f90194
	if (!ctx.cr6.eq) goto loc_82F90194;
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f13,120(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82f90194
	if (!ctx.cr6.eq) goto loc_82F90194;
	// lfd f0,104(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfd f13,136(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82f90198
	if (ctx.cr6.eq) goto loc_82F90198;
loc_82F90194:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F90198:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F901B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F901B4:
	// lwz r31,4(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6baa0
	ctx.lr = 0x82F901C0;
	sub_82F6BAA0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F901D4"))) PPC_WEAK_FUNC(sub_82F901D4);
PPC_FUNC_IMPL(__imp__sub_82F901D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F901D8"))) PPC_WEAK_FUNC(sub_82F901D8);
PPC_FUNC_IMPL(__imp__sub_82F901D8) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82f90244
	if (!ctx.cr6.gt) goto loc_82F90244;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f6c2d0
	ctx.lr = 0x82F90214;
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6bbb0
	ctx.lr = 0x82F90220;
	sub_82F6BBB0(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x82f90244
	if (!ctx.cr6.gt) goto loc_82F90244;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6c2d0
	ctx.lr = 0x82F90238;
	sub_82F6C2D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6bbb0
	ctx.lr = 0x82F90244;
	sub_82F6BBB0(ctx, base);
loc_82F90244:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f90254
	if (ctx.cr6.eq) goto loc_82F90254;
	// addi r30,r11,-16
	ctx.r30.s64 = ctx.r11.s64 + -16;
loc_82F90254:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f8faa8
	ctx.lr = 0x82F90264;
	sub_82F8FAA8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82f6b480
	ctx.lr = 0x82F90270;
	sub_82F6B480(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82f6b480
	ctx.lr = 0x82F90280;
	sub_82F6B480(ctx, base);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fsub f0,f0,f31
	ctx.f0.f64 = ctx.f0.f64 - ctx.f31.f64;
	// stfd f0,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f0.u64);
	// fsub f0,f12,f1
	ctx.f0.f64 = ctx.f12.f64 - ctx.f1.f64;
	// lfd f11,128(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lfd f13,136(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfd f0,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// fadd f13,f13,f31
	ctx.f13.f64 = ctx.f13.f64 + ctx.f31.f64;
	// fadd f0,f1,f11
	ctx.f0.f64 = ctx.f1.f64 + ctx.f11.f64;
	// stfd f13,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f13.u64);
	// stfd f0,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f0.u64);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82f8f198
	ctx.lr = 0x82F902C0;
	sub_82F8F198(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f902d4
	if (ctx.cr6.lt) goto loc_82F902D4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6baa0
	ctx.lr = 0x82F902D4;
	sub_82F6BAA0(ctx, base);
loc_82F902D4:
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f902e8
	if (ctx.cr6.lt) goto loc_82F902E8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f6baa0
	ctx.lr = 0x82F902E8;
	sub_82F6BAA0(ctx, base);
loc_82F902E8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F90304"))) PPC_WEAK_FUNC(sub_82F90304);
PPC_FUNC_IMPL(__imp__sub_82F90304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F90308"))) PPC_WEAK_FUNC(sub_82F90308);
PPC_FUNC_IMPL(__imp__sub_82F90308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82F90310;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82f903d0
	if (!ctx.cr6.gt) goto loc_82F903D0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r30,r11,-16
	ctx.r30.s64 = ctx.r11.s64 + -16;
	// bne cr6,0x82f90338
	if (!ctx.cr6.eq) goto loc_82F90338;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82F90338:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6c2d0
	ctx.lr = 0x82F90344;
	sub_82F6C2D0(ctx, base);
	// bl 0x82f6ad80
	ctx.lr = 0x82F90348;
	sub_82F6AD80(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne 0x82f9036c
	if (!ctx.cr0.eq) goto loc_82F9036C;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// addi r5,r10,-27568
	ctx.r5.s64 = ctx.r10.s64 + -27568;
	// addi r4,r11,120
	ctx.r4.s64 = ctx.r11.s64 + 120;
	// bl 0x82f8f118
	ctx.lr = 0x82F90368;
	sub_82F8F118(ctx, base);
	// b 0x82f903d0
	goto loc_82F903D0;
loc_82F9036C:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82f8faa8
	ctx.lr = 0x82F90378;
	sub_82F8FAA8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82fa9b28
	ctx.lr = 0x82F90388;
	sub_82FA9B28(ctx, base);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfd f11,112(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fsub f12,f12,f0
	ctx.f12.f64 = ctx.f12.f64 - ctx.f0.f64;
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fadd f0,f11,f0
	ctx.f0.f64 = ctx.f11.f64 + ctx.f0.f64;
	// lfd f10,104(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfd f11,120(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fsub f10,f10,f13
	ctx.f10.f64 = ctx.f10.f64 - ctx.f13.f64;
	// fadd f13,f11,f13
	ctx.f13.f64 = ctx.f11.f64 + ctx.f13.f64;
	// stfd f12,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// stfd f0,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stfd f10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f10.u64);
	// stfd f13,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f13.u64);
	// bl 0x82f8f198
	ctx.lr = 0x82F903D0;
	sub_82F8F198(ctx, base);
loc_82F903D0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82F903D8"))) PPC_WEAK_FUNC(sub_82F903D8);
PPC_FUNC_IMPL(__imp__sub_82F903D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82F903E0;
	sub_82CA2BE8(ctx, base);
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r29,r11,-16
	ctx.r29.s64 = ctx.r11.s64 + -16;
	// bne cr6,0x82f9040c
	if (!ctx.cr6.eq) goto loc_82F9040C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82F9040C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82f905a0
	if (!ctx.cr6.gt) goto loc_82F905A0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6c2d0
	ctx.lr = 0x82F90424;
	sub_82F6C2D0(ctx, base);
	// bl 0x82f6ad80
	ctx.lr = 0x82F90428;
	sub_82F6AD80(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82f905a0
	if (ctx.cr0.eq) goto loc_82F905A0;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82F90438:
	// li r9,0
	ctx.r9.s64 = 0;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bge 0x82f90438
	if (!ctx.cr0.lt) goto loc_82F90438;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f8faa8
	ctx.lr = 0x82F9045C;
	sub_82F8FAA8(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82f8f018
	ctx.lr = 0x82F9046C;
	sub_82F8F018(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82f6b480
	ctx.lr = 0x82F90478;
	sub_82F6B480(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x82f6b480
	ctx.lr = 0x82F90488;
	sub_82F6B480(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// bl 0x82f6b480
	ctx.lr = 0x82F90498;
	sub_82F6B480(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82f6b480
	ctx.lr = 0x82F904A8;
	sub_82F6B480(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f5,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fadd f8,f31,f30
	ctx.f8.f64 = ctx.f31.f64 + ctx.f30.f64;
	// lfd f6,96(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcmpu cr6,f5,f31
	ctx.cr6.compare(ctx.f5.f64, ctx.f31.f64);
	// lfd f4,88(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fadd f12,f29,f1
	ctx.f12.f64 = ctx.f29.f64 + ctx.f1.f64;
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfd f0,3376(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3376);
	// fmr f7,f0
	ctx.f7.f64 = ctx.f0.f64;
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// blt cr6,0x82f904fc
	if (ctx.cr6.lt) goto loc_82F904FC;
	// fcmpu cr6,f8,f4
	ctx.cr6.compare(ctx.f8.f64, ctx.f4.f64);
	// blt cr6,0x82f904fc
	if (ctx.cr6.lt) goto loc_82F904FC;
	// fcmpu cr6,f12,f9
	ctx.cr6.compare(ctx.f12.f64, ctx.f9.f64);
	// blt cr6,0x82f904fc
	if (ctx.cr6.lt) goto loc_82F904FC;
	// fcmpu cr6,f6,f1
	ctx.cr6.compare(ctx.f6.f64, ctx.f1.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bge cr6,0x82f90500
	if (!ctx.cr6.lt) goto loc_82F90500;
loc_82F904FC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F90500:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f90558
	if (ctx.cr0.eq) goto loc_82F90558;
	// fcmpu cr6,f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f9.f64, ctx.f1.f64);
	// ble cr6,0x82f90518
	if (!ctx.cr6.gt) goto loc_82F90518;
	// fmr f7,f9
	ctx.f7.f64 = ctx.f9.f64;
	// b 0x82f9051c
	goto loc_82F9051C;
loc_82F90518:
	// fmr f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = ctx.f1.f64;
loc_82F9051C:
	// fcmpu cr6,f6,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f6.f64, ctx.f12.f64);
	// ble cr6,0x82f9052c
	if (!ctx.cr6.gt) goto loc_82F9052C;
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
	// b 0x82f90530
	goto loc_82F90530;
loc_82F9052C:
	// fmr f10,f6
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f6.f64;
loc_82F90530:
	// fcmpu cr6,f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f4.f64, ctx.f31.f64);
	// ble cr6,0x82f90540
	if (!ctx.cr6.gt) goto loc_82F90540;
	// fmr f11,f4
	ctx.f11.f64 = ctx.f4.f64;
	// b 0x82f90544
	goto loc_82F90544;
loc_82F90540:
	// fmr f11,f31
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f31.f64;
loc_82F90544:
	// fcmpu cr6,f5,f8
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f5.f64, ctx.f8.f64);
	// ble cr6,0x82f90554
	if (!ctx.cr6.gt) goto loc_82F90554;
	// fmr f13,f8
	ctx.f13.f64 = ctx.f8.f64;
	// b 0x82f90558
	goto loc_82F90558;
loc_82F90554:
	// fmr f13,f5
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f5.f64;
loc_82F90558:
	// fsub f12,f10,f7
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f10.f64 - ctx.f7.f64;
	// li r28,1
	ctx.r28.s64 = 1;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// beq cr6,0x82f90574
	if (ctx.cr6.eq) goto loc_82F90574;
	// fsub f13,f13,f11
	ctx.f13.f64 = ctx.f13.f64 - ctx.f11.f64;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82f90578
	if (!ctx.cr6.eq) goto loc_82F90578;
loc_82F90574:
	// li r28,0
	ctx.r28.s64 = 0;
loc_82F90578:
	// addi r30,r1,176
	ctx.r30.s64 = ctx.r1.s64 + 176;
	// li r29,3
	ctx.r29.s64 = 3;
loc_82F90580:
	// addi r30,r30,-16
	ctx.r30.s64 = ctx.r30.s64 + -16;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f90598
	if (ctx.cr6.lt) goto loc_82F90598;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f6baa0
	ctx.lr = 0x82F90598;
	sub_82F6BAA0(ctx, base);
loc_82F90598:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge 0x82f90580
	if (!ctx.cr0.lt) goto loc_82F90580;
loc_82F905A0:
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6baa0
	ctx.lr = 0x82F905AC;
	sub_82F6BAA0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r28,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r28.u8);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82F905CC"))) PPC_WEAK_FUNC(sub_82F905CC);
PPC_FUNC_IMPL(__imp__sub_82F905CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F905D0"))) PPC_WEAK_FUNC(sub_82F905D0);
PPC_FUNC_IMPL(__imp__sub_82F905D0) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// bne cr6,0x82f90600
	if (!ctx.cr6.eq) goto loc_82F90600;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F90600:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82F90608:
	// li r9,0
	ctx.r9.s64 = 0;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bge 0x82f90608
	if (!ctx.cr0.lt) goto loc_82F90608;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,120
	ctx.r4.s64 = ctx.r11.s64 + 120;
	// bl 0x82f8f098
	ctx.lr = 0x82F9062C;
	sub_82F8F098(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x82f6b480
	ctx.lr = 0x82F90638;
	sub_82F6B480(ctx, base);
	// li r12,2047
	ctx.r12.s64 = 2047;
	// li r10,2047
	ctx.r10.s64 = 2047;
	// stfd f1,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// rldicr r12,r12,52,11
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 52) & 0xFFF0000000000000;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r31,r10,52,11
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 52) & 0xFFF0000000000000;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpld cr6,r10,r31
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r31.u64, ctx.xer);
	// bne cr6,0x82f9066c
	if (!ctx.cr6.eq) goto loc_82F9066C;
	// clrldi r11,r11,12
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFFFFFFF;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82f90670
	if (!ctx.cr6.eq) goto loc_82F90670;
loc_82F9066C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F90670:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f90718
	if (!ctx.cr0.eq) goto loc_82F90718;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x82f6b480
	ctx.lr = 0x82F90684;
	sub_82F6B480(ctx, base);
	// li r12,2047
	ctx.r12.s64 = 2047;
	// stfd f1,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r12,r12,52,11
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 52) & 0xFFF0000000000000;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpld cr6,r10,r31
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r31.u64, ctx.xer);
	// bne cr6,0x82f906b0
	if (!ctx.cr6.eq) goto loc_82F906B0;
	// clrldi r11,r11,12
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFFFFFFF;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82f906b4
	if (!ctx.cr6.eq) goto loc_82F906B4;
loc_82F906B0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F906B4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f90718
	if (!ctx.cr0.eq) goto loc_82F90718;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x82f6b480
	ctx.lr = 0x82F906C8;
	sub_82F6B480(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x82f6b480
	ctx.lr = 0x82F906D4;
	sub_82F6B480(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x82f6b480
	ctx.lr = 0x82F906E0;
	sub_82F6B480(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82f6b480
	ctx.lr = 0x82F906F0;
	sub_82F6B480(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,3376(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 3376);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82f9070c
	if (!ctx.cr6.gt) goto loc_82F9070C;
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// li r11,0
	ctx.r11.s64 = 0;
	// bgt cr6,0x82f90710
	if (ctx.cr6.gt) goto loc_82F90710;
loc_82F9070C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82F90710:
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// b 0x82f9071c
	goto loc_82F9071C;
loc_82F90718:
	// li r31,1
	ctx.r31.s64 = 1;
loc_82F9071C:
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f6baa0
	ctx.lr = 0x82F90728;
	sub_82F6BAA0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r31,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r31.u8);
	// addi r31,r1,160
	ctx.r31.s64 = ctx.r1.s64 + 160;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// li r30,3
	ctx.r30.s64 = 3;
loc_82F9073C:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f90754
	if (ctx.cr6.lt) goto loc_82F90754;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f6baa0
	ctx.lr = 0x82F90754;
	sub_82F6BAA0(ctx, base);
loc_82F90754:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82f9073c
	if (!ctx.cr0.lt) goto loc_82F9073C;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F90778"))) PPC_WEAK_FUNC(sub_82F90778);
PPC_FUNC_IMPL(__imp__sub_82F90778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// bne cr6,0x82f90798
	if (!ctx.cr6.eq) goto loc_82F90798;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82F90798:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r4,24(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lfd f0,3376(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 3376);
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// bl 0x82f8f198
	ctx.lr = 0x82F907C0;
	sub_82F8F198(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F907D0"))) PPC_WEAK_FUNC(sub_82F907D0);
PPC_FUNC_IMPL(__imp__sub_82F907D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82F907D8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F907F0;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f90820
	if (ctx.cr0.eq) goto loc_82F90820;
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
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// bl 0x82faa240
	ctx.lr = 0x82F90818;
	sub_82FAA240(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82f90824
	goto loc_82F90824;
loc_82F90820:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82F90824:
	// lfd f0,0(r29)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfd f13,8(r29)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// bl 0x82fa97f0
	ctx.lr = 0x82F90844;
	sub_82FA97F0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f6aba0
	ctx.lr = 0x82F90850;
	sub_82F6ABA0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f90870
	if (ctx.cr6.eq) goto loc_82F90870;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F90870;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F90870:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82F9087C"))) PPC_WEAK_FUNC(sub_82F9087C);
PPC_FUNC_IMPL(__imp__sub_82F9087C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F90880"))) PPC_WEAK_FUNC(sub_82F90880);
PPC_FUNC_IMPL(__imp__sub_82F90880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82F90888;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82ef6ef8
	ctx.lr = 0x82F908A0;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f908d0
	if (ctx.cr0.eq) goto loc_82F908D0;
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
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// bl 0x82faa240
	ctx.lr = 0x82F908C8;
	sub_82FAA240(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82f908d4
	goto loc_82F908D4;
loc_82F908D0:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82F908D4:
	// lfd f0,16(r29)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfd f13,24(r29)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r29.u32 + 24);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// bl 0x82fa97f0
	ctx.lr = 0x82F908F4;
	sub_82FA97F0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f6aba0
	ctx.lr = 0x82F90900;
	sub_82F6ABA0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f90920
	if (ctx.cr6.eq) goto loc_82F90920;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F90920;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F90920:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82F9092C"))) PPC_WEAK_FUNC(sub_82F9092C);
PPC_FUNC_IMPL(__imp__sub_82F9092C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

