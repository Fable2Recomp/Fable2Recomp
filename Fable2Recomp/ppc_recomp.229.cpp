#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82E553B8"))) PPC_WEAK_FUNC(sub_82E553B8);
PPC_FUNC_IMPL(__imp__sub_82E553B8) {
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
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,72
	ctx.r4.s64 = 72;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4ec28
	ctx.lr = 0x82E553E4;
	sub_82D4EC28(ctx, base);
	// li r11,72
	ctx.r11.s64 = 72;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r11.u16);
	// bl 0x82e55160
	ctx.lr = 0x82E553F4;
	sub_82E55160(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bne cr6,0x82e55404
	if (!ctx.cr6.eq) goto loc_82E55404;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E55404:
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

__attribute__((alias("__imp__sub_82E55418"))) PPC_WEAK_FUNC(sub_82E55418);
PPC_FUNC_IMPL(__imp__sub_82E55418) {
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
	// lis r11,-32027
	ctx.r11.s64 = -2098921472;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r5,r11,21432
	ctx.r5.s64 = ctx.r11.s64 + 21432;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r4,r10,30276
	ctx.r4.s64 = ctx.r10.s64 + 30276;
	// lwz r3,-20840(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20840);
	// bl 0x82e32408
	ctx.lr = 0x82E55440;
	sub_82E32408(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,-19468(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19468, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E55458"))) PPC_WEAK_FUNC(sub_82E55458);
PPC_FUNC_IMPL(__imp__sub_82E55458) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x82E55460;
	sub_82CA2BB0(ctx, base);
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r3,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r3.u32);
	// stw r4,476(r1)
	PPC_STORE_U32(ctx.r1.u32 + 476, ctx.r4.u32);
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82e554b0
	if (!ctx.cr6.lt) goto loc_82E554B0;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r9,r9,30376
	ctx.r9.s64 = ctx.r9.s64 + 30376;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82E554B0:
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r14,1
	ctx.r14.s64 = 1;
	// addi r21,r11,23452
	ctx.r21.s64 = ctx.r11.s64 + 23452;
	// lfs f30,3164(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3164);
	ctx.f30.f64 = double(temp.f32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f31,3036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3036);
	ctx.f31.f64 = double(temp.f32);
	// li r15,-16
	ctx.r15.s64 = -16;
	// li r16,16
	ctx.r16.s64 = 16;
	// li r22,-32
	ctx.r22.s64 = -32;
	// li r17,-48
	ctx.r17.s64 = -48;
	// li r23,48
	ctx.r23.s64 = 48;
	// li r18,32
	ctx.r18.s64 = 32;
	// li r19,64
	ctx.r19.s64 = 64;
	// addi r20,r11,23564
	ctx.r20.s64 = ctx.r11.s64 + 23564;
	// beq cr6,0x82e55938
	if (ctx.cr6.eq) goto loc_82E55938;
	// lwz r11,476(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 476);
	// addi r24,r11,40
	ctx.r24.s64 = ctx.r11.s64 + 40;
	// lwz r11,468(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r26,4(r24)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmpw cr6,r26,r10
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82e556dc
	if (!ctx.cr6.gt) goto loc_82E556DC;
	// addi r27,r11,20
	ctx.r27.s64 = ctx.r11.s64 + 20;
	// lwz r29,4(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpw cr6,r26,r29
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x82e55560
	if (!ctx.cr6.lt) goto loc_82E55560;
	// rlwinm r30,r26,7,0,24
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 7) & 0xFFFFFF80;
	// subf r31,r26,r29
	ctx.r31.s64 = ctx.r29.s64 - ctx.r26.s64;
loc_82E55530:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E5554C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82e55530
	if (!ctx.cr6.eq) goto loc_82E55530;
	// b 0x82e556d8
	goto loc_82E556D8;
loc_82E55560:
	// lwz r25,8(r27)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// clrlwi r11,r25,2
	ctx.r11.u64 = ctx.r25.u32 & 0x3FFFFFFF;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82e556a0
	if (!ctx.cr6.gt) goto loc_82E556A0;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e55580
	if (ctx.cr6.lt) goto loc_82E55580;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82E55580:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r28,0(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// stw r10,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r10.u32);
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
	// ble cr6,0x82e555b8
	if (!ctx.cr6.gt) goto loc_82E555B8;
	// bge cr6,0x82e555a8
	if (!ctx.cr6.lt) goto loc_82E555A8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82E555A8:
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d51270
	ctx.lr = 0x82E555B8;
	sub_82D51270(ctx, base);
loc_82E555B8:
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82e5563c
	if (!ctx.cr6.gt) goto loc_82E5563C;
	// addi r11,r9,64
	ctx.r11.s64 = ctx.r9.s64 + 64;
	// addi r10,r28,48
	ctx.r10.s64 = ctx.r28.s64 + 48;
	// subf r9,r28,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r28.s64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
loc_82E555D4:
	// addic. r7,r11,-64
	ctx.xer.ca = ctx.r11.u32 > 63;
	ctx.r7.s64 = ctx.r11.s64 + -64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82e55628
	if (ctx.cr0.eq) goto loc_82E55628;
	// stw r21,-64(r11)
	PPC_STORE_U32(ctx.r11.u32 + -64, ctx.r21.u32);
	// sth r14,-58(r11)
	PPC_STORE_U16(ctx.r11.u32 + -58, ctx.r14.u16);
	// lwz r7,-40(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -40);
	// stw r7,-56(r11)
	PPC_STORE_U32(ctx.r11.u32 + -56, ctx.r7.u32);
	// lvx128 v0,r10,r15
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r15.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r10
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,r10,r16
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r16.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,r10,r22
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r22.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r17
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r17.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r22
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r22.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r9,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r7,32(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// stw r20,-64(r11)
	PPC_STORE_U32(ctx.r11.u32 + -64, ctx.r20.u32);
	// stw r7,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// lvx128 v0,r10,r23
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r23.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r18
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r18.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r10,r19
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r19.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r23
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r23.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82E55628:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82e555d4
	if (!ctx.cr6.eq) goto loc_82E555D4;
loc_82E5563C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r29,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r29.u32);
	// ble cr6,0x82e55678
	if (!ctx.cr6.gt) goto loc_82E55678;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82E55650:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E55668;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r31,r31,128
	ctx.r31.s64 = ctx.r31.s64 + 128;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82e55650
	if (!ctx.cr6.eq) goto loc_82E55650;
loc_82E55678:
	// rlwinm r11,r25,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e556a0
	if (!ctx.cr6.eq) goto loc_82E556A0;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// rlwinm r5,r25,7,0,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 7) & 0xFFFFFF80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82E556A0;
	sub_82D4ECA8(ctx, base);
loc_82E556A0:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpw cr6,r29,r26
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x82e556d8
	if (!ctx.cr6.lt) goto loc_82E556D8;
	// rlwinm r11,r29,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 7) & 0xFFFFFF80;
	// subf r30,r29,r26
	ctx.r30.s64 = ctx.r26.s64 - ctx.r29.s64;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82E556B8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82e556c8
	if (ctx.cr6.eq) goto loc_82E556C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e37e98
	ctx.lr = 0x82E556C8;
	sub_82E37E98(ctx, base);
loc_82E556C8:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r31,r31,128
	ctx.r31.s64 = ctx.r31.s64 + 128;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82e556b8
	if (!ctx.cr6.eq) goto loc_82E556B8;
loc_82E556D8:
	// stw r26,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r26.u32);
loc_82E556DC:
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r30,4(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// lis r29,-32768
	ctx.r29.s64 = -2147483648;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// stw r25,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r25.u32);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// ble cr6,0x82e55714
	if (!ctx.cr6.gt) goto loc_82E55714;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// blt cr6,0x82e55708
	if (ctx.cr6.lt) goto loc_82E55708;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82E55708:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82d51270
	ctx.lr = 0x82E55714;
	sub_82D51270(ctx, base);
loc_82E55714:
	// lwz r31,4(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// ble cr6,0x82e55748
	if (!ctx.cr6.gt) goto loc_82E55748;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// blt cr6,0x82e5573c
	if (ctx.cr6.lt) goto loc_82E5573C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82E5573C:
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82d51270
	ctx.lr = 0x82E55748;
	sub_82D51270(ctx, base);
loc_82E55748:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e558b4
	if (!ctx.cr6.gt) goto loc_82E558B4;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82E55764:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwzx r10,r28,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// addi r31,r10,76
	ctx.r31.s64 = ctx.r10.s64 + 76;
	// stfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stfs f30,0(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// stfs f30,176(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// lvx128 v13,r0,r11
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// vspltw v13,v13,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// stvx128 v13,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e5586c
	if (!ctx.cr6.gt) goto loc_82E5586C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82E557E8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82e55858
	if (ctx.cr6.eq) goto loc_82E55858;
	// lwz r10,476(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 476);
	// addi r4,r11,20
	ctx.r4.s64 = ctx.r11.s64 + 20;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// lwz r3,84(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E55820;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// lvx128 v13,r0,r11
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// lvx128 v12,r0,r11
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// vmaxfp v0,v0,v12
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_max_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)));
	// lvx128 v11,r0,r11
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// vminfp v13,v13,v11
	_mm_store_ps(ctx.v13.f32, _mm_min_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// stvx128 v13,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82E55858:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e557e8
	if (ctx.cr6.lt) goto loc_82E557E8;
loc_82E5586C:
	// lwz r31,468(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// add r3,r26,r11
	ctx.r3.u64 = ctx.r26.u64 + ctx.r11.u64;
	// bl 0x82e37da8
	ctx.lr = 0x82E55884;
	sub_82E37DA8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// addi r26,r26,128
	ctx.r26.s64 = ctx.r26.s64 + 128;
	// stwx r11,r28,r10
	PPC_STORE_U32(ctx.r28.u32 + ctx.r10.u32, ctx.r11.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e55764
	if (ctx.cr6.lt) goto loc_82E55764;
	// b 0x82e558b8
	goto loc_82E558B8;
loc_82E558B4:
	// lwz r31,468(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
loc_82E558B8:
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r3,-16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// lis r5,-256
	ctx.r5.s64 = -16777216;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// ori r5,r5,255
	ctx.r5.u64 = ctx.r5.u64 | 255;
	// lwz r6,-19468(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19468);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E558E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82e5590c
	if (!ctx.cr6.eq) goto loc_82E5590C;
	// rlwinm r5,r11,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r6,22
	ctx.r6.s64 = 22;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82E5590C;
	sub_82D4ECA8(ctx, base);
loc_82E5590C:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82e55938
	if (!ctx.cr6.eq) goto loc_82E55938;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r6,22
	ctx.r6.s64 = 22;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82E55938;
	sub_82D4ECA8(ctx, base);
loc_82E55938:
	// lwz r11,468(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// lbz r11,5(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e55ce8
	if (ctx.cr6.eq) goto loc_82E55CE8;
	// lwz r11,476(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 476);
	// addi r24,r11,52
	ctx.r24.s64 = ctx.r11.s64 + 52;
	// lwz r11,468(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r26,4(r24)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82e55b2c
	if (!ctx.cr6.gt) goto loc_82E55B2C;
	// lwz r11,468(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// addi r27,r11,8
	ctx.r27.s64 = ctx.r11.s64 + 8;
	// lwz r29,4(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpw cr6,r26,r29
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x82e559b0
	if (!ctx.cr6.lt) goto loc_82E559B0;
	// rlwinm r30,r26,7,0,24
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 7) & 0xFFFFFF80;
	// subf r31,r26,r29
	ctx.r31.s64 = ctx.r29.s64 - ctx.r26.s64;
loc_82E55980:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E5599C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82e55980
	if (!ctx.cr6.eq) goto loc_82E55980;
	// b 0x82e55b28
	goto loc_82E55B28;
loc_82E559B0:
	// lwz r25,8(r27)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// clrlwi r11,r25,2
	ctx.r11.u64 = ctx.r25.u32 & 0x3FFFFFFF;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82e55af0
	if (!ctx.cr6.gt) goto loc_82E55AF0;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e559d0
	if (ctx.cr6.lt) goto loc_82E559D0;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82E559D0:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r28,0(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// stw r10,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r10.u32);
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
	// ble cr6,0x82e55a08
	if (!ctx.cr6.gt) goto loc_82E55A08;
	// bge cr6,0x82e559f8
	if (!ctx.cr6.lt) goto loc_82E559F8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82E559F8:
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d51270
	ctx.lr = 0x82E55A08;
	sub_82D51270(ctx, base);
loc_82E55A08:
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82e55a8c
	if (!ctx.cr6.gt) goto loc_82E55A8C;
	// addi r11,r9,64
	ctx.r11.s64 = ctx.r9.s64 + 64;
	// addi r10,r28,48
	ctx.r10.s64 = ctx.r28.s64 + 48;
	// subf r9,r28,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r28.s64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
loc_82E55A24:
	// addic. r7,r11,-64
	ctx.xer.ca = ctx.r11.u32 > 63;
	ctx.r7.s64 = ctx.r11.s64 + -64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82e55a78
	if (ctx.cr0.eq) goto loc_82E55A78;
	// stw r21,-64(r11)
	PPC_STORE_U32(ctx.r11.u32 + -64, ctx.r21.u32);
	// sth r14,-58(r11)
	PPC_STORE_U16(ctx.r11.u32 + -58, ctx.r14.u16);
	// lwz r7,-40(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -40);
	// stw r7,-56(r11)
	PPC_STORE_U32(ctx.r11.u32 + -56, ctx.r7.u32);
	// lvx128 v0,r10,r15
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r15.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r10
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,r10,r16
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r16.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,r10,r22
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r22.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r17
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r17.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r22
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r22.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r9,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r7,32(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// stw r20,-64(r11)
	PPC_STORE_U32(ctx.r11.u32 + -64, ctx.r20.u32);
	// stw r7,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// lvx128 v0,r10,r23
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r23.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r18
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r18.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r10,r19
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r19.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r23
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r23.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82E55A78:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82e55a24
	if (!ctx.cr6.eq) goto loc_82E55A24;
loc_82E55A8C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r29,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r29.u32);
	// ble cr6,0x82e55ac8
	if (!ctx.cr6.gt) goto loc_82E55AC8;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82E55AA0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E55AB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r31,r31,128
	ctx.r31.s64 = ctx.r31.s64 + 128;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82e55aa0
	if (!ctx.cr6.eq) goto loc_82E55AA0;
loc_82E55AC8:
	// rlwinm r11,r25,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e55af0
	if (!ctx.cr6.eq) goto loc_82E55AF0;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// rlwinm r5,r25,7,0,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 7) & 0xFFFFFF80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82E55AF0;
	sub_82D4ECA8(ctx, base);
loc_82E55AF0:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpw cr6,r29,r26
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x82e55b28
	if (!ctx.cr6.lt) goto loc_82E55B28;
	// rlwinm r11,r29,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 7) & 0xFFFFFF80;
	// subf r30,r29,r26
	ctx.r30.s64 = ctx.r26.s64 - ctx.r29.s64;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82E55B08:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82e55b18
	if (ctx.cr6.eq) goto loc_82E55B18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e37e98
	ctx.lr = 0x82E55B18;
	sub_82E37E98(ctx, base);
loc_82E55B18:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r31,r31,128
	ctx.r31.s64 = ctx.r31.s64 + 128;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82e55b08
	if (!ctx.cr6.eq) goto loc_82E55B08;
loc_82E55B28:
	// stw r26,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r26.u32);
loc_82E55B2C:
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r31,4(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r22,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r22.u32);
	// stw r22,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r22.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// ble cr6,0x82e55b64
	if (!ctx.cr6.gt) goto loc_82E55B64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// blt cr6,0x82e55b58
	if (ctx.cr6.lt) goto loc_82E55B58;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82E55B58:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82d51270
	ctx.lr = 0x82E55B64;
	sub_82D51270(ctx, base);
loc_82E55B64:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// lwz r25,468(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e55c94
	if (!ctx.cr6.gt) goto loc_82E55C94;
	// lwz r23,476(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 476);
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
loc_82E55B88:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// lwzx r11,r28,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// stfs f31,192(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// stfs f30,160(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// addi r31,r11,76
	ctx.r31.s64 = ctx.r11.s64 + 76;
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// lvx128 v13,r0,r11
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// vspltw v13,v13,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// stvx128 v13,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e55c58
	if (!ctx.cr6.gt) goto loc_82E55C58;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_82E55BD8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82e55c44
	if (ctx.cr6.eq) goto loc_82E55C44;
	// lwz r3,84(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 84);
	// addi r4,r11,20
	ctx.r4.s64 = ctx.r11.s64 + 20;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E55C0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// lvx128 v13,r0,r11
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// lvx128 v12,r0,r11
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// vmaxfp v0,v0,v12
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_max_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)));
	// lvx128 v11,r0,r11
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// vminfp v13,v13,v11
	_mm_store_ps(ctx.v13.f32, _mm_min_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// stvx128 v13,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82E55C44:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e55bd8
	if (ctx.cr6.lt) goto loc_82E55BD8;
loc_82E55C58:
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// add r3,r27,r11
	ctx.r3.u64 = ctx.r27.u64 + ctx.r11.u64;
	// bl 0x82e37da8
	ctx.lr = 0x82E55C6C;
	sub_82E37DA8(ctx, base);
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// addi r27,r27,128
	ctx.r27.s64 = ctx.r27.s64 + 128;
	// stwx r11,r28,r10
	PPC_STORE_U32(ctx.r28.u32 + ctx.r10.u32, ctx.r11.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e55b88
	if (ctx.cr6.lt) goto loc_82E55B88;
loc_82E55C94:
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r3,-16(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -16);
	// lis r5,-256
	ctx.r5.s64 = -16777216;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// lwz r6,-19468(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19468);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E55CBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82e55ce8
	if (!ctx.cr6.eq) goto loc_82E55CE8;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// li r6,22
	ctx.r6.s64 = 22;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82E55CE8;
	sub_82D4ECA8(ctx, base);
loc_82E55CE8:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,8
	ctx.r11.s64 = 8;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82e55d20
	if (!ctx.cr6.lt) goto loc_82E55D20;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r9,r9,25692
	ctx.r9.s64 = ctx.r9.s64 + 25692;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82E55D20:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E55D30"))) PPC_WEAK_FUNC(sub_82E55D30);
PPC_FUNC_IMPL(__imp__sub_82E55D30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r3,-19468(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19468);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E55D3C"))) PPC_WEAK_FUNC(sub_82E55D3C);
PPC_FUNC_IMPL(__imp__sub_82E55D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E55D40"))) PPC_WEAK_FUNC(sub_82E55D40);
PPC_FUNC_IMPL(__imp__sub_82E55D40) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x82e55d58
	sub_82E55D58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E55D48"))) PPC_WEAK_FUNC(sub_82E55D48);
PPC_FUNC_IMPL(__imp__sub_82E55D48) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82e55d58
	sub_82E55D58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E55D50"))) PPC_WEAK_FUNC(sub_82E55D50);
PPC_FUNC_IMPL(__imp__sub_82E55D50) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-40
	ctx.r3.s64 = ctx.r3.s64 + -40;
	// b 0x82e55d58
	sub_82E55D58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E55D58"))) PPC_WEAK_FUNC(sub_82E55D58);
PPC_FUNC_IMPL(__imp__sub_82E55D58) {
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
	// bl 0x82e55238
	ctx.lr = 0x82E55D78;
	sub_82E55238(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e55da0
	if (ctx.cr6.eq) goto loc_82E55DA0;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,52
	ctx.r6.s64 = 52;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82E55DA0;
	sub_82D4ECA8(ctx, base);
loc_82E55DA0:
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

__attribute__((alias("__imp__sub_82E55DBC"))) PPC_WEAK_FUNC(sub_82E55DBC);
PPC_FUNC_IMPL(__imp__sub_82E55DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E55DC0"))) PPC_WEAK_FUNC(sub_82E55DC0);
PPC_FUNC_IMPL(__imp__sub_82E55DC0) {
	PPC_FUNC_PROLOGUE();
	// stb r4,97(r3)
	PPC_STORE_U8(ctx.r3.u32 + 97, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E55DC8"))) PPC_WEAK_FUNC(sub_82E55DC8);
PPC_FUNC_IMPL(__imp__sub_82E55DC8) {
	PPC_FUNC_PROLOGUE();
	// stb r4,101(r3)
	PPC_STORE_U8(ctx.r3.u32 + 101, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E55DD0"))) PPC_WEAK_FUNC(sub_82E55DD0);
PPC_FUNC_IMPL(__imp__sub_82E55DD0) {
	PPC_FUNC_PROLOGUE();
	// stb r4,98(r3)
	PPC_STORE_U8(ctx.r3.u32 + 98, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E55DD8"))) PPC_WEAK_FUNC(sub_82E55DD8);
PPC_FUNC_IMPL(__imp__sub_82E55DD8) {
	PPC_FUNC_PROLOGUE();
	// stb r4,99(r3)
	PPC_STORE_U8(ctx.r3.u32 + 99, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E55DE0"))) PPC_WEAK_FUNC(sub_82E55DE0);
PPC_FUNC_IMPL(__imp__sub_82E55DE0) {
	PPC_FUNC_PROLOGUE();
	// stb r4,100(r3)
	PPC_STORE_U8(ctx.r3.u32 + 100, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E55DE8"))) PPC_WEAK_FUNC(sub_82E55DE8);
PPC_FUNC_IMPL(__imp__sub_82E55DE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,24(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E55E00"))) PPC_WEAK_FUNC(sub_82E55E00);
PPC_FUNC_IMPL(__imp__sub_82E55E00) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,84
	ctx.r3.s64 = ctx.r3.s64 + 84;
	// b 0x82d5a210
	sub_82D5A210(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E55E08"))) PPC_WEAK_FUNC(sub_82E55E08);
PPC_FUNC_IMPL(__imp__sub_82E55E08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd0
	ctx.lr = 0x82E55E10;
	sub_82CA2BD0(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,104(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f31.f64 = double(temp.f32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lfs f0,3084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x82e55e3c
	if (ctx.cr6.gt) goto loc_82E55E3C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f31,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f31.f64 = double(temp.f32);
loc_82E55E3C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E55E50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r23,r31,40
	ctx.r23.s64 = ctx.r31.s64 + 40;
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e55ef8
	if (!ctx.cr6.gt) goto loc_82E55EF8;
	// li r24,0
	ctx.r24.s64 = 0;
	// lis r25,-31948
	ctx.r25.s64 = -2093744128;
loc_82E55E6C:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwzx r11,r11,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// addi r28,r11,76
	ctx.r28.s64 = ctx.r11.s64 + 76;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e55ee4
	if (!ctx.cr6.gt) goto loc_82E55EE4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82E55E8C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwzx r29,r11,r30
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e57048
	ctx.lr = 0x82E55E9C;
	sub_82E57048(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r29,208
	ctx.r3.s64 = ctx.r29.s64 + 208;
	// bl 0x82d84680
	ctx.lr = 0x82E55EB0;
	sub_82D84680(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r6,-19464(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + -19464);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E55ED0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e55e8c
	if (ctx.cr6.lt) goto loc_82E55E8C;
loc_82E55EE4:
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e55e6c
	if (ctx.cr6.lt) goto loc_82E55E6C;
loc_82E55EF8:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E55F0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82ca2c20
	// ERROR 82CA2C20
	return;
}

__attribute__((alias("__imp__sub_82E55F18"))) PPC_WEAK_FUNC(sub_82E55F18);
PPC_FUNC_IMPL(__imp__sub_82E55F18) {
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
	// lwz r30,0(r13)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,8
	ctx.r31.s64 = 8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwzx r9,r31,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82e55f6c
	if (!ctx.cr6.lt) goto loc_82E55F6C;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r8,r8,30404
	ctx.r8.s64 = ctx.r8.s64 + 30404;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// mftb r8
	ctx.r8.u64 = __rdtsc();
	// addi r7,r10,12
	ctx.r7.s64 = ctx.r10.s64 + 12;
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
loc_82E55F6C:
	// lbz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 52);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e55f90
	if (ctx.cr6.eq) goto loc_82E55F90;
	// lwz r10,-44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -44);
	// addi r3,r11,-44
	ctx.r3.s64 = ctx.r11.s64 + -44;
	// lwz r4,-20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20);
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E55F90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E55F90:
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82e55fc0
	if (!ctx.cr6.lt) goto loc_82E55FC0;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r9,r9,25692
	ctx.r9.s64 = ctx.r9.s64 + 25692;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82E55FC0:
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

__attribute__((alias("__imp__sub_82E55FD8"))) PPC_WEAK_FUNC(sub_82E55FD8);
PPC_FUNC_IMPL(__imp__sub_82E55FD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82e5600c
	if (!ctx.cr6.gt) goto loc_82E5600C;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
loc_82E55FEC:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82e56014
	if (ctx.cr6.eq) goto loc_82E56014;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82e55fec
	if (ctx.cr6.lt) goto loc_82E55FEC;
loc_82E5600C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82E56014:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E5601C"))) PPC_WEAK_FUNC(sub_82E5601C);
PPC_FUNC_IMPL(__imp__sub_82E5601C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E56020"))) PPC_WEAK_FUNC(sub_82E56020);
PPC_FUNC_IMPL(__imp__sub_82E56020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82E56028;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,-20(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + -20);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82e57048
	ctx.lr = 0x82E56040;
	sub_82E57048(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,224
	ctx.r4.s64 = ctx.r31.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,-19464(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19464);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E56060;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82E56068"))) PPC_WEAK_FUNC(sub_82E56068);
PPC_FUNC_IMPL(__imp__sub_82E56068) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82E56070;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e5f4e8
	ctx.lr = 0x82E56080;
	sub_82E5F4E8(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,23856
	ctx.r11.s64 = ctx.r11.s64 + 23856;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// addi r10,r10,29828
	ctx.r10.s64 = ctx.r10.s64 + 29828;
	// addi r9,r9,30548
	ctx.r9.s64 = ctx.r9.s64 + 30548;
	// addi r8,r8,30516
	ctx.r8.s64 = ctx.r8.s64 + 30516;
	// addi r7,r7,30500
	ctx.r7.s64 = ctx.r7.s64 + 30500;
	// addi r6,r6,30476
	ctx.r6.s64 = ctx.r6.s64 + 30476;
	// addi r5,r5,30460
	ctx.r5.s64 = ctx.r5.s64 + 30460;
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// stw r7,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r7.u32);
	// stw r6,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r6.u32);
	// stw r5,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r5.u32);
	// stw r29,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// bl 0x82266f00
	ctx.lr = 0x82E560F0;
	sub_82266F00(ctx, base);
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x82266f00
	ctx.lr = 0x82E560F8;
	sub_82266F00(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82266f00
	ctx.lr = 0x82E56100;
	sub_82266F00(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// stb r11,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r11.u8);
	// stb r29,97(r31)
	PPC_STORE_U8(ctx.r31.u32 + 97, ctx.r29.u8);
	// lfs f0,3800(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3800);
	ctx.f0.f64 = double(temp.f32);
	// stb r29,98(r31)
	PPC_STORE_U8(ctx.r31.u32 + 98, ctx.r29.u8);
	// stb r11,99(r31)
	PPC_STORE_U8(ctx.r31.u32 + 99, ctx.r11.u8);
	// stb r11,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r11.u8);
	// stb r11,101(r31)
	PPC_STORE_U8(ctx.r31.u32 + 101, ctx.r11.u8);
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// lwz r28,4(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82e561ac
	if (!ctx.cr6.gt) goto loc_82E561AC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// addi r25,r11,30428
	ctx.r25.s64 = ctx.r11.s64 + 30428;
loc_82E56144:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwzx r3,r26,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E5615C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d51730
	ctx.lr = 0x82E56168;
	sub_82D51730(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e5618c
	if (ctx.cr6.eq) goto loc_82E5618C;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmpw cr6,r27,r28
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82e56144
	if (ctx.cr6.lt) goto loc_82E56144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_82E5618C:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e561a4
	if (ctx.cr6.eq) goto loc_82E561A4;
	// addi r29,r11,-8
	ctx.r29.s64 = ctx.r11.s64 + -8;
loc_82E561A4:
	// lbz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 88);
	// stb r11,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r11.u8);
loc_82E561AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82E561B8"))) PPC_WEAK_FUNC(sub_82E561B8);
PPC_FUNC_IMPL(__imp__sub_82E561B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82E561C0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,120(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 120);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82e561fc
	if (!ctx.cr6.gt) goto loc_82E561FC;
	// lwz r8,116(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 116);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82E561E0:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r7,4405
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 4405, ctx.xer);
	// beq cr6,0x82e56258
	if (ctx.cr6.eq) goto loc_82E56258;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82e561e0
	if (ctx.cr6.lt) goto loc_82E561E0;
loc_82E561FC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E56200:
	// rotlwi r31,r11,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82e56218
	if (!ctx.cr6.eq) goto loc_82E56218;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e5636c
	if (ctx.cr6.eq) goto loc_82E5636C;
loc_82E56218:
	// lwz r9,12(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82e5636c
	if (!ctx.cr6.gt) goto loc_82E5636C;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
loc_82E56230:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,0(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82e56268
	if (ctx.cr6.eq) goto loc_82E56268;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82e56230
	if (ctx.cr6.lt) goto loc_82E56230;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82E56258:
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// b 0x82e56200
	goto loc_82E56200;
loc_82E56268:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82e5636c
	if (ctx.cr6.lt) goto loc_82E5636C;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwzx r27,r11,r10
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bne cr6,0x82e56288
	if (!ctx.cr6.eq) goto loc_82E56288;
	// lwz r31,16(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
loc_82E56288:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82e57048
	ctx.lr = 0x82E56290;
	sub_82E57048(ctx, base);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lwz r11,-16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -16);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,-19464(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19464);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E562BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,57(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 57);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e5630c
	if (ctx.cr6.eq) goto loc_82E5630C;
	// addi r30,r29,32
	ctx.r30.s64 = ctx.r29.s64 + 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d5a318
	ctx.lr = 0x82E562DC;
	sub_82D5A318(ctx, base);
	// addi r5,r3,-1
	ctx.r5.s64 = ctx.r3.s64 + -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82e56304
	if (!ctx.cr6.eq) goto loc_82E56304;
	// addi r3,r29,20
	ctx.r3.s64 = ctx.r29.s64 + 20;
	// bl 0x82d5a8f8
	ctx.lr = 0x82E562F4;
	sub_82D5A8F8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d5a8f8
	ctx.lr = 0x82E56300;
	sub_82D5A8F8(ctx, base);
	// b 0x82e5630c
	goto loc_82E5630C;
loc_82E56304:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82265bc0
	ctx.lr = 0x82E5630C;
	sub_82265BC0(ctx, base);
loc_82E5630C:
	// lwz r9,8(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82e5636c
	if (!ctx.cr6.gt) goto loc_82E5636C;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
loc_82E56320:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r28
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82e56344
	if (ctx.cr6.eq) goto loc_82E56344;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82e56320
	if (ctx.cr6.lt) goto loc_82E56320;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82E56344:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82e5636c
	if (ctx.cr6.lt) goto loc_82E5636C;
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r10.u32);
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
loc_82E5636C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82E56374"))) PPC_WEAK_FUNC(sub_82E56374);
PPC_FUNC_IMPL(__imp__sub_82E56374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E56378"))) PPC_WEAK_FUNC(sub_82E56378);
PPC_FUNC_IMPL(__imp__sub_82E56378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82E56380;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// lwzx r29,r11,r10
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e563ec
	if (!ctx.cr6.gt) goto loc_82E563EC;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// lis r27,-31948
	ctx.r27.s64 = -2093744128;
loc_82E563B0:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r3,24(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// lwz r5,-19464(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + -19464);
	// lwzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rotlwi r4,r9,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E563D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e563b0
	if (ctx.cr6.lt) goto loc_82E563B0;
loc_82E563EC:
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r11,r11,2
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82e5641c
	if (!ctx.cr6.lt) goto loc_82E5641C;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bgt cr6,0x82e56410
	if (ctx.cr6.gt) goto loc_82E56410;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_82E56410:
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d51270
	ctx.lr = 0x82E5641C;
	sub_82D51270(ctx, base);
loc_82E5641C:
	// stw r26,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82E56428"))) PPC_WEAK_FUNC(sub_82E56428);
PPC_FUNC_IMPL(__imp__sub_82E56428) {
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
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,108
	ctx.r4.s64 = 108;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4ec28
	ctx.lr = 0x82E56454;
	sub_82D4EC28(ctx, base);
	// li r11,108
	ctx.r11.s64 = 108;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r11.u16);
	// bl 0x82e56068
	ctx.lr = 0x82E56464;
	sub_82E56068(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bne cr6,0x82e56474
	if (!ctx.cr6.eq) goto loc_82E56474;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E56474:
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

__attribute__((alias("__imp__sub_82E56488"))) PPC_WEAK_FUNC(sub_82E56488);
PPC_FUNC_IMPL(__imp__sub_82E56488) {
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
	// lis r11,-32027
	ctx.r11.s64 = -2098921472;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r5,r11,25640
	ctx.r5.s64 = ctx.r11.s64 + 25640;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r4,r10,22544
	ctx.r4.s64 = ctx.r10.s64 + 22544;
	// lwz r3,-20840(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20840);
	// bl 0x82e32408
	ctx.lr = 0x82E564B0;
	sub_82E32408(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,-19464(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19464, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E564C8"))) PPC_WEAK_FUNC(sub_82E564C8);
PPC_FUNC_IMPL(__imp__sub_82E564C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd0
	ctx.lr = 0x82E564D0;
	sub_82CA2BD0(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// addi r4,r23,40
	ctx.r4.s64 = ctx.r23.s64 + 40;
	// bne cr6,0x82e564f0
	if (!ctx.cr6.eq) goto loc_82E564F0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_82E564F0:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d73d40
	ctx.lr = 0x82E564F8;
	sub_82D73D40(ctx, base);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// addi r4,r23,44
	ctx.r4.s64 = ctx.r23.s64 + 44;
	// bne cr6,0x82e56508
	if (!ctx.cr6.eq) goto loc_82E56508;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_82E56508:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d73f00
	ctx.lr = 0x82E56510;
	sub_82D73F00(ctx, base);
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r3,72(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e56540
	if (ctx.cr6.eq) goto loc_82E56540;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// b 0x82e5654c
	goto loc_82E5654C;
loc_82E56540:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82d4ea30
	ctx.lr = 0x82E5654C;
	sub_82D4EA30(ctx, base);
loc_82E5654C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e5656c
	if (ctx.cr6.eq) goto loc_82E5656C;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// stw r24,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r24.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r24,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r24.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// b 0x82e56570
	goto loc_82E56570;
loc_82E5656C:
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_82E56570:
	// addi r31,r23,48
	ctx.r31.s64 = ctx.r23.s64 + 48;
	// stw r22,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r22.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r11,r11,2
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82e56598
	if (!ctx.cr6.eq) goto loc_82E56598;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d512f8
	ctx.lr = 0x82E56598;
	sub_82D512F8(ctx, base);
loc_82E56598:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r27,r22,40
	ctx.r27.s64 = ctx.r22.s64 + 40;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e56634
	if (!ctx.cr6.gt) goto loc_82E56634;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
loc_82E565CC:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// lwzx r11,r11,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// addi r29,r11,76
	ctx.r29.s64 = ctx.r11.s64 + 76;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e56620
	if (!ctx.cr6.gt) goto loc_82E56620;
	// addi r28,r23,40
	ctx.r28.s64 = ctx.r23.s64 + 40;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_82E565F0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r4,r10,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E5660C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e565f0
	if (ctx.cr6.lt) goto loc_82E565F0;
loc_82E56620:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e565cc
	if (ctx.cr6.lt) goto loc_82E565CC;
loc_82E56634:
	// addi r26,r22,52
	ctx.r26.s64 = ctx.r22.s64 + 52;
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e566b4
	if (!ctx.cr6.gt) goto loc_82E566B4;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
loc_82E5664C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// lwzx r11,r27,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// addi r29,r11,76
	ctx.r29.s64 = ctx.r11.s64 + 76;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e566a0
	if (!ctx.cr6.gt) goto loc_82E566A0;
	// addi r28,r23,40
	ctx.r28.s64 = ctx.r23.s64 + 40;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_82E56670:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r4,r31,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E5668C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e56670
	if (ctx.cr6.lt) goto loc_82E56670;
loc_82E566A0:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e5664c
	if (ctx.cr6.lt) goto loc_82E5664C;
loc_82E566B4:
	// lwz r11,32(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e5670c
	if (ctx.cr6.eq) goto loc_82E5670C;
	// addi r28,r11,76
	ctx.r28.s64 = ctx.r11.s64 + 76;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e5670c
	if (!ctx.cr6.gt) goto loc_82E5670C;
	// addi r29,r23,40
	ctx.r29.s64 = ctx.r23.s64 + 40;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_82E566DC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r4,r10,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E566F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e566dc
	if (ctx.cr6.lt) goto loc_82E566DC;
loc_82E5670C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c20
	// ERROR 82CA2C20
	return;
}

__attribute__((alias("__imp__sub_82E56714"))) PPC_WEAK_FUNC(sub_82E56714);
PPC_FUNC_IMPL(__imp__sub_82E56714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E56718"))) PPC_WEAK_FUNC(sub_82E56718);
PPC_FUNC_IMPL(__imp__sub_82E56718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82E56720;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e56774
	if (ctx.cr6.eq) goto loc_82E56774;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82e56774
	if (!ctx.cr6.gt) goto loc_82E56774;
	// addi r28,r29,-8
	ctx.r28.s64 = ctx.r29.s64 + -8;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82E5674C:
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82e564c8
	ctx.lr = 0x82E5675C;
	sub_82E564C8(ctx, base);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82e5674c
	if (ctx.cr6.lt) goto loc_82E5674C;
loc_82E56774:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82E5677C"))) PPC_WEAK_FUNC(sub_82E5677C);
PPC_FUNC_IMPL(__imp__sub_82E5677C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E56780"))) PPC_WEAK_FUNC(sub_82E56780);
PPC_FUNC_IMPL(__imp__sub_82E56780) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x82e564c8
	sub_82E564C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E56788"))) PPC_WEAK_FUNC(sub_82E56788);
PPC_FUNC_IMPL(__imp__sub_82E56788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc0
	ctx.lr = 0x82E56790;
	sub_82CA2BC0(ctx, base);
	// stwu r1,-848(r1)
	ea = -848 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// li r18,0
	ctx.r18.s64 = 0;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// lwz r9,120(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + 120);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82e567d4
	if (!ctx.cr6.gt) goto loc_82E567D4;
	// lwz r8,116(r20)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r20.u32 + 116);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82E567B8:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r7,4405
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 4405, ctx.xer);
	// beq cr6,0x82e568bc
	if (ctx.cr6.eq) goto loc_82E568BC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82e567b8
	if (ctx.cr6.lt) goto loc_82E567B8;
loc_82E567D4:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_82E567D8:
	// rotlwi r22,r11,0
	ctx.r22.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82e56808
	if (!ctx.cr6.gt) goto loc_82E56808;
	// lwz r10,116(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 116);
loc_82E567EC:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,4405
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 4405, ctx.xer);
	// beq cr6,0x82e568cc
	if (ctx.cr6.eq) goto loc_82E568CC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82e567ec
	if (ctx.cr6.lt) goto loc_82E567EC;
loc_82E56808:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_82E5680C:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e56820
	if (ctx.cr6.eq) goto loc_82E56820;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82e56e08
	if (ctx.cr6.eq) goto loc_82E56E08;
loc_82E56820:
	// lwz r31,16(r20)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82e56834
	if (!ctx.cr6.eq) goto loc_82E56834;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82e56e08
	if (ctx.cr6.eq) goto loc_82E56E08;
loc_82E56834:
	// lwz r11,-24(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e56850
	if (!ctx.cr6.eq) goto loc_82E56850;
	// lwz r11,-20(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82e56854
	if (ctx.cr6.eq) goto loc_82E56854;
loc_82E56850:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_82E56854:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e5687c
	if (ctx.cr6.eq) goto loc_82E5687C;
	// li r5,4660
	ctx.r5.s64 = 4660;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e43730
	ctx.lr = 0x82E56870;
	sub_82E43730(ctx, base);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e56e08
	if (!ctx.cr6.eq) goto loc_82E56E08;
loc_82E5687C:
	// lwz r9,12(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// lwz r8,8(r20)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82e56e08
	if (!ctx.cr6.gt) goto loc_82E56E08;
	// lwz r10,8(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
loc_82E56894:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,0(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82e568d4
	if (ctx.cr6.eq) goto loc_82E568D4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82e56894
	if (ctx.cr6.lt) goto loc_82E56894;
	// addi r1,r1,848
	ctx.r1.s64 = ctx.r1.s64 + 848;
	// b 0x82ca2c10
	// ERROR 82CA2C10
	return;
loc_82E568BC:
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// b 0x82e567d8
	goto loc_82E567D8;
loc_82E568CC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82e5680c
	goto loc_82E5680C;
loc_82E568D4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82e56e08
	if (ctx.cr6.lt) goto loc_82E56E08;
	// lwz r10,8(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// lwzx r21,r11,r10
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bne cr6,0x82e568f8
	if (!ctx.cr6.eq) goto loc_82E568F8;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_82E568F8:
	// lbz r11,58(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 58);
	// mr r23,r18
	ctx.r23.u64 = ctx.r18.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e56940
	if (ctx.cr6.eq) goto loc_82E56940;
	// addi r31,r24,44
	ctx.r31.s64 = ctx.r24.s64 + 44;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d5a318
	ctx.lr = 0x82E5691C;
	sub_82D5A318(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r23,r11,31
	ctx.r23.u64 = ctx.r11.u32 & 0x1;
	// bne cr6,0x82e56940
	if (!ctx.cr6.eq) goto loc_82E56940;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82265bc0
	ctx.lr = 0x82E56940;
	sub_82265BC0(ctx, base);
loc_82E56940:
	// lbz r11,57(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 57);
	// mr r25,r18
	ctx.r25.u64 = ctx.r18.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e56964
	if (ctx.cr6.eq) goto loc_82E56964;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r24,20
	ctx.r3.s64 = ctx.r24.s64 + 20;
	// bl 0x82d5a318
	ctx.lr = 0x82E56960;
	sub_82D5A318(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
loc_82E56964:
	// addi r11,r1,108
	ctx.r11.s64 = ctx.r1.s64 + 108;
	// stw r18,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r18.u32);
	// li r19,1
	ctx.r19.s64 = 1;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bne cr6,0x82e56be8
	if (!ctx.cr6.eq) goto loc_82E56BE8;
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e56be8
	if (!ctx.cr6.eq) goto loc_82E56BE8;
	// lbz r11,59(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 59);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e56be8
	if (ctx.cr6.eq) goto loc_82E56BE8;
	// lbz r11,60(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e56be8
	if (ctx.cr6.eq) goto loc_82E56BE8;
	// li r5,4406
	ctx.r5.s64 = 4406;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e43730
	ctx.lr = 0x82E569BC;
	sub_82E43730(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,4401
	ctx.r5.s64 = 4401;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// ld r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x82e43730
	ctx.lr = 0x82E569D4;
	sub_82E43730(ctx, base);
	// ld r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82e56b30
	if (!ctx.cr6.eq) goto loc_82E56B30;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82e56b30
	if (!ctx.cr6.eq) goto loc_82E56B30;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e5f690
	ctx.lr = 0x82E569F0;
	sub_82E5F690(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82e5f6a0
	ctx.lr = 0x82E569FC;
	sub_82E5F6A0(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82e610b0
	ctx.lr = 0x82E56A0C;
	sub_82E610B0(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r27,r11,-1
	ctx.r27.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt cr6,0x82e56acc
	if (ctx.cr6.lt) goto loc_82E56ACC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// rlwinm r31,r27,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r11,30568
	ctx.r30.s64 = ctx.r11.s64 + 30568;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// addi r29,r11,30144
	ctx.r29.s64 = ctx.r11.s64 + 30144;
loc_82E56A34:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x82e56abc
	if (!ctx.cr6.eq) goto loc_82E56ABC;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e56abc
	if (!ctx.cr6.eq) goto loc_82E56ABC;
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82d51440
	ctx.lr = 0x82E56A64;
	sub_82D51440(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d53c70
	ctx.lr = 0x82E56A70;
	sub_82D53C70(ctx, base);
	// lwz r3,29792(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 29792);
	// li r8,271
	ctx.r8.s64 = 271;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E56A98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82d542b0
	ctx.lr = 0x82E56AA0;
	sub_82D542B0(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stwx r10,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
loc_82E56ABC:
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bge cr6,0x82e56a34
	if (!ctx.cr6.lt) goto loc_82E56A34;
loc_82E56ACC:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82e56b20
	if (ctx.cr6.eq) goto loc_82E56B20;
	// lhz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r22.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e56b10
	if (ctx.cr6.eq) goto loc_82E56B10;
	// lhz r11,6(r22)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r22.u32 + 6);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r11,6(r22)
	PPC_STORE_U16(ctx.r22.u32 + 6, ctx.r11.u16);
	// bne cr6,0x82e56b10
	if (!ctx.cr6.eq) goto loc_82E56B10;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E56B10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E56B10:
	// li r5,4405
	ctx.r5.s64 = 4405;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82d7a100
	ctx.lr = 0x82E56B20;
	sub_82D7A100(ctx, base);
loc_82E56B20:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,14712
	ctx.r11.s64 = ctx.r11.s64 + 14712;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// b 0x82e56be8
	goto loc_82E56BE8;
loc_82E56B30:
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// rlwinm r19,r11,27,31,31
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// beq cr6,0x82e56b50
	if (ctx.cr6.eq) goto loc_82E56B50;
	// li r5,4401
	ctx.r5.s64 = 4401;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82d7a100
	ctx.lr = 0x82E56B50;
	sub_82D7A100(ctx, base);
loc_82E56B50:
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,96
	ctx.r4.s64 = 96;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4ec28
	ctx.lr = 0x82E56B68;
	sub_82D4EC28(ctx, base);
	// li r11,96
	ctx.r11.s64 = 96;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r11.u16);
	// bne cr6,0x82e56b80
	if (!ctx.cr6.eq) goto loc_82E56B80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82E56B80:
	// bl 0x82e3d7f0
	ctx.lr = 0x82E56B84;
	sub_82E3D7F0(ctx, base);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,32
	ctx.r8.s64 = 32;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// vxor v0,v0,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_setzero_si128());
	// lfs f0,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vxor v0,v0,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_setzero_si128());
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
loc_82E56BE8:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82e57048
	ctx.lr = 0x82E56BF0;
	sub_82E57048(ctx, base);
	// addi r31,r21,4
	ctx.r31.s64 = ctx.r21.s64 + 4;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r11,r11,2
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82e56c18
	if (!ctx.cr6.eq) goto loc_82E56C18;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d512f8
	ctx.lr = 0x82E56C18;
	sub_82D512F8(ctx, base);
loc_82E56C18:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne cr6,0x82e56d28
	if (!ctx.cr6.eq) goto loc_82E56D28;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82e56c60
	if (ctx.cr6.gt) goto loc_82E56C60;
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e56c60
	if (!ctx.cr6.eq) goto loc_82E56C60;
	// lbz r11,60(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e56d78
	if (!ctx.cr6.eq) goto loc_82E56D78;
loc_82E56C60:
	// lwz r3,-16(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -16);
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r20,224
	ctx.r5.s64 = ctx.r20.s64 + 224;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,-19464(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19464);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E56C8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,57(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 57);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e56cb8
	if (ctx.cr6.eq) goto loc_82E56CB8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r24,20
	ctx.r3.s64 = ctx.r24.s64 + 20;
	// bl 0x82265bc0
	ctx.lr = 0x82E56CA8;
	sub_82265BC0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r24,32
	ctx.r3.s64 = ctx.r24.s64 + 32;
	// bl 0x82265bc0
	ctx.lr = 0x82E56CB8;
	sub_82265BC0(ctx, base);
loc_82E56CB8:
	// li r5,4400
	ctx.r5.s64 = 4400;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82e43730
	ctx.lr = 0x82E56CC8;
	sub_82E43730(ctx, base);
	// ld r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82e56d08
	if (!ctx.cr6.eq) goto loc_82E56D08;
	// lbz r11,61(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 61);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e56d78
	if (ctx.cr6.eq) goto loc_82E56D78;
	// lbz r11,216(r20)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + 216);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x82e56cf8
	if (!ctx.cr6.eq) goto loc_82E56CF8;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r4,-19456(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19456);
	// b 0x82e56d00
	goto loc_82E56D00;
loc_82E56CF8:
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r4,-19460(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19460);
loc_82E56D00:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82e56d78
	if (ctx.cr6.eq) goto loc_82E56D78;
loc_82E56D08:
	// lwz r3,-16(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -16);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r6,-19464(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19464);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E56D24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82e56d78
	goto loc_82E56D78;
loc_82E56D28:
	// addi r31,r24,32
	ctx.r31.s64 = ctx.r24.s64 + 32;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d5a318
	ctx.lr = 0x82E56D3C;
	sub_82D5A318(ctx, base);
	// addi r5,r3,1
	ctx.r5.s64 = ctx.r3.s64 + 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82265bc0
	ctx.lr = 0x82E56D4C;
	sub_82265BC0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r3,-16(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -16);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r20,224
	ctx.r5.s64 = ctx.r20.s64 + 224;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r7,-19464(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19464);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E56D78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E56D78:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e56ddc
	if (!ctx.cr6.gt) goto loc_82E56DDC;
	// clrlwi r29,r19,24
	ctx.r29.u64 = ctx.r19.u32 & 0xFF;
	// mr r31,r18
	ctx.r31.u64 = ctx.r18.u64;
loc_82E56D90:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82e56da4
	if (!ctx.cr6.eq) goto loc_82E56DA4;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// stw r18,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r18.u32);
loc_82E56DA4:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e56dc8
	if (ctx.cr6.eq) goto loc_82E56DC8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E56DC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E56DC8:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e56d90
	if (ctx.cr6.lt) goto loc_82E56D90;
loc_82E56DDC:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82e56e08
	if (!ctx.cr6.eq) goto loc_82E56E08;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82E56E08;
	sub_82D4ECA8(ctx, base);
loc_82E56E08:
	// addi r1,r1,848
	ctx.r1.s64 = ctx.r1.s64 + 848;
	// b 0x82ca2c10
	// ERROR 82CA2C10
	return;
}

__attribute__((alias("__imp__sub_82E56E10"))) PPC_WEAK_FUNC(sub_82E56E10);
PPC_FUNC_IMPL(__imp__sub_82E56E10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82E56E18;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r4,r31,40
	ctx.r4.s64 = ctx.r31.s64 + 40;
	// bne cr6,0x82e56e34
	if (!ctx.cr6.eq) goto loc_82E56E34;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82E56E34:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82d72840
	ctx.lr = 0x82E56E48;
	sub_82D72840(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r4,r31,44
	ctx.r4.s64 = ctx.r31.s64 + 44;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82d72960
	ctx.lr = 0x82E56E5C;
	sub_82D72960(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e56378
	ctx.lr = 0x82E56E68;
	sub_82E56378(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e56e80
	if (ctx.cr6.eq) goto loc_82E56E80;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82e57108
	ctx.lr = 0x82E56E80;
	sub_82E57108(ctx, base);
loc_82E56E80:
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82E56EA4"))) PPC_WEAK_FUNC(sub_82E56EA4);
PPC_FUNC_IMPL(__imp__sub_82E56EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E56EA8"))) PPC_WEAK_FUNC(sub_82E56EA8);
PPC_FUNC_IMPL(__imp__sub_82E56EA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82E56EB0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r10,r10,30548
	ctx.r10.s64 = ctx.r10.s64 + 30548;
	// addi r9,r9,30516
	ctx.r9.s64 = ctx.r9.s64 + 30516;
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r8,r8,30476
	ctx.r8.s64 = ctx.r8.s64 + 30476;
	// addi r11,r11,30500
	ctx.r11.s64 = ctx.r11.s64 + 30500;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r7,r7,30460
	ctx.r7.s64 = ctx.r7.s64 + 30460;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r28,r31,40
	ctx.r28.s64 = ctx.r31.s64 + 40;
	// addi r27,r31,44
	ctx.r27.s64 = ctx.r31.s64 + 44;
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r7,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r7.u32);
	// blt cr6,0x82e56f88
	if (ctx.cr6.lt) goto loc_82E56F88;
	// rlwinm r29,r30,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_82E56F10:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82d72840
	ctx.lr = 0x82E56F24;
	sub_82D72840(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82d72960
	ctx.lr = 0x82E56F38;
	sub_82D72960(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e56378
	ctx.lr = 0x82E56F44;
	sub_82E56378(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e56f5c
	if (ctx.cr6.eq) goto loc_82E56F5C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82e57108
	ctx.lr = 0x82E56F5C;
	sub_82E57108(ctx, base);
loc_82E56F5C:
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stwx r10,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r10.u32);
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
	// bge cr6,0x82e56f10
	if (!ctx.cr6.lt) goto loc_82E56F10;
loc_82E56F88:
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82266ec8
	ctx.lr = 0x82E56F90;
	sub_82266EC8(ctx, base);
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x82266ec8
	ctx.lr = 0x82E56F98;
	sub_82266EC8(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x82266ec8
	ctx.lr = 0x82E56FA0;
	sub_82266EC8(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82e56fcc
	if (!ctx.cr6.eq) goto loc_82E56FCC;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82E56FCC;
	sub_82D4ECA8(ctx, base);
loc_82E56FCC:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,29828
	ctx.r11.s64 = ctx.r11.s64 + 29828;
	// addi r10,r10,23856
	ctx.r10.s64 = ctx.r10.s64 + 23856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// bl 0x82e5f410
	ctx.lr = 0x82E56FEC;
	sub_82E5F410(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82E56FF4"))) PPC_WEAK_FUNC(sub_82E56FF4);
PPC_FUNC_IMPL(__imp__sub_82E56FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E56FF8"))) PPC_WEAK_FUNC(sub_82E56FF8);
PPC_FUNC_IMPL(__imp__sub_82E56FF8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
loc_82E57010:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82e57034
	if (ctx.cr6.eq) goto loc_82E57034;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82e57010
	if (ctx.cr6.lt) goto loc_82E57010;
	// blr 
	return;
loc_82E57034:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x82e56e10
	sub_82E56E10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E57044"))) PPC_WEAK_FUNC(sub_82E57044);
PPC_FUNC_IMPL(__imp__sub_82E57044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E57048"))) PPC_WEAK_FUNC(sub_82E57048);
PPC_FUNC_IMPL(__imp__sub_82E57048) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,120(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 120);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82e57088
	if (!ctx.cr6.gt) goto loc_82E57088;
	// lwz r10,116(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 116);
loc_82E5706C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,4404
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 4404, ctx.xer);
	// beq cr6,0x82e570b8
	if (ctx.cr6.eq) goto loc_82E570B8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82e5706c
	if (ctx.cr6.lt) goto loc_82E5706C;
loc_82E57088:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E5708C:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e570c0
	if (ctx.cr6.eq) goto loc_82E570C0;
	// li r5,4404
	ctx.r5.s64 = 4404;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e43730
	ctx.lr = 0x82E570A4;
	sub_82E43730(ctx, base);
	// ld r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82E570B8:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82e5708c
	goto loc_82E5708C;
loc_82E570C0:
	// addi r3,r4,16
	ctx.r3.s64 = ctx.r4.s64 + 16;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E570D4"))) PPC_WEAK_FUNC(sub_82E570D4);
PPC_FUNC_IMPL(__imp__sub_82E570D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E570D8"))) PPC_WEAK_FUNC(sub_82E570D8);
PPC_FUNC_IMPL(__imp__sub_82E570D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r3,-19464(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19464);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E570E4"))) PPC_WEAK_FUNC(sub_82E570E4);
PPC_FUNC_IMPL(__imp__sub_82E570E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E570E8"))) PPC_WEAK_FUNC(sub_82E570E8);
PPC_FUNC_IMPL(__imp__sub_82E570E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-44
	ctx.r3.s64 = ctx.r3.s64 + -44;
	// b 0x82e571c8
	sub_82E571C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E570F0"))) PPC_WEAK_FUNC(sub_82E570F0);
PPC_FUNC_IMPL(__imp__sub_82E570F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x82e571c8
	sub_82E571C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E570F8"))) PPC_WEAK_FUNC(sub_82E570F8);
PPC_FUNC_IMPL(__imp__sub_82E570F8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82e571c8
	sub_82E571C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E57100"))) PPC_WEAK_FUNC(sub_82E57100);
PPC_FUNC_IMPL(__imp__sub_82E57100) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-40
	ctx.r3.s64 = ctx.r3.s64 + -40;
	// b 0x82e571c8
	sub_82E571C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E57108"))) PPC_WEAK_FUNC(sub_82E57108);
PPC_FUNC_IMPL(__imp__sub_82E57108) {
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
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82e57150
	if (!ctx.cr6.eq) goto loc_82E57150;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82E57150;
	sub_82D4ECA8(ctx, base);
loc_82E57150:
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e571ac
	if (ctx.cr6.eq) goto loc_82E571AC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82e571ac
	if (ctx.cr6.eq) goto loc_82E571AC;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82e57194
	if (ctx.cr6.lt) goto loc_82E57194;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82d4eb08
	ctx.lr = 0x82E57190;
	sub_82D4EB08(ctx, base);
	// b 0x82e571ac
	goto loc_82E571AC;
loc_82E57194:
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r31,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r31.u32);
loc_82E571AC:
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

__attribute__((alias("__imp__sub_82E571C8"))) PPC_WEAK_FUNC(sub_82E571C8);
PPC_FUNC_IMPL(__imp__sub_82E571C8) {
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
	// bl 0x82e56ea8
	ctx.lr = 0x82E571E8;
	sub_82E56EA8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e57210
	if (ctx.cr6.eq) goto loc_82E57210;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,52
	ctx.r6.s64 = 52;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82E57210;
	sub_82D4ECA8(ctx, base);
loc_82E57210:
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

__attribute__((alias("__imp__sub_82E5722C"))) PPC_WEAK_FUNC(sub_82E5722C);
PPC_FUNC_IMPL(__imp__sub_82E5722C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E57230"))) PPC_WEAK_FUNC(sub_82E57230);
PPC_FUNC_IMPL(__imp__sub_82E57230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82E57238;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r4,r31,40
	ctx.r4.s64 = ctx.r31.s64 + 40;
	// bne cr6,0x82e57254
	if (!ctx.cr6.eq) goto loc_82E57254;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82E57254:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d72888
	ctx.lr = 0x82E5725C;
	sub_82D72888(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r4,r31,44
	ctx.r4.s64 = ctx.r31.s64 + 44;
	// bne cr6,0x82e5726c
	if (!ctx.cr6.eq) goto loc_82E5726C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82E5726C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d72960
	ctx.lr = 0x82E57274;
	sub_82D72960(ctx, base);
	// addi r29,r30,224
	ctx.r29.s64 = ctx.r30.s64 + 224;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e572c0
	if (!ctx.cr6.gt) goto loc_82E572C0;
	// addi r28,r31,40
	ctx.r28.s64 = ctx.r31.s64 + 40;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82E57290:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r4,r10,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E572AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e57290
	if (ctx.cr6.lt) goto loc_82E57290;
loc_82E572C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82E572C8"))) PPC_WEAK_FUNC(sub_82E572C8);
PPC_FUNC_IMPL(__imp__sub_82E572C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82E572D0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r4,r31,40
	ctx.r4.s64 = ctx.r31.s64 + 40;
	// bne cr6,0x82e572ec
	if (!ctx.cr6.eq) goto loc_82E572EC;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82E572EC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d73db0
	ctx.lr = 0x82E572F4;
	sub_82D73DB0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r4,r31,44
	ctx.r4.s64 = ctx.r31.s64 + 44;
	// bne cr6,0x82e57304
	if (!ctx.cr6.eq) goto loc_82E57304;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82E57304:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d73f00
	ctx.lr = 0x82E5730C;
	sub_82D73F00(ctx, base);
	// addi r29,r30,224
	ctx.r29.s64 = ctx.r30.s64 + 224;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e57358
	if (!ctx.cr6.gt) goto loc_82E57358;
	// addi r28,r31,40
	ctx.r28.s64 = ctx.r31.s64 + 40;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82E57328:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r4,r10,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E57344;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e57328
	if (ctx.cr6.lt) goto loc_82E57328;
loc_82E57358:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82E57360"))) PPC_WEAK_FUNC(sub_82E57360);
PPC_FUNC_IMPL(__imp__sub_82E57360) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
loc_82E57378:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82e57398
	if (ctx.cr6.eq) goto loc_82E57398;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82e57378
	if (ctx.cr6.lt) goto loc_82E57378;
	// blr 
	return;
loc_82E57398:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r4,r9,16
	ctx.r4.s64 = ctx.r9.s64 + 16;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// lwzx r10,r7,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// stwx r10,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u32);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r3,-16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16);
	// lwz r6,16(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r5,-19448(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19448);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E573E4"))) PPC_WEAK_FUNC(sub_82E573E4);
PPC_FUNC_IMPL(__imp__sub_82E573E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E573E8"))) PPC_WEAK_FUNC(sub_82E573E8);
PPC_FUNC_IMPL(__imp__sub_82E573E8) {
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
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r5,23
	ctx.r5.s64 = 23;
	// li r4,20
	ctx.r4.s64 = 20;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4ec28
	ctx.lr = 0x82E5740C;
	sub_82D4EC28(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r9,20
	ctx.r9.s64 = 20;
	// addi r11,r11,30632
	ctx.r11.s64 = ctx.r11.s64 + 30632;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// sth r8,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r8.u16);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E5744C"))) PPC_WEAK_FUNC(sub_82E5744C);
PPC_FUNC_IMPL(__imp__sub_82E5744C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E57450"))) PPC_WEAK_FUNC(sub_82E57450);
PPC_FUNC_IMPL(__imp__sub_82E57450) {
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
	// bl 0x82e5f4e8
	ctx.lr = 0x82E57468;
	sub_82E5F4E8(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,23880
	ctx.r11.s64 = ctx.r11.s64 + 23880;
	// addi r10,r10,29828
	ctx.r10.s64 = ctx.r10.s64 + 29828;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// addi r9,r9,30736
	ctx.r9.s64 = ctx.r9.s64 + 30736;
	// addi r8,r8,30704
	ctx.r8.s64 = ctx.r8.s64 + 30704;
	// addi r7,r7,30688
	ctx.r7.s64 = ctx.r7.s64 + 30688;
	// addi r6,r6,30664
	ctx.r6.s64 = ctx.r6.s64 + 30664;
	// addi r5,r5,30648
	ctx.r5.s64 = ctx.r5.s64 + 30648;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// stw r7,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r6.u32);
	// stw r5,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r5.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82E574E8"))) PPC_WEAK_FUNC(sub_82E574E8);
PPC_FUNC_IMPL(__imp__sub_82E574E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82E574F0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e57544
	if (ctx.cr6.eq) goto loc_82E57544;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82e57544
	if (!ctx.cr6.gt) goto loc_82E57544;
	// addi r28,r29,-8
	ctx.r28.s64 = ctx.r29.s64 + -8;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82E5751C:
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82e572c8
	ctx.lr = 0x82E5752C;
	sub_82E572C8(ctx, base);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82e5751c
	if (ctx.cr6.lt) goto loc_82E5751C;
loc_82E57544:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82E5754C"))) PPC_WEAK_FUNC(sub_82E5754C);
PPC_FUNC_IMPL(__imp__sub_82E5754C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E57550"))) PPC_WEAK_FUNC(sub_82E57550);
PPC_FUNC_IMPL(__imp__sub_82E57550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82E57558;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r10,r10,30736
	ctx.r10.s64 = ctx.r10.s64 + 30736;
	// addi r9,r9,30704
	ctx.r9.s64 = ctx.r9.s64 + 30704;
	// addi r8,r8,30688
	ctx.r8.s64 = ctx.r8.s64 + 30688;
	// addi r7,r7,30664
	ctx.r7.s64 = ctx.r7.s64 + 30664;
	// addi r6,r6,30648
	ctx.r6.s64 = ctx.r6.s64 + 30648;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// stw r7,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r7.u32);
	// stw r6,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r6.u32);
	// beq cr6,0x82e575e8
	if (ctx.cr6.eq) goto loc_82E575E8;
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e575e8
	if (!ctx.cr6.gt) goto loc_82E575E8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82E575BC:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x82e57230
	ctx.lr = 0x82E575D0;
	sub_82E57230(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e575bc
	if (ctx.cr6.lt) goto loc_82E575BC;
loc_82E575E8:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82e57614
	if (!ctx.cr6.eq) goto loc_82E57614;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82E57614;
	sub_82D4ECA8(ctx, base);
loc_82E57614:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,29828
	ctx.r11.s64 = ctx.r11.s64 + 29828;
	// addi r10,r10,23880
	ctx.r10.s64 = ctx.r10.s64 + 23880;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// bl 0x82e5f410
	ctx.lr = 0x82E57634;
	sub_82E5F410(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82E5763C"))) PPC_WEAK_FUNC(sub_82E5763C);
PPC_FUNC_IMPL(__imp__sub_82E5763C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E57640"))) PPC_WEAK_FUNC(sub_82E57640);
PPC_FUNC_IMPL(__imp__sub_82E57640) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x82e57230
	sub_82E57230(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E57648"))) PPC_WEAK_FUNC(sub_82E57648);
PPC_FUNC_IMPL(__imp__sub_82E57648) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x82e572c8
	sub_82E572C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E57650"))) PPC_WEAK_FUNC(sub_82E57650);
PPC_FUNC_IMPL(__imp__sub_82E57650) {
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
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r11,r11,2
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82e5768c
	if (!ctx.cr6.eq) goto loc_82E5768C;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d512f8
	ctx.lr = 0x82E5768C;
	sub_82D512F8(ctx, base);
loc_82E5768C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82E576C0"))) PPC_WEAK_FUNC(sub_82E576C0);
PPC_FUNC_IMPL(__imp__sub_82E576C0) {
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
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,60
	ctx.r4.s64 = 60;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4ec28
	ctx.lr = 0x82E576EC;
	sub_82D4EC28(ctx, base);
	// li r11,60
	ctx.r11.s64 = 60;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r11.u16);
	// bl 0x82e57450
	ctx.lr = 0x82E576FC;
	sub_82E57450(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bne cr6,0x82e5770c
	if (!ctx.cr6.eq) goto loc_82E5770C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E5770C:
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

__attribute__((alias("__imp__sub_82E57720"))) PPC_WEAK_FUNC(sub_82E57720);
PPC_FUNC_IMPL(__imp__sub_82E57720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd0
	ctx.lr = 0x82E57728;
	sub_82CA2BD0(ctx, base);
	// stwu r1,-768(r1)
	ea = -768 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r24,r25,16
	ctx.r24.s64 = ctx.r25.s64 + 16;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r23,16(r25)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E57750;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r22,0
	ctx.r22.s64 = 0;
	// lis r8,-32768
	ctx.r8.s64 = -2147483648;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// beq cr6,0x82e57778
	if (ctx.cr6.eq) goto loc_82E57778;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// bne cr6,0x82e5777c
	if (!ctx.cr6.eq) goto loc_82E5777C;
loc_82E57778:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82E5777C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e577d4
	if (!ctx.cr6.eq) goto loc_82E577D4;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r10,-19452(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19452);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82e577c0
	if (!ctx.cr6.gt) goto loc_82E577C0;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
loc_82E577A4:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r7,r3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82e577c4
	if (ctx.cr6.eq) goto loc_82E577C4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82e577a4
	if (ctx.cr6.lt) goto loc_82E577A4;
loc_82E577C0:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82E577C4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
loc_82E577D4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e579b8
	if (ctx.cr6.eq) goto loc_82E579B8;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82e579b8
	if (ctx.cr6.eq) goto loc_82E579B8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e5f690
	ctx.lr = 0x82E577F0;
	sub_82E5F690(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82e5f6a0
	ctx.lr = 0x82E577FC;
	sub_82E5F6A0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82e610b0
	ctx.lr = 0x82E5780C;
	sub_82E610B0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r27,r11,-1
	ctx.r27.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt cr6,0x82e578cc
	if (ctx.cr6.lt) goto loc_82E578CC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// rlwinm r31,r27,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r11,30748
	ctx.r30.s64 = ctx.r11.s64 + 30748;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// addi r29,r11,30144
	ctx.r29.s64 = ctx.r11.s64 + 30144;
loc_82E57834:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x82e578bc
	if (!ctx.cr6.eq) goto loc_82E578BC;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e578bc
	if (!ctx.cr6.eq) goto loc_82E578BC;
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d51440
	ctx.lr = 0x82E57864;
	sub_82D51440(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d53c70
	ctx.lr = 0x82E57870;
	sub_82D53C70(ctx, base);
	// lwz r3,29792(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 29792);
	// li r8,146
	ctx.r8.s64 = 146;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E57898;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d542b0
	ctx.lr = 0x82E578A0;
	sub_82D542B0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stwx r10,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
loc_82E578BC:
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bge cr6,0x82e57834
	if (!ctx.cr6.lt) goto loc_82E57834;
loc_82E578CC:
	// addi r31,r26,8
	ctx.r31.s64 = ctx.r26.s64 + 8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r11,r11,2
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82e578f0
	if (!ctx.cr6.eq) goto loc_82E578F0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d512f8
	ctx.lr = 0x82E578F0;
	sub_82D512F8(ctx, base);
loc_82E578F0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stwx r25,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r25.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lwz r3,-16(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -16);
	// lwz r5,8(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// lwz r7,-19448(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19448);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E57938;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r3,-16(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -16);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r6,-19448(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19448);
	// lwz r4,-19444(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19444);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E5795C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e579a8
	if (!ctx.cr6.gt) goto loc_82E579A8;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_82E57970:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e57994
	if (ctx.cr6.eq) goto loc_82E57994;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E57994;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E57994:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e57970
	if (ctx.cr6.lt) goto loc_82E57970;
loc_82E579A8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r11,r11,14712
	ctx.r11.s64 = ctx.r11.s64 + 14712;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
loc_82E579B8:
	// rlwinm r11,r8,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e579e0
	if (!ctx.cr6.eq) goto loc_82E579E0;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82E579E0;
	sub_82D4ECA8(ctx, base);
loc_82E579E0:
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// b 0x82ca2c20
	// ERROR 82CA2C20
	return;
}

__attribute__((alias("__imp__sub_82E579E8"))) PPC_WEAK_FUNC(sub_82E579E8);
PPC_FUNC_IMPL(__imp__sub_82E579E8) {
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
	// lis r11,-32027
	ctx.r11.s64 = -2098921472;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r5,r11,30400
	ctx.r5.s64 = ctx.r11.s64 + 30400;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r4,r10,-30532
	ctx.r4.s64 = ctx.r10.s64 + -30532;
	// lwz r3,-20840(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20840);
	// bl 0x82e32408
	ctx.lr = 0x82E57A10;
	sub_82E32408(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,-19448(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19448, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E57A28"))) PPC_WEAK_FUNC(sub_82E57A28);
PPC_FUNC_IMPL(__imp__sub_82E57A28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82E57A30;
	sub_82CA2BD4(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r24,0(r13)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r23,8
	ctx.r23.s64 = 8;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwzx r10,r24,r23
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r23.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82e57a70
	if (!ctx.cr6.lt) goto loc_82E57A70;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r9,r9,30812
	ctx.r9.s64 = ctx.r9.s64 + 30812;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82E57A70:
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r28,r4,224
	ctx.r28.s64 = ctx.r4.s64 + 224;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// lis r27,-32768
	ctx.r27.s64 = -2147483648;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// lwz r30,4(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x82e57acc
	if (!ctx.cr6.lt) goto loc_82E57ACC;
	// rlwinm r31,r30,7,0,24
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 7) & 0xFFFFFF80;
	// b 0x82e57aa4
	goto loc_82E57AA4;
loc_82E57AA0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82E57AA4:
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E57ABC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,128
	ctx.r31.s64 = ctx.r31.s64 + 128;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82e57aa0
	if (ctx.cr6.lt) goto loc_82E57AA0;
	// b 0x82e57b30
	goto loc_82E57B30;
loc_82E57ACC:
	// ble cr6,0x82e57b00
	if (!ctx.cr6.gt) goto loc_82E57B00;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ble cr6,0x82e57afc
	if (!ctx.cr6.gt) goto loc_82E57AFC;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d51270
	ctx.lr = 0x82E57AF8;
	sub_82D51270(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82E57AFC:
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
loc_82E57B00:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82e57b30
	if (!ctx.cr6.gt) goto loc_82E57B30;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82E57B10:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82e57b20
	if (ctx.cr6.eq) goto loc_82E57B20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e37e98
	ctx.lr = 0x82E57B20;
	sub_82E37E98(ctx, base);
loc_82E57B20:
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r31,r31,128
	ctx.r31.s64 = ctx.r31.s64 + 128;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82e57b10
	if (!ctx.cr6.eq) goto loc_82E57B10;
loc_82E57B30:
	// lwz r31,4(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// ble cr6,0x82e57b64
	if (!ctx.cr6.gt) goto loc_82E57B64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// blt cr6,0x82e57b58
	if (ctx.cr6.lt) goto loc_82E57B58;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82E57B58:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d51270
	ctx.lr = 0x82E57B64;
	sub_82D51270(ctx, base);
loc_82E57B64:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e57bd8
	if (!ctx.cr6.gt) goto loc_82E57BD8;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_82E57B80:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E57B9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x82e37da8
	ctx.lr = 0x82E57BB0;
	sub_82E37DA8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r31,r31,128
	ctx.r31.s64 = ctx.r31.s64 + 128;
	// stwx r11,r30,r10
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r11.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e57b80
	if (ctx.cr6.lt) goto loc_82E57B80;
loc_82E57BD8:
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r3,-20(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -20);
	// lis r29,-31948
	ctx.r29.s64 = -2093744128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r5,-19444(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19444);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,-19448(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + -19448);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E57C00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82e57c28
	if (!ctx.cr6.eq) goto loc_82E57C28;
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r6,22
	ctx.r6.s64 = 22;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r24,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82E57C28;
	sub_82D4ECA8(ctx, base);
loc_82E57C28:
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82e57c64
	if (!ctx.cr6.gt) goto loc_82E57C64;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_82E57C38:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E57C54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82e57c38
	if (!ctx.cr6.eq) goto loc_82E57C38;
loc_82E57C64:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82e57c8c
	if (!ctx.cr6.eq) goto loc_82E57C8C;
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,22
	ctx.r6.s64 = 22;
	// rlwinm r5,r11,7,0,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// lwzx r3,r24,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82E57C8C;
	sub_82D4ECA8(ctx, base);
loc_82E57C8C:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e57cdc
	if (!ctx.cr6.gt) goto loc_82E57CDC;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_82E57CA0:
	// lwz r3,-20(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -20);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r6,-19448(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + -19448);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E57CC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e57ca0
	if (ctx.cr6.lt) goto loc_82E57CA0;
loc_82E57CDC:
	// lwzx r10,r24,r23
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r23.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82e57d0c
	if (!ctx.cr6.lt) goto loc_82E57D0C;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r9,r9,25692
	ctx.r9.s64 = ctx.r9.s64 + 25692;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82E57D0C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_82E57D14"))) PPC_WEAK_FUNC(sub_82E57D14);
PPC_FUNC_IMPL(__imp__sub_82E57D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E57D18"))) PPC_WEAK_FUNC(sub_82E57D18);
PPC_FUNC_IMPL(__imp__sub_82E57D18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r3,-19448(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19448);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E57D24"))) PPC_WEAK_FUNC(sub_82E57D24);
PPC_FUNC_IMPL(__imp__sub_82E57D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E57D28"))) PPC_WEAK_FUNC(sub_82E57D28);
PPC_FUNC_IMPL(__imp__sub_82E57D28) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x82e57de0
	sub_82E57DE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E57D30"))) PPC_WEAK_FUNC(sub_82E57D30);
PPC_FUNC_IMPL(__imp__sub_82E57D30) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82e57de0
	sub_82E57DE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E57D38"))) PPC_WEAK_FUNC(sub_82E57D38);
PPC_FUNC_IMPL(__imp__sub_82E57D38) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-40
	ctx.r3.s64 = ctx.r3.s64 + -40;
	// b 0x82e57de0
	sub_82E57DE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E57D40"))) PPC_WEAK_FUNC(sub_82E57D40);
PPC_FUNC_IMPL(__imp__sub_82E57D40) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-44
	ctx.r3.s64 = ctx.r3.s64 + -44;
	// b 0x82e57de0
	sub_82E57DE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E57D48"))) PPC_WEAK_FUNC(sub_82E57D48);
PPC_FUNC_IMPL(__imp__sub_82E57D48) {
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
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82e57d90
	if (!ctx.cr6.eq) goto loc_82E57D90;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82E57D90;
	sub_82D4ECA8(ctx, base);
loc_82E57D90:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// addi r11,r11,14712
	ctx.r11.s64 = ctx.r11.s64 + 14712;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82e57dc4
	if (ctx.cr6.eq) goto loc_82E57DC4;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,23
	ctx.r6.s64 = 23;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82E57DC4;
	sub_82D4ECA8(ctx, base);
loc_82E57DC4:
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

__attribute__((alias("__imp__sub_82E57DE0"))) PPC_WEAK_FUNC(sub_82E57DE0);
PPC_FUNC_IMPL(__imp__sub_82E57DE0) {
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
	// bl 0x82e57550
	ctx.lr = 0x82E57E00;
	sub_82E57550(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e57e28
	if (ctx.cr6.eq) goto loc_82E57E28;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,52
	ctx.r6.s64 = 52;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82E57E28;
	sub_82D4ECA8(ctx, base);
loc_82E57E28:
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

__attribute__((alias("__imp__sub_82E57E44"))) PPC_WEAK_FUNC(sub_82E57E44);
PPC_FUNC_IMPL(__imp__sub_82E57E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E57E48"))) PPC_WEAK_FUNC(sub_82E57E48);
PPC_FUNC_IMPL(__imp__sub_82E57E48) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e5f4e8
	ctx.lr = 0x82E57E60;
	sub_82E5F4E8(ctx, base);
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,30908
	ctx.r11.s64 = ctx.r11.s64 + 30908;
	// lfs f0,-30920(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -30920);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r10,r10,30876
	ctx.r10.s64 = ctx.r10.s64 + 30876;
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// addi r9,r9,30860
	ctx.r9.s64 = ctx.r9.s64 + 30860;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r8,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82E57EB4"))) PPC_WEAK_FUNC(sub_82E57EB4);
PPC_FUNC_IMPL(__imp__sub_82E57EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E57EB8"))) PPC_WEAK_FUNC(sub_82E57EB8);
PPC_FUNC_IMPL(__imp__sub_82E57EB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r11,r11,-11528
	ctx.r11.s64 = ctx.r11.s64 + -11528;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E57ED0"))) PPC_WEAK_FUNC(sub_82E57ED0);
PPC_FUNC_IMPL(__imp__sub_82E57ED0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82e4f2b8
	sub_82E4F2B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E57EEC"))) PPC_WEAK_FUNC(sub_82E57EEC);
PPC_FUNC_IMPL(__imp__sub_82E57EEC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E57EF0"))) PPC_WEAK_FUNC(sub_82E57EF0);
PPC_FUNC_IMPL(__imp__sub_82E57EF0) {
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
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e57f7c
	if (ctx.cr6.eq) goto loc_82E57F7C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e57f38
	if (ctx.cr6.eq) goto loc_82E57F38;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x82d78db0
	ctx.lr = 0x82E57F28;
	sub_82D78DB0(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x82d7c3a8
	ctx.lr = 0x82E57F34;
	sub_82D7C3A8(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
loc_82E57F38:
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e57f70
	if (ctx.cr6.eq) goto loc_82E57F70;
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r11.u16);
	// bne cr6,0x82e57f70
	if (!ctx.cr6.eq) goto loc_82E57F70;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E57F70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E57F70:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x82e57f80
	goto loc_82E57F80;
loc_82E57F7C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E57F80:
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

__attribute__((alias("__imp__sub_82E57F98"))) PPC_WEAK_FUNC(sub_82E57F98);
PPC_FUNC_IMPL(__imp__sub_82E57F98) {
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
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,52
	ctx.r4.s64 = 52;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4ec28
	ctx.lr = 0x82E57FC4;
	sub_82D4EC28(ctx, base);
	// li r11,52
	ctx.r11.s64 = 52;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r11.u16);
	// bl 0x82e57e48
	ctx.lr = 0x82E57FD4;
	sub_82E57E48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bne cr6,0x82e57fe4
	if (!ctx.cr6.eq) goto loc_82E57FE4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E57FE4:
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

__attribute__((alias("__imp__sub_82E57FF8"))) PPC_WEAK_FUNC(sub_82E57FF8);
PPC_FUNC_IMPL(__imp__sub_82E57FF8) {
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
	// lis r11,-32027
	ctx.r11.s64 = -2098921472;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r5,r11,32664
	ctx.r5.s64 = ctx.r11.s64 + 32664;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r4,r10,30840
	ctx.r4.s64 = ctx.r10.s64 + 30840;
	// lwz r3,-20840(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20840);
	// bl 0x82e32408
	ctx.lr = 0x82E58020;
	sub_82E32408(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,-19440(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19440, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E58038"))) PPC_WEAK_FUNC(sub_82E58038);
PPC_FUNC_IMPL(__imp__sub_82E58038) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x82e57ef0
	sub_82E57EF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E5804C"))) PPC_WEAK_FUNC(sub_82E5804C);
PPC_FUNC_IMPL(__imp__sub_82E5804C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E58050"))) PPC_WEAK_FUNC(sub_82E58050);
PPC_FUNC_IMPL(__imp__sub_82E58050) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,30908
	ctx.r11.s64 = ctx.r11.s64 + 30908;
	// addi r10,r10,30876
	ctx.r10.s64 = ctx.r10.s64 + 30876;
	// addi r9,r9,30860
	ctx.r9.s64 = ctx.r9.s64 + 30860;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// bl 0x82e57ef0
	ctx.lr = 0x82E5808C;
	sub_82E57EF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e5f410
	ctx.lr = 0x82E58094;
	sub_82E5F410(ctx, base);
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

__attribute__((alias("__imp__sub_82E580A8"))) PPC_WEAK_FUNC(sub_82E580A8);
PPC_FUNC_IMPL(__imp__sub_82E580A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82E580B0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrldi r11,r5,62
	ctx.r11.u64 = ctx.r5.u64 & 0x3;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmpldi cr6,r11,3
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 3, ctx.xer);
	// bne cr6,0x82e581a0
	if (!ctx.cr6.eq) goto loc_82E581A0;
	// rldicr r5,r5,0,61
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 0) & 0xFFFFFFFFFFFFFFFC;
loc_82E580D0:
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// lbz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82e5818c
	if (!ctx.cr6.eq) goto loc_82E5818C;
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82e5818c
	if (ctx.cr6.eq) goto loc_82E5818C;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lbz r11,216(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 216);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x82e5818c
	if (ctx.cr6.eq) goto loc_82E5818C;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82e5818c
	if (!ctx.cr6.eq) goto loc_82E5818C;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r30,224
	ctx.r4.s64 = ctx.r30.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d4fe48
	ctx.lr = 0x82E58128;
	sub_82D4FE48(ctx, base);
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,96
	ctx.r4.s64 = 96;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4ec28
	ctx.lr = 0x82E58140;
	sub_82D4EC28(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r8,96
	ctx.r8.s64 = 96;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lfs f3,29572(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29572);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r8,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r8.u16);
	// lfs f2,2848(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2848);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,3056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3056);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82e4f468
	ctx.lr = 0x82E58174;
	sub_82E4F468(ctx, base);
	// lfs f1,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// bl 0x82e4f378
	ctx.lr = 0x82E58180;
	sub_82E4F378(ctx, base);
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x82d771b8
	ctx.lr = 0x82E5818C;
	sub_82D771B8(ctx, base);
loc_82E5818C:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_82E581A0:
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82e580d0
	if (ctx.cr6.eq) goto loc_82E580D0;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82E581BC"))) PPC_WEAK_FUNC(sub_82E581BC);
PPC_FUNC_IMPL(__imp__sub_82E581BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E581C0"))) PPC_WEAK_FUNC(sub_82E581C0);
PPC_FUNC_IMPL(__imp__sub_82E581C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,176
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 176, ctx.xer);
	// beq cr6,0x82e58264
	if (ctx.cr6.eq) goto loc_82E58264;
	// cmpwi cr6,r11,177
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 177, ctx.xer);
	// beq cr6,0x82e5820c
	if (ctx.cr6.eq) goto loc_82E5820C;
	// cmpwi cr6,r11,178
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 178, ctx.xer);
	// bne cr6,0x82e582b0
	if (!ctx.cr6.eq) goto loc_82E582B0;
	// addi r3,r31,-8
	ctx.r3.s64 = ctx.r31.s64 + -8;
	// bl 0x82e57ef0
	ctx.lr = 0x82E581F8;
	sub_82E57EF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82E5820C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82e34098
	ctx.lr = 0x82E58218;
	sub_82E34098(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x830c7398
	ctx.lr = 0x82E58224;
	sub_830C7398(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e582b0
	if (ctx.cr6.eq) goto loc_82E582B0;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e582b0
	if (ctx.cr6.eq) goto loc_82E582B0;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e582b0
	if (ctx.cr6.eq) goto loc_82E582B0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82e4f2b8
	ctx.lr = 0x82E58250;
	sub_82E4F2B8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82E58264:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82e34098
	ctx.lr = 0x82E58270;
	sub_82E34098(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x830c7240
	ctx.lr = 0x82E58284;
	sub_830C7240(ctx, base);
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x830c7398
	ctx.lr = 0x82E58290;
	sub_830C7398(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e582b0
	if (ctx.cr6.eq) goto loc_82E582B0;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// bl 0x82e580a8
	ctx.lr = 0x82E582B0;
	sub_82E580A8(ctx, base);
loc_82E582B0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E582C4"))) PPC_WEAK_FUNC(sub_82E582C4);
PPC_FUNC_IMPL(__imp__sub_82E582C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E582C8"))) PPC_WEAK_FUNC(sub_82E582C8);
PPC_FUNC_IMPL(__imp__sub_82E582C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r3,-19440(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19440);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E582D4"))) PPC_WEAK_FUNC(sub_82E582D4);
PPC_FUNC_IMPL(__imp__sub_82E582D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E582D8"))) PPC_WEAK_FUNC(sub_82E582D8);
PPC_FUNC_IMPL(__imp__sub_82E582D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82e582e8
	sub_82E582E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E582E0"))) PPC_WEAK_FUNC(sub_82E582E0);
PPC_FUNC_IMPL(__imp__sub_82E582E0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x82e582e8
	sub_82E582E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E582E8"))) PPC_WEAK_FUNC(sub_82E582E8);
PPC_FUNC_IMPL(__imp__sub_82E582E8) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,30908
	ctx.r11.s64 = ctx.r11.s64 + 30908;
	// addi r10,r10,30876
	ctx.r10.s64 = ctx.r10.s64 + 30876;
	// addi r9,r9,30860
	ctx.r9.s64 = ctx.r9.s64 + 30860;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// bl 0x82e57ef0
	ctx.lr = 0x82E5832C;
	sub_82E57EF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e5f410
	ctx.lr = 0x82E58334;
	sub_82E5F410(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e5835c
	if (ctx.cr6.eq) goto loc_82E5835C;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,52
	ctx.r6.s64 = 52;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82E5835C;
	sub_82D4ECA8(ctx, base);
loc_82E5835C:
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

__attribute__((alias("__imp__sub_82E58378"))) PPC_WEAK_FUNC(sub_82E58378);
PPC_FUNC_IMPL(__imp__sub_82E58378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82E58380;
	sub_82CA2BD4(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// addi r4,r24,40
	ctx.r4.s64 = ctx.r24.s64 + 40;
	// bne cr6,0x82e5839c
	if (!ctx.cr6.eq) goto loc_82E5839C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82E5839C:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d72840
	ctx.lr = 0x82E583A4;
	sub_82D72840(ctx, base);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// addi r4,r24,44
	ctx.r4.s64 = ctx.r24.s64 + 44;
	// bne cr6,0x82e583b4
	if (!ctx.cr6.eq) goto loc_82E583B4;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82E583B4:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d72960
	ctx.lr = 0x82E583BC;
	sub_82D72960(ctx, base);
	// addi r26,r23,40
	ctx.r26.s64 = ctx.r23.s64 + 40;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e5843c
	if (!ctx.cr6.gt) goto loc_82E5843C;
	// li r27,0
	ctx.r27.s64 = 0;
loc_82E583D4:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// addi r29,r11,76
	ctx.r29.s64 = ctx.r11.s64 + 76;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e58428
	if (!ctx.cr6.gt) goto loc_82E58428;
	// addi r28,r24,40
	ctx.r28.s64 = ctx.r24.s64 + 40;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82E583F8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r4,r10,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E58414;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e583f8
	if (ctx.cr6.lt) goto loc_82E583F8;
loc_82E58428:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e583d4
	if (ctx.cr6.lt) goto loc_82E583D4;
loc_82E5843C:
	// addi r26,r23,52
	ctx.r26.s64 = ctx.r23.s64 + 52;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e584bc
	if (!ctx.cr6.gt) goto loc_82E584BC;
	// li r27,0
	ctx.r27.s64 = 0;
loc_82E58454:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// addi r29,r11,76
	ctx.r29.s64 = ctx.r11.s64 + 76;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e584a8
	if (!ctx.cr6.gt) goto loc_82E584A8;
	// addi r28,r24,40
	ctx.r28.s64 = ctx.r24.s64 + 40;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82E58478:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r4,r31,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E58494;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e58478
	if (ctx.cr6.lt) goto loc_82E58478;
loc_82E584A8:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e58454
	if (ctx.cr6.lt) goto loc_82E58454;
loc_82E584BC:
	// lwz r11,32(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e58514
	if (ctx.cr6.eq) goto loc_82E58514;
	// addi r28,r11,76
	ctx.r28.s64 = ctx.r11.s64 + 76;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e58514
	if (!ctx.cr6.gt) goto loc_82E58514;
	// addi r29,r24,40
	ctx.r29.s64 = ctx.r24.s64 + 40;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82E584E4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r4,r31,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E58500;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e584e4
	if (ctx.cr6.lt) goto loc_82E584E4;
loc_82E58514:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_82E5851C"))) PPC_WEAK_FUNC(sub_82E5851C);
PPC_FUNC_IMPL(__imp__sub_82E5851C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E58520"))) PPC_WEAK_FUNC(sub_82E58520);
PPC_FUNC_IMPL(__imp__sub_82E58520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82E58528;
	sub_82CA2BD4(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// addi r4,r24,40
	ctx.r4.s64 = ctx.r24.s64 + 40;
	// bne cr6,0x82e58544
	if (!ctx.cr6.eq) goto loc_82E58544;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82E58544:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d73d40
	ctx.lr = 0x82E5854C;
	sub_82D73D40(ctx, base);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// addi r4,r24,44
	ctx.r4.s64 = ctx.r24.s64 + 44;
	// bne cr6,0x82e5855c
	if (!ctx.cr6.eq) goto loc_82E5855C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82E5855C:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d73f00
	ctx.lr = 0x82E58564;
	sub_82D73F00(ctx, base);
	// addi r26,r23,40
	ctx.r26.s64 = ctx.r23.s64 + 40;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e585e4
	if (!ctx.cr6.gt) goto loc_82E585E4;
	// li r27,0
	ctx.r27.s64 = 0;
loc_82E5857C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// addi r29,r11,76
	ctx.r29.s64 = ctx.r11.s64 + 76;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e585d0
	if (!ctx.cr6.gt) goto loc_82E585D0;
	// addi r28,r24,40
	ctx.r28.s64 = ctx.r24.s64 + 40;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82E585A0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r4,r10,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E585BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e585a0
	if (ctx.cr6.lt) goto loc_82E585A0;
loc_82E585D0:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e5857c
	if (ctx.cr6.lt) goto loc_82E5857C;
loc_82E585E4:
	// addi r26,r23,52
	ctx.r26.s64 = ctx.r23.s64 + 52;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e58664
	if (!ctx.cr6.gt) goto loc_82E58664;
	// li r27,0
	ctx.r27.s64 = 0;
loc_82E585FC:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// addi r29,r11,76
	ctx.r29.s64 = ctx.r11.s64 + 76;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e58650
	if (!ctx.cr6.gt) goto loc_82E58650;
	// addi r28,r24,40
	ctx.r28.s64 = ctx.r24.s64 + 40;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82E58620:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r4,r31,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E5863C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e58620
	if (ctx.cr6.lt) goto loc_82E58620;
loc_82E58650:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e585fc
	if (ctx.cr6.lt) goto loc_82E585FC;
loc_82E58664:
	// lwz r11,32(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e586bc
	if (ctx.cr6.eq) goto loc_82E586BC;
	// addi r28,r11,76
	ctx.r28.s64 = ctx.r11.s64 + 76;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e586bc
	if (!ctx.cr6.gt) goto loc_82E586BC;
	// addi r29,r24,40
	ctx.r29.s64 = ctx.r24.s64 + 40;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82E5868C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r4,r31,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E586A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e5868c
	if (ctx.cr6.lt) goto loc_82E5868C;
loc_82E586BC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_82E586C4"))) PPC_WEAK_FUNC(sub_82E586C4);
PPC_FUNC_IMPL(__imp__sub_82E586C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E586C8"))) PPC_WEAK_FUNC(sub_82E586C8);
PPC_FUNC_IMPL(__imp__sub_82E586C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
loc_82E586DC:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82e586fc
	if (ctx.cr6.eq) goto loc_82E586FC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82e586dc
	if (ctx.cr6.lt) goto loc_82E586DC;
	// blr 
	return;
loc_82E586FC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E58728"))) PPC_WEAK_FUNC(sub_82E58728);
PPC_FUNC_IMPL(__imp__sub_82E58728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82E58730;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e5877c
	if (ctx.cr6.eq) goto loc_82E5877C;
	// lwz r31,112(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82e5877c
	if (!ctx.cr6.gt) goto loc_82E5877C;
	// addi r28,r29,-8
	ctx.r28.s64 = ctx.r29.s64 + -8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82E58758:
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x82e58520
	ctx.lr = 0x82E5876C;
	sub_82E58520(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82e58758
	if (!ctx.cr6.eq) goto loc_82E58758;
loc_82E5877C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82E58784"))) PPC_WEAK_FUNC(sub_82E58784);
PPC_FUNC_IMPL(__imp__sub_82E58784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E58788"))) PPC_WEAK_FUNC(sub_82E58788);
PPC_FUNC_IMPL(__imp__sub_82E58788) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x82e58378
	sub_82E58378(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E58790"))) PPC_WEAK_FUNC(sub_82E58790);
PPC_FUNC_IMPL(__imp__sub_82E58790) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x82e58520
	sub_82E58520(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E58798"))) PPC_WEAK_FUNC(sub_82E58798);
PPC_FUNC_IMPL(__imp__sub_82E58798) {
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
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r11,r11,2
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82e587d4
	if (!ctx.cr6.eq) goto loc_82E587D4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d512f8
	ctx.lr = 0x82E587D4;
	sub_82D512F8(ctx, base);
loc_82E587D4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82E58808"))) PPC_WEAK_FUNC(sub_82E58808);
PPC_FUNC_IMPL(__imp__sub_82E58808) {
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
	// bl 0x82e5f4e8
	ctx.lr = 0x82E58820;
	sub_82E5F4E8(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,23856
	ctx.r11.s64 = ctx.r11.s64 + 23856;
	// addi r10,r10,29828
	ctx.r10.s64 = ctx.r10.s64 + 29828;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// addi r9,r9,31028
	ctx.r9.s64 = ctx.r9.s64 + 31028;
	// addi r8,r8,30996
	ctx.r8.s64 = ctx.r8.s64 + 30996;
	// addi r7,r7,30980
	ctx.r7.s64 = ctx.r7.s64 + 30980;
	// addi r6,r6,30956
	ctx.r6.s64 = ctx.r6.s64 + 30956;
	// addi r5,r5,30940
	ctx.r5.s64 = ctx.r5.s64 + 30940;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// stw r7,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r6.u32);
	// stw r5,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r5.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82E588AC"))) PPC_WEAK_FUNC(sub_82E588AC);
PPC_FUNC_IMPL(__imp__sub_82E588AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E588B0"))) PPC_WEAK_FUNC(sub_82E588B0);
PPC_FUNC_IMPL(__imp__sub_82E588B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82E588B8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r10,r10,31028
	ctx.r10.s64 = ctx.r10.s64 + 31028;
	// addi r9,r9,30996
	ctx.r9.s64 = ctx.r9.s64 + 30996;
	// addi r8,r8,30980
	ctx.r8.s64 = ctx.r8.s64 + 30980;
	// addi r7,r7,30956
	ctx.r7.s64 = ctx.r7.s64 + 30956;
	// addi r6,r6,30940
	ctx.r6.s64 = ctx.r6.s64 + 30940;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// stw r7,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r7.u32);
	// stw r6,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r6.u32);
	// beq cr6,0x82e5893c
	if (ctx.cr6.eq) goto loc_82E5893C;
	// lwz r30,112(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82e5893c
	if (!ctx.cr6.gt) goto loc_82E5893C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82E58918:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwzx r4,r11,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x82e58378
	ctx.lr = 0x82E5892C;
	sub_82E58378(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82e58918
	if (!ctx.cr6.eq) goto loc_82E58918;
loc_82E5893C:
	// lwz r30,64(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82e58978
	if (!ctx.cr6.gt) goto loc_82E58978;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82E5894C:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E58968;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,112
	ctx.r29.s64 = ctx.r29.s64 + 112;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82e5894c
	if (!ctx.cr6.eq) goto loc_82E5894C;
loc_82E58978:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82e589a8
	if (!ctx.cr6.eq) goto loc_82E589A8;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// clrlwi r11,r11,2
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r6,22
	ctx.r6.s64 = 22;
	// mulli r5,r11,112
	ctx.r5.s64 = ctx.r11.s64 * 112;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82E589A8;
	sub_82D4ECA8(ctx, base);
loc_82E589A8:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82e589d4
	if (!ctx.cr6.eq) goto loc_82E589D4;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82E589D4;
	sub_82D4ECA8(ctx, base);
loc_82E589D4:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,29828
	ctx.r11.s64 = ctx.r11.s64 + 29828;
	// addi r10,r10,23856
	ctx.r10.s64 = ctx.r10.s64 + 23856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// bl 0x82e5f410
	ctx.lr = 0x82E589F4;
	sub_82E5F410(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82E589FC"))) PPC_WEAK_FUNC(sub_82E589FC);
PPC_FUNC_IMPL(__imp__sub_82E589FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E58A00"))) PPC_WEAK_FUNC(sub_82E58A00);
PPC_FUNC_IMPL(__imp__sub_82E58A00) {
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
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,72
	ctx.r4.s64 = 72;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4ec28
	ctx.lr = 0x82E58A2C;
	sub_82D4EC28(ctx, base);
	// li r11,72
	ctx.r11.s64 = 72;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r11.u16);
	// bl 0x82e58808
	ctx.lr = 0x82E58A3C;
	sub_82E58808(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bne cr6,0x82e58a4c
	if (!ctx.cr6.eq) goto loc_82E58A4C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E58A4C:
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

__attribute__((alias("__imp__sub_82E58A60"))) PPC_WEAK_FUNC(sub_82E58A60);
PPC_FUNC_IMPL(__imp__sub_82E58A60) {
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
	// lis r11,-32026
	ctx.r11.s64 = -2098855936;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r5,r11,-30208
	ctx.r5.s64 = ctx.r11.s64 + -30208;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r4,r10,30920
	ctx.r4.s64 = ctx.r10.s64 + 30920;
	// lwz r3,-20840(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20840);
	// bl 0x82e32408
	ctx.lr = 0x82E58A88;
	sub_82E32408(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,-19436(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19436, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E58AA0"))) PPC_WEAK_FUNC(sub_82E58AA0);
PPC_FUNC_IMPL(__imp__sub_82E58AA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x82E58AA8;
	sub_82CA2BB0(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82ca7500
	ctx.lr = 0x82E58AB0;
	sub_82CA7500(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r18,0(r13)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r8,8
	ctx.r8.s64 = 8;
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// lwzx r10,r18,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + ctx.r8.u32);
	// stw r18,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r18.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82e58af4
	if (!ctx.cr6.lt) goto loc_82E58AF4;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r9,r9,31068
	ctx.r9.s64 = ctx.r9.s64 + 31068;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = ctx.r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82E58AF4:
	// lwzx r10,r18,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + ctx.r8.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82e58b24
	if (!ctx.cr6.lt) goto loc_82E58B24;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r9,r9,31056
	ctx.r9.s64 = ctx.r9.s64 + 31056;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82E58B24:
	// addi r25,r14,16
	ctx.r25.s64 = ctx.r14.s64 + 16;
	// lwz r28,8(r14)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r14.u32 + 8);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r15,1
	ctx.r15.s64 = 1;
	// addi r20,r11,23452
	ctx.r20.s64 = ctx.r11.s64 + 23452;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r29,4(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// li r16,-16
	ctx.r16.s64 = -16;
	// li r22,16
	ctx.r22.s64 = 16;
	// li r21,-32
	ctx.r21.s64 = -32;
	// li r17,-48
	ctx.r17.s64 = -48;
	// li r23,48
	ctx.r23.s64 = 48;
	// li r24,32
	ctx.r24.s64 = 32;
	// cmpw cr6,r28,r29
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r29.s32, ctx.xer);
	// addi r19,r11,23588
	ctx.r19.s64 = ctx.r11.s64 + 23588;
	// bge cr6,0x82e58b9c
	if (!ctx.cr6.lt) goto loc_82E58B9C;
	// mulli r30,r28,112
	ctx.r30.s64 = ctx.r28.s64 * 112;
	// subf r31,r28,r29
	ctx.r31.s64 = ctx.r29.s64 - ctx.r28.s64;
loc_82E58B6C:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E58B88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,112
	ctx.r30.s64 = ctx.r30.s64 + 112;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82e58b6c
	if (!ctx.cr6.eq) goto loc_82E58B6C;
	// b 0x82e58d0c
	goto loc_82E58D0C;
loc_82E58B9C:
	// lwz r26,8(r25)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// clrlwi r11,r26,2
	ctx.r11.u64 = ctx.r26.u32 & 0x3FFFFFFF;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82e58cd4
	if (!ctx.cr6.gt) goto loc_82E58CD4;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e58bbc
	if (ctx.cr6.lt) goto loc_82E58BBC;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82E58BBC:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r27,0(r25)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// stw r10,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r10.u32);
	// stw r9,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r9.u32);
	// ble cr6,0x82e58bf4
	if (!ctx.cr6.gt) goto loc_82E58BF4;
	// bge cr6,0x82e58be4
	if (!ctx.cr6.lt) goto loc_82E58BE4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82E58BE4:
	// li r5,112
	ctx.r5.s64 = 112;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d51270
	ctx.lr = 0x82E58BF4;
	sub_82D51270(ctx, base);
loc_82E58BF4:
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82e58c70
	if (!ctx.cr6.gt) goto loc_82E58C70;
	// addi r11,r9,64
	ctx.r11.s64 = ctx.r9.s64 + 64;
	// addi r10,r27,48
	ctx.r10.s64 = ctx.r27.s64 + 48;
	// subf r9,r27,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r27.s64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
loc_82E58C10:
	// addic. r7,r11,-64
	ctx.xer.ca = ctx.r11.u32 > 63;
	ctx.r7.s64 = ctx.r11.s64 + -64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82e58c5c
	if (ctx.cr0.eq) goto loc_82E58C5C;
	// stw r20,-64(r11)
	PPC_STORE_U32(ctx.r11.u32 + -64, ctx.r20.u32);
	// sth r15,-58(r11)
	PPC_STORE_U16(ctx.r11.u32 + -58, ctx.r15.u16);
	// lwz r7,-40(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -40);
	// stw r7,-56(r11)
	PPC_STORE_U32(ctx.r11.u32 + -56, ctx.r7.u32);
	// lvx128 v0,r10,r16
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r16.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r10
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,r10,r22
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r22.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,r10,r21
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r21.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r17
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r17.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r21
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r21.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r9,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r7,32(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// stw r19,-64(r11)
	PPC_STORE_U32(ctx.r11.u32 + -64, ctx.r19.u32);
	// stw r7,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// lvx128 v0,r10,r23
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r23.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82E58C5C:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// addi r10,r10,112
	ctx.r10.s64 = ctx.r10.s64 + 112;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82e58c10
	if (!ctx.cr6.eq) goto loc_82E58C10;
loc_82E58C70:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r29,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r29.u32);
	// ble cr6,0x82e58cac
	if (!ctx.cr6.gt) goto loc_82E58CAC;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82E58C84:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E58C9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r31,r31,112
	ctx.r31.s64 = ctx.r31.s64 + 112;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82e58c84
	if (!ctx.cr6.eq) goto loc_82E58C84;
loc_82E58CAC:
	// rlwinm r11,r26,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e58cd4
	if (!ctx.cr6.eq) goto loc_82E58CD4;
	// li r11,4
	ctx.r11.s64 = 4;
	// clrlwi r10,r26,2
	ctx.r10.u64 = ctx.r26.u32 & 0x3FFFFFFF;
	// li r6,22
	ctx.r6.s64 = 22;
	// mulli r5,r10,112
	ctx.r5.s64 = ctx.r10.s64 * 112;
	// lwzx r3,r18,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + ctx.r11.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82d4eca8
	ctx.lr = 0x82E58CD4;
	sub_82D4ECA8(ctx, base);
loc_82E58CD4:
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x82e58d0c
	if (!ctx.cr6.lt) goto loc_82E58D0C;
	// mulli r11,r29,112
	ctx.r11.s64 = ctx.r29.s64 * 112;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r30,r29,r28
	ctx.r30.s64 = ctx.r28.s64 - ctx.r29.s64;
loc_82E58CEC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82e58cfc
	if (ctx.cr6.eq) goto loc_82E58CFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e38da8
	ctx.lr = 0x82E58CFC;
	sub_82E38DA8(ctx, base);
loc_82E58CFC:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r31,r31,112
	ctx.r31.s64 = ctx.r31.s64 + 112;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82e58cec
	if (!ctx.cr6.eq) goto loc_82E58CEC;
loc_82E58D0C:
	// stw r28,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r28.u32);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r11,8(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 8);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e58edc
	if (!ctx.cr6.gt) goto loc_82E58EDC;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f28,31052(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 31052);
	ctx.f28.f64 = double(temp.f32);
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f29,3172(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3172);
	ctx.f29.f64 = double(temp.f32);
	// li r31,0
	ctx.r31.s64 = 0;
	// lfs f26,2944(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2944);
	ctx.f26.f64 = double(temp.f32);
	// li r29,352
	ctx.r29.s64 = 352;
	// lfs f27,3080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	ctx.f27.f64 = double(temp.f32);
	// lfs f31,3084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f31.f64 = double(temp.f32);
loc_82E58D58:
	// lwz r11,4(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4);
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r3,r11,208
	ctx.r3.s64 = ctx.r11.s64 + 208;
	// bl 0x82d84640
	ctx.lr = 0x82E58D68;
	sub_82D84640(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// beq cr6,0x82e58ec8
	if (ctx.cr6.eq) goto loc_82E58EC8;
	// lwz r11,4(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r3,r11,208
	ctx.r3.s64 = ctx.r11.s64 + 208;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E58D94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f12,240(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,260(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f27,f30
	ctx.f13.f64 = double(float(ctx.f27.f64 / ctx.f30.f64));
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f11,280(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f0,f0,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f26.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82e58dc4
	if (!ctx.cr6.lt) goto loc_82E58DC4;
	// fmr f10,f31
	ctx.f10.f64 = ctx.f31.f64;
	// b 0x82e58dc8
	goto loc_82E58DC8;
loc_82E58DC4:
	// fsqrts f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(sqrt(ctx.f0.f64)));
loc_82E58DC8:
	// fmuls f12,f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmsubs f12,f12,f29,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f29.f64 - ctx.f0.f64));
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// bge cr6,0x82e58de0
	if (!ctx.cr6.lt) goto loc_82E58DE0;
	// fmr f12,f31
	ctx.f12.f64 = ctx.f31.f64;
	// b 0x82e58de4
	goto loc_82E58DE4;
loc_82E58DE0:
	// fsqrts f12,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(sqrt(ctx.f12.f64)));
loc_82E58DE4:
	// fmuls f13,f11,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmsubs f0,f13,f29,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f29.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82e58dfc
	if (!ctx.cr6.lt) goto loc_82E58DFC;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x82e58e00
	goto loc_82E58E00;
loc_82E58DFC:
	// fsqrts f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
loc_82E58E00:
	// fmuls f0,f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f0,f10,f28
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f28.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f0,f12,f28
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f28.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lwz r10,4(r14)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lvx128 v0,r0,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// lvx128 v0,r11,r22
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r22.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r11,r24
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r24.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,r11,r23
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r23.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r11
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// stvx128 v11,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// stvx128 v13,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// stvx128 v12,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lvx128 v0,r11,r29
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82d4fe98
	ctx.lr = 0x82E58E88;
	sub_82D4FE98(ctx, base);
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r30,r30,112
	ctx.r30.s64 = ctx.r30.s64 + 112;
	// lvx128 v13,r0,r10
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vaddfp v0,v13,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82e38e38
	ctx.lr = 0x82E58EC8;
	sub_82E38E38(ctx, base);
loc_82E58EC8:
	// lwz r11,8(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 8);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e58d58
	if (ctx.cr6.lt) goto loc_82E58D58;
loc_82E58EDC:
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r8,8
	ctx.r8.s64 = 8;
	// lwzx r11,r7,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r18,r9,25692
	ctx.r18.s64 = ctx.r9.s64 + 25692;
	// bge cr6,0x82e58f14
	if (!ctx.cr6.lt) goto loc_82E58F14;
	// stw r18,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r18.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r6,r10,12
	ctx.r6.s64 = ctx.r10.s64 + 12;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
loc_82E58F14:
	// lwzx r10,r7,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82e58f44
	if (!ctx.cr6.lt) goto loc_82E58F44;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r9,r9,31040
	ctx.r9.s64 = ctx.r9.s64 + 31040;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82E58F44:
	// lwz r29,4(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmpw cr6,r26,r29
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x82e58f88
	if (!ctx.cr6.lt) goto loc_82E58F88;
	// mulli r30,r26,112
	ctx.r30.s64 = ctx.r26.s64 * 112;
	// subf r31,r26,r29
	ctx.r31.s64 = ctx.r29.s64 - ctx.r26.s64;
loc_82E58F58:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E58F74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,112
	ctx.r30.s64 = ctx.r30.s64 + 112;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82e58f58
	if (!ctx.cr6.eq) goto loc_82E58F58;
	// b 0x82e590fc
	goto loc_82E590FC;
loc_82E58F88:
	// lwz r27,8(r25)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// clrlwi r11,r27,2
	ctx.r11.u64 = ctx.r27.u32 & 0x3FFFFFFF;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82e590c4
	if (!ctx.cr6.gt) goto loc_82E590C4;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e58fa8
	if (ctx.cr6.lt) goto loc_82E58FA8;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82E58FA8:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r28,0(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// stw r10,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r10.u32);
	// stw r9,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r9.u32);
	// ble cr6,0x82e58fe0
	if (!ctx.cr6.gt) goto loc_82E58FE0;
	// bge cr6,0x82e58fd0
	if (!ctx.cr6.lt) goto loc_82E58FD0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82E58FD0:
	// li r5,112
	ctx.r5.s64 = 112;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d51270
	ctx.lr = 0x82E58FE0;
	sub_82D51270(ctx, base);
loc_82E58FE0:
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82e5905c
	if (!ctx.cr6.gt) goto loc_82E5905C;
	// addi r11,r9,64
	ctx.r11.s64 = ctx.r9.s64 + 64;
	// addi r10,r28,48
	ctx.r10.s64 = ctx.r28.s64 + 48;
	// subf r9,r28,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r28.s64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
loc_82E58FFC:
	// addic. r7,r11,-64
	ctx.xer.ca = ctx.r11.u32 > 63;
	ctx.r7.s64 = ctx.r11.s64 + -64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82e59048
	if (ctx.cr0.eq) goto loc_82E59048;
	// stw r20,-64(r11)
	PPC_STORE_U32(ctx.r11.u32 + -64, ctx.r20.u32);
	// sth r15,-58(r11)
	PPC_STORE_U16(ctx.r11.u32 + -58, ctx.r15.u16);
	// lwz r7,-40(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -40);
	// stw r7,-56(r11)
	PPC_STORE_U32(ctx.r11.u32 + -56, ctx.r7.u32);
	// lvx128 v0,r10,r16
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r16.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r10
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,r10,r22
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r22.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,r10,r21
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r21.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r17
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r17.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r21
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r21.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r9,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r7,32(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// stw r19,-64(r11)
	PPC_STORE_U32(ctx.r11.u32 + -64, ctx.r19.u32);
	// stw r7,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// lvx128 v0,r10,r23
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r23.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82E59048:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// addi r10,r10,112
	ctx.r10.s64 = ctx.r10.s64 + 112;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82e58ffc
	if (!ctx.cr6.eq) goto loc_82E58FFC;
loc_82E5905C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r29,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r29.u32);
	// ble cr6,0x82e59098
	if (!ctx.cr6.gt) goto loc_82E59098;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82E59070:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E59088;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r31,r31,112
	ctx.r31.s64 = ctx.r31.s64 + 112;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82e59070
	if (!ctx.cr6.eq) goto loc_82E59070;
loc_82E59098:
	// rlwinm r11,r27,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e590c4
	if (!ctx.cr6.eq) goto loc_82E590C4;
	// clrlwi r10,r27,2
	ctx.r10.u64 = ctx.r27.u32 & 0x3FFFFFFF;
	// li r11,4
	ctx.r11.s64 = 4;
	// mulli r5,r10,112
	ctx.r5.s64 = ctx.r10.s64 * 112;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// li r6,22
	ctx.r6.s64 = 22;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d4eca8
	ctx.lr = 0x82E590C4;
	sub_82D4ECA8(ctx, base);
loc_82E590C4:
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmpw cr6,r29,r26
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x82e590fc
	if (!ctx.cr6.lt) goto loc_82E590FC;
	// mulli r11,r29,112
	ctx.r11.s64 = ctx.r29.s64 * 112;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r30,r29,r26
	ctx.r30.s64 = ctx.r26.s64 - ctx.r29.s64;
loc_82E590DC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82e590ec
	if (ctx.cr6.eq) goto loc_82E590EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e38da8
	ctx.lr = 0x82E590EC;
	sub_82E38DA8(ctx, base);
loc_82E590EC:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r31,r31,112
	ctx.r31.s64 = ctx.r31.s64 + 112;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82e590dc
	if (!ctx.cr6.eq) goto loc_82E590DC;
loc_82E590FC:
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r26,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r26.u32);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// lwz r31,20(r14)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r14.u32 + 20);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// ble cr6,0x82e59130
	if (!ctx.cr6.gt) goto loc_82E59130;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82d51270
	ctx.lr = 0x82E59130;
	sub_82D51270(ctx, base);
loc_82E59130:
	// lwz r11,20(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 20);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82e59170
	if (ctx.cr6.lt) goto loc_82E59170;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r11,112
	ctx.r10.s64 = ctx.r11.s64 * 112;
loc_82E5914C:
	// lwz r8,0(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r10,r10,-112
	ctx.r10.s64 = ctx.r10.s64 + -112;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwx r8,r9,r7
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r8.u32);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// bge cr6,0x82e5914c
	if (!ctx.cr6.lt) goto loc_82E5914C;
loc_82E59170:
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r3,-20(r14)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r14.u32 + -20);
	// lis r5,-1
	ctx.r5.s64 = -65536;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// ori r5,r5,255
	ctx.r5.u64 = ctx.r5.u64 | 255;
	// lwz r6,-19436(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19436);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E59198;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,8
	ctx.r9.s64 = 8;
	// lwzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82e591c8
	if (!ctx.cr6.lt) goto loc_82E591C8;
	// stw r18,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r18.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r6,r10,12
	ctx.r6.s64 = ctx.r10.s64 + 12;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
loc_82E591C8:
	// lwzx r10,r8,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82e591f0
	if (!ctx.cr6.lt) goto loc_82E591F0;
	// stw r18,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r18.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = ctx.r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82E591F0:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82e59218
	if (!ctx.cr6.eq) goto loc_82E59218;
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r6,22
	ctx.r6.s64 = 22;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82E59218;
	sub_82D4ECA8(ctx, base);
loc_82E59218:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82ca754c
	ctx.lr = 0x82E59224;
	sub_82CA754C(ctx, base);
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E59228"))) PPC_WEAK_FUNC(sub_82E59228);
PPC_FUNC_IMPL(__imp__sub_82E59228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r3,-19436(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19436);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E59234"))) PPC_WEAK_FUNC(sub_82E59234);
PPC_FUNC_IMPL(__imp__sub_82E59234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E59238"))) PPC_WEAK_FUNC(sub_82E59238);
PPC_FUNC_IMPL(__imp__sub_82E59238) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82e59258
	sub_82E59258(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E59240"))) PPC_WEAK_FUNC(sub_82E59240);
PPC_FUNC_IMPL(__imp__sub_82E59240) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-40
	ctx.r3.s64 = ctx.r3.s64 + -40;
	// b 0x82e59258
	sub_82E59258(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E59248"))) PPC_WEAK_FUNC(sub_82E59248);
PPC_FUNC_IMPL(__imp__sub_82E59248) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-44
	ctx.r3.s64 = ctx.r3.s64 + -44;
	// b 0x82e59258
	sub_82E59258(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E59250"))) PPC_WEAK_FUNC(sub_82E59250);
PPC_FUNC_IMPL(__imp__sub_82E59250) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x82e59258
	sub_82E59258(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E59258"))) PPC_WEAK_FUNC(sub_82E59258);
PPC_FUNC_IMPL(__imp__sub_82E59258) {
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
	// bl 0x82e588b0
	ctx.lr = 0x82E59278;
	sub_82E588B0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e592a0
	if (ctx.cr6.eq) goto loc_82E592A0;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,52
	ctx.r6.s64 = 52;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82E592A0;
	sub_82D4ECA8(ctx, base);
loc_82E592A0:
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

__attribute__((alias("__imp__sub_82E592BC"))) PPC_WEAK_FUNC(sub_82E592BC);
PPC_FUNC_IMPL(__imp__sub_82E592BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E592C0"))) PPC_WEAK_FUNC(sub_82E592C0);
PPC_FUNC_IMPL(__imp__sub_82E592C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r3,-19432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19432);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E592CC"))) PPC_WEAK_FUNC(sub_82E592CC);
PPC_FUNC_IMPL(__imp__sub_82E592CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E592D0"))) PPC_WEAK_FUNC(sub_82E592D0);
PPC_FUNC_IMPL(__imp__sub_82E592D0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addic. r10,r11,-32
	ctx.xer.ca = ctx.r11.u32 > 31;
	ctx.r10.s64 = ctx.r11.s64 + -32;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bne 0x82e592e8
	if (!ctx.cr0.eq) goto loc_82E592E8;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82E592E8:
	// b 0x82d740c0
	sub_82D740C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E592EC"))) PPC_WEAK_FUNC(sub_82E592EC);
PPC_FUNC_IMPL(__imp__sub_82E592EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E592F0"))) PPC_WEAK_FUNC(sub_82E592F0);
PPC_FUNC_IMPL(__imp__sub_82E592F0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addic. r10,r11,-32
	ctx.xer.ca = ctx.r11.u32 > 31;
	ctx.r10.s64 = ctx.r11.s64 + -32;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bne 0x82e59308
	if (!ctx.cr0.eq) goto loc_82E59308;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82E59308:
	// b 0x82d72a80
	sub_82D72A80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E5930C"))) PPC_WEAK_FUNC(sub_82E5930C);
PPC_FUNC_IMPL(__imp__sub_82E5930C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E59310"))) PPC_WEAK_FUNC(sub_82E59310);
PPC_FUNC_IMPL(__imp__sub_82E59310) {
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
	// bl 0x82e5f4e8
	ctx.lr = 0x82E59328;
	sub_82E5F4E8(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r11,r11,31124
	ctx.r11.s64 = ctx.r11.s64 + 31124;
	// addi r10,r10,31244
	ctx.r10.s64 = ctx.r10.s64 + 31244;
	// addi r9,r9,31212
	ctx.r9.s64 = ctx.r9.s64 + 31212;
	// addi r8,r8,31196
	ctx.r8.s64 = ctx.r8.s64 + 31196;
	// addi r7,r7,31172
	ctx.r7.s64 = ctx.r7.s64 + 31172;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// stw r7,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_82E5937C"))) PPC_WEAK_FUNC(sub_82E5937C);
PPC_FUNC_IMPL(__imp__sub_82E5937C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E59380"))) PPC_WEAK_FUNC(sub_82E59380);
PPC_FUNC_IMPL(__imp__sub_82E59380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82E59388;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e593e0
	if (ctx.cr6.eq) goto loc_82E593E0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82E593A4:
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82e593e0
	if (!ctx.cr6.lt) goto loc_82E593E0;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E593CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e593a4
	if (!ctx.cr6.eq) goto loc_82E593A4;
loc_82E593E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82E593E8"))) PPC_WEAK_FUNC(sub_82E593E8);
PPC_FUNC_IMPL(__imp__sub_82E593E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82E593F0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r11,r11,31244
	ctx.r11.s64 = ctx.r11.s64 + 31244;
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r10,r10,31212
	ctx.r10.s64 = ctx.r10.s64 + 31212;
	// addi r9,r9,31196
	ctx.r9.s64 = ctx.r9.s64 + 31196;
	// addi r8,r8,31172
	ctx.r8.s64 = ctx.r8.s64 + 31172;
	// addi r28,r31,32
	ctx.r28.s64 = ctx.r31.s64 + 32;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// beq cr6,0x82e59480
	if (ctx.cr6.eq) goto loc_82E59480;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82E59440:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82e59480
	if (!ctx.cr6.lt) goto loc_82E59480;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// addi r4,r28,8
	ctx.r4.s64 = ctx.r28.s64 + 8;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// addic. r11,r28,-32
	ctx.xer.ca = ctx.r28.u32 > 31;
	ctx.r11.s64 = ctx.r28.s64 + -32;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e59468
	if (!ctx.cr0.eq) goto loc_82E59468;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82E59468:
	// bl 0x82d72a80
	ctx.lr = 0x82E5946C;
	sub_82D72A80(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e59440
	if (!ctx.cr6.eq) goto loc_82E59440;
loc_82E59480:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,31124
	ctx.r11.s64 = ctx.r11.s64 + 31124;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// bl 0x82e5f410
	ctx.lr = 0x82E59494;
	sub_82E5F410(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82E5949C"))) PPC_WEAK_FUNC(sub_82E5949C);
PPC_FUNC_IMPL(__imp__sub_82E5949C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E594A0"))) PPC_WEAK_FUNC(sub_82E594A0);
PPC_FUNC_IMPL(__imp__sub_82E594A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82E594A8;
	sub_82CA2BD4(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmsum3fp128 v0,v0,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// stvewx v0,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3120);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82e59720
	if (!ctx.cr6.gt) goto loc_82E59720;
	// lwz r27,0(r13)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r28,8
	ctx.r28.s64 = 8;
	// lwzx r9,r28,r27
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82e59518
	if (!ctx.cr6.lt) goto loc_82E59518;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r8,r8,31256
	ctx.r8.s64 = ctx.r8.s64 + 31256;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// mftb r8
	ctx.r8.u64 = __rdtsc();
	// addi r7,r10,12
	ctx.r7.s64 = ctx.r10.s64 + 12;
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
loc_82E59518:
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lvx128 v11,r0,r4
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// vaddfp v10,v11,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32)));
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// fabs f12,f12
	ctx.f12.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// li r9,2
	ctx.r9.s64 = 2;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// stvx128 v10,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bge cr6,0x82e59564
	if (!ctx.cr6.lt) goto loc_82E59564;
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// li r8,1
	ctx.r8.s64 = 1;
loc_82E59564:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x82e59570
	if (!ctx.cr6.lt) goto loc_82E59570;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_82E59570:
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// vmsum3fp128 v9,v0,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v9.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r1,96
	ctx.r26.s64 = ctx.r1.s64 + 96;
	// addi r25,r1,96
	ctx.r25.s64 = ctx.r1.s64 + 96;
	// lvx128 v13,r0,r8
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// vxor v13,v13,v13
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_setzero_si128());
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lfsx f13,r9,r11
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r23,r1,128
	ctx.r23.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lfs f0,23732(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 23732);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r24,r1,88
	ctx.r24.s64 = ctx.r1.s64 + 88;
	// addi r8,r8,16912
	ctx.r8.s64 = ctx.r8.s64 + 16912;
	// lvlx v0,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// stvx128 v9,r0,r23
	_mm_store_si128((__m128i*)(base + ((ctx.r23.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lvx128 v12,r0,r8
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// stvx128 v13,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// stfsx f13,r10,r26
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r26.u32, temp.u32);
	// vsubfp v12,v12,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)));
	// lfs f0,2820(r8)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2820);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvlx v13,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// vspltw v7,v13,0
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// lfs f0,23728(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 23728);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfsx f0,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfsx f0,r9,r25
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r25.u32, temp.u32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lfs f0,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lvlx v8,0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// vmulfp128 v12,v12,v11
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v11.f32)));
	// vspltw v8,v8,0
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0xFF));
	// lwz r8,32(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lvx128 v13,r0,r11
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// vmsum3fp128 v9,v13,v13
	_mm_store_ps(ctx.v9.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32), 0xEF));
	// vmaddfp v0,v0,v10,v12
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v12.f32)));
	// stvx128 v9,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fsqrts f13,f0
	ctx.f13.f64 = double(float(sqrt(ctx.f0.f64)));
	// lvlx v9,0,r24
	temp.u32 = ctx.r24.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v9,v9,0
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0xFF));
	// lfs f0,3080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lvx128 v12,r0,r11
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// vspltw v12,v12,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// vmulfp128 v13,v13,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v13,v13,v9
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v9.f32)));
	// vmaddfp v12,v13,v7,v0
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v13,v8,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v12,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82E596A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E596CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E596F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwzx r11,r28,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82e59720
	if (!ctx.cr6.lt) goto loc_82E59720;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r9,r9,25692
	ctx.r9.s64 = ctx.r9.s64 + 25692;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
loc_82E59720:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_82E59728"))) PPC_WEAK_FUNC(sub_82E59728);
PPC_FUNC_IMPL(__imp__sub_82E59728) {
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
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4ec28
	ctx.lr = 0x82E59754;
	sub_82D4EC28(ctx, base);
	// li r11,44
	ctx.r11.s64 = 44;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r11.u16);
	// bl 0x82e59310
	ctx.lr = 0x82E59764;
	sub_82E59310(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bne cr6,0x82e59774
	if (!ctx.cr6.eq) goto loc_82E59774;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E59774:
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

__attribute__((alias("__imp__sub_82E59788"))) PPC_WEAK_FUNC(sub_82E59788);
PPC_FUNC_IMPL(__imp__sub_82E59788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,3164(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3164);
	ctx.f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f13,12336(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12336);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82e597a8
	if (!ctx.cr6.eq) goto loc_82E597A8;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82E597A8:
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r4,r11,12304
	ctx.r4.s64 = ctx.r11.s64 + 12304;
	// lwz r3,-16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r6,-1
	ctx.r6.s64 = -65536;
	// addi r5,r4,16
	ctx.r5.s64 = ctx.r4.s64 + 16;
	// lwz r7,-19432(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19432);
	// b 0x82e594a0
	sub_82E594A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E597D0"))) PPC_WEAK_FUNC(sub_82E597D0);
PPC_FUNC_IMPL(__imp__sub_82E597D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E597D4"))) PPC_WEAK_FUNC(sub_82E597D4);
PPC_FUNC_IMPL(__imp__sub_82E597D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E597D8"))) PPC_WEAK_FUNC(sub_82E597D8);
PPC_FUNC_IMPL(__imp__sub_82E597D8) {
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
	// lis r11,-32026
	ctx.r11.s64 = -2098855936;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r5,r11,-26840
	ctx.r5.s64 = ctx.r11.s64 + -26840;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r4,r10,31144
	ctx.r4.s64 = ctx.r10.s64 + 31144;
	// lwz r3,-20840(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20840);
	// bl 0x82e32408
	ctx.lr = 0x82E59800;
	sub_82E32408(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,-19432(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19432, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E59818"))) PPC_WEAK_FUNC(sub_82E59818);
PPC_FUNC_IMPL(__imp__sub_82E59818) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x82e59830
	sub_82E59830(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E59820"))) PPC_WEAK_FUNC(sub_82E59820);
PPC_FUNC_IMPL(__imp__sub_82E59820) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82e59830
	sub_82E59830(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E59828"))) PPC_WEAK_FUNC(sub_82E59828);
PPC_FUNC_IMPL(__imp__sub_82E59828) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-40
	ctx.r3.s64 = ctx.r3.s64 + -40;
	// b 0x82e59830
	sub_82E59830(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E59830"))) PPC_WEAK_FUNC(sub_82E59830);
PPC_FUNC_IMPL(__imp__sub_82E59830) {
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
	// bl 0x82e593e8
	ctx.lr = 0x82E59850;
	sub_82E593E8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e59878
	if (ctx.cr6.eq) goto loc_82E59878;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,52
	ctx.r6.s64 = 52;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82E59878;
	sub_82D4ECA8(ctx, base);
loc_82E59878:
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

__attribute__((alias("__imp__sub_82E59894"))) PPC_WEAK_FUNC(sub_82E59894);
PPC_FUNC_IMPL(__imp__sub_82E59894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E59898"))) PPC_WEAK_FUNC(sub_82E59898);
PPC_FUNC_IMPL(__imp__sub_82E59898) {
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
	// lis r5,-256
	ctx.r5.s64 = -16777216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// bl 0x82e61380
	ctx.lr = 0x82E598B8;
	sub_82E61380(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r11,r11,31372
	ctx.r11.s64 = ctx.r11.s64 + 31372;
	// addi r10,r10,31340
	ctx.r10.s64 = ctx.r10.s64 + 31340;
	// addi r9,r9,31324
	ctx.r9.s64 = ctx.r9.s64 + 31324;
	// addi r8,r8,31308
	ctx.r8.s64 = ctx.r8.s64 + 31308;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_82E59900"))) PPC_WEAK_FUNC(sub_82E59900);
PPC_FUNC_IMPL(__imp__sub_82E59900) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r4,52
	ctx.r3.s64 = ctx.r4.s64 + 52;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E59908"))) PPC_WEAK_FUNC(sub_82E59908);
PPC_FUNC_IMPL(__imp__sub_82E59908) {
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
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4ec28
	ctx.lr = 0x82E59934;
	sub_82D4EC28(ctx, base);
	// li r11,48
	ctx.r11.s64 = 48;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r11.u16);
	// bl 0x82e59898
	ctx.lr = 0x82E59944;
	sub_82E59898(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bne cr6,0x82e59954
	if (!ctx.cr6.eq) goto loc_82E59954;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E59954:
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

__attribute__((alias("__imp__sub_82E59968"))) PPC_WEAK_FUNC(sub_82E59968);
PPC_FUNC_IMPL(__imp__sub_82E59968) {
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
	// lis r11,-32026
	ctx.r11.s64 = -2098855936;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r5,r11,-26360
	ctx.r5.s64 = ctx.r11.s64 + -26360;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r4,r10,31276
	ctx.r4.s64 = ctx.r10.s64 + 31276;
	// lwz r3,-20840(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20840);
	// bl 0x82e32408
	ctx.lr = 0x82E59990;
	sub_82E32408(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,-19428(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19428, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E599A8"))) PPC_WEAK_FUNC(sub_82E599A8);
PPC_FUNC_IMPL(__imp__sub_82E599A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r3,-19428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19428);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E599B4"))) PPC_WEAK_FUNC(sub_82E599B4);
PPC_FUNC_IMPL(__imp__sub_82E599B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E599B8"))) PPC_WEAK_FUNC(sub_82E599B8);
PPC_FUNC_IMPL(__imp__sub_82E599B8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82e61b08
	sub_82E61B08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E599C0"))) PPC_WEAK_FUNC(sub_82E599C0);
PPC_FUNC_IMPL(__imp__sub_82E599C0) {
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
	// lis r5,-256
	ctx.r5.s64 = -16777216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r5,r5,255
	ctx.r5.u64 = ctx.r5.u64 | 255;
	// bl 0x82e61380
	ctx.lr = 0x82E599E0;
	sub_82E61380(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r11,r11,31480
	ctx.r11.s64 = ctx.r11.s64 + 31480;
	// addi r10,r10,31448
	ctx.r10.s64 = ctx.r10.s64 + 31448;
	// addi r9,r9,31432
	ctx.r9.s64 = ctx.r9.s64 + 31432;
	// addi r8,r8,31416
	ctx.r8.s64 = ctx.r8.s64 + 31416;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_82E59A28"))) PPC_WEAK_FUNC(sub_82E59A28);
PPC_FUNC_IMPL(__imp__sub_82E59A28) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r4,40
	ctx.r3.s64 = ctx.r4.s64 + 40;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E59A30"))) PPC_WEAK_FUNC(sub_82E59A30);
PPC_FUNC_IMPL(__imp__sub_82E59A30) {
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
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4ec28
	ctx.lr = 0x82E59A5C;
	sub_82D4EC28(ctx, base);
	// li r11,48
	ctx.r11.s64 = 48;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r11.u16);
	// bl 0x82e599c0
	ctx.lr = 0x82E59A6C;
	sub_82E599C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bne cr6,0x82e59a7c
	if (!ctx.cr6.eq) goto loc_82E59A7C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E59A7C:
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

__attribute__((alias("__imp__sub_82E59A90"))) PPC_WEAK_FUNC(sub_82E59A90);
PPC_FUNC_IMPL(__imp__sub_82E59A90) {
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
	// lis r11,-32026
	ctx.r11.s64 = -2098855936;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r5,r11,-26064
	ctx.r5.s64 = ctx.r11.s64 + -26064;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r4,r10,31388
	ctx.r4.s64 = ctx.r10.s64 + 31388;
	// lwz r3,-20840(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20840);
	// bl 0x82e32408
	ctx.lr = 0x82E59AB8;
	sub_82E32408(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,-19424(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19424, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E59AD0"))) PPC_WEAK_FUNC(sub_82E59AD0);
PPC_FUNC_IMPL(__imp__sub_82E59AD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r3,-19424(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19424);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E59ADC"))) PPC_WEAK_FUNC(sub_82E59ADC);
PPC_FUNC_IMPL(__imp__sub_82E59ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E59AE0"))) PPC_WEAK_FUNC(sub_82E59AE0);
PPC_FUNC_IMPL(__imp__sub_82E59AE0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-40
	ctx.r3.s64 = ctx.r3.s64 + -40;
	// b 0x82e61b08
	sub_82E61B08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E59AE8"))) PPC_WEAK_FUNC(sub_82E59AE8);
PPC_FUNC_IMPL(__imp__sub_82E59AE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r3,-20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -20);
	// addi r5,r4,19
	ctx.r5.s64 = ctx.r4.s64 + 19;
	// addi r4,r4,224
	ctx.r4.s64 = ctx.r4.s64 + 224;
	// lwz r6,-19420(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19420);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E59B0C"))) PPC_WEAK_FUNC(sub_82E59B0C);
PPC_FUNC_IMPL(__imp__sub_82E59B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E59B10"))) PPC_WEAK_FUNC(sub_82E59B10);
PPC_FUNC_IMPL(__imp__sub_82E59B10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc8
	ctx.lr = 0x82E59B18;
	sub_82CA2BC8(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r20,0(r13)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r21,8
	ctx.r21.s64 = 8;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwzx r10,r21,r20
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r20.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82e59b5c
	if (!ctx.cr6.lt) goto loc_82E59B5C;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r9,r9,31512
	ctx.r9.s64 = ctx.r9.s64 + 31512;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82E59B5C:
	// addi r23,r27,40
	ctx.r23.s64 = ctx.r27.s64 + 40;
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e59bfc
	if (!ctx.cr6.gt) goto loc_82E59BFC;
	// li r24,0
	ctx.r24.s64 = 0;
	// lis r26,-31948
	ctx.r26.s64 = -2093744128;
loc_82E59B78:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwzx r11,r11,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// addi r28,r11,76
	ctx.r28.s64 = ctx.r11.s64 + 76;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e59be8
	if (!ctx.cr6.gt) goto loc_82E59BE8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82E59B98:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwzx r29,r30,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lfs f1,16(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r29,208
	ctx.r3.s64 = ctx.r29.s64 + 208;
	// bl 0x82d84680
	ctx.lr = 0x82E59BB4;
	sub_82D84680(ctx, base);
	// lwz r3,-20(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -20);
	// lwz r6,-19420(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + -19420);
	// addi r5,r29,19
	ctx.r5.s64 = ctx.r29.s64 + 19;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E59BD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e59b98
	if (ctx.cr6.lt) goto loc_82E59B98;
loc_82E59BE8:
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e59b78
	if (ctx.cr6.lt) goto loc_82E59B78;
loc_82E59BFC:
	// lwzx r10,r21,r20
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r20.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82e59c2c
	if (!ctx.cr6.lt) goto loc_82E59C2C;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r9,r9,25692
	ctx.r9.s64 = ctx.r9.s64 + 25692;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82E59C2C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c18
	// ERROR 82CA2C18
	return;
}

__attribute__((alias("__imp__sub_82E59C34"))) PPC_WEAK_FUNC(sub_82E59C34);
PPC_FUNC_IMPL(__imp__sub_82E59C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E59C38"))) PPC_WEAK_FUNC(sub_82E59C38);
PPC_FUNC_IMPL(__imp__sub_82E59C38) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82e59c6c
	if (!ctx.cr6.gt) goto loc_82E59C6C;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
loc_82E59C4C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82e59c74
	if (ctx.cr6.eq) goto loc_82E59C74;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82e59c4c
	if (ctx.cr6.lt) goto loc_82E59C4C;
loc_82E59C6C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82E59C74:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E59C7C"))) PPC_WEAK_FUNC(sub_82E59C7C);
PPC_FUNC_IMPL(__imp__sub_82E59C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E59C80"))) PPC_WEAK_FUNC(sub_82E59C80);
PPC_FUNC_IMPL(__imp__sub_82E59C80) {
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
	// bl 0x82e5f4e8
	ctx.lr = 0x82E59C98;
	sub_82E5F4E8(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,23856
	ctx.r11.s64 = ctx.r11.s64 + 23856;
	// addi r10,r10,29828
	ctx.r10.s64 = ctx.r10.s64 + 29828;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// addi r9,r9,31628
	ctx.r9.s64 = ctx.r9.s64 + 31628;
	// addi r8,r8,31596
	ctx.r8.s64 = ctx.r8.s64 + 31596;
	// addi r7,r7,31580
	ctx.r7.s64 = ctx.r7.s64 + 31580;
	// addi r6,r6,31556
	ctx.r6.s64 = ctx.r6.s64 + 31556;
	// addi r5,r5,31540
	ctx.r5.s64 = ctx.r5.s64 + 31540;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// stw r7,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r6.u32);
	// stw r5,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r5.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82E59D18"))) PPC_WEAK_FUNC(sub_82E59D18);
PPC_FUNC_IMPL(__imp__sub_82E59D18) {
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
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e59e10
	if (ctx.cr6.eq) goto loc_82E59E10;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82e59e10
	if (!ctx.cr6.gt) goto loc_82E59E10;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
loc_82E59D50:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,0(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82e59d74
	if (ctx.cr6.eq) goto loc_82E59D74;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82e59d50
	if (ctx.cr6.lt) goto loc_82E59D50;
	// b 0x82e59e10
	goto loc_82E59E10;
loc_82E59D74:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82e59e10
	if (ctx.cr6.lt) goto loc_82E59E10;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,-16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r30,r4,19
	ctx.r30.s64 = ctx.r4.s64 + 19;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,-19420(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19420);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r31,r8,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E59DB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82e59e10
	if (!ctx.cr6.gt) goto loc_82E59E10;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82E59DC8:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82e59de8
	if (ctx.cr6.eq) goto loc_82E59DE8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82e59dc8
	if (ctx.cr6.lt) goto loc_82E59DC8;
	// b 0x82e59e10
	goto loc_82E59E10;
loc_82E59DE8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82e59e10
	if (ctx.cr6.lt) goto loc_82E59E10;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
loc_82E59E10:
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

__attribute__((alias("__imp__sub_82E59E28"))) PPC_WEAK_FUNC(sub_82E59E28);
PPC_FUNC_IMPL(__imp__sub_82E59E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82E59E30;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// lwzx r29,r11,r10
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e59e98
	if (!ctx.cr6.gt) goto loc_82E59E98;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// lis r27,-31948
	ctx.r27.s64 = -2093744128;
loc_82E59E60:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,24(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// lwz r5,-19420(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + -19420);
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E59E84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e59e60
	if (ctx.cr6.lt) goto loc_82E59E60;
loc_82E59E98:
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r11,r11,2
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82e59ec8
	if (!ctx.cr6.lt) goto loc_82E59EC8;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bgt cr6,0x82e59ebc
	if (ctx.cr6.gt) goto loc_82E59EBC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_82E59EBC:
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d51270
	ctx.lr = 0x82E59EC8;
	sub_82D51270(ctx, base);
loc_82E59EC8:
	// stw r26,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82E59ED4"))) PPC_WEAK_FUNC(sub_82E59ED4);
PPC_FUNC_IMPL(__imp__sub_82E59ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E59ED8"))) PPC_WEAK_FUNC(sub_82E59ED8);
PPC_FUNC_IMPL(__imp__sub_82E59ED8) {
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
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,60
	ctx.r4.s64 = 60;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4ec28
	ctx.lr = 0x82E59F04;
	sub_82D4EC28(ctx, base);
	// li r11,60
	ctx.r11.s64 = 60;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r11.u16);
	// bl 0x82e59c80
	ctx.lr = 0x82E59F14;
	sub_82E59C80(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bne cr6,0x82e59f24
	if (!ctx.cr6.eq) goto loc_82E59F24;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E59F24:
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

__attribute__((alias("__imp__sub_82E59F38"))) PPC_WEAK_FUNC(sub_82E59F38);
PPC_FUNC_IMPL(__imp__sub_82E59F38) {
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
	// lis r11,-32026
	ctx.r11.s64 = -2098855936;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r5,r11,-24872
	ctx.r5.s64 = ctx.r11.s64 + -24872;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r4,r10,31496
	ctx.r4.s64 = ctx.r10.s64 + 31496;
	// lwz r3,-20840(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20840);
	// bl 0x82e32408
	ctx.lr = 0x82E59F60;
	sub_82E32408(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,-19420(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19420, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E59F78"))) PPC_WEAK_FUNC(sub_82E59F78);
PPC_FUNC_IMPL(__imp__sub_82E59F78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd0
	ctx.lr = 0x82E59F80;
	sub_82CA2BD0(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// addi r4,r23,40
	ctx.r4.s64 = ctx.r23.s64 + 40;
	// bne cr6,0x82e59fa0
	if (!ctx.cr6.eq) goto loc_82E59FA0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_82E59FA0:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d73d40
	ctx.lr = 0x82E59FA8;
	sub_82D73D40(ctx, base);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// addi r4,r23,44
	ctx.r4.s64 = ctx.r23.s64 + 44;
	// bne cr6,0x82e59fb8
	if (!ctx.cr6.eq) goto loc_82E59FB8;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_82E59FB8:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d73f00
	ctx.lr = 0x82E59FC0;
	sub_82D73F00(ctx, base);
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r3,72(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e59ff0
	if (ctx.cr6.eq) goto loc_82E59FF0;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// b 0x82e59ffc
	goto loc_82E59FFC;
loc_82E59FF0:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82d4ea30
	ctx.lr = 0x82E59FFC;
	sub_82D4EA30(ctx, base);
loc_82E59FFC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e5a01c
	if (ctx.cr6.eq) goto loc_82E5A01C;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// stw r24,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r24.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r24,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r24.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// b 0x82e5a020
	goto loc_82E5A020;
loc_82E5A01C:
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_82E5A020:
	// addi r31,r23,48
	ctx.r31.s64 = ctx.r23.s64 + 48;
	// stw r22,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r22.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r11,r11,2
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82e5a048
	if (!ctx.cr6.eq) goto loc_82E5A048;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d512f8
	ctx.lr = 0x82E5A048;
	sub_82D512F8(ctx, base);
loc_82E5A048:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r27,r22,40
	ctx.r27.s64 = ctx.r22.s64 + 40;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e5a0e4
	if (!ctx.cr6.gt) goto loc_82E5A0E4;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
loc_82E5A07C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// lwzx r11,r11,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// addi r29,r11,76
	ctx.r29.s64 = ctx.r11.s64 + 76;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e5a0d0
	if (!ctx.cr6.gt) goto loc_82E5A0D0;
	// addi r28,r23,40
	ctx.r28.s64 = ctx.r23.s64 + 40;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_82E5A0A0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r4,r10,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E5A0BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e5a0a0
	if (ctx.cr6.lt) goto loc_82E5A0A0;
loc_82E5A0D0:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e5a07c
	if (ctx.cr6.lt) goto loc_82E5A07C;
loc_82E5A0E4:
	// addi r26,r22,52
	ctx.r26.s64 = ctx.r22.s64 + 52;
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e5a164
	if (!ctx.cr6.gt) goto loc_82E5A164;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
loc_82E5A0FC:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// lwzx r11,r27,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// addi r29,r11,76
	ctx.r29.s64 = ctx.r11.s64 + 76;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e5a150
	if (!ctx.cr6.gt) goto loc_82E5A150;
	// addi r28,r23,40
	ctx.r28.s64 = ctx.r23.s64 + 40;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_82E5A120:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r4,r31,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E5A13C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e5a120
	if (ctx.cr6.lt) goto loc_82E5A120;
loc_82E5A150:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e5a0fc
	if (ctx.cr6.lt) goto loc_82E5A0FC;
loc_82E5A164:
	// lwz r11,32(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e5a1bc
	if (ctx.cr6.eq) goto loc_82E5A1BC;
	// addi r28,r11,76
	ctx.r28.s64 = ctx.r11.s64 + 76;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e5a1bc
	if (!ctx.cr6.gt) goto loc_82E5A1BC;
	// addi r29,r23,40
	ctx.r29.s64 = ctx.r23.s64 + 40;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_82E5A18C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r4,r10,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E5A1A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e5a18c
	if (ctx.cr6.lt) goto loc_82E5A18C;
loc_82E5A1BC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c20
	// ERROR 82CA2C20
	return;
}

__attribute__((alias("__imp__sub_82E5A1C4"))) PPC_WEAK_FUNC(sub_82E5A1C4);
PPC_FUNC_IMPL(__imp__sub_82E5A1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E5A1C8"))) PPC_WEAK_FUNC(sub_82E5A1C8);
PPC_FUNC_IMPL(__imp__sub_82E5A1C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82E5A1D0;
	sub_82CA2BD4(ctx, base);
	// stwu r1,-720(r1)
	ea = -720 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e5a470
	if (ctx.cr6.eq) goto loc_82E5A470;
	// lwz r9,12(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r8,8(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82e5a470
	if (!ctx.cr6.gt) goto loc_82E5A470;
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
loc_82E5A204:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,0(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82e5a22c
	if (ctx.cr6.eq) goto loc_82E5A22C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82e5a204
	if (ctx.cr6.lt) goto loc_82E5A204;
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
loc_82E5A22C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82e5a470
	if (ctx.cr6.lt) goto loc_82E5A470;
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwzx r24,r11,r10
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82e61b70
	ctx.lr = 0x82E5A258;
	sub_82E61B70(ctx, base);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e61b80
	ctx.lr = 0x82E5A264;
	sub_82E61B80(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,16(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// bl 0x82e62f48
	ctx.lr = 0x82E5A274;
	sub_82E62F48(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r27,r11,-1
	ctx.r27.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt cr6,0x82e5a334
	if (ctx.cr6.lt) goto loc_82E5A334;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// rlwinm r31,r27,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r11,31640
	ctx.r30.s64 = ctx.r11.s64 + 31640;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// addi r29,r11,30144
	ctx.r29.s64 = ctx.r11.s64 + 30144;
loc_82E5A29C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x82e5a324
	if (!ctx.cr6.eq) goto loc_82E5A324;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e5a324
	if (!ctx.cr6.eq) goto loc_82E5A324;
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d51440
	ctx.lr = 0x82E5A2CC;
	sub_82D51440(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d53c70
	ctx.lr = 0x82E5A2D8;
	sub_82D53C70(ctx, base);
	// lwz r3,29792(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 29792);
	// li r8,166
	ctx.r8.s64 = 166;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E5A300;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d542b0
	ctx.lr = 0x82E5A308;
	sub_82D542B0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stwx r10,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
loc_82E5A324:
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bge cr6,0x82e5a29c
	if (!ctx.cr6.lt) goto loc_82E5A29C;
loc_82E5A334:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,14712
	ctx.r11.s64 = ctx.r11.s64 + 14712;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// ble cr6,0x82e5a3f8
	if (!ctx.cr6.gt) goto loc_82E5A3F8;
	// addi r31,r24,4
	ctx.r31.s64 = ctx.r24.s64 + 4;
	// addi r30,r25,19
	ctx.r30.s64 = ctx.r25.s64 + 19;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r11,r11,2
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82e5a374
	if (!ctx.cr6.eq) goto loc_82E5A374;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d512f8
	ctx.lr = 0x82E5A374;
	sub_82D512F8(ctx, base);
loc_82E5A374:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r25,224
	ctx.r5.s64 = ctx.r25.s64 + 224;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stwx r30,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lis r31,-31948
	ctx.r31.s64 = -2093744128;
	// lwz r3,-16(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -16);
	// lwz r7,-19420(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19420);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E5A3BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,216(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 216);
	// lwz r3,-16(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -16);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r6,-19420(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19420);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x82e5a3e0
	if (!ctx.cr6.eq) goto loc_82E5A3E0;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r4,-19412(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19412);
	// b 0x82e5a3e8
	goto loc_82E5A3E8;
loc_82E5A3E0:
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r4,-19416(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19416);
loc_82E5A3E8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E5A3F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E5A3F8:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e5a444
	if (!ctx.cr6.gt) goto loc_82E5A444;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_82E5A40C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e5a430
	if (ctx.cr6.eq) goto loc_82E5A430;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E5A430;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E5A430:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e5a40c
	if (ctx.cr6.lt) goto loc_82E5A40C;
loc_82E5A444:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82e5a470
	if (!ctx.cr6.eq) goto loc_82E5A470;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82E5A470;
	sub_82D4ECA8(ctx, base);
loc_82E5A470:
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_82E5A478"))) PPC_WEAK_FUNC(sub_82E5A478);
PPC_FUNC_IMPL(__imp__sub_82E5A478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82E5A480;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e5a4d4
	if (ctx.cr6.eq) goto loc_82E5A4D4;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82e5a4d4
	if (!ctx.cr6.gt) goto loc_82E5A4D4;
	// addi r28,r29,-8
	ctx.r28.s64 = ctx.r29.s64 + -8;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82E5A4AC:
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82e59f78
	ctx.lr = 0x82E5A4BC;
	sub_82E59F78(ctx, base);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82e5a4ac
	if (ctx.cr6.lt) goto loc_82E5A4AC;
loc_82E5A4D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82E5A4DC"))) PPC_WEAK_FUNC(sub_82E5A4DC);
PPC_FUNC_IMPL(__imp__sub_82E5A4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E5A4E0"))) PPC_WEAK_FUNC(sub_82E5A4E0);
PPC_FUNC_IMPL(__imp__sub_82E5A4E0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x82e59f78
	sub_82E59F78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E5A4E8"))) PPC_WEAK_FUNC(sub_82E5A4E8);
PPC_FUNC_IMPL(__imp__sub_82E5A4E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82E5A4F0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r4,r31,40
	ctx.r4.s64 = ctx.r31.s64 + 40;
	// bne cr6,0x82e5a50c
	if (!ctx.cr6.eq) goto loc_82E5A50C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82E5A50C:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82d72840
	ctx.lr = 0x82E5A520;
	sub_82D72840(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r4,r31,44
	ctx.r4.s64 = ctx.r31.s64 + 44;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82d72960
	ctx.lr = 0x82E5A534;
	sub_82D72960(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e59e28
	ctx.lr = 0x82E5A540;
	sub_82E59E28(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e5a558
	if (ctx.cr6.eq) goto loc_82E5A558;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82e57108
	ctx.lr = 0x82E5A558;
	sub_82E57108(ctx, base);
loc_82E5A558:
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82E5A57C"))) PPC_WEAK_FUNC(sub_82E5A57C);
PPC_FUNC_IMPL(__imp__sub_82E5A57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E5A580"))) PPC_WEAK_FUNC(sub_82E5A580);
PPC_FUNC_IMPL(__imp__sub_82E5A580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82E5A588;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r10,r10,31628
	ctx.r10.s64 = ctx.r10.s64 + 31628;
	// addi r9,r9,31596
	ctx.r9.s64 = ctx.r9.s64 + 31596;
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r8,r8,31556
	ctx.r8.s64 = ctx.r8.s64 + 31556;
	// addi r11,r11,31580
	ctx.r11.s64 = ctx.r11.s64 + 31580;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r7,r7,31540
	ctx.r7.s64 = ctx.r7.s64 + 31540;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r28,r31,40
	ctx.r28.s64 = ctx.r31.s64 + 40;
	// addi r27,r31,44
	ctx.r27.s64 = ctx.r31.s64 + 44;
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r7,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r7.u32);
	// blt cr6,0x82e5a660
	if (ctx.cr6.lt) goto loc_82E5A660;
	// rlwinm r29,r30,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_82E5A5E8:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82d72840
	ctx.lr = 0x82E5A5FC;
	sub_82D72840(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82d72960
	ctx.lr = 0x82E5A610;
	sub_82D72960(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e59e28
	ctx.lr = 0x82E5A61C;
	sub_82E59E28(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e5a634
	if (ctx.cr6.eq) goto loc_82E5A634;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82e57108
	ctx.lr = 0x82E5A634;
	sub_82E57108(ctx, base);
loc_82E5A634:
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stwx r10,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r10.u32);
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
	// bge cr6,0x82e5a5e8
	if (!ctx.cr6.lt) goto loc_82E5A5E8;
loc_82E5A660:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82e5a68c
	if (!ctx.cr6.eq) goto loc_82E5A68C;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82E5A68C;
	sub_82D4ECA8(ctx, base);
loc_82E5A68C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,29828
	ctx.r11.s64 = ctx.r11.s64 + 29828;
	// addi r10,r10,23856
	ctx.r10.s64 = ctx.r10.s64 + 23856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// bl 0x82e5f410
	ctx.lr = 0x82E5A6AC;
	sub_82E5F410(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82E5A6B4"))) PPC_WEAK_FUNC(sub_82E5A6B4);
PPC_FUNC_IMPL(__imp__sub_82E5A6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E5A6B8"))) PPC_WEAK_FUNC(sub_82E5A6B8);
PPC_FUNC_IMPL(__imp__sub_82E5A6B8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
loc_82E5A6D0:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82e5a6f4
	if (ctx.cr6.eq) goto loc_82E5A6F4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82e5a6d0
	if (ctx.cr6.lt) goto loc_82E5A6D0;
	// blr 
	return;
loc_82E5A6F4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x82e5a4e8
	sub_82E5A4E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E5A704"))) PPC_WEAK_FUNC(sub_82E5A704);
PPC_FUNC_IMPL(__imp__sub_82E5A704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E5A708"))) PPC_WEAK_FUNC(sub_82E5A708);
PPC_FUNC_IMPL(__imp__sub_82E5A708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r3,-19420(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19420);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E5A714"))) PPC_WEAK_FUNC(sub_82E5A714);
PPC_FUNC_IMPL(__imp__sub_82E5A714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E5A718"))) PPC_WEAK_FUNC(sub_82E5A718);
PPC_FUNC_IMPL(__imp__sub_82E5A718) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-40
	ctx.r3.s64 = ctx.r3.s64 + -40;
	// b 0x82e5a738
	sub_82E5A738(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E5A720"))) PPC_WEAK_FUNC(sub_82E5A720);
PPC_FUNC_IMPL(__imp__sub_82E5A720) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-44
	ctx.r3.s64 = ctx.r3.s64 + -44;
	// b 0x82e5a738
	sub_82E5A738(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E5A728"))) PPC_WEAK_FUNC(sub_82E5A728);
PPC_FUNC_IMPL(__imp__sub_82E5A728) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x82e5a738
	sub_82E5A738(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E5A730"))) PPC_WEAK_FUNC(sub_82E5A730);
PPC_FUNC_IMPL(__imp__sub_82E5A730) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82e5a738
	sub_82E5A738(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E5A738"))) PPC_WEAK_FUNC(sub_82E5A738);
PPC_FUNC_IMPL(__imp__sub_82E5A738) {
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
	// bl 0x82e5a580
	ctx.lr = 0x82E5A758;
	sub_82E5A580(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e5a780
	if (ctx.cr6.eq) goto loc_82E5A780;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,52
	ctx.r6.s64 = 52;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82E5A780;
	sub_82D4ECA8(ctx, base);
loc_82E5A780:
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

__attribute__((alias("__imp__sub_82E5A79C"))) PPC_WEAK_FUNC(sub_82E5A79C);
PPC_FUNC_IMPL(__imp__sub_82E5A79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E5A7A0"))) PPC_WEAK_FUNC(sub_82E5A7A0);
PPC_FUNC_IMPL(__imp__sub_82E5A7A0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addic. r10,r11,-32
	ctx.xer.ca = ctx.r11.u32 > 31;
	ctx.r10.s64 = ctx.r11.s64 + -32;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bne 0x82e5a7b8
	if (!ctx.cr0.eq) goto loc_82E5A7B8;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82E5A7B8:
	// b 0x82d73f00
	sub_82D73F00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E5A7BC"))) PPC_WEAK_FUNC(sub_82E5A7BC);
PPC_FUNC_IMPL(__imp__sub_82E5A7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E5A7C0"))) PPC_WEAK_FUNC(sub_82E5A7C0);
PPC_FUNC_IMPL(__imp__sub_82E5A7C0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addic. r10,r11,-32
	ctx.xer.ca = ctx.r11.u32 > 31;
	ctx.r10.s64 = ctx.r11.s64 + -32;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bne 0x82e5a7d8
	if (!ctx.cr0.eq) goto loc_82E5A7D8;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82E5A7D8:
	// b 0x82d72960
	sub_82D72960(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E5A7DC"))) PPC_WEAK_FUNC(sub_82E5A7DC);
PPC_FUNC_IMPL(__imp__sub_82E5A7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E5A7E0"))) PPC_WEAK_FUNC(sub_82E5A7E0);
PPC_FUNC_IMPL(__imp__sub_82E5A7E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82E5A7E8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-3600(r1)
	ea = -3600 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,0(r13)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r27,8
	ctx.r27.s64 = 8;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwzx r10,r27,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r26.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82e5a830
	if (!ctx.cr6.lt) goto loc_82E5A830;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r9,r9,31700
	ctx.r9.s64 = ctx.r9.s64 + 31700;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82E5A830:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E5A844;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,102
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 102, ctx.xer);
	// bgt cr6,0x82e5ac7c
	if (ctx.cr6.gt) goto loc_82E5AC7C;
	// lis r12,-32026
	ctx.r12.s64 = -2098855936;
	// addi r12,r12,-22428
	ctx.r12.s64 = ctx.r12.s64 + -22428;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u64) {
	case 0:
		goto loc_82E5AA00;
	case 1:
		goto loc_82E5AA24;
	case 2:
		goto loc_82E5AA48;
	case 3:
		goto loc_82E5AAE8;
	case 4:
		goto loc_82E5AC7C;
	case 5:
		goto loc_82E5AC7C;
	case 6:
		goto loc_82E5AA7C;
	case 7:
		goto loc_82E5AB30;
	case 8:
		goto loc_82E5AAA0;
	case 9:
		goto loc_82E5AAC4;
	case 10:
		goto loc_82E5AC7C;
	case 11:
		goto loc_82E5AC7C;
	case 12:
		goto loc_82E5AB5C;
	case 13:
		goto loc_82E5AB94;
	case 14:
		goto loc_82E5AB0C;
	case 15:
		goto loc_82E5ABD8;
	case 16:
		goto loc_82E5AC7C;
	case 17:
		goto loc_82E5AC7C;
	case 18:
		goto loc_82E5AC20;
	case 19:
		goto loc_82E5AC54;
	case 20:
		goto loc_82E5AC7C;
	case 21:
		goto loc_82E5AC7C;
	case 22:
		goto loc_82E5AC7C;
	case 23:
		goto loc_82E5AC7C;
	case 24:
		goto loc_82E5AC7C;
	case 25:
		goto loc_82E5AC7C;
	case 26:
		goto loc_82E5AC7C;
	case 27:
		goto loc_82E5AC7C;
	case 28:
		goto loc_82E5AC7C;
	case 29:
		goto loc_82E5AC7C;
	case 30:
		goto loc_82E5AC7C;
	case 31:
		goto loc_82E5AC7C;
	case 32:
		goto loc_82E5AC7C;
	case 33:
		goto loc_82E5AC7C;
	case 34:
		goto loc_82E5AC7C;
	case 35:
		goto loc_82E5AC7C;
	case 36:
		goto loc_82E5AC7C;
	case 37:
		goto loc_82E5AC7C;
	case 38:
		goto loc_82E5AC7C;
	case 39:
		goto loc_82E5AC7C;
	case 40:
		goto loc_82E5AC7C;
	case 41:
		goto loc_82E5AC7C;
	case 42:
		goto loc_82E5AC7C;
	case 43:
		goto loc_82E5AC7C;
	case 44:
		goto loc_82E5AC7C;
	case 45:
		goto loc_82E5AC7C;
	case 46:
		goto loc_82E5AC7C;
	case 47:
		goto loc_82E5AC7C;
	case 48:
		goto loc_82E5AC7C;
	case 49:
		goto loc_82E5AC7C;
	case 50:
		goto loc_82E5AC7C;
	case 51:
		goto loc_82E5AC7C;
	case 52:
		goto loc_82E5AC7C;
	case 53:
		goto loc_82E5AC7C;
	case 54:
		goto loc_82E5AC7C;
	case 55:
		goto loc_82E5AC7C;
	case 56:
		goto loc_82E5AC7C;
	case 57:
		goto loc_82E5AC7C;
	case 58:
		goto loc_82E5AC7C;
	case 59:
		goto loc_82E5AC7C;
	case 60:
		goto loc_82E5AC7C;
	case 61:
		goto loc_82E5AC7C;
	case 62:
		goto loc_82E5AC7C;
	case 63:
		goto loc_82E5AC7C;
	case 64:
		goto loc_82E5AC7C;
	case 65:
		goto loc_82E5AC7C;
	case 66:
		goto loc_82E5AC7C;
	case 67:
		goto loc_82E5AC7C;
	case 68:
		goto loc_82E5AC7C;
	case 69:
		goto loc_82E5AC7C;
	case 70:
		goto loc_82E5AC7C;
	case 71:
		goto loc_82E5AC7C;
	case 72:
		goto loc_82E5AC7C;
	case 73:
		goto loc_82E5AC7C;
	case 74:
		goto loc_82E5AC7C;
	case 75:
		goto loc_82E5AC7C;
	case 76:
		goto loc_82E5AC7C;
	case 77:
		goto loc_82E5AC7C;
	case 78:
		goto loc_82E5AC7C;
	case 79:
		goto loc_82E5AC7C;
	case 80:
		goto loc_82E5AC7C;
	case 81:
		goto loc_82E5AC7C;
	case 82:
		goto loc_82E5AC7C;
	case 83:
		goto loc_82E5AC7C;
	case 84:
		goto loc_82E5AC7C;
	case 85:
		goto loc_82E5AC7C;
	case 86:
		goto loc_82E5AC7C;
	case 87:
		goto loc_82E5AC7C;
	case 88:
		goto loc_82E5AC7C;
	case 89:
		goto loc_82E5AC7C;
	case 90:
		goto loc_82E5AC7C;
	case 91:
		goto loc_82E5AC7C;
	case 92:
		goto loc_82E5AC7C;
	case 93:
		goto loc_82E5AC7C;
	case 94:
		goto loc_82E5AC7C;
	case 95:
		goto loc_82E5AC7C;
	case 96:
		goto loc_82E5AC7C;
	case 97:
		goto loc_82E5AC7C;
	case 98:
		goto loc_82E5AC7C;
	case 99:
		goto loc_82E5AC7C;
	case 100:
		goto loc_82E5ABFC;
	case 101:
		goto loc_82E5ABFC;
	case 102:
		goto loc_82E5ABFC;
	default:
		__builtin_unreachable();
	}
	// lwz r23,-22016(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -22016);
	// lwz r23,-21980(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21980);
	// lwz r23,-21944(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21944);
	// lwz r23,-21784(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21784);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21892(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21892);
	// lwz r23,-21712(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21712);
	// lwz r23,-21856(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21856);
	// lwz r23,-21820(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21820);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21668(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21668);
	// lwz r23,-21612(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21612);
	// lwz r23,-21748(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21748);
	// lwz r23,-21544(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21544);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21472(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21472);
	// lwz r23,-21420(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21420);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21380(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21380);
	// lwz r23,-21508(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21508);
	// lwz r23,-21508(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21508);
	// lwz r23,-21508(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + -21508);
loc_82E5AA00:
	// addi r3,r1,1696
	ctx.r3.s64 = ctx.r1.s64 + 1696;
	// bl 0x82e62fc8
	ctx.lr = 0x82E5AA08;
	sub_82E62FC8(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,1696
	ctx.r3.s64 = ctx.r1.s64 + 1696;
	// lwz r6,-19408(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19408);
	// bl 0x82e65748
	ctx.lr = 0x82E5AA20;
	sub_82E65748(ctx, base);
	// b 0x82e5ac7c
	goto loc_82E5AC7C;
loc_82E5AA24:
	// addi r3,r1,1904
	ctx.r3.s64 = ctx.r1.s64 + 1904;
	// bl 0x82e62fc8
	ctx.lr = 0x82E5AA2C;
	sub_82E62FC8(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,1904
	ctx.r3.s64 = ctx.r1.s64 + 1904;
	// lwz r6,-19408(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19408);
	// bl 0x82e655f0
	ctx.lr = 0x82E5AA44;
	sub_82E655F0(ctx, base);
	// b 0x82e5ac7c
	goto loc_82E5AC7C;
loc_82E5AA48:
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x82e62fc8
	ctx.lr = 0x82E5AA50;
	sub_82E62FC8(ctx, base);
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bl 0x82e371d0
	ctx.lr = 0x82E5AA58;
	sub_82E371D0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// lwz r6,-19408(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19408);
	// bl 0x82e652a0
	ctx.lr = 0x82E5AA70;
	sub_82E652A0(ctx, base);
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bl 0x82e3fa60
	ctx.lr = 0x82E5AA78;
	sub_82E3FA60(ctx, base);
	// b 0x82e5ac7c
	goto loc_82E5AC7C;
loc_82E5AA7C:
	// addi r3,r1,2320
	ctx.r3.s64 = ctx.r1.s64 + 2320;
	// bl 0x82e62fc8
	ctx.lr = 0x82E5AA84;
	sub_82E62FC8(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,2320
	ctx.r3.s64 = ctx.r1.s64 + 2320;
	// lwz r6,-19408(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19408);
	// bl 0x82e64fb8
	ctx.lr = 0x82E5AA9C;
	sub_82E64FB8(ctx, base);
	// b 0x82e5ac7c
	goto loc_82E5AC7C;
loc_82E5AAA0:
	// addi r3,r1,1280
	ctx.r3.s64 = ctx.r1.s64 + 1280;
	// bl 0x82e62fc8
	ctx.lr = 0x82E5AAA8;
	sub_82E62FC8(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,1280
	ctx.r3.s64 = ctx.r1.s64 + 1280;
	// lwz r6,-19408(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19408);
	// bl 0x82e64e68
	ctx.lr = 0x82E5AAC0;
	sub_82E64E68(ctx, base);
	// b 0x82e5ac7c
	goto loc_82E5AC7C;
loc_82E5AAC4:
	// addi r3,r1,2112
	ctx.r3.s64 = ctx.r1.s64 + 2112;
	// bl 0x82e62fc8
	ctx.lr = 0x82E5AACC;
	sub_82E62FC8(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,2112
	ctx.r3.s64 = ctx.r1.s64 + 2112;
	// lwz r6,-19408(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19408);
	// bl 0x82e64ab8
	ctx.lr = 0x82E5AAE4;
	sub_82E64AB8(ctx, base);
	// b 0x82e5ac7c
	goto loc_82E5AC7C;
loc_82E5AAE8:
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// bl 0x82e62fc8
	ctx.lr = 0x82E5AAF0;
	sub_82E62FC8(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// lwz r6,-19408(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19408);
	// bl 0x82e648e0
	ctx.lr = 0x82E5AB08;
	sub_82E648E0(ctx, base);
	// b 0x82e5ac7c
	goto loc_82E5AC7C;
loc_82E5AB0C:
	// addi r3,r1,2528
	ctx.r3.s64 = ctx.r1.s64 + 2528;
	// bl 0x82e62fc8
	ctx.lr = 0x82E5AB14;
	sub_82E62FC8(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,2528
	ctx.r3.s64 = ctx.r1.s64 + 2528;
	// lwz r6,-19408(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19408);
	// bl 0x82e644e0
	ctx.lr = 0x82E5AB2C;
	sub_82E644E0(ctx, base);
	// b 0x82e5ac7c
	goto loc_82E5AC7C;
loc_82E5AB30:
	// addi r3,r1,2736
	ctx.r3.s64 = ctx.r1.s64 + 2736;
	// bl 0x82e5b128
	ctx.lr = 0x82E5AB38;
	sub_82E5B128(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,2736
	ctx.r3.s64 = ctx.r1.s64 + 2736;
	// lwz r6,-19408(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19408);
	// bl 0x82e63fd0
	ctx.lr = 0x82E5AB50;
	sub_82E63FD0(ctx, base);
	// addi r3,r1,2736
	ctx.r3.s64 = ctx.r1.s64 + 2736;
	// bl 0x82e5b0e0
	ctx.lr = 0x82E5AB58;
	sub_82E5B0E0(ctx, base);
	// b 0x82e5ac7c
	goto loc_82E5AC7C;
loc_82E5AB5C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r6,24(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x82d80d60
	ctx.lr = 0x82E5AB78;
	sub_82D80D60(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e5a7e0
	ctx.lr = 0x82E5AB88;
	sub_82E5A7E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d80cb8
	ctx.lr = 0x82E5AB90;
	sub_82D80CB8(ctx, base);
	// b 0x82e5ac7c
	goto loc_82E5AC7C;
loc_82E5AB94:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r29,24(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r31,20(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82d9e458
	ctx.lr = 0x82E5ABA4;
	sub_82D9E458(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82d80d60
	ctx.lr = 0x82E5ABBC;
	sub_82D80D60(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e5a7e0
	ctx.lr = 0x82E5ABCC;
	sub_82E5A7E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d80cb8
	ctx.lr = 0x82E5ABD4;
	sub_82D80CB8(ctx, base);
	// b 0x82e5ac7c
	goto loc_82E5AC7C;
loc_82E5ABD8:
	// addi r3,r1,1072
	ctx.r3.s64 = ctx.r1.s64 + 1072;
	// bl 0x82e62fc8
	ctx.lr = 0x82E5ABE0;
	sub_82E62FC8(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,1072
	ctx.r3.s64 = ctx.r1.s64 + 1072;
	// lwz r6,-19408(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19408);
	// bl 0x82e63da8
	ctx.lr = 0x82E5ABF8;
	sub_82E63DA8(ctx, base);
	// b 0x82e5ac7c
	goto loc_82E5AC7C;
loc_82E5ABFC:
	// addi r3,r1,1488
	ctx.r3.s64 = ctx.r1.s64 + 1488;
	// bl 0x82e62fc8
	ctx.lr = 0x82E5AC04;
	sub_82E62FC8(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,1488
	ctx.r3.s64 = ctx.r1.s64 + 1488;
	// lwz r6,-19408(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19408);
	// bl 0x82e63b68
	ctx.lr = 0x82E5AC1C;
	sub_82E63B68(ctx, base);
	// b 0x82e5ac7c
	goto loc_82E5AC7C;
loc_82E5AC20:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82e62fc8
	ctx.lr = 0x82E5AC28;
	sub_82E62FC8(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82e371d0
	ctx.lr = 0x82E5AC30;
	sub_82E371D0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r6,-19408(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19408);
	// bl 0x82e63828
	ctx.lr = 0x82E5AC48;
	sub_82E63828(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82e3fa60
	ctx.lr = 0x82E5AC50;
	sub_82E3FA60(ctx, base);
	// b 0x82e5ac7c
	goto loc_82E5AC7C;
loc_82E5AC54:
	// addi r3,r1,2736
	ctx.r3.s64 = ctx.r1.s64 + 2736;
	// bl 0x82e5b128
	ctx.lr = 0x82E5AC5C;
	sub_82E5B128(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,2736
	ctx.r3.s64 = ctx.r1.s64 + 2736;
	// lwz r6,-19408(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19408);
	// bl 0x82e63358
	ctx.lr = 0x82E5AC74;
	sub_82E63358(ctx, base);
	// addi r3,r1,2736
	ctx.r3.s64 = ctx.r1.s64 + 2736;
	// bl 0x82e5b0e0
	ctx.lr = 0x82E5AC7C;
	sub_82E5B0E0(ctx, base);
loc_82E5AC7C:
	// lwzx r10,r27,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r26.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82e5acac
	if (!ctx.cr6.lt) goto loc_82E5ACAC;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r9,r9,25692
	ctx.r9.s64 = ctx.r9.s64 + 25692;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82E5ACAC:
	// addi r1,r1,3600
	ctx.r1.s64 = ctx.r1.s64 + 3600;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82E5ACB4"))) PPC_WEAK_FUNC(sub_82E5ACB4);
PPC_FUNC_IMPL(__imp__sub_82E5ACB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E5ACB8"))) PPC_WEAK_FUNC(sub_82E5ACB8);
PPC_FUNC_IMPL(__imp__sub_82E5ACB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82E5ACC0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e5f4e8
	ctx.lr = 0x82E5ACCC;
	sub_82E5F4E8(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,29828
	ctx.r11.s64 = ctx.r11.s64 + 29828;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r10,r10,31776
	ctx.r10.s64 = ctx.r10.s64 + 31776;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// addi r9,r9,31744
	ctx.r9.s64 = ctx.r9.s64 + 31744;
	// addi r8,r8,31728
	ctx.r8.s64 = ctx.r8.s64 + 31728;
	// addi r7,r7,31712
	ctx.r7.s64 = ctx.r7.s64 + 31712;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r28,r31,40
	ctx.r28.s64 = ctx.r31.s64 + 40;
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// stw r7,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r7.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e5ad68
	if (ctx.cr6.eq) goto loc_82E5AD68;
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e5ad68
	if (!ctx.cr6.gt) goto loc_82E5AD68;
loc_82E5AD3C:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x82d73f00
	ctx.lr = 0x82E5AD50;
	sub_82D73F00(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e5ad3c
	if (ctx.cr6.lt) goto loc_82E5AD3C;
loc_82E5AD68:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82E5AD74"))) PPC_WEAK_FUNC(sub_82E5AD74);
PPC_FUNC_IMPL(__imp__sub_82E5AD74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E5AD78"))) PPC_WEAK_FUNC(sub_82E5AD78);
PPC_FUNC_IMPL(__imp__sub_82E5AD78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82E5AD80;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r10,r10,31776
	ctx.r10.s64 = ctx.r10.s64 + 31776;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r9,r9,31744
	ctx.r9.s64 = ctx.r9.s64 + 31744;
	// addi r8,r8,31728
	ctx.r8.s64 = ctx.r8.s64 + 31728;
	// addi r7,r7,31712
	ctx.r7.s64 = ctx.r7.s64 + 31712;
	// addi r28,r31,40
	ctx.r28.s64 = ctx.r31.s64 + 40;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// stw r7,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r7.u32);
	// beq cr6,0x82e5ae08
	if (ctx.cr6.eq) goto loc_82E5AE08;
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e5ae08
	if (!ctx.cr6.gt) goto loc_82E5AE08;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82E5ADDC:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x82d72960
	ctx.lr = 0x82E5ADF0;
	sub_82D72960(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e5addc
	if (ctx.cr6.lt) goto loc_82E5ADDC;
loc_82E5AE08:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82e5ae34
	if (!ctx.cr6.eq) goto loc_82E5AE34;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82E5AE34;
	sub_82D4ECA8(ctx, base);
loc_82E5AE34:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,29828
	ctx.r11.s64 = ctx.r11.s64 + 29828;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// bl 0x82e5f410
	ctx.lr = 0x82E5AE48;
	sub_82E5F410(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82E5AE50"))) PPC_WEAK_FUNC(sub_82E5AE50);
PPC_FUNC_IMPL(__imp__sub_82E5AE50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc4
	ctx.lr = 0x82E5AE58;
	sub_82CA2BC4(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r19,0(r13)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r20,8
	ctx.r20.s64 = 8;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// lwzx r10,r20,r19
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r19.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82e5ae9c
	if (!ctx.cr6.lt) goto loc_82E5AE9C;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r9,r9,31788
	ctx.r9.s64 = ctx.r9.s64 + 31788;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82E5AE9C:
	// addi r23,r21,40
	ctx.r23.s64 = ctx.r21.s64 + 40;
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e5af50
	if (!ctx.cr6.gt) goto loc_82E5AF50;
	// li r26,0
	ctx.r26.s64 = 0;
loc_82E5AEB4:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwzx r10,r26,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// lwz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82e5af3c
	if (!ctx.cr6.gt) goto loc_82E5AF3C;
	// li r27,0
	ctx.r27.s64 = 0;
loc_82E5AED0:
	// lwzx r11,r26,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// addi r29,r11,152
	ctx.r29.s64 = ctx.r11.s64 + 152;
	// lhz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e5af20
	if (ctx.cr6.eq) goto loc_82E5AF20;
	// addi r28,r24,-40
	ctx.r28.s64 = ctx.r24.s64 + -40;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82E5AEF8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,-16(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + -16);
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x82e5a7e0
	ctx.lr = 0x82E5AF0C;
	sub_82E5A7E0(ctx, base);
	// lhz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e5aef8
	if (ctx.cr6.lt) goto loc_82E5AEF8;
loc_82E5AF20:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// lwzx r10,r26,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// lwz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// cmpw cr6,r25,r10
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82e5aed0
	if (ctx.cr6.lt) goto loc_82E5AED0;
loc_82E5AF3C:
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e5aeb4
	if (ctx.cr6.lt) goto loc_82E5AEB4;
loc_82E5AF50:
	// addi r23,r21,52
	ctx.r23.s64 = ctx.r21.s64 + 52;
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e5b004
	if (!ctx.cr6.gt) goto loc_82E5B004;
	// li r26,0
	ctx.r26.s64 = 0;
loc_82E5AF68:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwzx r10,r26,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// lwz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82e5aff0
	if (!ctx.cr6.gt) goto loc_82E5AFF0;
	// li r27,0
	ctx.r27.s64 = 0;
loc_82E5AF84:
	// lwzx r11,r26,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// addi r29,r11,152
	ctx.r29.s64 = ctx.r11.s64 + 152;
	// lhz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e5afd4
	if (ctx.cr6.eq) goto loc_82E5AFD4;
	// addi r28,r24,-40
	ctx.r28.s64 = ctx.r24.s64 + -40;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82E5AFAC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,-16(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + -16);
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x82e5a7e0
	ctx.lr = 0x82E5AFC0;
	sub_82E5A7E0(ctx, base);
	// lhz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e5afac
	if (ctx.cr6.lt) goto loc_82E5AFAC;
loc_82E5AFD4:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// lwzx r10,r26,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// lwz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// cmpw cr6,r25,r10
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82e5af84
	if (ctx.cr6.lt) goto loc_82E5AF84;
loc_82E5AFF0:
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e5af68
	if (ctx.cr6.lt) goto loc_82E5AF68;
loc_82E5B004:
	// lwzx r10,r20,r19
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r19.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82e5b034
	if (!ctx.cr6.lt) goto loc_82E5B034;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r9,r9,25692
	ctx.r9.s64 = ctx.r9.s64 + 25692;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82E5B034:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c14
	// ERROR 82CA2C14
	return;
}

__attribute__((alias("__imp__sub_82E5B03C"))) PPC_WEAK_FUNC(sub_82E5B03C);
PPC_FUNC_IMPL(__imp__sub_82E5B03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E5B040"))) PPC_WEAK_FUNC(sub_82E5B040);
PPC_FUNC_IMPL(__imp__sub_82E5B040) {
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
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,56
	ctx.r4.s64 = 56;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4ec28
	ctx.lr = 0x82E5B06C;
	sub_82D4EC28(ctx, base);
	// li r11,56
	ctx.r11.s64 = 56;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r11.u16);
	// bl 0x82e5acb8
	ctx.lr = 0x82E5B07C;
	sub_82E5ACB8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bne cr6,0x82e5b08c
	if (!ctx.cr6.eq) goto loc_82E5B08C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E5B08C:
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

__attribute__((alias("__imp__sub_82E5B0A0"))) PPC_WEAK_FUNC(sub_82E5B0A0);
PPC_FUNC_IMPL(__imp__sub_82E5B0A0) {
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
	// lis r11,-32026
	ctx.r11.s64 = -2098855936;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r5,r11,-20416
	ctx.r5.s64 = ctx.r11.s64 + -20416;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r4,r10,-6472
	ctx.r4.s64 = ctx.r10.s64 + -6472;
	// lwz r3,-20840(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20840);
	// bl 0x82e32408
	ctx.lr = 0x82E5B0C8;
	sub_82E32408(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,-19408(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19408, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E5B0E0"))) PPC_WEAK_FUNC(sub_82E5B0E0);
PPC_FUNC_IMPL(__imp__sub_82E5B0E0) {
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
	// addi r3,r31,640
	ctx.r3.s64 = ctx.r31.s64 + 640;
	// bl 0x82e3fa60
	ctx.lr = 0x82E5B0FC;
	sub_82E3FA60(ctx, base);
	// addi r3,r31,496
	ctx.r3.s64 = ctx.r31.s64 + 496;
	// bl 0x82e3fa60
	ctx.lr = 0x82E5B104;
	sub_82E3FA60(ctx, base);
	// addi r3,r31,352
	ctx.r3.s64 = ctx.r31.s64 + 352;
	// bl 0x82e3fa60
	ctx.lr = 0x82E5B10C;
	sub_82E3FA60(ctx, base);
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// bl 0x82e3fa60
	ctx.lr = 0x82E5B114;
	sub_82E3FA60(ctx, base);
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

__attribute__((alias("__imp__sub_82E5B128"))) PPC_WEAK_FUNC(sub_82E5B128);
PPC_FUNC_IMPL(__imp__sub_82E5B128) {
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
	// bl 0x82e62fc8
	ctx.lr = 0x82E5B140;
	sub_82E62FC8(ctx, base);
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// bl 0x82e377b8
	ctx.lr = 0x82E5B148;
	sub_82E377B8(ctx, base);
	// addi r3,r31,352
	ctx.r3.s64 = ctx.r31.s64 + 352;
	// bl 0x82e377b8
	ctx.lr = 0x82E5B150;
	sub_82E377B8(ctx, base);
	// addi r3,r31,496
	ctx.r3.s64 = ctx.r31.s64 + 496;
	// bl 0x82e377b8
	ctx.lr = 0x82E5B158;
	sub_82E377B8(ctx, base);
	// addi r3,r31,640
	ctx.r3.s64 = ctx.r31.s64 + 640;
	// bl 0x82e36bd0
	ctx.lr = 0x82E5B160;
	sub_82E36BD0(ctx, base);
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

__attribute__((alias("__imp__sub_82E5B178"))) PPC_WEAK_FUNC(sub_82E5B178);
PPC_FUNC_IMPL(__imp__sub_82E5B178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r3,-19408(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19408);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E5B184"))) PPC_WEAK_FUNC(sub_82E5B184);
PPC_FUNC_IMPL(__imp__sub_82E5B184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E5B188"))) PPC_WEAK_FUNC(sub_82E5B188);
PPC_FUNC_IMPL(__imp__sub_82E5B188) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82e5b1a0
	sub_82E5B1A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E5B190"))) PPC_WEAK_FUNC(sub_82E5B190);
PPC_FUNC_IMPL(__imp__sub_82E5B190) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-40
	ctx.r3.s64 = ctx.r3.s64 + -40;
	// b 0x82e5b1a0
	sub_82E5B1A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E5B198"))) PPC_WEAK_FUNC(sub_82E5B198);
PPC_FUNC_IMPL(__imp__sub_82E5B198) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x82e5b1a0
	sub_82E5B1A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E5B1A0"))) PPC_WEAK_FUNC(sub_82E5B1A0);
PPC_FUNC_IMPL(__imp__sub_82E5B1A0) {
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
	// bl 0x82e5ad78
	ctx.lr = 0x82E5B1C0;
	sub_82E5AD78(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e5b1e8
	if (ctx.cr6.eq) goto loc_82E5B1E8;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,16
	ctx.r6.s64 = 16;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82E5B1E8;
	sub_82D4ECA8(ctx, base);
loc_82E5B1E8:
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

__attribute__((alias("__imp__sub_82E5B204"))) PPC_WEAK_FUNC(sub_82E5B204);
PPC_FUNC_IMPL(__imp__sub_82E5B204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E5B208"))) PPC_WEAK_FUNC(sub_82E5B208);
PPC_FUNC_IMPL(__imp__sub_82E5B208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82E5B210;
	sub_82CA2BD4(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// addi r4,r24,40
	ctx.r4.s64 = ctx.r24.s64 + 40;
	// bne cr6,0x82e5b22c
	if (!ctx.cr6.eq) goto loc_82E5B22C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82E5B22C:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d72840
	ctx.lr = 0x82E5B234;
	sub_82D72840(ctx, base);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// addi r4,r24,44
	ctx.r4.s64 = ctx.r24.s64 + 44;
	// bne cr6,0x82e5b244
	if (!ctx.cr6.eq) goto loc_82E5B244;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82E5B244:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d72960
	ctx.lr = 0x82E5B24C;
	sub_82D72960(ctx, base);
	// addi r26,r23,40
	ctx.r26.s64 = ctx.r23.s64 + 40;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e5b2cc
	if (!ctx.cr6.gt) goto loc_82E5B2CC;
	// li r27,0
	ctx.r27.s64 = 0;
loc_82E5B264:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// addi r29,r11,76
	ctx.r29.s64 = ctx.r11.s64 + 76;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e5b2b8
	if (!ctx.cr6.gt) goto loc_82E5B2B8;
	// addi r28,r24,40
	ctx.r28.s64 = ctx.r24.s64 + 40;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82E5B288:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r4,r10,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E5B2A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e5b288
	if (ctx.cr6.lt) goto loc_82E5B288;
loc_82E5B2B8:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e5b264
	if (ctx.cr6.lt) goto loc_82E5B264;
loc_82E5B2CC:
	// addi r26,r23,52
	ctx.r26.s64 = ctx.r23.s64 + 52;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e5b34c
	if (!ctx.cr6.gt) goto loc_82E5B34C;
	// li r27,0
	ctx.r27.s64 = 0;
loc_82E5B2E4:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// addi r29,r11,76
	ctx.r29.s64 = ctx.r11.s64 + 76;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e5b338
	if (!ctx.cr6.gt) goto loc_82E5B338;
	// addi r28,r24,40
	ctx.r28.s64 = ctx.r24.s64 + 40;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82E5B308:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r4,r31,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E5B324;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e5b308
	if (ctx.cr6.lt) goto loc_82E5B308;
loc_82E5B338:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e5b2e4
	if (ctx.cr6.lt) goto loc_82E5B2E4;
loc_82E5B34C:
	// lwz r11,32(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e5b3a4
	if (ctx.cr6.eq) goto loc_82E5B3A4;
	// addi r28,r11,76
	ctx.r28.s64 = ctx.r11.s64 + 76;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e5b3a4
	if (!ctx.cr6.gt) goto loc_82E5B3A4;
	// addi r29,r24,40
	ctx.r29.s64 = ctx.r24.s64 + 40;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82E5B374:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r4,r31,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E5B390;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e5b374
	if (ctx.cr6.lt) goto loc_82E5B374;
loc_82E5B3A4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_82E5B3AC"))) PPC_WEAK_FUNC(sub_82E5B3AC);
PPC_FUNC_IMPL(__imp__sub_82E5B3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E5B3B0"))) PPC_WEAK_FUNC(sub_82E5B3B0);
PPC_FUNC_IMPL(__imp__sub_82E5B3B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82E5B3B8;
	sub_82CA2BD4(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// addi r4,r24,40
	ctx.r4.s64 = ctx.r24.s64 + 40;
	// bne cr6,0x82e5b3d4
	if (!ctx.cr6.eq) goto loc_82E5B3D4;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82E5B3D4:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d73d40
	ctx.lr = 0x82E5B3DC;
	sub_82D73D40(ctx, base);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// addi r4,r24,44
	ctx.r4.s64 = ctx.r24.s64 + 44;
	// bne cr6,0x82e5b3ec
	if (!ctx.cr6.eq) goto loc_82E5B3EC;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82E5B3EC:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d73f00
	ctx.lr = 0x82E5B3F4;
	sub_82D73F00(ctx, base);
	// addi r26,r23,40
	ctx.r26.s64 = ctx.r23.s64 + 40;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e5b474
	if (!ctx.cr6.gt) goto loc_82E5B474;
	// li r27,0
	ctx.r27.s64 = 0;
loc_82E5B40C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// addi r29,r11,76
	ctx.r29.s64 = ctx.r11.s64 + 76;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e5b460
	if (!ctx.cr6.gt) goto loc_82E5B460;
	// addi r28,r24,40
	ctx.r28.s64 = ctx.r24.s64 + 40;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82E5B430:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r4,r10,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E5B44C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e5b430
	if (ctx.cr6.lt) goto loc_82E5B430;
loc_82E5B460:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e5b40c
	if (ctx.cr6.lt) goto loc_82E5B40C;
loc_82E5B474:
	// addi r26,r23,52
	ctx.r26.s64 = ctx.r23.s64 + 52;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e5b4f4
	if (!ctx.cr6.gt) goto loc_82E5B4F4;
	// li r27,0
	ctx.r27.s64 = 0;
loc_82E5B48C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// addi r29,r11,76
	ctx.r29.s64 = ctx.r11.s64 + 76;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e5b4e0
	if (!ctx.cr6.gt) goto loc_82E5B4E0;
	// addi r28,r24,40
	ctx.r28.s64 = ctx.r24.s64 + 40;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82E5B4B0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r4,r31,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E5B4CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e5b4b0
	if (ctx.cr6.lt) goto loc_82E5B4B0;
loc_82E5B4E0:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e5b48c
	if (ctx.cr6.lt) goto loc_82E5B48C;
loc_82E5B4F4:
	// lwz r11,32(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e5b54c
	if (ctx.cr6.eq) goto loc_82E5B54C;
	// addi r28,r11,76
	ctx.r28.s64 = ctx.r11.s64 + 76;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e5b54c
	if (!ctx.cr6.gt) goto loc_82E5B54C;
	// addi r29,r24,40
	ctx.r29.s64 = ctx.r24.s64 + 40;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82E5B51C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r4,r31,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E5B538;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e5b51c
	if (ctx.cr6.lt) goto loc_82E5B51C;
loc_82E5B54C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_82E5B554"))) PPC_WEAK_FUNC(sub_82E5B554);
PPC_FUNC_IMPL(__imp__sub_82E5B554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E5B558"))) PPC_WEAK_FUNC(sub_82E5B558);
PPC_FUNC_IMPL(__imp__sub_82E5B558) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
loc_82E5B56C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82e5b58c
	if (ctx.cr6.eq) goto loc_82E5B58C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82e5b56c
	if (ctx.cr6.lt) goto loc_82E5B56C;
	// blr 
	return;
loc_82E5B58C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E5B5B8"))) PPC_WEAK_FUNC(sub_82E5B5B8);
PPC_FUNC_IMPL(__imp__sub_82E5B5B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc4
	ctx.lr = 0x82E5B5C0;
	sub_82CA2BC4(ctx, base);
	// stfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,0(r13)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r29,8
	ctx.r29.s64 = 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r10,r29,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82e5b604
	if (!ctx.cr6.lt) goto loc_82E5B604;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r9,r9,31864
	ctx.r9.s64 = ctx.r9.s64 + 31864;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82E5B604:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r20,0
	ctx.r20.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r19,r11,25692
	ctx.r19.s64 = ctx.r11.s64 + 25692;
	// ble cr6,0x82e5b7e0
	if (!ctx.cr6.gt) goto loc_82E5B7E0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r22,r11,31848
	ctx.r22.s64 = ctx.r11.s64 + 31848;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r27,-31948
	ctx.r27.s64 = -2093744128;
	// lfs f31,3084(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f31.f64 = double(temp.f32);
	// addi r21,r11,31828
	ctx.r21.s64 = ctx.r11.s64 + 31828;
	// li r23,304
	ctx.r23.s64 = 304;
	// li r24,224
	ctx.r24.s64 = 224;
	// li r25,240
	ctx.r25.s64 = 240;
	// li r26,256
	ctx.r26.s64 = 256;
loc_82E5B64C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// addi r3,r11,208
	ctx.r3.s64 = ctx.r11.s64 + 208;
	// bl 0x82d84640
	ctx.lr = 0x82E5B65C;
	sub_82D84640(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// beq cr6,0x82e5b7cc
	if (ctx.cr6.eq) goto loc_82E5B7CC;
	// lwzx r10,r29,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82e5b68c
	if (!ctx.cr6.lt) goto loc_82E5B68C;
	// stw r21,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r21.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82E5B68C:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r11,r29,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lwzx r8,r30,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// lvx128 v0,r8,r23
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r23.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwzx r9,r30,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// lvx128 v13,r9,r24
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r24.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// vaddfp v13,v0,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v13,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwzx r9,r30,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// lvx128 v13,r9,r25
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r25.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// vaddfp v13,v0,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v13,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwzx r10,r30,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// lvx128 v13,r10,r26
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r26.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// vaddfp v0,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82e5b708
	if (!ctx.cr6.lt) goto loc_82E5B708;
	// stw r19,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r19.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
loc_82E5B708:
	// lwzx r10,r29,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82e5b730
	if (!ctx.cr6.lt) goto loc_82E5B730;
	// stw r22,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r22.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82E5B730:
	// lwz r3,-20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// lis r6,-1
	ctx.r6.s64 = -65536;
	// lwz r7,-19404(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + -19404);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E5B754;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,-20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// lis r6,-256
	ctx.r6.s64 = -16777216;
	// lwz r7,-19404(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + -19404);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// ori r6,r6,32768
	ctx.r6.u64 = ctx.r6.u64 | 32768;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E5B77C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,-20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// lis r6,-256
	ctx.r6.s64 = -16777216;
	// lwz r7,-19404(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + -19404);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// ori r6,r6,255
	ctx.r6.u64 = ctx.r6.u64 | 255;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E5B7A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwzx r11,r29,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82e5b7cc
	if (!ctx.cr6.lt) goto loc_82E5B7CC;
	// stw r19,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r19.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
loc_82E5B7CC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r20,r11
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e5b64c
	if (ctx.cr6.lt) goto loc_82E5B64C;
loc_82E5B7E0:
	// lwzx r10,r29,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82e5b808
	if (!ctx.cr6.lt) goto loc_82E5B808;
	// stw r19,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r19.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82E5B808:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x82ca2c14
	// ERROR 82CA2C14
	return;
}

__attribute__((alias("__imp__sub_82E5B814"))) PPC_WEAK_FUNC(sub_82E5B814);
PPC_FUNC_IMPL(__imp__sub_82E5B814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E5B818"))) PPC_WEAK_FUNC(sub_82E5B818);
PPC_FUNC_IMPL(__imp__sub_82E5B818) {
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
	// bl 0x82e5f4e8
	ctx.lr = 0x82E5B830;
	sub_82E5F4E8(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,23856
	ctx.r11.s64 = ctx.r11.s64 + 23856;
	// addi r10,r10,29828
	ctx.r10.s64 = ctx.r10.s64 + 29828;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// addi r9,r9,31992
	ctx.r9.s64 = ctx.r9.s64 + 31992;
	// addi r8,r8,31960
	ctx.r8.s64 = ctx.r8.s64 + 31960;
	// addi r7,r7,31944
	ctx.r7.s64 = ctx.r7.s64 + 31944;
	// addi r6,r6,31920
	ctx.r6.s64 = ctx.r6.s64 + 31920;
	// addi r5,r5,31904
	ctx.r5.s64 = ctx.r5.s64 + 31904;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// stw r7,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r6.u32);
	// stw r5,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r5.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82E5B8B0"))) PPC_WEAK_FUNC(sub_82E5B8B0);
PPC_FUNC_IMPL(__imp__sub_82E5B8B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82E5B8B8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e5b90c
	if (ctx.cr6.eq) goto loc_82E5B90C;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82e5b90c
	if (!ctx.cr6.gt) goto loc_82E5B90C;
	// addi r28,r29,-8
	ctx.r28.s64 = ctx.r29.s64 + -8;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82E5B8E4:
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82e5b3b0
	ctx.lr = 0x82E5B8F4;
	sub_82E5B3B0(ctx, base);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82e5b8e4
	if (ctx.cr6.lt) goto loc_82E5B8E4;
loc_82E5B90C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82E5B914"))) PPC_WEAK_FUNC(sub_82E5B914);
PPC_FUNC_IMPL(__imp__sub_82E5B914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E5B918"))) PPC_WEAK_FUNC(sub_82E5B918);
PPC_FUNC_IMPL(__imp__sub_82E5B918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82E5B920;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r10,r10,31992
	ctx.r10.s64 = ctx.r10.s64 + 31992;
	// addi r9,r9,31960
	ctx.r9.s64 = ctx.r9.s64 + 31960;
	// addi r8,r8,31944
	ctx.r8.s64 = ctx.r8.s64 + 31944;
	// addi r7,r7,31920
	ctx.r7.s64 = ctx.r7.s64 + 31920;
	// addi r6,r6,31904
	ctx.r6.s64 = ctx.r6.s64 + 31904;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// stw r7,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r7.u32);
	// stw r6,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r6.u32);
	// beq cr6,0x82e5b9b0
	if (ctx.cr6.eq) goto loc_82E5B9B0;
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e5b9b0
	if (!ctx.cr6.gt) goto loc_82E5B9B0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82E5B984:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x82e5b208
	ctx.lr = 0x82E5B998;
	sub_82E5B208(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e5b984
	if (ctx.cr6.lt) goto loc_82E5B984;
loc_82E5B9B0:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82e5b9dc
	if (!ctx.cr6.eq) goto loc_82E5B9DC;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82E5B9DC;
	sub_82D4ECA8(ctx, base);
loc_82E5B9DC:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,29828
	ctx.r11.s64 = ctx.r11.s64 + 29828;
	// addi r10,r10,23856
	ctx.r10.s64 = ctx.r10.s64 + 23856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// bl 0x82e5f410
	ctx.lr = 0x82E5B9FC;
	sub_82E5F410(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82E5BA04"))) PPC_WEAK_FUNC(sub_82E5BA04);
PPC_FUNC_IMPL(__imp__sub_82E5BA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E5BA08"))) PPC_WEAK_FUNC(sub_82E5BA08);
PPC_FUNC_IMPL(__imp__sub_82E5BA08) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x82e5b208
	sub_82E5B208(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E5BA10"))) PPC_WEAK_FUNC(sub_82E5BA10);
PPC_FUNC_IMPL(__imp__sub_82E5BA10) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x82e5b3b0
	sub_82E5B3B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E5BA18"))) PPC_WEAK_FUNC(sub_82E5BA18);
PPC_FUNC_IMPL(__imp__sub_82E5BA18) {
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
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r11,r11,2
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82e5ba54
	if (!ctx.cr6.eq) goto loc_82E5BA54;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d512f8
	ctx.lr = 0x82E5BA54;
	sub_82D512F8(ctx, base);
loc_82E5BA54:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82E5BA88"))) PPC_WEAK_FUNC(sub_82E5BA88);
PPC_FUNC_IMPL(__imp__sub_82E5BA88) {
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
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,60
	ctx.r4.s64 = 60;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4ec28
	ctx.lr = 0x82E5BAB4;
	sub_82D4EC28(ctx, base);
	// li r11,60
	ctx.r11.s64 = 60;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r11.u16);
	// bl 0x82e5b818
	ctx.lr = 0x82E5BAC4;
	sub_82E5B818(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bne cr6,0x82e5bad4
	if (!ctx.cr6.eq) goto loc_82E5BAD4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E5BAD4:
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

__attribute__((alias("__imp__sub_82E5BAE8"))) PPC_WEAK_FUNC(sub_82E5BAE8);
PPC_FUNC_IMPL(__imp__sub_82E5BAE8) {
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
	// lis r11,-32026
	ctx.r11.s64 = -2098855936;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r5,r11,-17784
	ctx.r5.s64 = ctx.r11.s64 + -17784;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r4,r10,31812
	ctx.r4.s64 = ctx.r10.s64 + 31812;
	// lwz r3,-20840(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20840);
	// bl 0x82e32408
	ctx.lr = 0x82E5BB10;
	sub_82E32408(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,-19404(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19404, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E5BB28"))) PPC_WEAK_FUNC(sub_82E5BB28);
PPC_FUNC_IMPL(__imp__sub_82E5BB28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r3,-19404(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19404);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E5BB34"))) PPC_WEAK_FUNC(sub_82E5BB34);
PPC_FUNC_IMPL(__imp__sub_82E5BB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E5BB38"))) PPC_WEAK_FUNC(sub_82E5BB38);
PPC_FUNC_IMPL(__imp__sub_82E5BB38) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-44
	ctx.r3.s64 = ctx.r3.s64 + -44;
	// b 0x82e5bb58
	sub_82E5BB58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E5BB40"))) PPC_WEAK_FUNC(sub_82E5BB40);
PPC_FUNC_IMPL(__imp__sub_82E5BB40) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x82e5bb58
	sub_82E5BB58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E5BB48"))) PPC_WEAK_FUNC(sub_82E5BB48);
PPC_FUNC_IMPL(__imp__sub_82E5BB48) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82e5bb58
	sub_82E5BB58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E5BB50"))) PPC_WEAK_FUNC(sub_82E5BB50);
PPC_FUNC_IMPL(__imp__sub_82E5BB50) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-40
	ctx.r3.s64 = ctx.r3.s64 + -40;
	// b 0x82e5bb58
	sub_82E5BB58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E5BB58"))) PPC_WEAK_FUNC(sub_82E5BB58);
PPC_FUNC_IMPL(__imp__sub_82E5BB58) {
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
	// bl 0x82e5b918
	ctx.lr = 0x82E5BB78;
	sub_82E5B918(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e5bba0
	if (ctx.cr6.eq) goto loc_82E5BBA0;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,52
	ctx.r6.s64 = 52;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82E5BBA0;
	sub_82D4ECA8(ctx, base);
loc_82E5BBA0:
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

__attribute__((alias("__imp__sub_82E5BBBC"))) PPC_WEAK_FUNC(sub_82E5BBBC);
PPC_FUNC_IMPL(__imp__sub_82E5BBBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E5BBC0"))) PPC_WEAK_FUNC(sub_82E5BBC0);
PPC_FUNC_IMPL(__imp__sub_82E5BBC0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addic. r10,r11,-32
	ctx.xer.ca = ctx.r11.u32 > 31;
	ctx.r10.s64 = ctx.r11.s64 + -32;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bne 0x82e5bbd8
	if (!ctx.cr0.eq) goto loc_82E5BBD8;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82E5BBD8:
	// b 0x82d73f00
	sub_82D73F00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E5BBDC"))) PPC_WEAK_FUNC(sub_82E5BBDC);
PPC_FUNC_IMPL(__imp__sub_82E5BBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E5BBE0"))) PPC_WEAK_FUNC(sub_82E5BBE0);
PPC_FUNC_IMPL(__imp__sub_82E5BBE0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addic. r10,r11,-32
	ctx.xer.ca = ctx.r11.u32 > 31;
	ctx.r10.s64 = ctx.r11.s64 + -32;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bne 0x82e5bbf8
	if (!ctx.cr0.eq) goto loc_82E5BBF8;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82E5BBF8:
	// b 0x82d72960
	sub_82D72960(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E5BBFC"))) PPC_WEAK_FUNC(sub_82E5BBFC);
PPC_FUNC_IMPL(__imp__sub_82E5BBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E5BC00"))) PPC_WEAK_FUNC(sub_82E5BC00);
PPC_FUNC_IMPL(__imp__sub_82E5BC00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82E5BC08;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82e5f4e8
	ctx.lr = 0x82E5BC14;
	sub_82E5F4E8(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,29828
	ctx.r11.s64 = ctx.r11.s64 + 29828;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r10,r10,32112
	ctx.r10.s64 = ctx.r10.s64 + 32112;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// addi r9,r9,32080
	ctx.r9.s64 = ctx.r9.s64 + 32080;
	// addi r8,r8,32064
	ctx.r8.s64 = ctx.r8.s64 + 32064;
	// addi r7,r7,32048
	ctx.r7.s64 = ctx.r7.s64 + 32048;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r28,r31,40
	ctx.r28.s64 = ctx.r31.s64 + 40;
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// stw r7,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r7.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e5bcb0
	if (ctx.cr6.eq) goto loc_82E5BCB0;
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e5bcb0
	if (!ctx.cr6.gt) goto loc_82E5BCB0;
loc_82E5BC84:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x82d73f00
	ctx.lr = 0x82E5BC98;
	sub_82D73F00(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e5bc84
	if (ctx.cr6.lt) goto loc_82E5BC84;
loc_82E5BCB0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82E5BCBC"))) PPC_WEAK_FUNC(sub_82E5BCBC);
PPC_FUNC_IMPL(__imp__sub_82E5BCBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E5BCC0"))) PPC_WEAK_FUNC(sub_82E5BCC0);
PPC_FUNC_IMPL(__imp__sub_82E5BCC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82E5BCC8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r10,r10,32112
	ctx.r10.s64 = ctx.r10.s64 + 32112;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r9,r9,32080
	ctx.r9.s64 = ctx.r9.s64 + 32080;
	// addi r8,r8,32064
	ctx.r8.s64 = ctx.r8.s64 + 32064;
	// addi r7,r7,32048
	ctx.r7.s64 = ctx.r7.s64 + 32048;
	// addi r28,r31,40
	ctx.r28.s64 = ctx.r31.s64 + 40;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// stw r7,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r7.u32);
	// beq cr6,0x82e5bd50
	if (ctx.cr6.eq) goto loc_82E5BD50;
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e5bd50
	if (!ctx.cr6.gt) goto loc_82E5BD50;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82E5BD24:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x82d72960
	ctx.lr = 0x82E5BD38;
	sub_82D72960(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e5bd24
	if (ctx.cr6.lt) goto loc_82E5BD24;
loc_82E5BD50:
	// lwz r30,48(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82e5bd8c
	if (!ctx.cr6.gt) goto loc_82E5BD8C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82E5BD60:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E5BD7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,128
	ctx.r29.s64 = ctx.r29.s64 + 128;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82e5bd60
	if (!ctx.cr6.eq) goto loc_82E5BD60;
loc_82E5BD8C:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82e5bdb8
	if (!ctx.cr6.eq) goto loc_82E5BDB8;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm r5,r11,7,0,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82E5BDB8;
	sub_82D4ECA8(ctx, base);
loc_82E5BDB8:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,29828
	ctx.r11.s64 = ctx.r11.s64 + 29828;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// bl 0x82e5f410
	ctx.lr = 0x82E5BDCC;
	sub_82E5F410(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82E5BDD4"))) PPC_WEAK_FUNC(sub_82E5BDD4);
PPC_FUNC_IMPL(__imp__sub_82E5BDD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E5BDD8"))) PPC_WEAK_FUNC(sub_82E5BDD8);
PPC_FUNC_IMPL(__imp__sub_82E5BDD8) {
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
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,56
	ctx.r4.s64 = 56;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4ec28
	ctx.lr = 0x82E5BE04;
	sub_82D4EC28(ctx, base);
	// li r11,56
	ctx.r11.s64 = 56;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r11.u16);
	// bl 0x82e5bc00
	ctx.lr = 0x82E5BE14;
	sub_82E5BC00(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bne cr6,0x82e5be24
	if (!ctx.cr6.eq) goto loc_82E5BE24;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E5BE24:
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

__attribute__((alias("__imp__sub_82E5BE38"))) PPC_WEAK_FUNC(sub_82E5BE38);
PPC_FUNC_IMPL(__imp__sub_82E5BE38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x82E5BE40;
	sub_82CA2BB0(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,8
	ctx.r10.s64 = 8;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r3,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r3.u32);
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r29,444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 444, ctx.r29.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82e5be90
	if (!ctx.cr6.lt) goto loc_82E5BE90;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r9,r9,32124
	ctx.r9.s64 = ctx.r9.s64 + 32124;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82E5BE90:
	// addi r24,r3,4
	ctx.r24.s64 = ctx.r3.s64 + 4;
	// lwz r30,4(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// lwz r31,0(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82e5becc
	if (!ctx.cr6.gt) goto loc_82E5BECC;
loc_82E5BEA4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E5BEBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r31,r31,128
	ctx.r31.s64 = ctx.r31.s64 + 128;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82e5bea4
	if (!ctx.cr6.eq) goto loc_82E5BEA4;
loc_82E5BECC:
	// addi r11,r29,40
	ctx.r11.s64 = ctx.r29.s64 + 40;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r23,32
	ctx.r23.s64 = 32;
	// li r14,1
	ctx.r14.s64 = 1;
	// li r15,-16
	ctx.r15.s64 = -16;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// lfs f31,3084(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f31.f64 = double(temp.f32);
	// li r16,16
	ctx.r16.s64 = 16;
	// li r21,-32
	ctx.r21.s64 = -32;
	// li r17,-48
	ctx.r17.s64 = -48;
	// li r22,48
	ctx.r22.s64 = 48;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r18,64
	ctx.r18.s64 = 64;
	// stw r11,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r20,r11,23452
	ctx.r20.s64 = ctx.r11.s64 + 23452;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r19,r11,23564
	ctx.r19.s64 = ctx.r11.s64 + 23564;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,16912
	ctx.r11.s64 = ctx.r11.s64 + 16912;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
loc_82E5BF28:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e5c384
	if (!ctx.cr6.gt) goto loc_82E5C384;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_82E5BF48:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r11,76
	ctx.r11.s64 = ctx.r11.s64 + 76;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e5c35c
	if (!ctx.cr6.gt) goto loc_82E5C35C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
loc_82E5BF7C:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// lwz r31,36(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82e5c334
	if (ctx.cr6.eq) goto loc_82E5C334;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// lhz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e5c334
	if (ctx.cr6.eq) goto loc_82E5C334;
	// stfs f31,172(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f31,156(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
loc_82E5BFC0:
	// lbz r11,15(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 15);
	// lbz r7,14(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 14);
	// lbz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// lbz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// lbz r5,29(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 29);
	// lbz r8,13(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 13);
	// lbz r29,30(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 30);
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r27,4(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r26,8(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// slw r25,r7,r11
	ctx.r25.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// lvx128 v13,r0,r10
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// slw r7,r6,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r10,444(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 444);
	// slw r9,r9,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// slw r6,r5,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r11.u8 & 0x3F));
	// slw r8,r8,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// slw r5,r29,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r11.u8 & 0x3F));
	// subf r11,r9,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r9.s64;
	// lwz r10,108(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// subf r9,r8,r27
	ctx.r9.s64 = ctx.r27.s64 - ctx.r8.s64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf r8,r25,r26
	ctx.r8.s64 = ctx.r26.s64 - ctx.r25.s64;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// clrldi r8,r8,32
	ctx.r8.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// add r7,r7,r30
	ctx.r7.u64 = ctx.r7.u64 + ctx.r30.u64;
	// std r11,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r11.u64);
	// add r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 + ctx.r3.u64;
	// clrldi r7,r7,32
	ctx.r7.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// std r9,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r9.u64);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// std r8,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r8.u64);
	// clrldi r6,r6,32
	ctx.r6.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// clrldi r5,r5,32
	ctx.r5.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// std r7,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r7.u64);
	// std r6,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r6.u64);
	// std r5,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r5.u64);
	// lfd f0,184(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfd f13,200(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// lfd f12,192(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfd f11,208(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// lfd f10,216(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// lfd f9,176(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// frsp f0,f12
	ctx.f0.f64 = double(float(ctx.f12.f64));
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// frsp f0,f11
	ctx.f0.f64 = double(float(ctx.f11.f64));
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// frsp f0,f10
	ctx.f0.f64 = double(float(ctx.f10.f64));
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lvx128 v12,r0,r11
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// frsp f0,f9
	ctx.f0.f64 = double(float(ctx.f9.f64));
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stvx128 v12,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lvx128 v11,r0,r11
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// stvx128 v11,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r10,r23
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r23.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vrlimi128 v0,v13,1,0
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 228), 1));
	// vor v10,v0,v0
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vrefp v0,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v13,v0,v10,v13
	_mm_store_ps(ctx.v13.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v13,v0,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v13,v12,v0
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)));
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// vmulfp128 v0,v11,v0
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32)));
	// lwz r28,4(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// addi r27,r28,1
	ctx.r27.s64 = ctx.r28.s64 + 1;
	// stvx128 v13,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// cmpw cr6,r27,r28
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r28.s32, ctx.xer);
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// lvx128 v12,r0,r10
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp v13,v13,v12
	_mm_store_ps(ctx.v13.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)));
	// stvx128 v13,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// lvx128 v13,r0,r10
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp v0,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bge cr6,0x82e5c180
	if (!ctx.cr6.lt) goto loc_82E5C180;
	// rlwinm r29,r27,7,0,24
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 7) & 0xFFFFFF80;
	// subf r30,r27,r28
	ctx.r30.s64 = ctx.r28.s64 - ctx.r27.s64;
loc_82E5C150:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E5C16C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,128
	ctx.r29.s64 = ctx.r29.s64 + 128;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82e5c150
	if (!ctx.cr6.eq) goto loc_82E5C150;
	// b 0x82e5c2f8
	goto loc_82E5C2F8;
loc_82E5C180:
	// lwz r25,8(r24)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// clrlwi r11,r25,2
	ctx.r11.u64 = ctx.r25.u32 & 0x3FFFFFFF;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82e5c2c0
	if (!ctx.cr6.gt) goto loc_82E5C2C0;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e5c1a0
	if (ctx.cr6.lt) goto loc_82E5C1A0;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82E5C1A0:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r26,0(r24)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r10.u32);
	// stw r10,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r10.u32);
	// stw r9,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r9.u32);
	// ble cr6,0x82e5c1d8
	if (!ctx.cr6.gt) goto loc_82E5C1D8;
	// bge cr6,0x82e5c1c8
	if (!ctx.cr6.lt) goto loc_82E5C1C8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82E5C1C8:
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d51270
	ctx.lr = 0x82E5C1D8;
	sub_82D51270(ctx, base);
loc_82E5C1D8:
	// lwz r9,0(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82e5c25c
	if (!ctx.cr6.gt) goto loc_82E5C25C;
	// addi r11,r9,64
	ctx.r11.s64 = ctx.r9.s64 + 64;
	// addi r10,r26,48
	ctx.r10.s64 = ctx.r26.s64 + 48;
	// subf r9,r26,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r26.s64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
loc_82E5C1F4:
	// addic. r7,r11,-64
	ctx.xer.ca = ctx.r11.u32 > 63;
	ctx.r7.s64 = ctx.r11.s64 + -64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82e5c248
	if (ctx.cr0.eq) goto loc_82E5C248;
	// stw r20,-64(r11)
	PPC_STORE_U32(ctx.r11.u32 + -64, ctx.r20.u32);
	// sth r14,-58(r11)
	PPC_STORE_U16(ctx.r11.u32 + -58, ctx.r14.u16);
	// lwz r7,-40(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -40);
	// stw r7,-56(r11)
	PPC_STORE_U32(ctx.r11.u32 + -56, ctx.r7.u32);
	// lvx128 v0,r10,r15
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r15.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r10
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,r10,r16
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r16.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,r10,r21
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r21.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r17
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r17.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r21
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r21.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r9,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r7,32(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// stw r19,-64(r11)
	PPC_STORE_U32(ctx.r11.u32 + -64, ctx.r19.u32);
	// stw r7,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// lvx128 v0,r10,r22
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r22.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r23
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r23.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r10,r18
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r18.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r22
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r22.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82E5C248:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82e5c1f4
	if (!ctx.cr6.eq) goto loc_82E5C1F4;
loc_82E5C25C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r28,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r28.u32);
	// ble cr6,0x82e5c298
	if (!ctx.cr6.gt) goto loc_82E5C298;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_82E5C270:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E5C288;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82e5c270
	if (!ctx.cr6.eq) goto loc_82E5C270;
loc_82E5C298:
	// rlwinm r11,r25,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e5c2c0
	if (!ctx.cr6.eq) goto loc_82E5C2C0;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// rlwinm r5,r25,7,0,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 7) & 0xFFFFFF80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82E5C2C0;
	sub_82D4ECA8(ctx, base);
loc_82E5C2C0:
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x82e5c2f8
	if (!ctx.cr6.lt) goto loc_82E5C2F8;
	// rlwinm r11,r28,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 7) & 0xFFFFFF80;
	// subf r29,r28,r27
	ctx.r29.s64 = ctx.r27.s64 - ctx.r28.s64;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82E5C2D8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82e5c2e8
	if (ctx.cr6.eq) goto loc_82E5C2E8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e37e98
	ctx.lr = 0x82E5C2E8;
	sub_82E37E98(ctx, base);
loc_82E5C2E8:
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82e5c2d8
	if (!ctx.cr6.eq) goto loc_82E5C2D8;
loc_82E5C2F8:
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm r11,r28,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 7) & 0xFFFFFF80;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// stw r27,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r27.u32);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82e37da8
	ctx.lr = 0x82E5C314;
	sub_82E37DA8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lhz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82e5bfc0
	if (ctx.cr6.lt) goto loc_82E5BFC0;
loc_82E5C334:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82e5bf7c
	if (ctx.cr6.lt) goto loc_82E5BF7C;
loc_82E5C35C:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82e5bf48
	if (ctx.cr6.lt) goto loc_82E5BF48;
loc_82E5C384:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,444(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 444);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,52
	ctx.r10.s64 = ctx.r10.s64 + 52;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bne cr6,0x82e5bf28
	if (!ctx.cr6.eq) goto loc_82E5BF28;
	// lwz r11,436(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// li r25,4
	ctx.r25.s64 = 4;
	// li r5,22
	ctx.r5.s64 = 22;
	// lwz r28,8(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r4,r28,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r25
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// bl 0x82d4ec28
	ctx.lr = 0x82E5C3C4;
	sub_82D4EC28(ctx, base);
	// lwz r29,4(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
	// cmpw cr6,r28,r29
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r29.s32, ctx.xer);
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// bge cr6,0x82e5c414
	if (!ctx.cr6.lt) goto loc_82E5C414;
	// rlwinm r30,r28,7,0,24
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 7) & 0xFFFFFF80;
	// subf r31,r28,r29
	ctx.r31.s64 = ctx.r29.s64 - ctx.r28.s64;
loc_82E5C3E4:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E5C400;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82e5c3e4
	if (!ctx.cr6.eq) goto loc_82E5C3E4;
	// b 0x82e5c588
	goto loc_82E5C588;
loc_82E5C414:
	// lwz r26,8(r24)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// clrlwi r11,r26,2
	ctx.r11.u64 = ctx.r26.u32 & 0x3FFFFFFF;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82e5c550
	if (!ctx.cr6.gt) goto loc_82E5C550;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e5c434
	if (ctx.cr6.lt) goto loc_82E5C434;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82E5C434:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r27,0(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r10.u32);
	// stw r10,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r10.u32);
	// stw r9,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r9.u32);
	// ble cr6,0x82e5c46c
	if (!ctx.cr6.gt) goto loc_82E5C46C;
	// bge cr6,0x82e5c45c
	if (!ctx.cr6.lt) goto loc_82E5C45C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82E5C45C:
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d51270
	ctx.lr = 0x82E5C46C;
	sub_82D51270(ctx, base);
loc_82E5C46C:
	// lwz r9,0(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82e5c4f0
	if (!ctx.cr6.gt) goto loc_82E5C4F0;
	// addi r11,r9,64
	ctx.r11.s64 = ctx.r9.s64 + 64;
	// addi r10,r27,48
	ctx.r10.s64 = ctx.r27.s64 + 48;
	// subf r9,r27,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r27.s64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
loc_82E5C488:
	// addic. r7,r11,-64
	ctx.xer.ca = ctx.r11.u32 > 63;
	ctx.r7.s64 = ctx.r11.s64 + -64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82e5c4dc
	if (ctx.cr0.eq) goto loc_82E5C4DC;
	// stw r20,-64(r11)
	PPC_STORE_U32(ctx.r11.u32 + -64, ctx.r20.u32);
	// sth r14,-58(r11)
	PPC_STORE_U16(ctx.r11.u32 + -58, ctx.r14.u16);
	// lwz r7,-40(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -40);
	// stw r7,-56(r11)
	PPC_STORE_U32(ctx.r11.u32 + -56, ctx.r7.u32);
	// lvx128 v0,r10,r15
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r15.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r10
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,r10,r16
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r16.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,r10,r21
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r21.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r17
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r17.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r21
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r21.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r9,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r7,32(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// stw r19,-64(r11)
	PPC_STORE_U32(ctx.r11.u32 + -64, ctx.r19.u32);
	// stw r7,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// lvx128 v0,r10,r22
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r22.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r23
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r23.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r10,r18
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r18.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r22
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r22.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82E5C4DC:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82e5c488
	if (!ctx.cr6.eq) goto loc_82E5C488;
loc_82E5C4F0:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r29,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r29.u32);
	// ble cr6,0x82e5c52c
	if (!ctx.cr6.gt) goto loc_82E5C52C;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82E5C504:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E5C51C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r31,r31,128
	ctx.r31.s64 = ctx.r31.s64 + 128;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82e5c504
	if (!ctx.cr6.eq) goto loc_82E5C504;
loc_82E5C52C:
	// rlwinm r11,r26,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e5c550
	if (!ctx.cr6.eq) goto loc_82E5C550;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,22
	ctx.r6.s64 = 22;
	// rlwinm r5,r26,7,0,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 7) & 0xFFFFFF80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwzx r3,r11,r25
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82E5C550;
	sub_82D4ECA8(ctx, base);
loc_82E5C550:
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x82e5c588
	if (!ctx.cr6.lt) goto loc_82E5C588;
	// rlwinm r11,r29,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 7) & 0xFFFFFF80;
	// subf r30,r29,r28
	ctx.r30.s64 = ctx.r28.s64 - ctx.r29.s64;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82E5C568:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82e5c578
	if (ctx.cr6.eq) goto loc_82E5C578;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e37e98
	ctx.lr = 0x82E5C578;
	sub_82E37E98(ctx, base);
loc_82E5C578:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r31,r31,128
	ctx.r31.s64 = ctx.r31.s64 + 128;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82e5c568
	if (!ctx.cr6.eq) goto loc_82E5C568;
loc_82E5C588:
	// stw r28,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r28.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// ble cr6,0x82e5c5b8
	if (!ctx.cr6.gt) goto loc_82E5C5B8;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
loc_82E5C5A0:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82e5c5a0
	if (!ctx.cr6.eq) goto loc_82E5C5A0;
loc_82E5C5B8:
	// lwz r11,436(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// li r5,-23296
	ctx.r5.s64 = -23296;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// lwz r3,-16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r6,-19400(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19400);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E5C5E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,8
	ctx.r11.s64 = 8;
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82e5c618
	if (!ctx.cr6.lt) goto loc_82E5C618;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r9,r9,25692
	ctx.r9.s64 = ctx.r9.s64 + 25692;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r10,12
	ctx.r7.s64 = ctx.r10.s64 + 12;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
loc_82E5C618:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82e5c63c
	if (!ctx.cr6.eq) goto loc_82E5C63C;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwzx r3,r8,r25
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r25.u32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x82d4eca8
	ctx.lr = 0x82E5C63C;
	sub_82D4ECA8(ctx, base);
loc_82E5C63C:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E5C648"))) PPC_WEAK_FUNC(sub_82E5C648);
PPC_FUNC_IMPL(__imp__sub_82E5C648) {
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
	// lis r11,-32026
	ctx.r11.s64 = -2098855936;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r5,r11,-16936
	ctx.r5.s64 = ctx.r11.s64 + -16936;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r4,r10,32032
	ctx.r4.s64 = ctx.r10.s64 + 32032;
	// lwz r3,-20840(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20840);
	// bl 0x82e32408
	ctx.lr = 0x82E5C670;
	sub_82E32408(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,-19400(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19400, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E5C688"))) PPC_WEAK_FUNC(sub_82E5C688);
PPC_FUNC_IMPL(__imp__sub_82E5C688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r3,-19400(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19400);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E5C694"))) PPC_WEAK_FUNC(sub_82E5C694);
PPC_FUNC_IMPL(__imp__sub_82E5C694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E5C698"))) PPC_WEAK_FUNC(sub_82E5C698);
PPC_FUNC_IMPL(__imp__sub_82E5C698) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// b 0x82e5c6b0
	sub_82E5C6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E5C6A0"))) PPC_WEAK_FUNC(sub_82E5C6A0);
PPC_FUNC_IMPL(__imp__sub_82E5C6A0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82e5c6b0
	sub_82E5C6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E5C6A8"))) PPC_WEAK_FUNC(sub_82E5C6A8);
PPC_FUNC_IMPL(__imp__sub_82E5C6A8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-40
	ctx.r3.s64 = ctx.r3.s64 + -40;
	// b 0x82e5c6b0
	sub_82E5C6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E5C6B0"))) PPC_WEAK_FUNC(sub_82E5C6B0);
PPC_FUNC_IMPL(__imp__sub_82E5C6B0) {
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
	// bl 0x82e5bcc0
	ctx.lr = 0x82E5C6D0;
	sub_82E5BCC0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e5c6f8
	if (ctx.cr6.eq) goto loc_82E5C6F8;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,16
	ctx.r6.s64 = 16;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82d4eca8
	ctx.lr = 0x82E5C6F8;
	sub_82D4ECA8(ctx, base);
loc_82E5C6F8:
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

