#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8322A904"))) PPC_WEAK_FUNC(sub_8322A904);
PPC_FUNC_IMPL(__imp__sub_8322A904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322A908"))) PPC_WEAK_FUNC(sub_8322A908);
PPC_FUNC_IMPL(__imp__sub_8322A908) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x8322A910;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r28,r11,-27456
	ctx.r28.s64 = ctx.r11.s64 + -27456;
	// addi r30,r31,320
	ctx.r30.s64 = ctx.r31.s64 + 320;
	// lfs f13,320(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,18756(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 18756);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x8322a964
	if (!ctx.cr6.eq) goto loc_8322A964;
	// lwz r3,232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8322a95c
	if (ctx.cr6.eq) goto loc_8322A95C;
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// lbz r10,225(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 225);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8322a95c
	if (ctx.cr6.eq) goto loc_8322A95C;
	// bl 0x8322b330
	ctx.lr = 0x8322A954;
	sub_8322B330(ctx, base);
	// stfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// b 0x8322a964
	goto loc_8322A964;
loc_8322A95C:
	// lfs f0,-12(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_8322A964:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8323a408
	ctx.lr = 0x8322A96C;
	sub_8323A408(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8322a6a8
	ctx.lr = 0x8322A97C;
	sub_8322A6A8(ctx, base);
	// addi r29,r31,304
	ctx.r29.s64 = ctx.r31.s64 + 304;
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// lvx128 v0,r0,r3
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r5,r31,324
	ctx.r5.s64 = ctx.r31.s64 + 324;
	// addi r3,r11,196
	ctx.r3.s64 = ctx.r11.s64 + 196;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stvx128 v0,r0,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8322A9A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r9,-28160
	ctx.r7.s64 = ctx.r9.s64 + -28160;
	// lvx128 v12,r0,r29
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r6,80
	ctx.r6.s64 = 80;
	// lvlx v13,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvx128 v0,r0,r7
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm v11,v12,v13,v0
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v11,r31,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_8322A9DC"))) PPC_WEAK_FUNC(sub_8322A9DC);
PPC_FUNC_IMPL(__imp__sub_8322A9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322A9E0"))) PPC_WEAK_FUNC(sub_8322A9E0);
PPC_FUNC_IMPL(__imp__sub_8322A9E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x83223408
	sub_83223408(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322A9E4"))) PPC_WEAK_FUNC(sub_8322A9E4);
PPC_FUNC_IMPL(__imp__sub_8322A9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322A9E8"))) PPC_WEAK_FUNC(sub_8322A9E8);
PPC_FUNC_IMPL(__imp__sub_8322A9E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x8322A9F0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,-7604(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7604);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8322aa20
	if (!ctx.cr6.eq) goto loc_8322AA20;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8322aa24
	goto loc_8322AA24;
loc_8322AA20:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8322AA24:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8322AA38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8322aa6c
	if (ctx.cr6.eq) goto loc_8322AA6C;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8323a658
	ctx.lr = 0x8322AA58;
	sub_8323A658(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8322AA6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8322AA6C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_8322AA74"))) PPC_WEAK_FUNC(sub_8322AA74);
PPC_FUNC_IMPL(__imp__sub_8322AA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322AA78"))) PPC_WEAK_FUNC(sub_8322AA78);
PPC_FUNC_IMPL(__imp__sub_8322AA78) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x8322aac8
	if (ctx.cr6.eq) goto loc_8322AAC8;
loc_8322AAAC:
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
	// bne 0x8322aaac
	if (!ctx.cr0.eq) goto loc_8322AAAC;
loc_8322AAC8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8323a6e8
	ctx.lr = 0x8322AAD4;
	sub_8323A6E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x8322AADC;
	sub_829FF648(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r8,304
	ctx.r8.s64 = 304;
	// addi r7,r10,-27456
	ctx.r7.s64 = ctx.r10.s64 + -27456;
	// addi r6,r9,22760
	ctx.r6.s64 = ctx.r9.s64 + 22760;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,-27456(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27456);
	ctx.f13.f64 = double(temp.f32);
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stvx128 v0,r31,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,18756(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 18756);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,320(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 320, temp.u32);
	// stfs f13,324(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 324, temp.u32);
	// stw r11,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
	// stw r11,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
	// stw r11,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r11.u32);
	// stb r11,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r11.u8);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r5,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r5.u32);
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

__attribute__((alias("__imp__sub_8322AB44"))) PPC_WEAK_FUNC(sub_8322AB44);
PPC_FUNC_IMPL(__imp__sub_8322AB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322AB48"))) PPC_WEAK_FUNC(sub_8322AB48);
PPC_FUNC_IMPL(__imp__sub_8322AB48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x8322AB50;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,352
	ctx.r3.s64 = 352;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8221f388
	ctx.lr = 0x8322AB68;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8322ab80
	if (ctx.cr6.eq) goto loc_8322AB80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8322aa78
	ctx.lr = 0x8322AB7C;
	sub_8322AA78(ctx, base);
	// b 0x8322ab84
	goto loc_8322AB84;
loc_8322AB80:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8322AB84:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8322abc4
	if (ctx.cr6.eq) goto loc_8322ABC4;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8221f388
	ctx.lr = 0x8322AB98;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8322abc4
	if (ctx.cr6.eq) goto loc_8322ABC4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32105
	ctx.r9.s64 = -2104033280;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r9,-32320
	ctx.r7.s64 = ctx.r9.s64 + -32320;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8322abc8
	goto loc_8322ABC8;
loc_8322ABC4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8322ABC8:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x8322ac00
	if (ctx.cr6.eq) goto loc_8322AC00;
loc_8322ABE4:
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
	// bne 0x8322abe4
	if (!ctx.cr0.eq) goto loc_8322ABE4;
loc_8322AC00:
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-7792
	ctx.r3.s64 = ctx.r11.s64 + -7792;
	// bl 0x829fd7b8
	ctx.lr = 0x8322AC10;
	sub_829FD7B8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x8322AC18;
	sub_829FF648(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_8322AC24"))) PPC_WEAK_FUNC(sub_8322AC24);
PPC_FUNC_IMPL(__imp__sub_8322AC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322AC28"))) PPC_WEAK_FUNC(sub_8322AC28);
PPC_FUNC_IMPL(__imp__sub_8322AC28) {
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
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8322AC58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// bne cr6,0x8322ac78
	if (!ctx.cr6.eq) goto loc_8322AC78;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8323a3a0
	ctx.lr = 0x8322AC6C;
	sub_8323A3A0(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,348(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 348);
	// bl 0x8323f348
	ctx.lr = 0x8322AC78;
	sub_8323F348(ctx, base);
loc_8322AC78:
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

__attribute__((alias("__imp__sub_8322AC90"))) PPC_WEAK_FUNC(sub_8322AC90);
PPC_FUNC_IMPL(__imp__sub_8322AC90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x8322AC98;
	sub_82CA2BEC(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r3,r30,328
	ctx.r3.s64 = ctx.r30.s64 + 328;
	// bl 0x827f23d8
	ctx.lr = 0x8322ACB0;
	sub_827F23D8(ctx, base);
	// lwz r10,348(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 348);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,344(r30)
	PPC_STORE_U8(ctx.r30.u32 + 344, ctx.r11.u8);
	// lbz r9,227(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 227);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8322ad34
	if (ctx.cr6.eq) goto loc_8322AD34;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r29,-32246
	ctx.r29.s64 = -2113273856;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 4;
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// bge cr6,0x8322acf0
	if (!ctx.cr6.lt) goto loc_8322ACF0;
	// lfs f0,-2932(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -2932);
	ctx.f0.f64 = double(temp.f32);
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
	// b 0x8322ad00
	goto loc_8322AD00;
loc_8322ACF0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322a7c8
	ctx.lr = 0x8322ACF8;
	sub_8322A7C8(ctx, base);
	// lfs f0,-2932(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -2932);
	ctx.f0.f64 = double(temp.f32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
loc_8322AD00:
	// lwz r11,348(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 348);
	// addi r3,r11,200
	ctx.r3.s64 = ctx.r11.s64 + 200;
	// lwz r10,208(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// lwz r9,204(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r7,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// cmplwi cr6,r7,2
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 2, ctx.xer);
	// blt cr6,0x8322ad28
	if (ctx.cr6.lt) goto loc_8322AD28;
	// bl 0x8322a7c8
	ctx.lr = 0x8322AD24;
	sub_8322A7C8(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
loc_8322AD28:
	// lwz r11,232(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	// fdivs f0,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// stfs f0,68(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
loc_8322AD34:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_8322AD40"))) PPC_WEAK_FUNC(sub_8322AD40);
PPC_FUNC_IMPL(__imp__sub_8322AD40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x8322AD48;
	sub_82CA2BE8(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,212(r5)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 212);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r29,208(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 208);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x8322ad9c
	if (ctx.cr6.eq) goto loc_8322AD9C;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x8322AD88;
	sub_829FF648(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8322AD9C:
	// lwz r31,212(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// lwz r30,208(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8322adc8
	if (ctx.cr6.eq) goto loc_8322ADC8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x8322ADB4;
	sub_829FF648(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8322ADC8:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8323f7a0
	ctx.lr = 0x8322ADDC;
	sub_8323F7A0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// beq cr6,0x8322ae10
	if (ctx.cr6.eq) goto loc_8322AE10;
loc_8322ADF4:
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
	// bne 0x8322adf4
	if (!ctx.cr0.eq) goto loc_8322ADF4;
loc_8322AE10:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8322AE28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x8322AE30;
	sub_829FF648(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x829ff648
	ctx.lr = 0x8322AE38;
	sub_829FF648(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x8322AE40;
	sub_829FF648(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x8322AE48;
	sub_829FF648(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_8322AE54"))) PPC_WEAK_FUNC(sub_8322AE54);
PPC_FUNC_IMPL(__imp__sub_8322AE54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322AE58"))) PPC_WEAK_FUNC(sub_8322AE58);
PPC_FUNC_IMPL(__imp__sub_8322AE58) {
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
	// bl 0x83224818
	ctx.lr = 0x8322AE74;
	sub_83224818(ctx, base);
	// lwz r4,208(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// lwz r3,288(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	// bl 0x8321f668
	ctx.lr = 0x8322AE80;
	sub_8321F668(ctx, base);
	// lwz r31,208(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// lwz r30,348(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 348);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8321f668
	ctx.lr = 0x8322AE94;
	sub_8321F668(ctx, base);
	// lbz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 192);
	// addi r4,r31,196
	ctx.r4.s64 = ctx.r31.s64 + 196;
	// addi r3,r30,196
	ctx.r3.s64 = ctx.r30.s64 + 196;
	// stb r11,192(r30)
	PPC_STORE_U8(ctx.r30.u32 + 192, ctx.r11.u8);
	// bl 0x83236b30
	ctx.lr = 0x8322AEA8;
	sub_83236B30(ctx, base);
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

__attribute__((alias("__imp__sub_8322AEC0"))) PPC_WEAK_FUNC(sub_8322AEC0);
PPC_FUNC_IMPL(__imp__sub_8322AEC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8322AEC8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,-7604(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7604);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8322af00
	if (!ctx.cr6.eq) goto loc_8322AF00;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8322af04
	goto loc_8322AF04;
loc_8322AF00:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8322AF04:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8322AF18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8322af60
	if (ctx.cr6.eq) goto loc_8322AF60;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8323a7c0
	ctx.lr = 0x8322AF40;
	sub_8323A7C0(ctx, base);
	// lwz r4,208(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// lwz r3,348(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 348);
	// bl 0x8323f348
	ctx.lr = 0x8322AF4C;
	sub_8323F348(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8322AF60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8322AF60:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8322AF68"))) PPC_WEAK_FUNC(sub_8322AF68);
PPC_FUNC_IMPL(__imp__sub_8322AF68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,16
	ctx.r11.s64 = 16;
	// stfs f1,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f2,36(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stvx128 v1,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v2,r3,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322AF80"))) PPC_WEAK_FUNC(sub_8322AF80);
PPC_FUNC_IMPL(__imp__sub_8322AF80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,16
	ctx.r11.s64 = 16;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stvx128 v1,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v2,r31,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,-27852(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27852);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f1,f0
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82239e88
	ctx.lr = 0x8322AFB8;
	sub_82239E88(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82239f68
	ctx.lr = 0x8322AFC8;
	sub_82239F68(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,36(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322AFE8"))) PPC_WEAK_FUNC(sub_8322AFE8);
PPC_FUNC_IMPL(__imp__sub_8322AFE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,16
	ctx.r11.s64 = 16;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// stvx128 v1,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v2,r31,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfd f31,568(r10)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r10.u32 + 568);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82239e88
	ctx.lr = 0x8322B01C;
	sub_82239E88(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82239f68
	ctx.lr = 0x8322B02C;
	sub_82239F68(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,36(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322B050"))) PPC_WEAK_FUNC(sub_8322B050);
PPC_FUNC_IMPL(__imp__sub_8322B050) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x8322B058;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r30,r31,48
	ctx.r30.s64 = ctx.r31.s64 + 48;
	// addi r29,r31,64
	ctx.r29.s64 = ctx.r31.s64 + 64;
	// addi r10,r11,344
	ctx.r10.s64 = ctx.r11.s64 + 344;
	// stvx128 v1,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v2,r0,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8322b0b4
	if (ctx.cr6.eq) goto loc_8322B0B4;
	// lis r28,-32246
	ctx.r28.s64 = -2113273856;
	// addi r27,r28,-19232
	ctx.r27.s64 = ctx.r28.s64 + -19232;
	// lfs f0,-8620(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -8620);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// bl 0x82293cd0
	ctx.lr = 0x8322B098;
	sub_82293CD0(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lfs f0,18708(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 18708);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x8227ee80
	ctx.lr = 0x8322B0A8;
	sub_8227EE80(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lfs f0,-19232(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -19232);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
loc_8322B0B4:
	// stfs f1,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lvx128 v2,r0,r29
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v1,r0,r30
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x8322af80
	ctx.lr = 0x8322B0C8;
	sub_8322AF80(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_8322B0D0"))) PPC_WEAK_FUNC(sub_8322B0D0);
PPC_FUNC_IMPL(__imp__sub_8322B0D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// li r12,-32
	ctx.r12.s64 = -32;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// vspltisw128 v127,0
	_mm_store_si128((__m128i*)ctx.v127.u32, _mm_set1_epi32(int(0x0)));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r7,r9,-28240
	ctx.r7.s64 = ctx.r9.s64 + -28240;
	// vor128 v1,v127,v127
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// lfs f0,-27456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27456);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v13,v0,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// lvx128 v0,r0,r7
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vand v2,v13,v0
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lfs f1,-28504(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -28504);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8322afe8
	ctx.lr = 0x8322B128;
	sub_8322AFE8(ctx, base);
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stvx128 v127,r31,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v127,r31,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// li r0,-32
	ctx.r0.s64 = -32;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322B158"))) PPC_WEAK_FUNC(sub_8322B158);
PPC_FUNC_IMPL(__imp__sub_8322B158) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r31
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp v13,v1,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v13.f32, _mm_sub_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v0.f32)));
	// lfs f31,-25888(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25888);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stvx128 v13,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82260bc8
	ctx.lr = 0x8322B194;
	sub_82260BC8(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x8322b1cc
	if (!ctx.cr6.gt) goto loc_8322B1CC;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f0,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r3,1
	ctx.r3.s64 = 1;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r31,r10
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmsum3fp128 v12,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v12.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32), 0xEF));
	// stvx128 v12,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8322b1d0
	if (ctx.cr6.gt) goto loc_8322B1D0;
loc_8322B1CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8322B1D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322B1E8"))) PPC_WEAK_FUNC(sub_8322B1E8);
PPC_FUNC_IMPL(__imp__sub_8322B1E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// li r12,-64
	ctx.r12.s64 = -64;
	// stvx128 v125,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r12,-48
	ctx.r12.s64 = -48;
	// stvx128 v126,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r12,-32
	ctx.r12.s64 = -32;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f0,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// li r11,16
	ctx.r11.s64 = 16;
	// fdivs f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvx128 v126,r0,r3
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lfs f12,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v13,v0,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// lvx128 v127,r3,r11
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// vmulfp128 v12,v127,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v13.f32)));
	// stfs f12,144(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stvx128 v127,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v125,r4,r11
	_mm_store_si128((__m128i*)ctx.v125.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vor128 v1,v125,v125
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v125.u8));
	// vsubfp128 v11,v126,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_sub_ps(_mm_load_ps(ctx.v126.f32), _mm_load_ps(ctx.v12.f32)));
	// stvx128 v11,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x8322b158
	ctx.lr = 0x8322B26C;
	sub_8322B158(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8322b2d4
	if (ctx.cr6.eq) goto loc_8322B2D4;
	// vsubfp128 v0,v125,v126
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_sub_ps(_mm_load_ps(ctx.v125.f32), _mm_load_ps(ctx.v126.f32)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lfs f0,-27468(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27468);
	ctx.f0.f64 = double(temp.f32);
	// vmsum3fp128 v13,v0,v127
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v13.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v127.f32), 0xEF));
	// stvx128 v13,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8322b2a4
	if (!ctx.cr6.gt) goto loc_8322B2A4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8322b2d8
	goto loc_8322B2D8;
loc_8322B2A4:
	// vsubfp128 v0,v126,v125
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_sub_ps(_mm_load_ps(ctx.v126.f32), _mm_load_ps(ctx.v125.f32)));
	// fmuls f0,f31,f31
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// vmsum3fp128 v13,v0,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v13.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// stvx128 v13,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8322b2cc
	if (ctx.cr6.lt) goto loc_8322B2CC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8322B2CC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// b 0x8322b2d8
	goto loc_8322B2D8;
loc_8322B2D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8322B2D8:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// li r0,-64
	ctx.r0.s64 = -64;
	// lvx128 v125,r1,r0
	_mm_store_si128((__m128i*)ctx.v125.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r0,-48
	ctx.r0.s64 = -48;
	// lvx128 v126,r1,r0
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r0,-32
	ctx.r0.s64 = -32;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322B304"))) PPC_WEAK_FUNC(sub_8322B304);
PPC_FUNC_IMPL(__imp__sub_8322B304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322B308"))) PPC_WEAK_FUNC(sub_8322B308);
PPC_FUNC_IMPL(__imp__sub_8322B308) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8322B328"))) PPC_WEAK_FUNC(sub_8322B328);
PPC_FUNC_IMPL(__imp__sub_8322B328) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322B32C"))) PPC_WEAK_FUNC(sub_8322B32C);
PPC_FUNC_IMPL(__imp__sub_8322B32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322B330"))) PPC_WEAK_FUNC(sub_8322B330);
PPC_FUNC_IMPL(__imp__sub_8322B330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f13,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-8700(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8700);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x8322b3bc
	if (!ctx.cr6.eq) goto loc_8322B3BC;
	// lis r7,-31950
	ctx.r7.s64 = -2093875200;
	// lwz r10,-31652(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + -31652);
	// cmpwi cr6,r10,267
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 267, ctx.xer);
	// addi r8,r10,-267
	ctx.r8.s64 = ctx.r10.s64 + -267;
	// bge cr6,0x8322b35c
	if (!ctx.cr6.lt) goto loc_8322B35C;
	// addi r8,r10,103
	ctx.r8.s64 = ctx.r10.s64 + 103;
loc_8322B35C:
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-4048
	ctx.r11.s64 = ctx.r11.s64 + -4048;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,370
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 370, ctx.xer);
	// lwzx r6,r9,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r5,r8,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// xor r8,r5,r6
	ctx.r8.u64 = ctx.r5.u64 ^ ctx.r6.u64;
	// stwx r8,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u32);
	// blt cr6,0x8322b394
	if (ctx.cr6.lt) goto loc_8322B394;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-31652(r7)
	PPC_STORE_U32(ctx.r7.u32 + -31652, ctx.r11.u32);
	// b 0x8322b398
	goto loc_8322B398;
loc_8322B394:
	// stw r10,-31652(r7)
	PPC_STORE_U32(ctx.r7.u32 + -31652, ctx.r10.u32);
loc_8322B398:
	// clrlwi r11,r8,8
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFFFF;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,24080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24080);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,48(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
loc_8322B3BC:
	// lfs f1,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322B3C4"))) PPC_WEAK_FUNC(sub_8322B3C4);
PPC_FUNC_IMPL(__imp__sub_8322B3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322B3C8"))) PPC_WEAK_FUNC(sub_8322B3C8);
PPC_FUNC_IMPL(__imp__sub_8322B3C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x8322B3D0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r31,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r31.s64 = ctx.r9.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble 0x8322b418
	if (!ctx.cr0.gt) goto loc_8322B418;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8322B3F8:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x83222500
	ctx.lr = 0x8322B40C;
	sub_83222500(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bne 0x8322b3f8
	if (!ctx.cr0.eq) goto loc_8322B3F8;
loc_8322B418:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_8322B420"))) PPC_WEAK_FUNC(sub_8322B420);
PPC_FUNC_IMPL(__imp__sub_8322B420) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// lwz r8,12(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// subf r6,r8,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r8.s64;
	// addi r5,r7,-28224
	ctx.r5.s64 = ctx.r7.s64 + -28224;
	// lfs f0,-27456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27456);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r11,r6,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFF8;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lvlx v0,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v13,v0,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// lvx128 v0,r0,r5
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// vand v12,v13,v0
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v12,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// ld r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// ld r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// std r9,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r9.u64);
	// std r8,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r8.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322B484"))) PPC_WEAK_FUNC(sub_8322B484);
PPC_FUNC_IMPL(__imp__sub_8322B484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322B488"))) PPC_WEAK_FUNC(sub_8322B488);
PPC_FUNC_IMPL(__imp__sub_8322B488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x8322B490;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,12(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r27,16(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x8322b548
	if (ctx.cr6.eq) goto loc_8322B548;
	// li r28,1
	ctx.r28.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8322B4AC:
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8322b53c
	if (ctx.cr6.eq) goto loc_8322B53C;
loc_8322B4B8:
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8322B4CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8322b4d8
	if (!ctx.cr6.eq) goto loc_8322B4D8;
	// stb r28,477(r31)
	PPC_STORE_U8(ctx.r31.u32 + 477, ctx.r28.u8);
loc_8322B4D8:
	// addi r31,r31,244
	ctx.r31.s64 = ctx.r31.s64 + 244;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322b52c
	if (ctx.cr6.eq) goto loc_8322B52C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8322b4fc
	if (ctx.cr6.eq) goto loc_8322B4FC;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x8322b530
	goto loc_8322B530;
loc_8322B4FC:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8322b528
	if (!ctx.cr6.eq) goto loc_8322B528;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8322b528
	if (!ctx.cr6.eq) goto loc_8322B528;
	// bl 0x8221be68
	ctx.lr = 0x8322B528;
	sub_8221BE68(ctx, base);
loc_8322B528:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_8322B52C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8322B530:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8322b4b8
	if (!ctx.cr6.eq) goto loc_8322B4B8;
loc_8322B53C:
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x8322b4ac
	if (!ctx.cr6.eq) goto loc_8322B4AC;
loc_8322B548:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_8322B550"))) PPC_WEAK_FUNC(sub_8322B550);
PPC_FUNC_IMPL(__imp__sub_8322B550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8322B558;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r11,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8322b66c
	if (!ctx.cr0.gt) goto loc_8322B66C;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8322B584:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// addi r3,r11,244
	ctx.r3.s64 = ctx.r11.s64 + 244;
	// lwz r11,248(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322b5b4
	if (ctx.cr6.eq) goto loc_8322B5B4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8322b5b0
	if (ctx.cr6.eq) goto loc_8322B5B0;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x8322b5b8
	goto loc_8322B5B8;
loc_8322B5B0:
	// bl 0x821940c8
	ctx.lr = 0x8322B5B4;
	sub_821940C8(ctx, base);
loc_8322B5B4:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_8322B5B8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8322b660
	if (ctx.cr6.eq) goto loc_8322B660;
loc_8322B5C0:
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8322B5D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8322b5fc
	if (!ctx.cr6.eq) goto loc_8322B5FC;
	// lwz r3,472(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8322B5F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x8322b5fc
	if (!ctx.cr6.eq) goto loc_8322B5FC;
	// stw r26,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r26.u32);
loc_8322B5FC:
	// addi r31,r31,244
	ctx.r31.s64 = ctx.r31.s64 + 244;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322b650
	if (ctx.cr6.eq) goto loc_8322B650;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8322b620
	if (ctx.cr6.eq) goto loc_8322B620;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x8322b654
	goto loc_8322B654;
loc_8322B620:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8322b64c
	if (!ctx.cr6.eq) goto loc_8322B64C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8322b64c
	if (!ctx.cr6.eq) goto loc_8322B64C;
	// bl 0x8221be68
	ctx.lr = 0x8322B64C;
	sub_8221BE68(ctx, base);
loc_8322B64C:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_8322B650:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8322B654:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8322b5c0
	if (!ctx.cr6.eq) goto loc_8322B5C0;
loc_8322B660:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x8322b584
	if (!ctx.cr0.eq) goto loc_8322B584;
loc_8322B66C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8322B674"))) PPC_WEAK_FUNC(sub_8322B674);
PPC_FUNC_IMPL(__imp__sub_8322B674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322B678"))) PPC_WEAK_FUNC(sub_8322B678);
PPC_FUNC_IMPL(__imp__sub_8322B678) {
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
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8322b6f8
	if (ctx.cr6.eq) goto loc_8322B6F8;
loc_8322B69C:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8322b6c0
	if (ctx.cr6.eq) goto loc_8322B6C0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8322B6C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8322B6C0:
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322b6e8
	if (ctx.cr6.eq) goto loc_8322B6E8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8322b6e4
	if (ctx.cr6.eq) goto loc_8322B6E4;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x8322b6ec
	goto loc_8322B6EC;
loc_8322B6E4:
	// bl 0x821940c8
	ctx.lr = 0x8322B6E8;
	sub_821940C8(ctx, base);
loc_8322B6E8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8322B6EC:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8322b69c
	if (!ctx.cr6.eq) goto loc_8322B69C;
loc_8322B6F8:
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

__attribute__((alias("__imp__sub_8322B710"))) PPC_WEAK_FUNC(sub_8322B710);
PPC_FUNC_IMPL(__imp__sub_8322B710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x8322B718;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r28,8
	ctx.r31.s64 = ctx.r28.s64 + 8;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r8,r9,0,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8322b77c
	if (!ctx.cr6.gt) goto loc_8322B77C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8322B744:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x8322b678
	ctx.lr = 0x8322B75C;
	sub_8322B678(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r7,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// cmpw cr6,r29,r7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8322b744
	if (ctx.cr6.lt) goto loc_8322B744;
loc_8322B77C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_8322B784"))) PPC_WEAK_FUNC(sub_8322B784);
PPC_FUNC_IMPL(__imp__sub_8322B784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322B788"))) PPC_WEAK_FUNC(sub_8322B788);
PPC_FUNC_IMPL(__imp__sub_8322B788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x8322B790;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r31,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r31.s64 = ctx.r9.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble 0x8322b7c8
	if (!ctx.cr0.gt) goto loc_8322B7C8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8322B7B0:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x83222610
	ctx.lr = 0x8322B7BC;
	sub_83222610(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bne 0x8322b7b0
	if (!ctx.cr0.eq) goto loc_8322B7B0;
loc_8322B7C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_8322B7D0"))) PPC_WEAK_FUNC(sub_8322B7D0);
PPC_FUNC_IMPL(__imp__sub_8322B7D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x8322B7D8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r31,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r31.s64 = ctx.r9.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble 0x8322b818
	if (!ctx.cr0.gt) goto loc_8322B818;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8322B7FC:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x83222688
	ctx.lr = 0x8322B80C;
	sub_83222688(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bne 0x8322b7fc
	if (!ctx.cr0.eq) goto loc_8322B7FC;
loc_8322B818:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_8322B820"))) PPC_WEAK_FUNC(sub_8322B820);
PPC_FUNC_IMPL(__imp__sub_8322B820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r8,r10,-4108
	ctx.r8.s64 = ctx.r10.s64 + -4108;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,27648(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27648);
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,-27852(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -27852);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r7,r8
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f13,f1,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f0.f64));
	// bl 0x8222c3e8
	ctx.lr = 0x8322B85C;
	sub_8222C3E8(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8322b7d0
	ctx.lr = 0x8322B874;
	sub_8322B7D0(ctx, base);
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

__attribute__((alias("__imp__sub_8322B888"))) PPC_WEAK_FUNC(sub_8322B888);
PPC_FUNC_IMPL(__imp__sub_8322B888) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8322b7d0
	sub_8322B7D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322B890"))) PPC_WEAK_FUNC(sub_8322B890);
PPC_FUNC_IMPL(__imp__sub_8322B890) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x8322B898;
	sub_82CA2BE4(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82ca7508
	ctx.lr = 0x8322B8A0;
	sub_82CA7508(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r10,r11,-27456
	ctx.r10.s64 = ctx.r11.s64 + -27456;
	// lwz r9,16(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r8,12(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// lfs f28,-12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	ctx.f28.f64 = double(temp.f32);
	// fmr f31,f28
	ctx.f31.f64 = ctx.f28.f64;
	// srawi. r11,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fmr f30,f28
	ctx.f30.f64 = ctx.f28.f64;
	// ble 0x8322ba04
	if (!ctx.cr0.gt) goto loc_8322BA04;
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f29,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8322B8E0:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// addi r3,r11,244
	ctx.r3.s64 = ctx.r11.s64 + 244;
	// lwz r11,248(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322b910
	if (ctx.cr6.eq) goto loc_8322B910;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8322b90c
	if (ctx.cr6.eq) goto loc_8322B90C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x8322b914
	goto loc_8322B914;
loc_8322B90C:
	// bl 0x821940c8
	ctx.lr = 0x8322B910;
	sub_821940C8(ctx, base);
loc_8322B910:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8322B914:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322b9dc
	if (ctx.cr6.eq) goto loc_8322B9DC;
loc_8322B920:
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8322B934;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8322b95c
	if (ctx.cr6.eq) goto loc_8322B95C;
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8322B950;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bne cr6,0x8322b960
	if (!ctx.cr6.eq) goto loc_8322B960;
loc_8322B95C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8322B960:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322b978
	if (ctx.cr6.eq) goto loc_8322B978;
	// lfs f0,412(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	ctx.f0.f64 = double(temp.f32);
	// fadds f31,f31,f29
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f29.f64));
	// fadds f30,f0,f30
	ctx.f30.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
loc_8322B978:
	// addi r31,r31,244
	ctx.r31.s64 = ctx.r31.s64 + 244;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322b9cc
	if (ctx.cr6.eq) goto loc_8322B9CC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8322b99c
	if (ctx.cr6.eq) goto loc_8322B99C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x8322b9d0
	goto loc_8322B9D0;
loc_8322B99C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8322b9c8
	if (!ctx.cr6.eq) goto loc_8322B9C8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8322b9c8
	if (!ctx.cr6.eq) goto loc_8322B9C8;
	// bl 0x8221be68
	ctx.lr = 0x8322B9C8;
	sub_8221BE68(ctx, base);
loc_8322B9C8:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_8322B9CC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8322B9D0:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8322b920
	if (!ctx.cr6.eq) goto loc_8322B920;
loc_8322B9DC:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x8322b8e0
	if (!ctx.cr0.eq) goto loc_8322B8E0;
	// fcmpu cr6,f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f28.f64);
	// ble cr6,0x8322ba04
	if (!ctx.cr6.gt) goto loc_8322BA04;
	// fdivs f1,f30,f31
	ctx.f1.f64 = double(float(ctx.f30.f64 / ctx.f31.f64));
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82ca7554
	ctx.lr = 0x8322BA00;
	sub_82CA7554(ctx, base);
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_8322BA04:
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82ca7554
	ctx.lr = 0x8322BA14;
	sub_82CA7554(ctx, base);
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_8322BA18"))) PPC_WEAK_FUNC(sub_8322BA18);
PPC_FUNC_IMPL(__imp__sub_8322BA18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x8322BA20;
	sub_82CA2BE4(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r11,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8322bb5c
	if (!ctx.cr0.gt) goto loc_8322BB5C;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8322BA50:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// addi r3,r11,244
	ctx.r3.s64 = ctx.r11.s64 + 244;
	// lwz r11,248(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322ba80
	if (ctx.cr6.eq) goto loc_8322BA80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8322ba7c
	if (ctx.cr6.eq) goto loc_8322BA7C;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x8322ba84
	goto loc_8322BA84;
loc_8322BA7C:
	// bl 0x821940c8
	ctx.lr = 0x8322BA80;
	sub_821940C8(ctx, base);
loc_8322BA80:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_8322BA84:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8322bb50
	if (ctx.cr6.eq) goto loc_8322BB50;
loc_8322BA8C:
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8322BAA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8322bac8
	if (ctx.cr6.eq) goto loc_8322BAC8;
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8322BABC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bne cr6,0x8322bacc
	if (!ctx.cr6.eq) goto loc_8322BACC;
loc_8322BAC8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8322BACC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8322BAEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,244
	ctx.r31.s64 = ctx.r31.s64 + 244;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322bb40
	if (ctx.cr6.eq) goto loc_8322BB40;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8322bb10
	if (ctx.cr6.eq) goto loc_8322BB10;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x8322bb44
	goto loc_8322BB44;
loc_8322BB10:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8322bb3c
	if (!ctx.cr6.eq) goto loc_8322BB3C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8322bb3c
	if (!ctx.cr6.eq) goto loc_8322BB3C;
	// bl 0x8221be68
	ctx.lr = 0x8322BB3C;
	sub_8221BE68(ctx, base);
loc_8322BB3C:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_8322BB40:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8322BB44:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8322ba8c
	if (!ctx.cr6.eq) goto loc_8322BA8C;
loc_8322BB50:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x8322ba50
	if (!ctx.cr0.eq) goto loc_8322BA50;
loc_8322BB5C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_8322BB68"))) PPC_WEAK_FUNC(sub_8322BB68);
PPC_FUNC_IMPL(__imp__sub_8322BB68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x8322BB70;
	sub_82CA2BE4(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// stfs f31,52(r28)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + 52, temp.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r11,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8322bca4
	if (!ctx.cr0.gt) goto loc_8322BCA4;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8322BBA4:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// addi r3,r11,244
	ctx.r3.s64 = ctx.r11.s64 + 244;
	// lwz r11,248(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322bbd4
	if (ctx.cr6.eq) goto loc_8322BBD4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8322bbd0
	if (ctx.cr6.eq) goto loc_8322BBD0;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x8322bbd8
	goto loc_8322BBD8;
loc_8322BBD0:
	// bl 0x821940c8
	ctx.lr = 0x8322BBD4;
	sub_821940C8(ctx, base);
loc_8322BBD4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8322BBD8:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322bc98
	if (ctx.cr6.eq) goto loc_8322BC98;
loc_8322BBE4:
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8322BBF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8322bc20
	if (ctx.cr6.eq) goto loc_8322BC20;
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8322BC14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bne cr6,0x8322bc24
	if (!ctx.cr6.eq) goto loc_8322BC24;
loc_8322BC20:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8322BC24:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322bc34
	if (ctx.cr6.eq) goto loc_8322BC34;
	// stfs f31,408(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 408, temp.u32);
loc_8322BC34:
	// addi r31,r31,244
	ctx.r31.s64 = ctx.r31.s64 + 244;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322bc88
	if (ctx.cr6.eq) goto loc_8322BC88;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8322bc58
	if (ctx.cr6.eq) goto loc_8322BC58;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x8322bc8c
	goto loc_8322BC8C;
loc_8322BC58:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8322bc84
	if (!ctx.cr6.eq) goto loc_8322BC84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8322bc84
	if (!ctx.cr6.eq) goto loc_8322BC84;
	// bl 0x8221be68
	ctx.lr = 0x8322BC84;
	sub_8221BE68(ctx, base);
loc_8322BC84:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_8322BC88:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8322BC8C:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8322bbe4
	if (!ctx.cr6.eq) goto loc_8322BBE4;
loc_8322BC98:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x8322bba4
	if (!ctx.cr0.eq) goto loc_8322BBA4;
loc_8322BCA4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_8322BCB0"))) PPC_WEAK_FUNC(sub_8322BCB0);
PPC_FUNC_IMPL(__imp__sub_8322BCB0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8322d308
	sub_8322D308(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322BCB4"))) PPC_WEAK_FUNC(sub_8322BCB4);
PPC_FUNC_IMPL(__imp__sub_8322BCB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322BCB8"))) PPC_WEAK_FUNC(sub_8322BCB8);
PPC_FUNC_IMPL(__imp__sub_8322BCB8) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r31,r30,24
	ctx.r31.s64 = ctx.r30.s64 + 24;
	// addi r10,r11,5380
	ctx.r10.s64 = ctx.r11.s64 + 5380;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8322bcf0
	if (ctx.cr6.eq) goto loc_8322BCF0;
	// bl 0x8221be68
	ctx.lr = 0x8322BCF0;
	sub_8221BE68(ctx, base);
loc_8322BCF0:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82356698
	ctx.lr = 0x8322BD08;
	sub_82356698(ctx, base);
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

__attribute__((alias("__imp__sub_8322BD20"))) PPC_WEAK_FUNC(sub_8322BD20);
PPC_FUNC_IMPL(__imp__sub_8322BD20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x8322BD28;
	sub_82CA2BD4(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// li r12,-128
	ctx.r12.s64 = -128;
	// stvx128 v126,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r12,-112
	ctx.r12.s64 = -112;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,12(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// vor128 v127,v1,v1
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// lwz r23,16(r3)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// vor128 v126,v2,v2
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_load_si128((__m128i*)ctx.v2.u8));
	// cmplw cr6,r27,r23
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x8322be90
	if (ctx.cr6.eq) goto loc_8322BE90;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r24,80
	ctx.r24.s64 = 80;
	// li r28,1
	ctx.r28.s64 = 1;
	// lis r25,-31950
	ctx.r25.s64 = -2093875200;
	// lfs f31,-27456(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27456);
	ctx.f31.f64 = double(temp.f32);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r26,r11,-28160
	ctx.r26.s64 = ctx.r11.s64 + -28160;
loc_8322BD78:
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lbz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 200);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8322be84
	if (!ctx.cr6.eq) goto loc_8322BE84;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r26
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r26.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stb r28,176(r31)
	PPC_STORE_U8(ctx.r31.u32 + 176, ctx.r28.u8);
	// lvlx v13,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vperm128 v12,v127,v13,v0
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v12,r31,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_8322BDA4:
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8322BDB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8322be24
	if (!ctx.cr6.eq) goto loc_8322BE24;
	// lbz r11,477(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 477);
	// stb r28,424(r31)
	PPC_STORE_U8(ctx.r31.u32 + 424, ctx.r28.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322be24
	if (ctx.cr6.eq) goto loc_8322BE24;
	// lbz r11,-31723(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + -31723);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322be24
	if (ctx.cr6.eq) goto loc_8322BE24;
	// lbz r11,425(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 425);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322be24
	if (ctx.cr6.eq) goto loc_8322BE24;
	// lwz r11,368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8322be14
	if (ctx.cr6.eq) goto loc_8322BE14;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8322be24
	if (!ctx.cr6.eq) goto loc_8322BE24;
	// vor128 v2,v126,v126
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v126.u8));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// vor128 v1,v127,v127
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// bl 0x82a01428
	ctx.lr = 0x8322BE10;
	sub_82A01428(ctx, base);
	// b 0x8322be24
	goto loc_8322BE24;
loc_8322BE14:
	// vor128 v2,v126,v126
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v126.u8));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// vor128 v1,v127,v127
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// bl 0x82a012d8
	ctx.lr = 0x8322BE24;
	sub_82A012D8(ctx, base);
loc_8322BE24:
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// addi r30,r31,244
	ctx.r30.s64 = ctx.r31.s64 + 244;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322be78
	if (ctx.cr6.eq) goto loc_8322BE78;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8322be48
	if (ctx.cr6.eq) goto loc_8322BE48;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x8322be7c
	goto loc_8322BE7C;
loc_8322BE48:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8322be74
	if (!ctx.cr6.eq) goto loc_8322BE74;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8322be74
	if (!ctx.cr6.eq) goto loc_8322BE74;
	// bl 0x8221be68
	ctx.lr = 0x8322BE74;
	sub_8221BE68(ctx, base);
loc_8322BE74:
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
loc_8322BE78:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_8322BE7C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8322bda4
	if (!ctx.cr6.eq) goto loc_8322BDA4;
loc_8322BE84:
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// cmplw cr6,r27,r23
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x8322bd78
	if (!ctx.cr6.eq) goto loc_8322BD78;
loc_8322BE90:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// li r0,-128
	ctx.r0.s64 = -128;
	// lvx128 v126,r1,r0
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r0,-112
	ctx.r0.s64 = -112;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_8322BEAC"))) PPC_WEAK_FUNC(sub_8322BEAC);
PPC_FUNC_IMPL(__imp__sub_8322BEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322BEB0"))) PPC_WEAK_FUNC(sub_8322BEB0);
PPC_FUNC_IMPL(__imp__sub_8322BEB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r10,r11,-7632
	ctx.r10.s64 = ctx.r11.s64 + -7632;
	// lvx128 v2,r0,r10
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x8322bd20
	sub_8322BD20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322BEC0"))) PPC_WEAK_FUNC(sub_8322BEC0);
PPC_FUNC_IMPL(__imp__sub_8322BEC0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r4.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x8322d988
	sub_8322D988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322BECC"))) PPC_WEAK_FUNC(sub_8322BECC);
PPC_FUNC_IMPL(__imp__sub_8322BECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322BED0"))) PPC_WEAK_FUNC(sub_8322BED0);
PPC_FUNC_IMPL(__imp__sub_8322BED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8322BED8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x82a1cb90
	ctx.lr = 0x8322BEF4;
	sub_82A1CB90(ctx, base);
	// lbz r11,56(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 56);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// xori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 ^ 1;
	// lwz r6,16(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stb r7,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r7.u8);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8322BF24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,60(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 60);
	// bl 0x82a1cb90
	ctx.lr = 0x8322BF30;
	sub_82A1CB90(ctx, base);
	// lwz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwz r5,16(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r4,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r4.s64;
	// srawi r30,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r30.s64 = ctx.r11.s32 >> 3;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a1cb90
	ctx.lr = 0x8322BF4C;
	sub_82A1CB90(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x823d2790
	ctx.lr = 0x8322BF54;
	sub_823D2790(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x8322bfec
	if (!ctx.cr6.gt) goto loc_8322BFEC;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8322BF64:
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// lbz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwzx r9,r29,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// beq cr6,0x8322bf9c
	if (ctx.cr6.eq) goto loc_8322BF9C;
	// lbz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// lbz r10,89(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// lbz r9,91(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 91);
	// lbz r8,90(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 90);
	// stb r11,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r11.u8);
	// stb r10,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r10.u8);
	// stb r9,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r9.u8);
	// stb r8,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r8.u8);
loc_8322BF9C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8322BFB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,12(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r9,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r28.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8322BFDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// bne 0x8322bf64
	if (!ctx.cr0.eq) goto loc_8322BF64;
loc_8322BFEC:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x8233e380
	ctx.lr = 0x8322C020;
	sub_8233E380(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x8221be68
	ctx.lr = 0x8322C028;
	sub_8221BE68(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8322C030"))) PPC_WEAK_FUNC(sub_8322C030);
PPC_FUNC_IMPL(__imp__sub_8322C030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x8322C038;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r24,r11,63
	ctx.r24.s64 = ctx.r11.s64 + 63;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r11,-7660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7660);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322c068
	if (ctx.cr6.eq) goto loc_8322C068;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8322C068:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8322C07C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8322c214
	if (ctx.cr6.eq) goto loc_8322C214;
	// lis r31,-31926
	ctx.r31.s64 = -2092302336;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r11,-7652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7652);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322c0a0
	if (ctx.cr6.eq) goto loc_8322C0A0;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8322C0A0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8322C0B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8322c0fc
	if (ctx.cr6.eq) goto loc_8322C0FC;
	// lwz r11,-7652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7652);
	// li r10,5
	ctx.r10.s64 = 5;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322c0dc
	if (ctx.cr6.eq) goto loc_8322C0DC;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8322C0DC:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825cbb08
	ctx.lr = 0x8322C0E8;
	sub_825CBB08(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8322C0FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8322C0FC:
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r5,r27,56
	ctx.r5.s64 = ctx.r27.s64 + 56;
	// addi r3,r11,-7648
	ctx.r3.s64 = ctx.r11.s64 + -7648;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8322ed88
	ctx.lr = 0x8322C110;
	sub_8322ED88(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// lwz r9,60(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 60);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r11,-7644(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7644);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322c130
	if (ctx.cr6.eq) goto loc_8322C130;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8322C130:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82395be0
	ctx.lr = 0x8322C13C;
	sub_82395BE0(ctx, base);
	// lwz r10,16(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r9,12(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r7,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// lwz r11,-7656(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7656);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322c168
	if (ctx.cr6.eq) goto loc_8322C168;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8322C168:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825cbb08
	ctx.lr = 0x8322C174;
	sub_825CBB08(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823d2790
	ctx.lr = 0x8322C17C;
	sub_823D2790(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8322c1f8
	if (!ctx.cr6.gt) goto loc_8322C1F8;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r26,-31926
	ctx.r26.s64 = -2092302336;
loc_8322C198:
	// lwz r10,28(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r11,-7640(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -7640);
	// add r5,r10,r31
	ctx.r5.u64 = ctx.r10.u64 + ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322c1b4
	if (ctx.cr6.eq) goto loc_8322C1B4;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8322C1B4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825cbb08
	ctx.lr = 0x8322C1BC;
	sub_825CBB08(ctx, base);
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8322C1E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmpw cr6,r29,r8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8322c198
	if (ctx.cr6.lt) goto loc_8322C198;
loc_8322C1F8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8322C20C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233dd70
	ctx.lr = 0x8322C214;
	sub_8233DD70(ctx, base);
loc_8322C214:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_8322C21C"))) PPC_WEAK_FUNC(sub_8322C21C);
PPC_FUNC_IMPL(__imp__sub_8322C21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322C220"))) PPC_WEAK_FUNC(sub_8322C220);
PPC_FUNC_IMPL(__imp__sub_8322C220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x8322C228;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x82480ad0
	ctx.lr = 0x8322C244;
	sub_82480AD0(ctx, base);
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r28,88(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// cmplw cr6,r27,r28
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8322c2d0
	if (ctx.cr6.eq) goto loc_8322C2D0;
	// li r29,1
	ctx.r29.s64 = 1;
loc_8322C25C:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8322C274;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// rlwinm r6,r7,0,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8322c2c4
	if (!ctx.cr6.gt) goto loc_8322C2C4;
	// lwz r11,368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8322c2bc
	if (ctx.cr6.eq) goto loc_8322C2BC;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8322c2bc
	if (ctx.cr6.eq) goto loc_8322C2BC;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8322c2c4
	if (!ctx.cr6.eq) goto loc_8322C2C4;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// stb r29,41(r11)
	PPC_STORE_U8(ctx.r11.u32 + 41, ctx.r29.u8);
	// b 0x8322c2c4
	goto loc_8322C2C4;
loc_8322C2BC:
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// stb r29,53(r11)
	PPC_STORE_U8(ctx.r11.u32 + 53, ctx.r29.u8);
loc_8322C2C4:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8322c25c
	if (!ctx.cr6.eq) goto loc_8322C25C;
loc_8322C2D0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8322c2e0
	if (ctx.cr6.eq) goto loc_8322C2E0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8221be68
	ctx.lr = 0x8322C2E0;
	sub_8221BE68(ctx, base);
loc_8322C2E0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_8322C2E8"))) PPC_WEAK_FUNC(sub_8322C2E8);
PPC_FUNC_IMPL(__imp__sub_8322C2E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x8322C2F0;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// stw r5,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r5.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x83222b80
	ctx.lr = 0x8322C308;
	sub_83222B80(ctx, base);
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// addi r26,r27,8
	ctx.r26.s64 = ctx.r27.s64 + 8;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// srawi. r28,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r28.s64 = ctx.r9.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble 0x8322c37c
	if (!ctx.cr0.gt) goto loc_8322C37C;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_8322C330:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r3,r11,244
	ctx.r3.s64 = ctx.r11.s64 + 244;
	// lwz r11,248(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322c360
	if (ctx.cr6.eq) goto loc_8322C360;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8322c35c
	if (ctx.cr6.eq) goto loc_8322C35C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x8322c364
	goto loc_8322C364;
loc_8322C35C:
	// bl 0x821940c8
	ctx.lr = 0x8322C360;
	sub_821940C8(ctx, base);
loc_8322C360:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8322C364:
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8322c444
	if (ctx.cr6.eq) goto loc_8322C444;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x8322c330
	if (ctx.cr6.lt) goto loc_8322C330;
loc_8322C37C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8322c3e8
	if (ctx.cr6.eq) goto loc_8322C3E8;
loc_8322C384:
	// lwz r11,248(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 248);
	// addi r31,r29,244
	ctx.r31.s64 = ctx.r29.s64 + 244;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322c3d8
	if (ctx.cr6.eq) goto loc_8322C3D8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8322c3a8
	if (ctx.cr6.eq) goto loc_8322C3A8;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x8322c3dc
	goto loc_8322C3DC;
loc_8322C3A8:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8322c3d4
	if (!ctx.cr6.eq) goto loc_8322C3D4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8322c3d4
	if (!ctx.cr6.eq) goto loc_8322C3D4;
	// bl 0x8221be68
	ctx.lr = 0x8322C3D4;
	sub_8221BE68(ctx, base);
loc_8322C3D4:
	// stw r25,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r25.u32);
loc_8322C3D8:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8322C3DC:
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8322c384
	if (!ctx.cr6.eq) goto loc_8322C384;
loc_8322C3E8:
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,-7304(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7304);
	// bl 0x832254b8
	ctx.lr = 0x8322C3F8;
	sub_832254B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x83223b10
	ctx.lr = 0x8322C408;
	sub_83223B10(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x8322C410;
	sub_829FF648(ctx, base);
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x83222b80
	ctx.lr = 0x8322C418;
	sub_83222B80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83222be0
	ctx.lr = 0x8322C424;
	sub_83222BE0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x829fd7b8
	ctx.lr = 0x8322C430;
	sub_829FD7B8(ctx, base);
	// addi r4,r1,212
	ctx.r4.s64 = ctx.r1.s64 + 212;
	// addi r3,r27,24
	ctx.r3.s64 = ctx.r27.s64 + 24;
	// bl 0x8235e148
	ctx.lr = 0x8322C43C;
	sub_8235E148(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x8322C444;
	sub_829FF648(ctx, base);
loc_8322C444:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_8322C44C"))) PPC_WEAK_FUNC(sub_8322C44C);
PPC_FUNC_IMPL(__imp__sub_8322C44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322C450"))) PPC_WEAK_FUNC(sub_8322C450);
PPC_FUNC_IMPL(__imp__sub_8322C450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x8322C458;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x8322c4c0
	if (ctx.cr6.lt) goto loc_8322C4C0;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r4,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r4.u8);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stb r3,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r3.u8);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, ctx.r11.u8);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// b 0x8322c4d0
	goto loc_8322C4D0;
loc_8322C4C0:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1b480
	ctx.lr = 0x8322C4D0;
	sub_82A1B480(ctx, base);
loc_8322C4D0:
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lbz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// beq cr6,0x8322c508
	if (ctx.cr6.eq) goto loc_8322C508;
	// lbz r8,99(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 99);
	// lbz r10,89(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// lbz r9,90(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 90);
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// stb r8,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r8.u8);
	// stb r10,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r10.u8);
	// stb r9,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r9.u8);
	// stb r11,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r11.u8);
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_8322C508:
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x8322c570
	if (ctx.cr6.lt) goto loc_8322C570;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x8322c54c
	if (ctx.cr6.lt) goto loc_8322C54C;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// b 0x8322c55c
	goto loc_8322C55C;
loc_8322C54C:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1b480
	ctx.lr = 0x8322C55C;
	sub_82A1B480(ctx, base);
loc_8322C55C:
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 ^ 1;
	// stb r7,56(r26)
	PPC_STORE_U8(ctx.r26.u32 + 56, ctx.r7.u8);
loc_8322C570:
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 5, ctx.xer);
	// blt cr6,0x8322c618
	if (ctx.cr6.lt) goto loc_8322C618;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x8322c5cc
	if (ctx.cr6.lt) goto loc_8322C5CC;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r4,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r4.u8);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stb r3,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r3.u8);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, ctx.r11.u8);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// b 0x8322c5dc
	goto loc_8322C5DC;
loc_8322C5CC:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1b480
	ctx.lr = 0x8322C5DC;
	sub_82A1B480(ctx, base);
loc_8322C5DC:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// beq cr6,0x8322c610
	if (ctx.cr6.eq) goto loc_8322C610;
	// lbz r11,89(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// lbz r10,90(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 90);
	// lbz r9,103(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 103);
	// lbz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 100);
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// stb r10,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r10.u8);
	// stb r9,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r9.u8);
	// stb r8,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r8.u8);
loc_8322C610:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,60(r26)
	PPC_STORE_U32(ctx.r26.u32 + 60, ctx.r11.u32);
loc_8322C618:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x8322c66c
	if (ctx.cr6.lt) goto loc_8322C66C;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r4,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r4.u8);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stb r3,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r3.u8);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, ctx.r11.u8);
	// b 0x8322c67c
	goto loc_8322C67C;
loc_8322C66C:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1b480
	ctx.lr = 0x8322C67C;
	sub_82A1B480(ctx, base);
loc_8322C67C:
	// lwz r30,104(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lbz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// beq cr6,0x8322c6b4
	if (ctx.cr6.eq) goto loc_8322C6B4;
	// lbz r11,89(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// lbz r10,90(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 90);
	// lbz r9,107(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 107);
	// lbz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 104);
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// stb r10,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r10.u8);
	// stb r9,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r9.u8);
	// stb r8,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r8.u8);
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_8322C6B4:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8246c600
	ctx.lr = 0x8322C6BC;
	sub_8246C600(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x8322c7e8
	if (!ctx.cr6.gt) goto loc_8322C7E8;
	// addi r29,r26,24
	ctx.r29.s64 = ctx.r26.s64 + 24;
	// addi r28,r26,8
	ctx.r28.s64 = ctx.r26.s64 + 8;
	// lis r27,-31926
	ctx.r27.s64 = -2092302336;
loc_8322C6D0:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x8322c724
	if (ctx.cr6.lt) goto loc_8322C724;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r8,r1,108
	ctx.r8.s64 = ctx.r1.s64 + 108;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r4,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r4.u8);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stb r3,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r3.u8);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, ctx.r11.u8);
	// b 0x8322c734
	goto loc_8322C734;
loc_8322C724:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1b480
	ctx.lr = 0x8322C734;
	sub_82A1B480(ctx, base);
loc_8322C734:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// beq cr6,0x8322c768
	if (ctx.cr6.eq) goto loc_8322C768;
	// lbz r11,89(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// lbz r10,90(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 90);
	// lbz r9,111(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 111);
	// lbz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 108);
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// stb r10,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r10.u8);
	// stb r9,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r9.u8);
	// stb r8,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r8.u8);
loc_8322C768:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x8235e148
	ctx.lr = 0x8322C77C;
	sub_8235E148(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r4,-7304(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + -7304);
	// bl 0x832254b8
	ctx.lr = 0x8322C788;
	sub_832254B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x83223b10
	ctx.lr = 0x8322C798;
	sub_83223B10(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x829ff648
	ctx.lr = 0x8322C7A0;
	sub_829FF648(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8322C7CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x829fd7b8
	ctx.lr = 0x8322C7D8;
	sub_829FD7B8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x829ff648
	ctx.lr = 0x8322C7E0;
	sub_829FF648(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8322c6d0
	if (!ctx.cr0.eq) goto loc_8322C6D0;
loc_8322C7E8:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8322b710
	ctx.lr = 0x8322C7F8;
	sub_8322B710(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// ld r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x8246e8b0
	ctx.lr = 0x8322C82C;
	sub_8246E8B0(ctx, base);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x8221be68
	ctx.lr = 0x8322C834;
	sub_8221BE68(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_8322C83C"))) PPC_WEAK_FUNC(sub_8322C83C);
PPC_FUNC_IMPL(__imp__sub_8322C83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322C840"))) PPC_WEAK_FUNC(sub_8322C840);
PPC_FUNC_IMPL(__imp__sub_8322C840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bcc
	ctx.lr = 0x8322C848;
	sub_82CA2BCC(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r21,r11,63
	ctx.r21.s64 = ctx.r11.s64 + 63;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r11,-7660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7660);
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// beq cr6,0x8322c87c
	if (ctx.cr6.eq) goto loc_8322C87C;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8322C87C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8322C890;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8322ca7c
	if (ctx.cr6.eq) goto loc_8322CA7C;
	// lis r29,-31926
	ctx.r29.s64 = -2092302336;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r11,-7652(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -7652);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322c8b4
	if (ctx.cr6.eq) goto loc_8322C8B4;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8322C8B4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8322C8C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8322c910
	if (ctx.cr6.eq) goto loc_8322C910;
	// lwz r11,-7652(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -7652);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322c8f0
	if (ctx.cr6.eq) goto loc_8322C8F0;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8322C8F0:
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825cbb08
	ctx.lr = 0x8322C8FC;
	sub_825CBB08(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8322C910;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8322C910:
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r5,r26,56
	ctx.r5.s64 = ctx.r26.s64 + 56;
	// addi r3,r11,-7648
	ctx.r3.s64 = ctx.r11.s64 + -7648;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8322ed88
	ctx.lr = 0x8322C924;
	sub_8322ED88(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r11,-7644(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7644);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322c940
	if (ctx.cr6.eq) goto loc_8322C940;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8322C940:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82395be0
	ctx.lr = 0x8322C94C;
	sub_82395BE0(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// stw r10,60(r26)
	PPC_STORE_U32(ctx.r26.u32 + 60, ctx.r10.u32);
	// lwz r11,-7656(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7656);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322c96c
	if (ctx.cr6.eq) goto loc_8322C96C;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8322C96C:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825cbb08
	ctx.lr = 0x8322C978;
	sub_825CBB08(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8246c600
	ctx.lr = 0x8322C980;
	sub_8246C600(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8322ca44
	if (!ctx.cr6.gt) goto loc_8322CA44;
	// addi r28,r26,24
	ctx.r28.s64 = ctx.r26.s64 + 24;
	// addi r27,r26,8
	ctx.r27.s64 = ctx.r26.s64 + 8;
	// li r24,3
	ctx.r24.s64 = 3;
	// lis r29,-31926
	ctx.r29.s64 = -2092302336;
	// lis r25,-31926
	ctx.r25.s64 = -2092302336;
loc_8322C9A0:
	// lwz r11,-7640(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -7640);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322c9b8
	if (ctx.cr6.eq) goto loc_8322C9B8;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8322C9B8:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825cbb08
	ctx.lr = 0x8322C9C4;
	sub_825CBB08(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8235e148
	ctx.lr = 0x8322C9D0;
	sub_8235E148(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,-7304(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -7304);
	// bl 0x832254b8
	ctx.lr = 0x8322C9DC;
	sub_832254B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x83223b10
	ctx.lr = 0x8322C9EC;
	sub_83223B10(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x829ff648
	ctx.lr = 0x8322C9F4;
	sub_829FF648(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8322CA20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x829fd7b8
	ctx.lr = 0x8322CA2C;
	sub_829FD7B8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x8322CA34;
	sub_829FF648(ctx, base);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8322c9a0
	if (ctx.cr6.lt) goto loc_8322C9A0;
loc_8322CA44:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8322CA58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8322b710
	ctx.lr = 0x8322CA68;
	sub_8322B710(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f0,-8700(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8700);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 48, temp.u32);
	// bl 0x8246c798
	ctx.lr = 0x8322CA7C;
	sub_8246C798(ctx, base);
loc_8322CA7C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c1c
	// ERROR 82CA2C1C
	return;
}

__attribute__((alias("__imp__sub_8322CA84"))) PPC_WEAK_FUNC(sub_8322CA84);
PPC_FUNC_IMPL(__imp__sub_8322CA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322CA88"))) PPC_WEAK_FUNC(sub_8322CA88);
PPC_FUNC_IMPL(__imp__sub_8322CA88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb8
	ctx.lr = 0x8322CA90;
	sub_82CA2BB8(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r8,r10,-27456
	ctx.r8.s64 = ctx.r10.s64 + -27456;
	// addi r7,r9,5380
	ctx.r7.s64 = ctx.r9.s64 + 5380;
	// li r20,0
	ctx.r20.s64 = 0;
	// stw r7,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r7.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r20,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r20.u32);
	// lfs f0,-27456(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27456);
	ctx.f0.f64 = double(temp.f32);
	// stw r20,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r20.u32);
	// lfs f13,18756(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 18756);
	ctx.f13.f64 = double(temp.f32);
	// stw r20,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r20.u32);
	// stw r20,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r20.u32);
	// stw r20,28(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28, ctx.r20.u32);
	// stw r20,32(r27)
	PPC_STORE_U32(ctx.r27.u32 + 32, ctx.r20.u32);
	// stw r20,36(r27)
	PPC_STORE_U32(ctx.r27.u32 + 36, ctx.r20.u32);
	// stfs f13,48(r27)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r27.u32 + 48, temp.u32);
	// stfs f0,52(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 52, temp.u32);
	// stw r20,40(r27)
	PPC_STORE_U32(ctx.r27.u32 + 40, ctx.r20.u32);
	// stfs f0,68(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 68, temp.u32);
	// stw r11,44(r27)
	PPC_STORE_U32(ctx.r27.u32 + 44, ctx.r11.u32);
	// stb r20,56(r27)
	PPC_STORE_U8(ctx.r27.u32 + 56, ctx.r20.u8);
	// stw r20,60(r27)
	PPC_STORE_U32(ctx.r27.u32 + 60, ctx.r20.u32);
	// stw r11,64(r27)
	PPC_STORE_U32(ctx.r27.u32 + 64, ctx.r11.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322cd0c
	if (ctx.cr6.eq) goto loc_8322CD0C;
	// lbz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28);
	// li r16,20
	ctx.r16.s64 = 20;
	// mr r17,r20
	ctx.r17.u64 = ctx.r20.u64;
	// stb r11,56(r27)
	PPC_STORE_U8(ctx.r27.u32 + 56, ctx.r11.u8);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// stw r9,60(r27)
	PPC_STORE_U32(ctx.r27.u32 + 60, ctx.r9.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r18,r11,12
	ctx.r18.s64 = ctx.r11.s64 + 12;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r8,8(r18)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// divw. r6,r7,r16
	ctx.r6.s32 = ctx.r7.s32 / ctx.r16.s32;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble 0x8322ccfc
	if (!ctx.cr0.gt) goto loc_8322CCFC;
	// mr r19,r20
	ctx.r19.u64 = ctx.r20.u64;
	// li r21,12
	ctx.r21.s64 = 12;
loc_8322CB44:
	// add r25,r19,r11
	ctx.r25.u64 = ctx.r19.u64 + ctx.r11.u64;
	// mr r24,r20
	ctx.r24.u64 = ctx.r20.u64;
	// mr r22,r20
	ctx.r22.u64 = ctx.r20.u64;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// mr r23,r20
	ctx.r23.u64 = ctx.r20.u64;
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw. r8,r9,r21
	ctx.r8.s32 = ctx.r9.s32 / ctx.r21.s32;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble 0x8322ccd4
	if (!ctx.cr0.gt) goto loc_8322CCD4;
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
loc_8322CB78:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwzx r4,r26,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// add r28,r26,r11
	ctx.r28.u64 = ctx.r26.u64 + ctx.r11.u64;
	// bl 0x832254b8
	ctx.lr = 0x8322CB88;
	sub_832254B8(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8322CB9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bne cr6,0x8322cc08
	if (!ctx.cr6.eq) goto loc_8322CC08;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83224138
	ctx.lr = 0x8322CBBC;
	sub_83224138(ctx, base);
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r22,r31
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8322cbf8
	if (ctx.cr6.eq) goto loc_8322CBF8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x8322CBD4;
	sub_829FF648(ctx, base);
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
	// mr r22,r31
	ctx.r22.u64 = ctx.r31.u64;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// beq cr6,0x8322cbf8
	if (ctx.cr6.eq) goto loc_8322CBF8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8322CBF8:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x829ff648
	ctx.lr = 0x8322CC00;
	sub_829FF648(ctx, base);
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// b 0x8322cc28
	goto loc_8322CC28;
loc_8322CC08:
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x83224138
	ctx.lr = 0x8322CC10;
	sub_83224138(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,120(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83222be0
	ctx.lr = 0x8322CC20;
	sub_83222BE0(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x829ff648
	ctx.lr = 0x8322CC28;
	sub_829FF648(ctx, base);
loc_8322CC28:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// beq cr6,0x8322cd18
	if (ctx.cr6.eq) goto loc_8322CD18;
	// cmpwi cr6,r29,9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 9, ctx.xer);
	// beq cr6,0x8322cd18
	if (ctx.cr6.eq) goto loc_8322CD18;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x8322cd58
	if (!ctx.cr6.eq) goto loc_8322CD58;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8322cc80
	if (ctx.cr6.eq) goto loc_8322CC80;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x83225920
	ctx.lr = 0x8322CC54;
	sub_83225920(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322cc78
	if (ctx.cr6.eq) goto loc_8322CC78;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8322CC78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8322CC78:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x829ff648
	ctx.lr = 0x8322CC80;
	sub_829FF648(ctx, base);
loc_8322CC80:
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8322ccb4
	if (ctx.cr6.eq) goto loc_8322CCB4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83225920
	ctx.lr = 0x8322CC94;
	sub_83225920(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322ccac
	if (ctx.cr6.eq) goto loc_8322CCAC;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83229cf0
	ctx.lr = 0x8322CCAC;
	sub_83229CF0(ctx, base);
loc_8322CCAC:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x829ff648
	ctx.lr = 0x8322CCB4;
	sub_829FF648(ctx, base);
loc_8322CCB4:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x8322CCBC;
	sub_829FF648(ctx, base);
loc_8322CCBC:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8322ccd4
	if (ctx.cr6.eq) goto loc_8322CCD4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,16(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8322c2e8
	ctx.lr = 0x8322CCD4;
	sub_8322C2E8(ctx, base);
loc_8322CCD4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x8322CCDC;
	sub_829FF648(ctx, base);
	// lwz r11,4(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// lwz r10,8(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// addi r19,r19,20
	ctx.r19.s64 = ctx.r19.s64 + 20;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r16
	ctx.r8.s32 = ctx.r9.s32 / ctx.r16.s32;
	// cmpw cr6,r17,r8
	ctx.cr6.compare<int32_t>(ctx.r17.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8322cb44
	if (ctx.cr6.lt) goto loc_8322CB44;
loc_8322CCFC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8322b710
	ctx.lr = 0x8322CD0C;
	sub_8322B710(ctx, base);
loc_8322CD0C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82ca2c08
	// ERROR 82CA2C08
	return;
loc_8322CD18:
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8322cd58
	if (ctx.cr6.eq) goto loc_8322CD58;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83225920
	ctx.lr = 0x8322CD2C;
	sub_83225920(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322cd50
	if (ctx.cr6.eq) goto loc_8322CD50;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8322CD50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8322CD50:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x8322CD58;
	sub_829FF648(ctx, base);
loc_8322CD58:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// beq cr6,0x8322ccb4
	if (ctx.cr6.eq) goto loc_8322CCB4;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8322ccb4
	if (ctx.cr6.eq) goto loc_8322CCB4;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x8322CD70;
	sub_829FF648(ctx, base);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r26,r26,12
	ctx.r26.s64 = ctx.r26.s64 + 12;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r21
	ctx.r8.s32 = ctx.r9.s32 / ctx.r21.s32;
	// cmpw cr6,r23,r8
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8322cb78
	if (ctx.cr6.lt) goto loc_8322CB78;
	// b 0x8322ccbc
	goto loc_8322CCBC;
}

__attribute__((alias("__imp__sub_8322CD94"))) PPC_WEAK_FUNC(sub_8322CD94);
PPC_FUNC_IMPL(__imp__sub_8322CD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322CD98"))) PPC_WEAK_FUNC(sub_8322CD98);
PPC_FUNC_IMPL(__imp__sub_8322CD98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-31946
	ctx.r9.s64 = -2093613056;
	// addi r8,r10,-19232
	ctx.r8.s64 = ctx.r10.s64 + -19232;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r6,r9,-4108
	ctx.r6.s64 = ctx.r9.s64 + -4108;
	// lfs f9,-19232(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -19232);
	ctx.f9.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,3
	ctx.r10.s64 = 3;
	// lfs f13,-8668(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -8668);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2948(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2948);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,-8224(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -8224);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,44(r6)
	PPC_STORE_U32(ctx.r6.u32 + 44, ctx.r11.u32);
	// lfs f11,10996(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 10996);
	ctx.f11.f64 = double(temp.f32);
	// stw r10,48(r6)
	PPC_STORE_U32(ctx.r6.u32 + 48, ctx.r10.u32);
	// lfs f10,-8108(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -8108);
	ctx.f10.f64 = double(temp.f32);
	// stfs f13,32(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 32, temp.u32);
	// stfs f0,36(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 36, temp.u32);
	// stfs f12,40(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 40, temp.u32);
	// stfs f10,-4108(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + -4108, temp.u32);
	// stfs f11,8(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// stfs f11,16(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 16, temp.u32);
	// stfs f9,24(r6)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r6.u32 + 24, temp.u32);
	// stfs f13,4(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// stfs f0,12(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// stfs f0,20(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 20, temp.u32);
	// stfs f12,28(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 28, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322CE04"))) PPC_WEAK_FUNC(sub_8322CE04);
PPC_FUNC_IMPL(__imp__sub_8322CE04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322CE08"))) PPC_WEAK_FUNC(sub_8322CE08);
PPC_FUNC_IMPL(__imp__sub_8322CE08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r10,r11,-1124
	ctx.r10.s64 = ctx.r11.s64 + -1124;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322CE18"))) PPC_WEAK_FUNC(sub_8322CE18);
PPC_FUNC_IMPL(__imp__sub_8322CE18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x8322CE20;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r27,12(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// lwz r11,16(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8322cf3c
	if (ctx.cr6.eq) goto loc_8322CF3C;
	// li r25,0
	ctx.r25.s64 = 0;
loc_8322CE40:
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// beq cr6,0x8322ce74
	if (ctx.cr6.eq) goto loc_8322CE74;
loc_8322CE58:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwcx. r9,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8322ce58
	if (!ctx.cr0.eq) goto loc_8322CE58;
loc_8322CE74:
	// lwz r29,40(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r28,44(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8322cf24
	if (ctx.cr6.eq) goto loc_8322CF24;
loc_8322CE84:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r31,r30,216
	ctx.r31.s64 = ctx.r30.s64 + 216;
	// lwz r11,224(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// lwz r10,220(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r8,r9,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8322cf18
	if (ctx.cr6.eq) goto loc_8322CF18;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8322cf18
	if (ctx.cr6.eq) goto loc_8322CF18;
loc_8322CEBC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8322cf04
	if (!ctx.cr6.eq) goto loc_8322CF04;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r3,4
	ctx.r5.s64 = ctx.r3.s64 + 4;
	// subf r10,r5,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r5.s64;
	// srawi. r11,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8322cee8
	if (!ctx.cr0.gt) goto loc_8322CEE8;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// bl 0x82ca3808
	ctx.lr = 0x8322CEE8;
	sub_82CA3808(ctx, base);
loc_8322CEE8:
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// b 0x8322cf0c
	goto loc_8322CF0C;
loc_8322CF04:
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
loc_8322CF0C:
	// lwz r11,224(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8322cebc
	if (!ctx.cr6.eq) goto loc_8322CEBC;
loc_8322CF18:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8322ce84
	if (!ctx.cr6.eq) goto loc_8322CE84;
loc_8322CF24:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x8322CF2C;
	sub_829FF648(ctx, base);
	// lwz r11,16(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8322ce40
	if (!ctx.cr6.eq) goto loc_8322CE40;
loc_8322CF3C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_8322CF44"))) PPC_WEAK_FUNC(sub_8322CF44);
PPC_FUNC_IMPL(__imp__sub_8322CF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322CF48"))) PPC_WEAK_FUNC(sub_8322CF48);
PPC_FUNC_IMPL(__imp__sub_8322CF48) {
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
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8322cff8
	if (ctx.cr6.eq) goto loc_8322CFF8;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8322cff8
	if (!ctx.cr6.eq) goto loc_8322CFF8;
	// lwz r31,40(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,176(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 176);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8322cfb4
	if (!ctx.cr6.eq) goto loc_8322CFB4;
	// lwz r10,208(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// lwz r8,184(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// lwz r7,176(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 176);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8322cfb4
	if (!ctx.cr6.eq) goto loc_8322CFB4;
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// lwz r10,172(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 172);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x8322cfb8
	if (ctx.cr6.eq) goto loc_8322CFB8;
loc_8322CFB4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8322CFB8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322cff8
	if (ctx.cr6.eq) goto loc_8322CFF8;
	// lwz r11,44(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8322cff8
	if (ctx.cr6.eq) goto loc_8322CFF8;
loc_8322CFD0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8322CFE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// cmplw cr6,r31,r8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8322cfd0
	if (!ctx.cr6.eq) goto loc_8322CFD0;
loc_8322CFF8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829ff648
	ctx.lr = 0x8322D000;
	sub_829FF648(ctx, base);
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

__attribute__((alias("__imp__sub_8322D018"))) PPC_WEAK_FUNC(sub_8322D018);
PPC_FUNC_IMPL(__imp__sub_8322D018) {
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
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8322d08c
	if (!ctx.cr6.eq) goto loc_8322D08C;
	// stb r10,17(r11)
	PPC_STORE_U8(ctx.r11.u32 + 17, ctx.r10.u8);
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,28(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// lwz r31,40(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 40);
	// lwz r7,44(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	// cmplw cr6,r31,r7
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r7.u32, ctx.xer);
	// stw r11,27644(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27644, ctx.r11.u32);
	// beq cr6,0x8322d08c
	if (ctx.cr6.eq) goto loc_8322D08C;
loc_8322D064:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8322D078;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// cmplw cr6,r31,r8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8322d064
	if (!ctx.cr6.eq) goto loc_8322D064;
loc_8322D08C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829ff648
	ctx.lr = 0x8322D094;
	sub_829FF648(ctx, base);
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

__attribute__((alias("__imp__sub_8322D0AC"))) PPC_WEAK_FUNC(sub_8322D0AC);
PPC_FUNC_IMPL(__imp__sub_8322D0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322D0B0"))) PPC_WEAK_FUNC(sub_8322D0B0);
PPC_FUNC_IMPL(__imp__sub_8322D0B0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8322D0D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x8322d130
	if (ctx.cr6.lt) goto loc_8322D130;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r4,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r4.u8);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stb r3,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r3.u8);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, ctx.r11.u8);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// b 0x8322d140
	goto loc_8322D140;
loc_8322D130:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1b480
	ctx.lr = 0x8322D140;
	sub_82A1B480(ctx, base);
loc_8322D140:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x8322d174
	if (ctx.cr6.eq) goto loc_8322D174;
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r9,87(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// lbz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
loc_8322D174:
	// lis r11,-17747
	ctx.r11.s64 = -1163067392;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ori r9,r11,61453
	ctx.r9.u64 = ctx.r11.u64 | 61453;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8322d280
	if (!ctx.cr6.eq) goto loc_8322D280;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x8322d1dc
	if (ctx.cr6.lt) goto loc_8322D1DC;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r4,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r4.u8);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stb r3,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r3.u8);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, ctx.r11.u8);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// b 0x8322d1ec
	goto loc_8322D1EC;
loc_8322D1DC:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1b480
	ctx.lr = 0x8322D1EC;
	sub_82A1B480(ctx, base);
loc_8322D1EC:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x8322d220
	if (ctx.cr6.eq) goto loc_8322D220;
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r9,91(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 91);
	// lbz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
loc_8322D220:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8322d2ec
	if (ctx.cr6.lt) goto loc_8322D2EC;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x8322d29c
	if (ctx.cr6.lt) goto loc_8322D29C;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r4,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r4.u8);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stb r3,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r3.u8);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, ctx.r11.u8);
	// b 0x8322d2ac
	goto loc_8322D2AC;
loc_8322D280:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8322D298;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8322d2ec
	goto loc_8322D2EC;
loc_8322D29C:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1b480
	ctx.lr = 0x8322D2AC;
	sub_82A1B480(ctx, base);
loc_8322D2AC:
	// lbz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322d2e0
	if (ctx.cr6.eq) goto loc_8322D2E0;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r9,83(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// stb r10,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
loc_8322D2E0:
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-29480(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -29480, temp.u32);
loc_8322D2EC:
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

__attribute__((alias("__imp__sub_8322D304"))) PPC_WEAK_FUNC(sub_8322D304);
PPC_FUNC_IMPL(__imp__sub_8322D304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322D308"))) PPC_WEAK_FUNC(sub_8322D308);
PPC_FUNC_IMPL(__imp__sub_8322D308) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x8322D310;
	sub_82CA2BD8(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82ca7508
	ctx.lr = 0x8322D318;
	sub_82CA7508(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// lwz r10,44(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 44);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x8322d598
	if (ctx.cr6.lt) goto loc_8322D598;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// fmuls f28,f29,f29
	ctx.f28.f64 = double(float(ctx.f29.f64 * ctx.f29.f64));
	// mulli r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 * 28;
	// addi r26,r11,-7808
	ctx.r26.s64 = ctx.r11.s64 + -7808;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r27,r11,368
	ctx.r27.s64 = ctx.r11.s64 + 368;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f31,-27468(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -27468);
	ctx.f31.f64 = double(temp.f32);
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// lwz r31,12(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r31,r8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8322d3ec
	if (ctx.cr6.eq) goto loc_8322D3EC;
loc_8322D36C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x8322d3a0
	if (ctx.cr6.eq) goto loc_8322D3A0;
loc_8322D384:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwcx. r9,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8322d384
	if (!ctx.cr0.eq) goto loc_8322D384;
loc_8322D3A0:
	// lfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fsubs f13,f30,f0
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// mfcr r11
	ctx.r11.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r11.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r11.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r11.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r11.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r11.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r11.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r11.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r11.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r11.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r11.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r11.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r11.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r11.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r11.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r11.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r11.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r11.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r11.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r11.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r11.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r11.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r11.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r11.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r11.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r11.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r11.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r11.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r11.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r11.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r11.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r11.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r10,r11,27,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x4;
	// rlwinm r9,r11,30,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x4;
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lfsx f12,r27,r8
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r8.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsel f30,f12,f30,f0
	ctx.f30.f64 = ctx.f12.f64 >= 0.0 ? ctx.f30.f64 : ctx.f0.f64;
	// bl 0x829ff648
	ctx.lr = 0x8322D3CC;
	sub_829FF648(ctx, base);
	// lwz r7,44(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 44);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mulli r10,r7,28
	ctx.r10.s64 = ctx.r7.s64 * 28;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r5,16(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// cmplw cr6,r31,r5
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8322d36c
	if (!ctx.cr6.eq) goto loc_8322D36C;
loc_8322D3EC:
	// lwz r10,44(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 44);
	// li r9,0
	ctx.r9.s64 = 0;
	// mulli r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 * 28;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// beq cr6,0x8322d598
	if (ctx.cr6.eq) goto loc_8322D598;
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r24,-32246
	ctx.r24.s64 = -2113273856;
loc_8322D424:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// beq cr6,0x8322d458
	if (ctx.cr6.eq) goto loc_8322D458;
loc_8322D43C:
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
	// bne 0x8322d43c
	if (!ctx.cr0.eq) goto loc_8322D43C;
loc_8322D458:
	// lfs f0,20(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fsubs f12,f0,f30
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// lfs f13,-28492(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + -28492);
	ctx.f13.f64 = double(temp.f32);
	// fabs f11,f12
	ctx.f11.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// blt cr6,0x8322d478
	if (ctx.cr6.lt) goto loc_8322D478;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8322D478:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8322d48c
	if (!ctx.cr6.eq) goto loc_8322D48C;
	// fcmpu cr6,f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// ble cr6,0x8322d570
	if (!ctx.cr6.gt) goto loc_8322D570;
loc_8322D48C:
	// stfs f28,20(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r29.u32 + 20, temp.u32);
	// lwz r31,40(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8322d570
	if (ctx.cr6.eq) goto loc_8322D570;
loc_8322D4A0:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,208(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8322D4B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8322d4e0
	if (ctx.cr6.eq) goto loc_8322D4E0;
	// lwz r3,208(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8322D4D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8322d4e4
	if (!ctx.cr6.eq) goto loc_8322D4E4;
loc_8322D4E0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8322D4E4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322d560
	if (ctx.cr6.eq) goto loc_8322D560;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,336
	ctx.r11.s64 = ctx.r11.s64 + 336;
	// lfs f0,64(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// stfs f29,68(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// fsubs f9,f0,f12
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// stfs f9,64(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// fsubs f8,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// fcmpu cr6,f8,f31
	ctx.cr6.compare(ctx.f8.f64, ctx.f31.f64);
	// mfcr r10
	ctx.r10.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r10.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r10.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r10.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r10.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r10.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r10.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r10.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r10.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r10.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r10.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r10.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r10.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r10.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r10.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r10.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r10.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r10.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r10.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r10.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r10.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r10.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r10.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r10.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r10.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r10.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r10.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r10.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r10.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r10.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r10.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r10.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r9,r10,27,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x4;
	// rlwinm r8,r10,30,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x4;
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// lfsx f7,r27,r7
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r7.u32);
	ctx.f7.f64 = double(temp.f32);
	// fsel f6,f7,f9,f11
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? ctx.f9.f64 : ctx.f11.f64;
	// stfs f6,60(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// fsubs f5,f10,f6
	ctx.f5.f64 = double(float(ctx.f10.f64 - ctx.f6.f64));
	// fcmpu cr6,f5,f31
	ctx.cr6.compare(ctx.f5.f64, ctx.f31.f64);
	// mfcr r6
	ctx.r6.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r6.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r6.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r6.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r6.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r6.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r6.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r6.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r6.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r6.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r6.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r6.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r6.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r6.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r6.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r6.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r6.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r6.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r6.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r6.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r6.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r6.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r6.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r6.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r6.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r6.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r6.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r6.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r6.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r6.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r6.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r6.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r5,r6,27,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x4;
	// rlwinm r4,r6,30,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x4;
	// or r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 | ctx.r4.u64;
	// lfsx f4,r27,r3
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r3.u32);
	ctx.f4.f64 = double(temp.f32);
	// fsel f3,f4,f6,f10
	ctx.f3.f64 = ctx.f4.f64 >= 0.0 ? ctx.f6.f64 : ctx.f10.f64;
	// stfs f3,56(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
loc_8322D560:
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8322d4a0
	if (!ctx.cr6.eq) goto loc_8322D4A0;
loc_8322D570:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x8322D578;
	sub_829FF648(ctx, base);
	// lwz r10,44(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 44);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// mulli r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 * 28;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmplw cr6,r28,r8
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8322d424
	if (!ctx.cr6.eq) goto loc_8322D424;
loc_8322D598:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82ca7554
	ctx.lr = 0x8322D5A4;
	sub_82CA7554(ctx, base);
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_8322D5A8"))) PPC_WEAK_FUNC(sub_8322D5A8);
PPC_FUNC_IMPL(__imp__sub_8322D5A8) {
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
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r31,r11,-7776
	ctx.r31.s64 = ctx.r11.s64 + -7776;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// beq cr6,0x8322d658
	if (ctx.cr6.eq) goto loc_8322D658;
loc_8322D5E0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322d61c
	if (ctx.cr6.eq) goto loc_8322D61C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8322d610
	if (ctx.cr6.eq) goto loc_8322D610;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322d61c
	if (ctx.cr6.eq) goto loc_8322D61C;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// b 0x8322d650
	goto loc_8322D650;
loc_8322D610:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821940c8
	ctx.lr = 0x8322D618;
	sub_821940C8(ctx, base);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_8322D61C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x8232d310
	ctx.lr = 0x8322D628;
	sub_8232D310(ctx, base);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r5,-8
	ctx.r4.s64 = ctx.r5.s64 + -8;
	// bl 0x82a86b88
	ctx.lr = 0x8322D638;
	sub_82A86B88(ctx, base);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
loc_8322D650:
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x8322d5e0
	if (!ctx.cr6.eq) goto loc_8322D5E0;
loc_8322D658:
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

__attribute__((alias("__imp__sub_8322D670"))) PPC_WEAK_FUNC(sub_8322D670);
PPC_FUNC_IMPL(__imp__sub_8322D670) {
	PPC_FUNC_PROLOGUE();
	// b 0x8322d5a8
	sub_8322D5A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322D674"))) PPC_WEAK_FUNC(sub_8322D674);
PPC_FUNC_IMPL(__imp__sub_8322D674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322D678"))) PPC_WEAK_FUNC(sub_8322D678);
PPC_FUNC_IMPL(__imp__sub_8322D678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd0
	ctx.lr = 0x8322D680;
	sub_82CA2BD0(ctx, base);
	// li r12,-128
	ctx.r12.s64 = -128;
	// stvx128 v126,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r12,-112
	ctx.r12.s64 = -112;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r10,48
	ctx.r10.s64 = 48;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// stw r24,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r24.u32);
	// lvx128 v0,r23,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r23.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r8,0(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r7,40(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 40);
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r22,r10,80
	ctx.r22.s64 = ctx.r10.s64 + 80;
	// lvx128 v13,r0,r22
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r22.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp v12,v13,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// vmsum3fp128 v11,v12,v12
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32), 0xEF));
	// stvx128 v11,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 24, temp.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lfs f13,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x8322d6f8
	if (ctx.cr6.lt) goto loc_8322D6F8;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
loc_8322D6F8:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8322d70c
	if (!ctx.cr6.eq) goto loc_8322D70C;
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x8322d87c
	goto loc_8322D87C;
loc_8322D70C:
	// lis r9,-31950
	ctx.r9.s64 = -2093875200;
	// lbz r8,-31722(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -31722);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8322d7f0
	if (ctx.cr6.eq) goto loc_8322D7F0;
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// lfs f0,252(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-31946
	ctx.r8.s64 = -2093613056;
	// addi r7,r8,-4108
	ctx.r7.s64 = ctx.r8.s64 + -4108;
	// lwz r10,27648(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 27648);
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r6,r7
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8322d7f0
	if (ctx.cr6.lt) goto loc_8322D7F0;
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// lwz r31,40(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r8,44(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// addi r7,r10,-22560
	ctx.r7.s64 = ctx.r10.s64 + -22560;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// lfs f0,-22560(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -22560);
	ctx.f0.f64 = double(temp.f32);
	// cmplw cr6,r31,r8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, ctx.xer);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v0,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v13,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v127,v0,0
	_mm_store_si128((__m128i*)ctx.v127.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// vspltw128 v126,v13,0
	_mm_store_si128((__m128i*)ctx.v126.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// beq cr6,0x8322d7e0
	if (ctx.cr6.eq) goto loc_8322D7E0;
	// li r26,288
	ctx.r26.s64 = 288;
	// li r27,304
	ctx.r27.s64 = 304;
	// li r28,320
	ctx.r28.s64 = 320;
loc_8322D78C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83222368
	ctx.lr = 0x8322D794;
	sub_83222368(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322d7cc
	if (ctx.cr6.eq) goto loc_8322D7CC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r29,1
	ctx.r29.s64 = 1;
	// lvx128 v0,r10,r26
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r26.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,340(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 340);
	// lvx128 v13,r10,r27
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r27.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,r10,r28
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r28.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vaddfp v11,v13,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// vaddfp v10,v12,v0
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)));
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// vminfp128 v127,v127,v11
	_mm_store_ps(ctx.v127.f32, _mm_min_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v11.f32)));
	// vmaxfp128 v126,v126,v10
	_mm_store_ps(ctx.v126.f32, _mm_max_ps(_mm_load_ps(ctx.v126.f32), _mm_load_ps(ctx.v10.f32)));
loc_8322D7CC:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8322d78c
	if (!ctx.cr6.eq) goto loc_8322D78C;
loc_8322D7E0:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8322d7f8
	if (!ctx.cr6.eq) goto loc_8322D7F8;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
loc_8322D7F0:
	// stw r24,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r24.u32);
	// b 0x8322d880
	goto loc_8322D880;
loc_8322D7F8:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lvx128 v1,r0,r22
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r22.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x8322b158
	ctx.lr = 0x8322D804;
	sub_8322B158(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8322d868
	if (!ctx.cr6.eq) goto loc_8322D868;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x8322d868
	if (!ctx.cr6.gt) goto loc_8322D868;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// vsubfp128 v0,v126,v127
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_sub_ps(_mm_load_ps(ctx.v126.f32), _mm_load_ps(ctx.v127.f32)));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f0,-27852(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27852);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v13,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v12,v13,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v11,v0,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)));
	// vmsum3fp128 v10,v11,v11
	_mm_store_ps(ctx.v10.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v11.f32), 0xEF));
	// vaddfp128 v9,v127,v11
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v11.f32)));
	// stvx128 v9,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v10,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fsqrts f13,f0
	ctx.f13.f64 = double(float(sqrt(ctx.f0.f64)));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x8322b1e8
	ctx.lr = 0x8322D868;
	sub_8322B1E8(ctx, base);
loc_8322D868:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8322d880
	if (!ctx.cr6.eq) goto loc_8322D880;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
loc_8322D87C:
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_8322D880:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x829ff648
	ctx.lr = 0x8322D888;
	sub_829FF648(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// li r0,-128
	ctx.r0.s64 = -128;
	// lvx128 v126,r1,r0
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r0,-112
	ctx.r0.s64 = -112;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82ca2c20
	// ERROR 82CA2C20
	return;
}

__attribute__((alias("__imp__sub_8322D8A0"))) PPC_WEAK_FUNC(sub_8322D8A0);
PPC_FUNC_IMPL(__imp__sub_8322D8A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x8322D8A8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r31,r11,-7776
	ctx.r31.s64 = ctx.r11.s64 + -7776;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bge cr6,0x8322d970
	if (!ctx.cr6.lt) goto loc_8322D970;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r10,r11,5732
	ctx.r10.s64 = ctx.r11.s64 + 5732;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x822149c8
	ctx.lr = 0x8322D8EC;
	sub_822149C8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8322d900
	if (!ctx.cr6.eq) goto loc_8322D900;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// b 0x8322d90c
	goto loc_8322D90C;
loc_8322D900:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
loc_8322D90C:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// srawi r9,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 3;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8322d940
	if (!ctx.cr6.lt) goto loc_8322D940;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8322d934
	if (ctx.cr6.eq) goto loc_8322D934;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821cf7c8
	ctx.lr = 0x8322D934;
	sub_821CF7C8(ctx, base);
loc_8322D934:
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8322d95c
	goto loc_8322D95C;
loc_8322D940:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x829fe3a8
	ctx.lr = 0x8322D95C;
	sub_829FE3A8(ctx, base);
loc_8322D95C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,5732
	ctx.r10.s64 = ctx.r11.s64 + 5732;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x821940c8
	ctx.lr = 0x8322D970;
	sub_821940C8(ctx, base);
loc_8322D970:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_8322D978"))) PPC_WEAK_FUNC(sub_8322D978);
PPC_FUNC_IMPL(__imp__sub_8322D978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-7792
	ctx.r3.s64 = ctx.r11.s64 + -7792;
	// b 0x829fd7b8
	sub_829FD7B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322D988"))) PPC_WEAK_FUNC(sub_8322D988);
PPC_FUNC_IMPL(__imp__sub_8322D988) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r3.u32);
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r5,r1,244
	ctx.r5.s64 = ctx.r1.s64 + 244;
	// addi r31,r11,-7692
	ctx.r31.s64 = ctx.r11.s64 + -7692;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82261668
	ctx.lr = 0x8322D9BC;
	sub_82261668(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322d9d0
	if (ctx.cr6.eq) goto loc_8322D9D0;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8322d9d4
	if (ctx.cr6.eq) goto loc_8322D9D4;
loc_8322D9D0:
	// twi 31,r0,22
loc_8322D9D4:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8322da1c
	if (!ctx.cr6.eq) goto loc_8322DA1C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,244
	ctx.r4.s64 = ctx.r1.s64 + 244;
	// bl 0x82261558
	ctx.lr = 0x8322D9EC;
	sub_82261558(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8322b0d0
	ctx.lr = 0x8322D9F8;
	sub_8322B0D0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// li r9,12
	ctx.r9.s64 = 12;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8322DA08:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x8322da08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8322DA08;
loc_8322DA1C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
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

__attribute__((alias("__imp__sub_8322DA34"))) PPC_WEAK_FUNC(sub_8322DA34);
PPC_FUNC_IMPL(__imp__sub_8322DA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322DA38"))) PPC_WEAK_FUNC(sub_8322DA38);
PPC_FUNC_IMPL(__imp__sub_8322DA38) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// addi r31,r11,-7692
	ctx.r31.s64 = ctx.r11.s64 + -7692;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82261668
	ctx.lr = 0x8322DA6C;
	sub_82261668(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322da80
	if (ctx.cr6.eq) goto loc_8322DA80;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8322da84
	if (ctx.cr6.eq) goto loc_8322DA84;
loc_8322DA80:
	// twi 31,r0,22
loc_8322DA84:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8322da98
	if (!ctx.cr6.eq) goto loc_8322DA98;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8322daa4
	goto loc_8322DAA4;
loc_8322DA98:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// bl 0x82261558
	ctx.lr = 0x8322DAA4;
	sub_82261558(ctx, base);
loc_8322DAA4:
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

__attribute__((alias("__imp__sub_8322DABC"))) PPC_WEAK_FUNC(sub_8322DABC);
PPC_FUNC_IMPL(__imp__sub_8322DABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322DAC0"))) PPC_WEAK_FUNC(sub_8322DAC0);
PPC_FUNC_IMPL(__imp__sub_8322DAC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb8
	ctx.lr = 0x8322DAC8;
	sub_82CA2BB8(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// addi r23,r11,6016
	ctx.r23.s64 = ctx.r11.s64 + 6016;
	// mr r16,r4
	ctx.r16.u64 = ctx.r4.u64;
	// lwz r11,14000(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14000);
	// li r22,0
	ctx.r22.s64 = 0;
	// li r25,1
	ctx.r25.s64 = 1;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8322db68
	if (!ctx.cr6.eq) goto loc_8322DB68;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// li r3,20
	ctx.r3.s64 = 20;
	// stw r11,14000(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14000, ctx.r11.u32);
	// bl 0x8221f388
	ctx.lr = 0x8322DB08;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8322db14
	if (ctx.cr6.eq) goto loc_8322DB14;
	// stw r22,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r22.u32);
loc_8322DB14:
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322db20
	if (ctx.cr0.eq) goto loc_8322DB20;
	// stw r22,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r22.u32);
loc_8322DB20:
	// addic. r11,r3,8
	ctx.xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r11.s64 = ctx.r3.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8322db2c
	if (ctx.cr0.eq) goto loc_8322DB2C;
	// stw r22,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r22.u32);
loc_8322DB2C:
	// stb r25,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r25.u8);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// stb r22,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r22.u8);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// stw r3,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r3.u32);
	// stb r25,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r25.u8);
	// addi r3,r11,-25024
	ctx.r3.s64 = ctx.r11.s64 + -25024;
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// stw r10,8(r23)
	PPC_STORE_U32(ctx.r23.u32 + 8, ctx.r10.u32);
	// bl 0x82ca3700
	ctx.lr = 0x8322DB68;
	sub_82CA3700(ctx, base);
loc_8322DB68:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x829fdae8
	ctx.lr = 0x8322DB70;
	sub_829FDAE8(ctx, base);
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// li r10,28
	ctx.r10.s64 = 28;
	// addi r21,r11,-7808
	ctx.r21.s64 = ctx.r11.s64 + -7808;
	// lis r18,-31927
	ctx.r18.s64 = -2092367872;
	// mr r20,r22
	ctx.r20.u64 = ctx.r22.u64;
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// lwz r9,4(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// lwz r8,8(r21)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// divw. r19,r7,r10
	ctx.r19.s32 = ctx.r7.s32 / ctx.r10.s32;
	ctx.cr0.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// ble 0x8322dd34
	if (!ctx.cr0.gt) goto loc_8322DD34;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
loc_8322DBA0:
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// add r28,r27,r11
	ctx.r28.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lwzx r11,r27,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpw cr6,r11,r17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r17.s32, ctx.xer);
	// blt cr6,0x8322dd24
	if (ctx.cr6.lt) goto loc_8322DD24;
	// lwz r29,12(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// stw r11,27648(r18)
	PPC_STORE_U32(ctx.r18.u32 + 27648, ctx.r11.u32);
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// beq cr6,0x8322dd20
	if (ctx.cr6.eq) goto loc_8322DD20;
loc_8322DBD4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r9,200(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 200);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8322dc0c
	if (!ctx.cr6.eq) goto loc_8322DC0C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83223150
	ctx.lr = 0x8322DBF4;
	sub_83223150(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8322dc0c
	if (!ctx.cr6.eq) goto loc_8322DC0C;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// b 0x8322dd14
	goto loc_8322DD14;
loc_8322DC0C:
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r11.u32);
	// bne 0x8322dc20
	if (!ctx.cr0.eq) goto loc_8322DC20;
	// mr r20,r25
	ctx.r20.u64 = ctx.r25.u64;
loc_8322DC20:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
loc_8322DC24:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8217f978
	ctx.lr = 0x8322DC34;
	sub_8217F978(ctx, base);
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8322DC48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x8322dc5c
	if (!ctx.cr6.eq) goto loc_8322DC5C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8322ce18
	ctx.lr = 0x8322DC5C;
	sub_8322CE18(ctx, base);
loc_8322DC5C:
	// addi r31,r31,244
	ctx.r31.s64 = ctx.r31.s64 + 244;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322dcb0
	if (ctx.cr6.eq) goto loc_8322DCB0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8322dc80
	if (ctx.cr6.eq) goto loc_8322DC80;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x8322dcb4
	goto loc_8322DCB4;
loc_8322DC80:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8322dcac
	if (!ctx.cr6.eq) goto loc_8322DCAC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8322dcac
	if (!ctx.cr6.eq) goto loc_8322DCAC;
	// bl 0x8221be68
	ctx.lr = 0x8322DCAC;
	sub_8221BE68(ctx, base);
loc_8322DCAC:
	// stw r22,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r22.u32);
loc_8322DCB0:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_8322DCB4:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bne cr6,0x8322dc24
	if (!ctx.cr6.eq) goto loc_8322DC24;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,16(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// addi r30,r28,8
	ctx.r30.s64 = ctx.r28.s64 + 8;
	// bl 0x829ff3e8
	ctx.lr = 0x8322DCD8;
	sub_829FF3E8(ctx, base);
	// lwz r29,16(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r31,r29,-8
	ctx.r31.s64 = ctx.r29.s64 + -8;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8322dcfc
	if (ctx.cr6.eq) goto loc_8322DCFC;
loc_8322DCE8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829ff648
	ctx.lr = 0x8322DCF0;
	sub_829FF648(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8322dce8
	if (!ctx.cr6.eq) goto loc_8322DCE8;
loc_8322DCFC:
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// lwz r29,92(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_8322DD14:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8322dbd4
	if (!ctx.cr6.eq) goto loc_8322DBD4;
loc_8322DD20:
	// stw r17,27648(r18)
	PPC_STORE_U32(ctx.r18.u32 + 27648, ctx.r17.u32);
loc_8322DD24:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,28
	ctx.r27.s64 = ctx.r27.s64 + 28;
	// cmpw cr6,r26,r19
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r19.s32, ctx.xer);
	// blt cr6,0x8322dba0
	if (ctx.cr6.lt) goto loc_8322DBA0;
loc_8322DD34:
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
	// addi r27,r11,-7792
	ctx.r27.s64 = ctx.r11.s64 + -7792;
	// lwz r7,4(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r6,8(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// subf r11,r7,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r7.s64;
	// srawi. r26,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r26.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble 0x8322de84
	if (!ctx.cr0.gt) goto loc_8322DE84;
	// lwz r9,4(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
loc_8322DD5C:
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322de84
	if (ctx.cr6.eq) goto loc_8322DE84;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r28,r25,r7
	ctx.r28.u64 = ctx.r25.u64 + ctx.r7.u64;
	// lwzx r8,r25,r7
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r7.u32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lbz r5,17(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8322ddac
	if (!ctx.cr6.eq) goto loc_8322DDAC;
loc_8322DD84:
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8322dd98
	if (!ctx.cr6.lt) goto loc_8322DD98;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8322dda0
	goto loc_8322DDA0;
loc_8322DD98:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8322DDA0:
	// lbz r5,17(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8322dd84
	if (ctx.cr6.eq) goto loc_8322DD84;
loc_8322DDAC:
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// beq cr6,0x8322ddd0
	if (ctx.cr6.eq) goto loc_8322DDD0;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8322ddd0
	if (ctx.cr6.lt) goto loc_8322DDD0;
	// addi r29,r1,88
	ctx.r29.s64 = ctx.r1.s64 + 88;
	// b 0x8322dddc
	goto loc_8322DDDC;
loc_8322DDD0:
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
loc_8322DDDC:
	// ld r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322ddf8
	if (ctx.cr6.eq) goto loc_8322DDF8;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x8322ddfc
	if (ctx.cr6.eq) goto loc_8322DDFC;
loc_8322DDF8:
	// twi 31,r0,22
loc_8322DDFC:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8322de74
	if (ctx.cr6.eq) goto loc_8322DE74;
	// lwz r31,-4(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + -4);
	// addi r11,r6,-8
	ctx.r11.s64 = ctx.r6.s64 + -8;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r30,-8(r6)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r6.u32 + -8);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8322de48
	if (ctx.cr6.eq) goto loc_8322DE48;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x829ff648
	ctx.lr = 0x8322DE2C;
	sub_829FF648(ctx, base);
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8322de48
	if (ctx.cr6.eq) goto loc_8322DE48;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8322DE48:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x829fd878
	ctx.lr = 0x8322DE50;
	sub_829FD878(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// ld r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// bl 0x822b7258
	ctx.lr = 0x8322DE60;
	sub_822B7258(ctx, base);
	// lwz r9,4(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// lwz r6,8(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// lwz r7,4(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// b 0x8322de7c
	goto loc_8322DE7C;
loc_8322DE74:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r25,r25,8
	ctx.r25.s64 = ctx.r25.s64 + 8;
loc_8322DE7C:
	// cmpw cr6,r24,r26
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x8322dd5c
	if (ctx.cr6.lt) goto loc_8322DD5C;
loc_8322DE84:
	// clrlwi r11,r20,24
	ctx.r11.u64 = ctx.r20.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322df8c
	if (ctx.cr6.eq) goto loc_8322DF8C;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// ble cr6,0x8322df88
	if (!ctx.cr6.gt) goto loc_8322DF88;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// li r28,-1
	ctx.r28.s64 = -1;
loc_8322DEA4:
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// add r31,r30,r11
	ctx.r31.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r11,60(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmpw cr6,r11,r17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r17.s32, ctx.xer);
	// blt cr6,0x8322df78
	if (ctx.cr6.lt) goto loc_8322DF78;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,27648(r18)
	PPC_STORE_U32(ctx.r18.u32 + 27648, ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8322df78
	if (!ctx.cr6.eq) goto loc_8322DF78;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// beq cr6,0x8322defc
	if (ctx.cr6.eq) goto loc_8322DEFC;
loc_8322DEE0:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwcx. r9,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8322dee0
	if (!ctx.cr0.eq) goto loc_8322DEE0;
loc_8322DEFC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8322df2c
	if (ctx.cr6.eq) goto loc_8322DF2C;
	// clrlwi r11,r16,24
	ctx.r11.u64 = ctx.r16.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322df2c
	if (ctx.cr6.eq) goto loc_8322DF2C;
	// lwz r3,40(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8322df2c
	if (ctx.cr6.eq) goto loc_8322DF2C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8322DF2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8322DF2C:
	// lwz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// addi r4,r11,-28
	ctx.r4.s64 = ctx.r11.s64 + -28;
	// lwz r11,-28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322df44
	if (ctx.cr6.eq) goto loc_8322DF44;
	// stw r29,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r29.u32);
loc_8322DF44:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322df54
	if (ctx.cr6.eq) goto loc_8322DF54;
	// stw r28,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r28.u32);
loc_8322DF54:
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x829fd450
	ctx.lr = 0x8322DF60;
	sub_829FD450(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x829fd940
	ctx.lr = 0x8322DF68;
	sub_829FD940(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r19,r19,-1
	ctx.r19.s64 = ctx.r19.s64 + -1;
	// bl 0x829ff648
	ctx.lr = 0x8322DF74;
	sub_829FF648(ctx, base);
	// b 0x8322df80
	goto loc_8322DF80;
loc_8322DF78:
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_8322DF80:
	// cmpw cr6,r29,r19
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r19.s32, ctx.xer);
	// blt cr6,0x8322dea4
	if (ctx.cr6.lt) goto loc_8322DEA4;
loc_8322DF88:
	// stw r17,27648(r18)
	PPC_STORE_U32(ctx.r18.u32 + 27648, ctx.r17.u32);
loc_8322DF8C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c08
	// ERROR 82CA2C08
	return;
}

__attribute__((alias("__imp__sub_8322DF94"))) PPC_WEAK_FUNC(sub_8322DF94);
PPC_FUNC_IMPL(__imp__sub_8322DF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322DF98"))) PPC_WEAK_FUNC(sub_8322DF98);
PPC_FUNC_IMPL(__imp__sub_8322DF98) {
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
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r10,r11,-7808
	ctx.r10.s64 = ctx.r11.s64 + -7808;
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r30,8(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8322dfe0
	if (ctx.cr6.eq) goto loc_8322DFE0;
loc_8322DFC4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8322dfd4
	if (ctx.cr6.eq) goto loc_8322DFD4;
	// bl 0x8322b788
	ctx.lr = 0x8322DFD4;
	sub_8322B788(ctx, base);
loc_8322DFD4:
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8322dfc4
	if (!ctx.cr6.eq) goto loc_8322DFC4;
loc_8322DFE0:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8322dac0
	ctx.lr = 0x8322DFEC;
	sub_8322DAC0(ctx, base);
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

__attribute__((alias("__imp__sub_8322E004"))) PPC_WEAK_FUNC(sub_8322E004);
PPC_FUNC_IMPL(__imp__sub_8322E004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322E008"))) PPC_WEAK_FUNC(sub_8322E008);
PPC_FUNC_IMPL(__imp__sub_8322E008) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322e01c
	if (ctx.cr6.eq) goto loc_8322E01C;
	// lwz r3,64(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// b 0x8322da38
	sub_8322DA38(ctx, base);
	return;
loc_8322E01C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322E024"))) PPC_WEAK_FUNC(sub_8322E024);
PPC_FUNC_IMPL(__imp__sub_8322E024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322E028"))) PPC_WEAK_FUNC(sub_8322E028);
PPC_FUNC_IMPL(__imp__sub_8322E028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd0
	ctx.lr = 0x8322E030;
	sub_82CA2BD0(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// li r10,28
	ctx.r10.s64 = 28;
	// addi r23,r11,-7808
	ctx.r23.s64 = ctx.r11.s64 + -7808;
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r9,4(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// lwz r8,8(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// divw. r11,r7,r10
	ctx.r11.s32 = ctx.r7.s32 / ctx.r10.s32;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8322e110
	if (!ctx.cr0.gt) goto loc_8322E110;
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
loc_8322E060:
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// add r27,r25,r11
	ctx.r27.u64 = ctx.r25.u64 + ctx.r11.u64;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r11,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8322e104
	if (!ctx.cr0.gt) goto loc_8322E104;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
loc_8322E084:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// beq cr6,0x8322e0c0
	if (ctx.cr6.eq) goto loc_8322E0C0;
loc_8322E0A4:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8322e0a4
	if (!ctx.cr0.eq) goto loc_8322E0A4;
loc_8322E0C0:
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// lwz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r31,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble 0x8322e0f0
	if (!ctx.cr0.gt) goto loc_8322E0F0;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_8322E0D8:
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x83222610
	ctx.lr = 0x8322E0E4;
	sub_83222610(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8322e0d8
	if (!ctx.cr0.eq) goto loc_8322E0D8;
loc_8322E0F0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x8322E0F8;
	sub_829FF648(ctx, base);
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// bne 0x8322e084
	if (!ctx.cr0.eq) goto loc_8322E084;
loc_8322E104:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r25,r25,28
	ctx.r25.s64 = ctx.r25.s64 + 28;
	// bne 0x8322e060
	if (!ctx.cr0.eq) goto loc_8322E060;
loc_8322E110:
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r30,r11,-7792
	ctx.r30.s64 = ctx.r11.s64 + -7792;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r31,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r31.s64 = ctx.r9.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble 0x8322e14c
	if (!ctx.cr0.gt) goto loc_8322E14C;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
loc_8322E130:
	// lwzx r3,r29,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// bl 0x83222610
	ctx.lr = 0x8322E138;
	sub_83222610(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x8322e130
	if (!ctx.cr0.eq) goto loc_8322E130;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
loc_8322E14C:
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// addi r31,r9,-7776
	ctx.r31.s64 = ctx.r9.s64 + -7776;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8322e18c
	if (ctx.cr6.eq) goto loc_8322E18C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8232d310
	ctx.lr = 0x8322E16C;
	sub_8232D310(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82a86b88
	ctx.lr = 0x8322E180;
	sub_82A86B88(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
loc_8322E18C:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8322e1d0
	if (ctx.cr6.eq) goto loc_8322E1D0;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x829ff3e8
	ctx.lr = 0x8322E1A4;
	sub_829FF3E8(ctx, base);
	// lwz r28,8(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8322e1cc
	if (ctx.cr6.eq) goto loc_8322E1CC;
loc_8322E1B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829ff648
	ctx.lr = 0x8322E1C0;
	sub_829FF648(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8322e1b8
	if (!ctx.cr6.eq) goto loc_8322E1B8;
loc_8322E1CC:
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
loc_8322E1D0:
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x829fdb48
	ctx.lr = 0x8322E1FC;
	sub_829FDB48(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c20
	// ERROR 82CA2C20
	return;
}

__attribute__((alias("__imp__sub_8322E204"))) PPC_WEAK_FUNC(sub_8322E204);
PPC_FUNC_IMPL(__imp__sub_8322E204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322E208"))) PPC_WEAK_FUNC(sub_8322E208);
PPC_FUNC_IMPL(__imp__sub_8322E208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x8322E210;
	sub_82CA2BD4(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r10,r11,-7808
	ctx.r10.s64 = ctx.r11.s64 + -7808;
	// lwz r28,4(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r23,8(r10)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r28,r23
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x8322e3ac
	if (ctx.cr6.eq) goto loc_8322E3AC;
	// lis r25,-31927
	ctx.r25.s64 = -2092367872;
	// li r24,2
	ctx.r24.s64 = 2;
loc_8322E238:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpw cr6,r10,r26
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x8322e394
	if (ctx.cr6.lt) goto loc_8322E394;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,27648(r25)
	PPC_STORE_U32(ctx.r25.u32 + 27648, ctx.r10.u32);
	// beq cr6,0x8322e394
	if (ctx.cr6.eq) goto loc_8322E394;
	// lwz r3,64(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// bl 0x8322da38
	ctx.lr = 0x8322E25C;
	sub_8322DA38(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8322e394
	if (ctx.cr6.eq) goto loc_8322E394;
	// lwz r29,12(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8322e394
	if (ctx.cr6.eq) goto loc_8322E394;
loc_8322E278:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// beq cr6,0x8322e2ac
	if (ctx.cr6.eq) goto loc_8322E2AC;
loc_8322E290:
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
	// bne 0x8322e290
	if (!ctx.cr0.eq) goto loc_8322E290;
loc_8322E2AC:
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// rlwinm r7,r8,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8322e2d0
	if (!ctx.cr6.eq) goto loc_8322E2D0;
	// stw r24,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r24.u32);
	// b 0x8322e37c
	goto loc_8322E37C;
loc_8322E2D0:
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// beq cr6,0x8322e2fc
	if (ctx.cr6.eq) goto loc_8322E2FC;
loc_8322E2E0:
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
	// bne 0x8322e2e0
	if (!ctx.cr0.eq) goto loc_8322E2E0;
loc_8322E2FC:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8322d678
	ctx.lr = 0x8322E308;
	sub_8322D678(ctx, base);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// beq cr6,0x8322e37c
	if (ctx.cr6.eq) goto loc_8322E37C;
	// lwz r10,192(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x8322e378
	if (!ctx.cr6.lt) goto loc_8322E378;
	// lbz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8322e378
	if (!ctx.cr6.eq) goto loc_8322E378;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x8322e37c
	if (ctx.cr6.eq) goto loc_8322E37C;
	// lwz r30,40(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8322e37c
	if (ctx.cr6.eq) goto loc_8322E37C;
loc_8322E34C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8322E364;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8322e34c
	if (!ctx.cr6.eq) goto loc_8322E34C;
	// b 0x8322e37c
	goto loc_8322E37C;
loc_8322E378:
	// bl 0x83222610
	ctx.lr = 0x8322E37C;
	sub_83222610(ctx, base);
loc_8322E37C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x8322E384;
	sub_829FF648(ctx, base);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8322e278
	if (!ctx.cr6.eq) goto loc_8322E278;
loc_8322E394:
	// addi r28,r28,28
	ctx.r28.s64 = ctx.r28.s64 + 28;
	// cmplw cr6,r28,r23
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x8322e238
	if (!ctx.cr6.eq) goto loc_8322E238;
	// stw r26,27648(r25)
	PPC_STORE_U32(ctx.r25.u32 + 27648, ctx.r26.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
loc_8322E3AC:
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stw r26,27648(r11)
	PPC_STORE_U32(ctx.r11.u32 + 27648, ctx.r26.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_8322E3BC"))) PPC_WEAK_FUNC(sub_8322E3BC);
PPC_FUNC_IMPL(__imp__sub_8322E3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322E3C0"))) PPC_WEAK_FUNC(sub_8322E3C0);
PPC_FUNC_IMPL(__imp__sub_8322E3C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x8322E3C8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31927
	ctx.r29.s64 = -2092367872;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r30,27648(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27648, ctx.r30.u32);
	// bl 0x8322d5a8
	ctx.lr = 0x8322E3DC;
	sub_8322D5A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8322e208
	ctx.lr = 0x8322E3E4;
	sub_8322E208(ctx, base);
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r10,r11,-7808
	ctx.r10.s64 = ctx.r11.s64 + -7808;
	// lwz r28,4(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r27,8(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x8322e4e8
	if (ctx.cr6.eq) goto loc_8322E4E8;
loc_8322E3FC:
	// lwz r31,12(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8322e4dc
	if (ctx.cr6.eq) goto loc_8322E4DC;
loc_8322E40C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// beq cr6,0x8322e440
	if (ctx.cr6.eq) goto loc_8322E440;
loc_8322E424:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwcx. r9,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8322e424
	if (!ctx.cr0.eq) goto loc_8322E424;
loc_8322E440:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,27648(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27648, ctx.r9.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r9,r30
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x8322e48c
	if (ctx.cr6.lt) goto loc_8322E48C;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// beq cr6,0x8322e480
	if (ctx.cr6.eq) goto loc_8322E480;
loc_8322E464:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8322e464
	if (!ctx.cr0.eq) goto loc_8322E464;
loc_8322E480:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8322d018
	ctx.lr = 0x8322E488;
	sub_8322D018(ctx, base);
	// b 0x8322e4c0
	goto loc_8322E4C0;
loc_8322E48C:
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// beq cr6,0x8322e4b8
	if (ctx.cr6.eq) goto loc_8322E4B8;
loc_8322E49C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8322e49c
	if (!ctx.cr0.eq) goto loc_8322E49C;
loc_8322E4B8:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8322cf48
	ctx.lr = 0x8322E4C0;
	sub_8322CF48(ctx, base);
loc_8322E4C0:
	// stw r30,27648(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27648, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x8322E4CC;
	sub_829FF648(ctx, base);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8322e40c
	if (!ctx.cr6.eq) goto loc_8322E40C;
loc_8322E4DC:
	// addi r28,r28,28
	ctx.r28.s64 = ctx.r28.s64 + 28;
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x8322e3fc
	if (!ctx.cr6.eq) goto loc_8322E3FC;
loc_8322E4E8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8322dac0
	ctx.lr = 0x8322E4F4;
	sub_8322DAC0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_8322E4FC"))) PPC_WEAK_FUNC(sub_8322E4FC);
PPC_FUNC_IMPL(__imp__sub_8322E4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322E500"))) PPC_WEAK_FUNC(sub_8322E500);
PPC_FUNC_IMPL(__imp__sub_8322E500) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb8
	ctx.lr = 0x8322E508;
	sub_82CA2BB8(ctx, base);
	// stfd f29,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f29.u64);
	// stfd f30,-152(r1)
	PPC_STORE_U64(ctx.r1.u32 + -152, ctx.f30.u64);
	// stfd f31,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// lbz r10,-31723(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -31723);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8322eb38
	if (ctx.cr6.eq) goto loc_8322EB38;
	// li r18,0
	ctx.r18.s64 = 0;
	// lwz r31,4(r17)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// lwz r30,0(r17)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// mr r16,r18
	ctx.r16.u64 = ctx.r18.u64;
	// stw r18,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r18.u32);
	// mr r20,r18
	ctx.r20.u64 = ctx.r18.u64;
	// stw r18,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r18.u32);
	// stw r16,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r16.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r20,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r20.u32);
	// stw r18,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r18.u32);
	// beq cr6,0x8322e580
	if (ctx.cr6.eq) goto loc_8322E580;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x829ff648
	ctx.lr = 0x8322E564;
	sub_829FF648(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r20,128(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r16,124(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
loc_8322E580:
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// mr r22,r18
	ctx.r22.u64 = ctx.r18.u64;
	// addi r25,r11,8
	ctx.r25.s64 = ctx.r11.s64 + 8;
	// addi r23,r11,24
	ctx.r23.s64 = ctx.r11.s64 + 24;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi. r21,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r21.s64 = ctx.r8.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// ble 0x8322e8b8
	if (!ctx.cr0.gt) goto loc_8322E8B8;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r26,r18
	ctx.r26.u64 = ctx.r18.u64;
	// lfs f30,-27468(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -27468);
	ctx.f30.f64 = double(temp.f32);
	// mr r27,r18
	ctx.r27.u64 = ctx.r18.u64;
	// lfs f29,3040(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3040);
	ctx.f29.f64 = double(temp.f32);
	// addi r24,r11,368
	ctx.r24.s64 = ctx.r11.s64 + 368;
	// addi r19,r10,5148
	ctx.r19.s64 = ctx.r10.s64 + 5148;
loc_8322E5CC:
	// li r3,52
	ctx.r3.s64 = 52;
	// stw r18,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r18.u32);
	// stw r18,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r18.u32);
	// bl 0x8221f388
	ctx.lr = 0x8322E5DC;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8322e618
	if (ctx.cr6.eq) goto loc_8322E618;
	// stfs f29,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r18,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r18.u32);
	// stfs f30,24(r3)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stw r19,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r19.u32);
	// stw r18,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r18.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r18,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r18.u8);
	// stb r18,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r18.u8);
	// stw r18,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r18.u32);
	// stw r18,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r18.u32);
	// stw r18,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r18.u32);
	// stw r18,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r18.u32);
	// b 0x8322e61c
	goto loc_8322E61C;
loc_8322E618:
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
loc_8322E61C:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8238a848
	ctx.lr = 0x8322E624;
	sub_8238A848(ctx, base);
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// mr r28,r18
	ctx.r28.u64 = ctx.r18.u64;
	// fmr f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f29.f64;
	// lwzx r10,r27,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// lwz r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r10.u32);
	// lwz r9,0(r17)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// lwz r8,60(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// stw r8,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r8.u32);
	// lwz r7,4(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwzx r3,r7,r26
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r26.u32);
	// bl 0x83222b80
	ctx.lr = 0x8322E654;
	sub_83222B80(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r30,r29,36
	ctx.r30.s64 = ctx.r29.s64 + 36;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829fd4b8
	ctx.lr = 0x8322E668;
	sub_829FD4B8(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r6,244
	ctx.r3.s64 = ctx.r6.s64 + 244;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322e694
	if (ctx.cr6.eq) goto loc_8322E694;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8322e690
	if (ctx.cr6.eq) goto loc_8322E690;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x8322e698
	goto loc_8322E698;
loc_8322E690:
	// bl 0x821940c8
	ctx.lr = 0x8322E694;
	sub_821940C8(ctx, base);
loc_8322E694:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_8322E698:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// beq cr6,0x8322e7dc
	if (ctx.cr6.eq) goto loc_8322E7DC;
loc_8322E6A8:
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// lbz r10,160(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 160);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8322e6bc
	if (ctx.cr6.eq) goto loc_8322E6BC;
	// li r28,1
	ctx.r28.s64 = 1;
loc_8322E6BC:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322e73c
	if (ctx.cr6.eq) goto loc_8322E73C;
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8322E6DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8322e704
	if (ctx.cr6.eq) goto loc_8322E704;
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8322E6F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// bne cr6,0x8322e708
	if (!ctx.cr6.eq) goto loc_8322E708;
loc_8322E704:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8322E708:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322e73c
	if (ctx.cr6.eq) goto loc_8322E73C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8322E728;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,52(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// bne cr6,0x8322e73c
	if (!ctx.cr6.eq) goto loc_8322E73C;
	// mr r28,r18
	ctx.r28.u64 = ctx.r18.u64;
loc_8322E73C:
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// mfcr r10
	ctx.r10.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r10.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r10.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r10.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r10.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r10.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r10.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r10.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r10.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r10.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r10.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r10.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r10.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r10.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r10.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r10.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r10.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r10.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r10.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r10.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r10.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r10.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r10.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r10.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r10.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r10.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r10.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r10.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r10.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r10.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r10.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r10.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r9,r10,27,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x4;
	// rlwinm r8,r10,30,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x4;
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// lfsx f12,r24,r7
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r7.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsel f31,f12,f0,f31
	ctx.f31.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f31.f64;
	// bl 0x829fd4b8
	ctx.lr = 0x8322E770;
	sub_829FD4B8(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r6,244
	ctx.r31.s64 = ctx.r6.s64 + 244;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322e7c8
	if (ctx.cr6.eq) goto loc_8322E7C8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8322e798
	if (ctx.cr6.eq) goto loc_8322E798;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x8322e7cc
	goto loc_8322E7CC;
loc_8322E798:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8322e7c4
	if (!ctx.cr6.eq) goto loc_8322E7C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8322e7c4
	if (!ctx.cr6.eq) goto loc_8322E7C4;
	// bl 0x8221be68
	ctx.lr = 0x8322E7C4;
	sub_8221BE68(ctx, base);
loc_8322E7C4:
	// stw r18,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r18.u32);
loc_8322E7C8:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_8322E7CC:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bne cr6,0x8322e6a8
	if (!ctx.cr6.eq) goto loc_8322E6A8;
loc_8322E7DC:
	// stb r28,16(r29)
	PPC_STORE_U8(ctx.r29.u32 + 16, ctx.r28.u8);
	// fmuls f0,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// stfs f0,20(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 20, temp.u32);
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// lbz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 56);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8322e804
	if (ctx.cr6.eq) goto loc_8322E804;
	// addi r11,r22,1
	ctx.r11.s64 = ctx.r22.s64 + 1;
	// stw r11,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r11.u32);
	// b 0x8322e808
	goto loc_8322E808;
loc_8322E804:
	// stw r18,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r18.u32);
loc_8322E808:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// bne cr6,0x8322e818
	if (!ctx.cr6.eq) goto loc_8322E818;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// b 0x8322e824
	goto loc_8322E824;
loc_8322E818:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// subf r10,r16,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r16.s64;
	// srawi r11,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 3;
loc_8322E824:
	// subf r10,r16,r20
	ctx.r10.s64 = ctx.r20.s64 - ctx.r16.s64;
	// srawi r9,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 3;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8322e878
	if (!ctx.cr6.lt) goto loc_8322E878;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x8322e86c
	if (ctx.cr6.eq) goto loc_8322E86C;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r29,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,4(r20)
	PPC_STORE_U32(ctx.r20.u32 + 4, ctx.r11.u32);
	// beq cr6,0x8322e86c
	if (ctx.cr6.eq) goto loc_8322E86C;
loc_8322E850:
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
	// bne 0x8322e850
	if (!ctx.cr0.eq) goto loc_8322E850;
loc_8322E86C:
	// addi r20,r20,8
	ctx.r20.s64 = ctx.r20.s64 + 8;
	// stw r20,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r20.u32);
	// b 0x8322e89c
	goto loc_8322E89C;
loc_8322E878:
	// stw r18,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r18.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r20,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r20.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x8260b008
	ctx.lr = 0x8322E894;
	sub_8260B008(ctx, base);
	// lwz r20,128(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r16,124(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
loc_8322E89C:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x8322E8A4;
	sub_829FF648(ctx, base);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
	// cmpw cr6,r22,r21
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r21.s32, ctx.xer);
	// blt cr6,0x8322e5cc
	if (ctx.cr6.lt) goto loc_8322E5CC;
loc_8322E8B8:
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r9,28
	ctx.r9.s64 = 28;
	// stw r21,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r21.u32);
	// addi r31,r11,-7808
	ctx.r31.s64 = ctx.r11.s64 + -7808;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r11,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r6,r7,r9
	ctx.r6.s32 = ctx.r7.s32 / ctx.r9.s32;
	// stw r6,44(r8)
	PPC_STORE_U32(ctx.r8.u32 + 44, ctx.r6.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8322e8f4
	if (!ctx.cr6.eq) goto loc_8322E8F4;
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
	// b 0x8322e900
	goto loc_8322E900;
loc_8322E8F4:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r10,r9
	ctx.r10.s32 = ctx.r10.s32 / ctx.r9.s32;
loc_8322E900:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r9,r11,r9
	ctx.r9.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8322e934
	if (!ctx.cr6.lt) goto loc_8322E934;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8322e928
	if (ctx.cr6.eq) goto loc_8322E928;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821716e8
	ctx.lr = 0x8322E928;
	sub_821716E8(ctx, base);
loc_8322E928:
	// addi r11,r30,28
	ctx.r11.s64 = ctx.r30.s64 + 28;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8322e950
	goto loc_8322E950;
loc_8322E934:
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r18,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r18.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r5,1
	ctx.r5.s64 = 1;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x829fe090
	ctx.lr = 0x8322E950;
	sub_829FE090(ctx, base);
loc_8322E950:
	// subf r11,r16,r20
	ctx.r11.s64 = ctx.r20.s64 - ctx.r16.s64;
	// srawi. r21,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r21.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// ble 0x8322eb28
	if (!ctx.cr0.gt) goto loc_8322EB28;
	// mr r20,r16
	ctx.r20.u64 = ctx.r16.u64;
	// mr r19,r21
	ctx.r19.u64 = ctx.r21.u64;
loc_8322E964:
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// lwz r22,0(r20)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r22,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r22.u32);
	// beq cr6,0x8322e998
	if (ctx.cr6.eq) goto loc_8322E998;
loc_8322E97C:
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
	// bne 0x8322e97c
	if (!ctx.cr0.eq) goto loc_8322E97C;
loc_8322E998:
	// lwz r11,44(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 44);
	// lwz r10,40(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 40);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r11,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8322eb14
	if (!ctx.cr0.gt) goto loc_8322EB14;
	// mr r24,r18
	ctx.r24.u64 = ctx.r18.u64;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
loc_8322E9B4:
	// lwz r11,40(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 40);
	// lwzx r27,r24,r11
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	// lwz r3,208(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 208);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8322E9D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x8322eb08
	if (!ctx.cr6.eq) goto loc_8322EB08;
	// lwz r11,304(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 304);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// lbz r10,193(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 193);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8322e9f8
	if (ctx.cr6.eq) goto loc_8322E9F8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8322d8a0
	ctx.lr = 0x8322E9F4;
	sub_8322D8A0(ctx, base);
	// b 0x8322eb08
	goto loc_8322EB08;
loc_8322E9F8:
	// mr r26,r16
	ctx.r26.u64 = ctx.r16.u64;
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
loc_8322EA00:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r28,0(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// beq cr6,0x8322ea34
	if (ctx.cr6.eq) goto loc_8322EA34;
loc_8322EA18:
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
	// bne 0x8322ea18
	if (!ctx.cr0.eq) goto loc_8322EA18;
loc_8322EA34:
	// lwz r11,44(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// lwz r10,40(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r11,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8322eaf4
	if (!ctx.cr0.gt) goto loc_8322EAF4;
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_8322EA50:
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// lwzx r31,r11,r30
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplw cr6,r27,r31
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8322eae8
	if (ctx.cr6.eq) goto loc_8322EAE8;
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r4,208(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 208);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8322EA78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8322eae8
	if (ctx.cr6.eq) goto loc_8322EAE8;
	// lwz r10,220(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// addi r3,r31,216
	ctx.r3.s64 = ctx.r31.s64 + 216;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8322ea9c
	if (!ctx.cr6.eq) goto loc_8322EA9C;
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// b 0x8322eaa8
	goto loc_8322EAA8;
loc_8322EA9C:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
loc_8322EAA8:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8322ead0
	if (!ctx.cr6.lt) goto loc_8322EAD0;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// b 0x8322eae8
	goto loc_8322EAE8;
loc_8322EAD0:
	// stw r18,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r18.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x82a734d0
	ctx.lr = 0x8322EAE8;
	sub_82A734D0(ctx, base);
loc_8322EAE8:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8322ea50
	if (!ctx.cr0.eq) goto loc_8322EA50;
loc_8322EAF4:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x8322EAFC;
	sub_829FF648(ctx, base);
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
	// bne 0x8322ea00
	if (!ctx.cr0.eq) goto loc_8322EA00;
loc_8322EB08:
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// bne 0x8322e9b4
	if (!ctx.cr0.eq) goto loc_8322E9B4;
loc_8322EB14:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x829ff648
	ctx.lr = 0x8322EB1C;
	sub_829FF648(ctx, base);
	// addic. r19,r19,-1
	ctx.xer.ca = ctx.r19.u32 > 0;
	ctx.r19.s64 = ctx.r19.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// addi r20,r20,8
	ctx.r20.s64 = ctx.r20.s64 + 8;
	// bne 0x8322e964
	if (!ctx.cr0.eq) goto loc_8322E964;
loc_8322EB28:
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82356698
	ctx.lr = 0x8322EB30;
	sub_82356698(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x829ff648
	ctx.lr = 0x8322EB38;
	sub_829FF648(ctx, base);
loc_8322EB38:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x829ff648
	ctx.lr = 0x8322EB40;
	sub_829FF648(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f29,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// lfd f30,-152(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f31,-144(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x82ca2c08
	// ERROR 82CA2C08
	return;
}

__attribute__((alias("__imp__sub_8322EB54"))) PPC_WEAK_FUNC(sub_8322EB54);
PPC_FUNC_IMPL(__imp__sub_8322EB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322EB58"))) PPC_WEAK_FUNC(sub_8322EB58);
PPC_FUNC_IMPL(__imp__sub_8322EB58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// lwz r3,-22564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22564);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322EB64"))) PPC_WEAK_FUNC(sub_8322EB64);
PPC_FUNC_IMPL(__imp__sub_8322EB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322EB68"))) PPC_WEAK_FUNC(sub_8322EB68);
PPC_FUNC_IMPL(__imp__sub_8322EB68) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8322eb9c
	if (!ctx.cr6.eq) goto loc_8322EB9C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8322eba0
	goto loc_8322EBA0;
loc_8322EB9C:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8322EBA0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8322EBB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8322ebcc
	if (ctx.cr6.eq) goto loc_8322EBCC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829fd370
	ctx.lr = 0x8322EBCC;
	sub_829FD370(ctx, base);
loc_8322EBCC:
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

__attribute__((alias("__imp__sub_8322EBE4"))) PPC_WEAK_FUNC(sub_8322EBE4);
PPC_FUNC_IMPL(__imp__sub_8322EBE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322EBE8"))) PPC_WEAK_FUNC(sub_8322EBE8);
PPC_FUNC_IMPL(__imp__sub_8322EBE8) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8322ec1c
	if (!ctx.cr6.eq) goto loc_8322EC1C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8322ec20
	goto loc_8322EC20;
loc_8322EC1C:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8322EC20:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8322EC34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8322ec7c
	if (ctx.cr6.eq) goto loc_8322EC7C;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,11652
	ctx.r4.s64 = ctx.r11.s64 + 11652;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb90
	ctx.lr = 0x8322EC54;
	sub_825CBB90(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r5,r30,4
	ctx.r5.s64 = ctx.r30.s64 + 4;
	// addi r4,r10,11656
	ctx.r4.s64 = ctx.r10.s64 + 11656;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb90
	ctx.lr = 0x8322EC68;
	sub_825CBB90(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8322EC7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8322EC7C:
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

__attribute__((alias("__imp__sub_8322EC94"))) PPC_WEAK_FUNC(sub_8322EC94);
PPC_FUNC_IMPL(__imp__sub_8322EC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322EC98"))) PPC_WEAK_FUNC(sub_8322EC98);
PPC_FUNC_IMPL(__imp__sub_8322EC98) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8322eccc
	if (!ctx.cr6.eq) goto loc_8322ECCC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8322ecd0
	goto loc_8322ECD0;
loc_8322ECCC:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8322ECD0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8322ECE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8322ed70
	if (ctx.cr6.eq) goto loc_8322ED70;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5360
	ctx.r4.s64 = ctx.r11.s64 + 5360;
	// bl 0x82c823d8
	ctx.lr = 0x8322ED00;
	sub_82C823D8(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-9784
	ctx.r4.s64 = ctx.r10.s64 + -9784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8322ED20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r7,11652
	ctx.r4.s64 = ctx.r7.s64 + 11652;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb90
	ctx.lr = 0x8322ED34;
	sub_825CBB90(ctx, base);
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// addi r5,r30,4
	ctx.r5.s64 = ctx.r30.s64 + 4;
	// addi r4,r6,11656
	ctx.r4.s64 = ctx.r6.s64 + 11656;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb90
	ctx.lr = 0x8322ED48;
	sub_825CBB90(ctx, base);
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// addi r5,r30,8
	ctx.r5.s64 = ctx.r30.s64 + 8;
	// addi r4,r4,11660
	ctx.r4.s64 = ctx.r4.s64 + 11660;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb90
	ctx.lr = 0x8322ED5C;
	sub_825CBB90(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8322ED70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8322ED70:
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

__attribute__((alias("__imp__sub_8322ED88"))) PPC_WEAK_FUNC(sub_8322ED88);
PPC_FUNC_IMPL(__imp__sub_8322ED88) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8322edbc
	if (!ctx.cr6.eq) goto loc_8322EDBC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8322edc0
	goto loc_8322EDC0;
loc_8322EDBC:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8322EDC0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8322EDD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8322ee0c
	if (ctx.cr6.eq) goto loc_8322EE0C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8322EDF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8322EE0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8322EE0C:
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

__attribute__((alias("__imp__sub_8322EE24"))) PPC_WEAK_FUNC(sub_8322EE24);
PPC_FUNC_IMPL(__imp__sub_8322EE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322EE28"))) PPC_WEAK_FUNC(sub_8322EE28);
PPC_FUNC_IMPL(__imp__sub_8322EE28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8322ee44
	if (!ctx.cr6.eq) goto loc_8322EE44;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8322ee48
	goto loc_8322EE48;
loc_8322EE44:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8322EE48:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// b 0x82395be0
	sub_82395BE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322EE50"))) PPC_WEAK_FUNC(sub_8322EE50);
PPC_FUNC_IMPL(__imp__sub_8322EE50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8322ee6c
	if (!ctx.cr6.eq) goto loc_8322EE6C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8322ee70
	goto loc_8322EE70;
loc_8322EE6C:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8322EE70:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// b 0x825cbb08
	sub_825CBB08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322EE78"))) PPC_WEAK_FUNC(sub_8322EE78);
PPC_FUNC_IMPL(__imp__sub_8322EE78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8322ee94
	if (!ctx.cr6.eq) goto loc_8322EE94;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8322ee98
	goto loc_8322EE98;
loc_8322EE94:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8322EE98:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// b 0x825cbb90
	sub_825CBB90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322EEA0"))) PPC_WEAK_FUNC(sub_8322EEA0);
PPC_FUNC_IMPL(__imp__sub_8322EEA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r10,r11,-4108
	ctx.r10.s64 = ctx.r11.s64 + -4108;
	// lwz r3,44(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322EEB0"))) PPC_WEAK_FUNC(sub_8322EEB0);
PPC_FUNC_IMPL(__imp__sub_8322EEB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r11,r11,-4108
	ctx.r11.s64 = ctx.r11.s64 + -4108;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322EEC0"))) PPC_WEAK_FUNC(sub_8322EEC0);
PPC_FUNC_IMPL(__imp__sub_8322EEC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r10,r11,-4108
	ctx.r10.s64 = ctx.r11.s64 + -4108;
	// stfs f1,40(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 40, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322EED0"))) PPC_WEAK_FUNC(sub_8322EED0);
PPC_FUNC_IMPL(__imp__sub_8322EED0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r10,r11,-4108
	ctx.r10.s64 = ctx.r11.s64 + -4108;
	// lfs f1,40(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322EEE0"))) PPC_WEAK_FUNC(sub_8322EEE0);
PPC_FUNC_IMPL(__imp__sub_8322EEE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r10,r11,-4108
	ctx.r10.s64 = ctx.r11.s64 + -4108;
	// lfs f1,36(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322EEF0"))) PPC_WEAK_FUNC(sub_8322EEF0);
PPC_FUNC_IMPL(__imp__sub_8322EEF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// addi r10,r10,-4108
	ctx.r10.s64 = ctx.r10.s64 + -4108;
	// lwz r11,27648(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27648);
	// addi r9,r10,24
	ctx.r9.s64 = ctx.r10.s64 + 24;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r8,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322EF10"))) PPC_WEAK_FUNC(sub_8322EF10);
PPC_FUNC_IMPL(__imp__sub_8322EF10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// addi r10,r10,-4108
	ctx.r10.s64 = ctx.r10.s64 + -4108;
	// lwz r11,27648(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27648);
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r8,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322EF30"))) PPC_WEAK_FUNC(sub_8322EF30);
PPC_FUNC_IMPL(__imp__sub_8322EF30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// addi r10,r10,-4108
	ctx.r10.s64 = ctx.r10.s64 + -4108;
	// lwz r11,27648(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27648);
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r8,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322EF50"))) PPC_WEAK_FUNC(sub_8322EF50);
PPC_FUNC_IMPL(__imp__sub_8322EF50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// addi r9,r10,-4108
	ctx.r9.s64 = ctx.r10.s64 + -4108;
	// lwz r11,27648(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27648);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r8,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322EF6C"))) PPC_WEAK_FUNC(sub_8322EF6C);
PPC_FUNC_IMPL(__imp__sub_8322EF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322EF70"))) PPC_WEAK_FUNC(sub_8322EF70);
PPC_FUNC_IMPL(__imp__sub_8322EF70) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a1bea8
	ctx.lr = 0x8322EF90;
	sub_82A1BEA8(ctx, base);
	// lvx128 v0,r0,r3
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
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

__attribute__((alias("__imp__sub_8322EFAC"))) PPC_WEAK_FUNC(sub_8322EFAC);
PPC_FUNC_IMPL(__imp__sub_8322EFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322EFB0"))) PPC_WEAK_FUNC(sub_8322EFB0);
PPC_FUNC_IMPL(__imp__sub_8322EFB0) {
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
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x8322f020
	if (ctx.cr6.lt) goto loc_8322F020;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r7,r10,-4
	ctx.r7.s64 = ctx.r10.s64 + -4;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// addi r5,r9,4
	ctx.r5.s64 = ctx.r9.s64 + 4;
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r4,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r4.u8);
	// lbz r3,1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r3,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r3.u8);
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stb r10,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r10.u8);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stb r9,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, ctx.r9.u8);
	// stw r6,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// stw r7,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// b 0x8322f030
	goto loc_8322F030;
loc_8322F020:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1b480
	ctx.lr = 0x8322F030;
	sub_82A1B480(ctx, base);
loc_8322F030:
	// lbz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322f068
	if (ctx.cr6.eq) goto loc_8322F068;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r9,83(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// stb r10,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
loc_8322F068:
	// stfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
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

__attribute__((alias("__imp__sub_8322F084"))) PPC_WEAK_FUNC(sub_8322F084);
PPC_FUNC_IMPL(__imp__sub_8322F084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322F088"))) PPC_WEAK_FUNC(sub_8322F088);
PPC_FUNC_IMPL(__imp__sub_8322F088) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8322f0a4
	if (!ctx.cr6.eq) goto loc_8322F0A4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,63
	ctx.r4.s64 = ctx.r11.s64 + 63;
	// b 0x8322f0a8
	goto loc_8322F0A8;
loc_8322F0A4:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8322F0A8:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// b 0x829fd2a0
	sub_829FD2A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322F0B0"))) PPC_WEAK_FUNC(sub_8322F0B0);
PPC_FUNC_IMPL(__imp__sub_8322F0B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r11,r8,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r8.s64;
	// srawi. r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt 0x8322f0cc
	if (ctx.cr0.gt) goto loc_8322F0CC;
	// vspltisw v1,0
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_set1_epi32(int(0x0)));
	// blr 
	return;
loc_8322F0CC:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8322f0dc
	if (!ctx.cr6.eq) goto loc_8322F0DC;
loc_8322F0D4:
	// lvx128 v1,r0,r8
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
loc_8322F0DC:
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r7,r9,-9652
	ctx.r7.s64 = ctx.r9.s64 + -9652;
	// lfs f0,-17816(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -17816);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8322f0d4
	if (!ctx.cr6.gt) goto loc_8322F0D4;
	// lfs f0,-17804(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -17804);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x8322f108
	if (ctx.cr6.lt) goto loc_8322F108;
	// addi r11,r10,-16
	ctx.r11.s64 = ctx.r10.s64 + -16;
	// lvx128 v1,r0,r11
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
loc_8322F108:
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8322f12c
	if (ctx.cr6.eq) goto loc_8322F12C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x8322f12c
	if (!ctx.cr6.gt) goto loc_8322F12C;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r9.u64);
	// lfd f0,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// b 0x8322f13c
	goto loc_8322F13C;
loc_8322F12C:
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// extsw r5,r9
	ctx.r5.s64 = ctx.r9.s32;
	// std r5,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r5.u64);
	// lfd f0,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
loc_8322F13C:
	// fcfid f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(ctx.f0.s64);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// fctiwz f0,f11
	ctx.f0.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f11.f64));
	// stfd f0,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f0.u64);
	// lwz r9,-20(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -20);
	// beq cr6,0x8322f208
	if (ctx.cr6.eq) goto loc_8322F208;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x8322f208
	if (!ctx.cr6.gt) goto loc_8322F208;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8322f198
	if (!ctx.cr6.eq) goto loc_8322F198;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// li r8,-16
	ctx.r8.s64 = -16;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,32
	ctx.r3.s64 = 32;
	// lvx128 v13,r0,r10
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,r5,r8
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32 + ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r10,r4
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,r10,r3
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x8322f2d0
	goto loc_8322F2D0;
loc_8322F198:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bne cr6,0x8322f1d4
	if (!ctx.cr6.eq) goto loc_8322F1D4;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// rlwinm r5,r8,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r3,-16
	ctx.r3.s64 = -16;
	// li r11,16
	ctx.r11.s64 = 16;
	// lvx128 v12,r5,r10
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r4,r3
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,r10,r11
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x8322f2d0
	goto loc_8322F2D0;
loc_8322F1D4:
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8322f2a8
	if (!ctx.cr6.eq) goto loc_8322F2A8;
	// addi r5,r11,-3
	ctx.r5.s64 = ctx.r11.s64 + -3;
	// lvx128 v11,r0,r10
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r3,r8,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r4,r5,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r8,-16
	ctx.r8.s64 = -16;
	// lvx128 v13,r3,r10
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,r4,r10
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r11,r8
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x8322f2d0
	goto loc_8322F2D0;
loc_8322F208:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8322f274
	if (!ctx.cr6.eq) goto loc_8322F274;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// lvx128 v12,r0,r8
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,16
	ctx.r11.s64 = 16;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// bne cr6,0x8322f250
	if (!ctx.cr6.eq) goto loc_8322F250;
	// lvx128 v11,r0,r5
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r10
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r10,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v10,r5,r11
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp v7,v13,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v7.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// vsubfp v9,v10,v11
	_mm_store_ps(ctx.v9.f32, _mm_sub_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)));
	// lvx128 v8,r8,r11
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp v11,v8,v7
	_mm_store_ps(ctx.v11.f32, _mm_sub_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v7.f32)));
	// vsubfp v12,v12,v9
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v9.f32)));
	// b 0x8322f2d0
	goto loc_8322F2D0;
loc_8322F250:
	// lvx128 v11,r0,r10
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r4,32
	ctx.r4.s64 = 32;
	// lvx128 v10,r10,r11
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp v9,v10,v11
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v9.f32, _mm_sub_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)));
	// lvx128 v13,r0,r5
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r5,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,r5,r4
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp v12,v12,v9
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v9.f32)));
	// b 0x8322f2d0
	goto loc_8322F2D0;
loc_8322F274:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8322f2a4
	if (!ctx.cr6.eq) goto loc_8322F2A4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// li r8,16
	ctx.r8.s64 = 16;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lvx128 v0,r11,r8
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r11
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp v11,v13,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v11.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// vsubfp v11,v0,v11
	_mm_store_ps(ctx.v11.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v11.f32)));
	// b 0x8322f2c8
	goto loc_8322F2C8;
loc_8322F2A4:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_8322F2A8:
	// addi r8,r9,2
	ctx.r8.s64 = ctx.r9.s64 + 2;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r3,r8,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// lvx128 v11,r3,r10
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r11
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r11,r4
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
loc_8322F2C8:
	// li r5,-16
	ctx.r5.s64 = -16;
	// lvx128 v12,r11,r5
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
loc_8322F2D0:
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8322f310
	if (ctx.cr6.eq) goto loc_8322F310;
	// extsw r11,r9
	ctx.r11.s64 = ctx.r9.s32;
	// vsubfp v0,v0,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// addi r10,r1,-48
	ctx.r10.s64 = ctx.r1.s64 + -48;
	// std r11,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r11.u64);
	// lfd f0,-24(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fsubs f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f11,-48(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// lvlx v12,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v11,v12,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// vmaddfp v1,v0,v11,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v1.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)));
	// blr 
	return;
loc_8322F310:
	// addi r11,r1,-44
	ctx.r11.s64 = ctx.r1.s64 + -44;
	// lfs f13,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,-44
	ctx.r3.s64 = ctx.r1.s64 + -44;
	// stfs f13,-48(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// stfs f13,-40(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// addi r10,r1,-36
	ctx.r10.s64 = ctx.r1.s64 + -36;
	// lfs f13,-8276(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -8276);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r1,-48
	ctx.r6.s64 = ctx.r1.s64 + -48;
	// stfs f13,-44(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// addi r5,r1,-40
	ctx.r5.s64 = ctx.r1.s64 + -40;
	// lvlx v10,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// extsw r4,r9
	ctx.r4.s64 = ctx.r9.s32;
	// lfs f0,-5892(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -5892);
	ctx.f0.f64 = double(temp.f32);
	// std r4,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r4.u64);
	// stfs f0,-44(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// vspltw v2,v10,0
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0xFF));
	// lvlx v5,0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmulfp128 v10,v12,v2
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v2.f32)));
	// lfs f0,-18200(r7)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -18200);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r1,-32
	ctx.r8.s64 = ctx.r1.s64 + -32;
	// stfs f0,-36(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -36, temp.u32);
	// addi r11,r1,-32
	ctx.r11.s64 = ctx.r1.s64 + -32;
	// lvlx v9,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r4,r1,-24
	ctx.r4.s64 = ctx.r1.s64 + -24;
	// lvlx v7,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r1,28
	ctx.r9.s64 = ctx.r1.s64 + 28;
	// lvlx v6,0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lfs f12,-9580(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -9580);
	ctx.f12.f64 = double(temp.f32);
	// addi r7,r1,-32
	ctx.r7.s64 = ctx.r1.s64 + -32;
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// stfs f12,-32(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lvlx v8,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v30,v8,0
	_mm_store_si128((__m128i*)ctx.v30.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0xFF));
	// vspltw v4,v5,0
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), 0xFF));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// vspltw v1,v9,0
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0xFF));
	// stfs f0,-32(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// vspltw v29,v7,0
	_mm_store_si128((__m128i*)ctx.v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v7.u32), 0xFF));
	// lvlx v31,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v28,v6,0
	_mm_store_si128((__m128i*)ctx.v28.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v6.u32), 0xFF));
	// vmulfp128 v3,v13,v4
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v4.f32)));
	// vspltw v15,v31,0
	_mm_store_si128((__m128i*)ctx.v15.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v31.u32), 0xFF));
	// vsubfp v25,v12,v3
	_mm_store_ps(ctx.v25.f32, _mm_sub_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v3.f32)));
	// fsubs f0,f11,f10
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// vmulfp128 v27,v11,v1
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v27.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v1.f32)));
	// stfs f0,28(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// vmaddfp v24,v13,v28,v10
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v24.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v28.f32)), _mm_load_ps(ctx.v10.f32)));
	// lvlx v23,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v23.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmulfp128 v26,v0,v29
	_mm_store_ps(ctx.v26.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v29.f32)));
	// vspltw v11,v23,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v23.u32), 0xFF));
	// vmaddfp v22,v0,v30,v25
	_mm_store_ps(ctx.v22.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v30.f32)), _mm_load_ps(ctx.v25.f32)));
	// fmuls f13,f0,f0
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// vsubfp v21,v24,v26
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v21.f32, _mm_sub_ps(_mm_load_ps(ctx.v24.f32), _mm_load_ps(ctx.v26.f32)));
	// stfs f13,-32(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// lvlx v20,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v20.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v19,v20,0
	_mm_store_si128((__m128i*)ctx.v19.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v20.u32), 0xFF));
	// vsubfp v18,v22,v27
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v18.f32, _mm_sub_ps(_mm_load_ps(ctx.v22.f32), _mm_load_ps(ctx.v27.f32)));
	// fmuls f9,f13,f0
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// vaddfp v17,v21,v27
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v17.f32, _mm_add_ps(_mm_load_ps(ctx.v21.f32), _mm_load_ps(ctx.v27.f32)));
	// stfs f9,-24(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// lvlx v16,0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v16.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v14,v16,0
	_mm_store_si128((__m128i*)ctx.v14.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v16.u32), 0xFF));
	// vmulfp128 v12,v18,v19
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v18.f32), _mm_load_ps(ctx.v19.f32)));
	// vmaddfp v10,v0,v15,v10
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v15.f32)), _mm_load_ps(ctx.v10.f32)));
	// vmaddfp v9,v17,v14,v12
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v17.f32), _mm_load_ps(ctx.v14.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v8,v10,v11,v9
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v9.f32)));
	// vaddfp v1,v8,v13
	_mm_store_ps(ctx.v1.f32, _mm_add_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v13.f32)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322F424"))) PPC_WEAK_FUNC(sub_8322F424);
PPC_FUNC_IMPL(__imp__sub_8322F424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322F428"))) PPC_WEAK_FUNC(sub_8322F428);
PPC_FUNC_IMPL(__imp__sub_8322F428) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r5,-31950
	ctx.r5.s64 = -2093875200;
	// lwz r10,-31652(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31652);
	// cmpwi cr6,r10,267
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 267, ctx.xer);
	// addi r8,r10,-267
	ctx.r8.s64 = ctx.r10.s64 + -267;
	// bge cr6,0x8322f44c
	if (!ctx.cr6.lt) goto loc_8322F44C;
	// addi r8,r10,103
	ctx.r8.s64 = ctx.r10.s64 + 103;
loc_8322F44C:
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-4048
	ctx.r11.s64 = ctx.r11.s64 + -4048;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,370
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 370, ctx.xer);
	// lwzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r6,r8,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// xor r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// stwx r6,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r6.u32);
	// blt cr6,0x8322f47c
	if (ctx.cr6.lt) goto loc_8322F47C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8322F47C:
	// cmpwi cr6,r10,267
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 267, ctx.xer);
	// addi r8,r10,-267
	ctx.r8.s64 = ctx.r10.s64 + -267;
	// bge cr6,0x8322f48c
	if (!ctx.cr6.lt) goto loc_8322F48C;
	// addi r8,r10,103
	ctx.r8.s64 = ctx.r10.s64 + 103;
loc_8322F48C:
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,370
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 370, ctx.xer);
	// lwzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r4,r8,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// xor r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 ^ ctx.r7.u64;
	// stwx r7,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r7.u32);
	// blt cr6,0x8322f4b4
	if (ctx.cr6.lt) goto loc_8322F4B4;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8322F4B4:
	// cmpwi cr6,r10,267
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 267, ctx.xer);
	// addi r8,r10,-267
	ctx.r8.s64 = ctx.r10.s64 + -267;
	// bge cr6,0x8322f4c4
	if (!ctx.cr6.lt) goto loc_8322F4C4;
	// addi r8,r10,103
	ctx.r8.s64 = ctx.r10.s64 + 103;
loc_8322F4C4:
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,370
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 370, ctx.xer);
	// lwzx r4,r9,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r3,r8,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// xor r8,r3,r4
	ctx.r8.u64 = ctx.r3.u64 ^ ctx.r4.u64;
	// stwx r8,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u32);
	// blt cr6,0x8322f4f4
	if (ctx.cr6.lt) goto loc_8322F4F4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-31652(r5)
	PPC_STORE_U32(ctx.r5.u32 + -31652, ctx.r11.u32);
	// b 0x8322f4f8
	goto loc_8322F4F8;
loc_8322F4F4:
	// stw r10,-31652(r5)
	PPC_STORE_U32(ctx.r5.u32 + -31652, ctx.r10.u32);
loc_8322F4F8:
	// clrlwi r11,r8,8
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFFFF;
	// clrlwi r10,r7,8
	ctx.r10.u64 = ctx.r7.u32 & 0xFFFFFF;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f12,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// clrlwi r9,r6,8
	ctx.r9.u64 = ctx.r6.u32 & 0xFFFFFF;
	// fcfid f6,f12
	ctx.f6.f64 = double(ctx.f12.s64);
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// fcfid f7,f11
	ctx.f7.f64 = double(ctx.f11.s64);
	// addi r6,r8,-27456
	ctx.r6.s64 = ctx.r8.s64 + -27456;
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// frsp f3,f6
	ctx.f3.f64 = double(float(ctx.f6.f64));
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f13,-27456(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -27456);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f12,-12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -12);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfs f0,3120(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3120);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// lvlx v0,0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// fmsubs f5,f8,f0,f13
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 - ctx.f13.f64));
	// stfs f5,80(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v13,0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// fmsubs f2,f4,f0,f13
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 - ctx.f13.f64));
	// stfs f2,80(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmsubs f0,f3,f0,f13
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lvlx v11,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v12,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v11,v12,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// vrlimi128 v11,v13,3,2
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 3));
	// lfs f1,-25888(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -25888);
	ctx.f1.f64 = double(temp.f32);
	// stvx128 v11,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82260bc8
	ctx.lr = 0x8322F5AC;
	sub_82260BC8(ctx, base);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lvx128 v1,r0,r7
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322F5C4"))) PPC_WEAK_FUNC(sub_8322F5C4);
PPC_FUNC_IMPL(__imp__sub_8322F5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322F5C8"))) PPC_WEAK_FUNC(sub_8322F5C8);
PPC_FUNC_IMPL(__imp__sub_8322F5C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r5,-31950
	ctx.r5.s64 = -2093875200;
	// lwz r10,-31652(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + -31652);
	// cmpwi cr6,r10,267
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 267, ctx.xer);
	// addi r8,r10,-267
	ctx.r8.s64 = ctx.r10.s64 + -267;
	// bge cr6,0x8322f5ec
	if (!ctx.cr6.lt) goto loc_8322F5EC;
	// addi r8,r10,103
	ctx.r8.s64 = ctx.r10.s64 + 103;
loc_8322F5EC:
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-4048
	ctx.r11.s64 = ctx.r11.s64 + -4048;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,370
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 370, ctx.xer);
	// lwzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r6,r8,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// xor r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// stwx r6,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r6.u32);
	// blt cr6,0x8322f61c
	if (ctx.cr6.lt) goto loc_8322F61C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8322F61C:
	// cmpwi cr6,r10,267
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 267, ctx.xer);
	// addi r8,r10,-267
	ctx.r8.s64 = ctx.r10.s64 + -267;
	// bge cr6,0x8322f62c
	if (!ctx.cr6.lt) goto loc_8322F62C;
	// addi r8,r10,103
	ctx.r8.s64 = ctx.r10.s64 + 103;
loc_8322F62C:
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,370
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 370, ctx.xer);
	// lwzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r4,r8,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// xor r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 ^ ctx.r7.u64;
	// stwx r7,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r7.u32);
	// blt cr6,0x8322f654
	if (ctx.cr6.lt) goto loc_8322F654;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8322F654:
	// cmpwi cr6,r10,267
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 267, ctx.xer);
	// addi r8,r10,-267
	ctx.r8.s64 = ctx.r10.s64 + -267;
	// bge cr6,0x8322f664
	if (!ctx.cr6.lt) goto loc_8322F664;
	// addi r8,r10,103
	ctx.r8.s64 = ctx.r10.s64 + 103;
loc_8322F664:
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,370
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 370, ctx.xer);
	// lwzx r4,r9,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r3,r8,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// xor r8,r3,r4
	ctx.r8.u64 = ctx.r3.u64 ^ ctx.r4.u64;
	// stwx r8,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u32);
	// blt cr6,0x8322f694
	if (ctx.cr6.lt) goto loc_8322F694;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-31652(r5)
	PPC_STORE_U32(ctx.r5.u32 + -31652, ctx.r11.u32);
	// b 0x8322f698
	goto loc_8322F698;
loc_8322F694:
	// stw r10,-31652(r5)
	PPC_STORE_U32(ctx.r5.u32 + -31652, ctx.r10.u32);
loc_8322F698:
	// clrlwi r11,r8,8
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFFFF;
	// clrlwi r10,r7,8
	ctx.r10.u64 = ctx.r7.u32 & 0xFFFFFF;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f12,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// clrlwi r9,r6,8
	ctx.r9.u64 = ctx.r6.u32 & 0xFFFFFF;
	// fcfid f6,f12
	ctx.f6.f64 = double(ctx.f12.s64);
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// fcfid f7,f11
	ctx.f7.f64 = double(ctx.f11.s64);
	// addi r6,r8,-27456
	ctx.r6.s64 = ctx.r8.s64 + -27456;
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// frsp f3,f6
	ctx.f3.f64 = double(float(ctx.f6.f64));
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f13,-27456(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -27456);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f12,-12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -12);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfs f0,3120(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3120);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// lvlx v0,0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// fmsubs f5,f8,f0,f13
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 - ctx.f13.f64));
	// stfs f5,80(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v13,0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// fmsubs f2,f4,f0,f13
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 - ctx.f13.f64));
	// stfs f2,80(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmsubs f0,f3,f0,f13
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lvlx v11,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v12,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v11,v12,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// vrlimi128 v11,v13,3,2
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 3));
	// lfs f1,-25888(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -25888);
	ctx.f1.f64 = double(temp.f32);
	// stvx128 v11,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82260bc8
	ctx.lr = 0x8322F74C;
	sub_82260BC8(ctx, base);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lvx128 v1,r0,r7
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322F764"))) PPC_WEAK_FUNC(sub_8322F764);
PPC_FUNC_IMPL(__imp__sub_8322F764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322F768"))) PPC_WEAK_FUNC(sub_8322F768);
PPC_FUNC_IMPL(__imp__sub_8322F768) {
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
	// lis r31,-31924
	ctx.r31.s64 = -2092171264;
	// addi r3,r31,-6744
	ctx.r3.s64 = ctx.r31.s64 + -6744;
	// bl 0x82be4090
	ctx.lr = 0x8322F788;
	sub_82BE4090(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r30,-31924
	ctx.r30.s64 = -2092171264;
	// stw r11,-6744(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6744, ctx.r11.u32);
	// addi r3,r30,-6736
	ctx.r3.s64 = ctx.r30.s64 + -6736;
	// bl 0x82be41a8
	ctx.lr = 0x8322F79C;
	sub_82BE41A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r31,-31924
	ctx.r31.s64 = -2092171264;
	// stw r11,-6736(r30)
	PPC_STORE_U32(ctx.r30.u32 + -6736, ctx.r11.u32);
	// addi r3,r31,-6728
	ctx.r3.s64 = ctx.r31.s64 + -6728;
	// bl 0x82be42c0
	ctx.lr = 0x8322F7B0;
	sub_82BE42C0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r11,-6728(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6728, ctx.r11.u32);
	// addi r11,r10,-7364
	ctx.r11.s64 = ctx.r10.s64 + -7364;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x8247e448
	ctx.lr = 0x8322F7C8;
	sub_8247E448(ctx, base);
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// addi r11,r9,-7288
	ctx.r11.s64 = ctx.r9.s64 + -7288;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x8247e448
	ctx.lr = 0x8322F7D8;
	sub_8247E448(ctx, base);
	// lis r8,-31926
	ctx.r8.s64 = -2092302336;
	// addi r11,r8,-7432
	ctx.r11.s64 = ctx.r8.s64 + -7432;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x8247e448
	ctx.lr = 0x8322F7E8;
	sub_8247E448(ctx, base);
	// bl 0x8322e028
	ctx.lr = 0x8322F7EC;
	sub_8322E028(ctx, base);
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

__attribute__((alias("__imp__sub_8322F804"))) PPC_WEAK_FUNC(sub_8322F804);
PPC_FUNC_IMPL(__imp__sub_8322F804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322F808"))) PPC_WEAK_FUNC(sub_8322F808);
PPC_FUNC_IMPL(__imp__sub_8322F808) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82be4008
	ctx.lr = 0x8322F828;
	sub_82BE4008(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82be4120
	ctx.lr = 0x8322F830;
	sub_82BE4120(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82be4238
	ctx.lr = 0x8322F838;
	sub_82BE4238(ctx, base);
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-7304(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7304);
	// bl 0x83220478
	ctx.lr = 0x8322F848;
	sub_83220478(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r10,-7308
	ctx.r4.s64 = ctx.r10.s64 + -7308;
	// bl 0x832355a0
	ctx.lr = 0x8322F858;
	sub_832355A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x8322F860;
	sub_829FF648(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lis r8,-31946
	ctx.r8.s64 = -2093613056;
	// addi r7,r9,-19232
	ctx.r7.s64 = ctx.r9.s64 + -19232;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r5,r8,-4108
	ctx.r5.s64 = ctx.r8.s64 + -4108;
	// lis r4,-31927
	ctx.r4.s64 = -2092367872;
	// lfs f9,-19232(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -19232);
	ctx.f9.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,3
	ctx.r10.s64 = 3;
	// lfs f13,-8668(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -8668);
	ctx.f13.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f0,2948(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2948);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,-8224(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -8224);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,44(r5)
	PPC_STORE_U32(ctx.r5.u32 + 44, ctx.r11.u32);
	// lfs f11,10996(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 10996);
	ctx.f11.f64 = double(temp.f32);
	// stw r10,48(r5)
	PPC_STORE_U32(ctx.r5.u32 + 48, ctx.r10.u32);
	// lfs f10,-8108(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -8108);
	ctx.f10.f64 = double(temp.f32);
	// stw r9,27640(r4)
	PPC_STORE_U32(ctx.r4.u32 + 27640, ctx.r9.u32);
	// stfs f13,32(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 32, temp.u32);
	// stfs f0,36(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 36, temp.u32);
	// stfs f12,40(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 40, temp.u32);
	// stfs f10,-4108(r8)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r8.u32 + -4108, temp.u32);
	// stfs f11,8(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// stfs f11,16(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// stfs f9,24(r5)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r5.u32 + 24, temp.u32);
	// stfs f13,4(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// stfs f0,12(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// stfs f0,20(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 20, temp.u32);
	// stfs f12,28(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 28, temp.u32);
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

__attribute__((alias("__imp__sub_8322F8EC"))) PPC_WEAK_FUNC(sub_8322F8EC);
PPC_FUNC_IMPL(__imp__sub_8322F8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322F8F0"))) PPC_WEAK_FUNC(sub_8322F8F0);
PPC_FUNC_IMPL(__imp__sub_8322F8F0) {
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
	// bl 0x8322e3c0
	ctx.lr = 0x8322F900;
	sub_8322E3C0(ctx, base);
	// bl 0x822be890
	ctx.lr = 0x8322F904;
	sub_822BE890(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322F914"))) PPC_WEAK_FUNC(sub_8322F914);
PPC_FUNC_IMPL(__imp__sub_8322F914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322F918"))) PPC_WEAK_FUNC(sub_8322F918);
PPC_FUNC_IMPL(__imp__sub_8322F918) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8322e3c0
	ctx.lr = 0x8322F92C;
	sub_8322E3C0(ctx, base);
	// bl 0x822be890
	ctx.lr = 0x8322F930;
	sub_822BE890(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322F940"))) PPC_WEAK_FUNC(sub_8322F940);
PPC_FUNC_IMPL(__imp__sub_8322F940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x8322F948;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// lis r29,-31927
	ctx.r29.s64 = -2092367872;
	// addi r30,r11,-7824
	ctx.r30.s64 = ctx.r11.s64 + -7824;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-7824(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7824);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r27,27648(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27648);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,27648(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27648, ctx.r10.u32);
	// beq cr6,0x8322f97c
	if (ctx.cr6.eq) goto loc_8322F97C;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_8322F97C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a1b8c8
	ctx.lr = 0x8322F988;
	sub_82A1B8C8(ctx, base);
	// lis r28,-31950
	ctx.r28.s64 = -2093875200;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,-22564(r28)
	PPC_STORE_U32(ctx.r28.u32 + -22564, ctx.r11.u32);
	// bl 0x82b3a158
	ctx.lr = 0x8322F9A0;
	sub_82B3A158(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8322fa88
	if (!ctx.cr6.eq) goto loc_8322FA88;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x8322fa00
	if (ctx.cr6.lt) goto loc_8322FA00;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r7,r10,-4
	ctx.r7.s64 = ctx.r10.s64 + -4;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// addi r5,r9,4
	ctx.r5.s64 = ctx.r9.s64 + 4;
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r4,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r4.u8);
	// lbz r3,1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r3,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r3.u8);
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stb r10,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r10.u8);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stb r9,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, ctx.r9.u8);
	// stw r6,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// stw r7,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// b 0x8322fa10
	goto loc_8322FA10;
loc_8322FA00:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1b480
	ctx.lr = 0x8322FA10;
	sub_82A1B480(ctx, base);
loc_8322FA10:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x8322fa44
	if (ctx.cr6.eq) goto loc_8322FA44;
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r9,87(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// lbz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
loc_8322FA44:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-22564(r28)
	PPC_STORE_U32(ctx.r28.u32 + -22564, ctx.r11.u32);
	// bl 0x8322d0b0
	ctx.lr = 0x8322FA54;
	sub_8322D0B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83225fd0
	ctx.lr = 0x8322FA5C;
	sub_83225FD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83225bc0
	ctx.lr = 0x8322FA64;
	sub_83225BC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83225760
	ctx.lr = 0x8322FA6C;
	sub_83225760(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832275c0
	ctx.lr = 0x8322FA74;
	sub_832275C0(ctx, base);
	// stw r27,27648(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27648, ctx.r27.u32);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r11,r10,-7364
	ctx.r11.s64 = ctx.r10.s64 + -7364;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x8247e448
	ctx.lr = 0x8322FA88;
	sub_8247E448(ctx, base);
loc_8322FA88:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8322FA90;
	sub_82214F08(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_8322FA98"))) PPC_WEAK_FUNC(sub_8322FA98);
PPC_FUNC_IMPL(__imp__sub_8322FA98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322FA9C"))) PPC_WEAK_FUNC(sub_8322FA9C);
PPC_FUNC_IMPL(__imp__sub_8322FA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322FAA0"))) PPC_WEAK_FUNC(sub_8322FAA0);
PPC_FUNC_IMPL(__imp__sub_8322FAA0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFF000;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// bne 0x8322fb00
	if (!ctx.cr0.eq) goto loc_8322FB00;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8322fad4
	if (ctx.cr6.eq) goto loc_8322FAD4;
loc_8322FAC4:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8322fac4
	if (!ctx.cr6.eq) goto loc_8322FAC4;
loc_8322FAD4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8322fae8
	if (ctx.cr6.eq) goto loc_8322FAE8;
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// b 0x8322faec
	goto loc_8322FAEC;
loc_8322FAE8:
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
loc_8322FAEC:
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82cc0cf0
	sub_82CC0CF0(ctx, base);
	return;
loc_8322FB00:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322FB30"))) PPC_WEAK_FUNC(sub_8322FB30);
PPC_FUNC_IMPL(__imp__sub_8322FB30) {
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
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8322fbf0
	if (!ctx.cr6.eq) goto loc_8322FBF0;
	// lis r5,128
	ctx.r5.s64 = 8388608;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cc0ca0
	ctx.lr = 0x8322FB68;
	sub_82CC0CA0(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8322fb88
	if (!ctx.cr6.eq) goto loc_8322FB88;
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
loc_8322FB88:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r11,11
	ctx.r8.s64 = ctx.r11.s64 + 11;
	// addic. r7,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r7.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// divwu r6,r8,r11
	ctx.r6.u32 = ctx.r8.u32 / ctx.r11.u32;
	// twllei r11,0
	// mullw r10,r6,r11
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// beq 0x8322fbdc
	if (ctx.cr0.eq) goto loc_8322FBDC;
loc_8322FBB8:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8322fbb8
	if (ctx.cr6.lt) goto loc_8322FBB8;
loc_8322FBDC:
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// stw r5,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r5.u32);
	// stw r5,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r5.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
loc_8322FBF0:
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8322fc20
	if (!ctx.cr6.eq) goto loc_8322FC20;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_8322FC20:
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

__attribute__((alias("__imp__sub_8322FC34"))) PPC_WEAK_FUNC(sub_8322FC34);
PPC_FUNC_IMPL(__imp__sub_8322FC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322FC38"))) PPC_WEAK_FUNC(sub_8322FC38);
PPC_FUNC_IMPL(__imp__sub_8322FC38) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,11
	ctx.r11.s64 = ctx.r4.s64 + 11;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// divwu r10,r11,r4
	ctx.r10.u32 = ctx.r11.u32 / ctx.r4.u32;
	// twllei r4,0
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// mullw r8,r10,r4
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// subfic r7,r8,4096
	ctx.xer.ca = ctx.r8.u32 <= 4096;
	ctx.r7.s64 = 4096 - ctx.r8.s64;
	// twllei r4,0
	// divwu r6,r7,r4
	ctx.r6.u32 = ctx.r7.u32 / ctx.r4.u32;
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322FC68"))) PPC_WEAK_FUNC(sub_8322FC68);
PPC_FUNC_IMPL(__imp__sub_8322FC68) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// li r11,4096
	ctx.r11.s64 = 4096;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8322fc80
	if (ctx.cr6.eq) goto loc_8322FC80;
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
loc_8322FC80:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8322fc90
	if (!ctx.cr6.eq) goto loc_8322FC90;
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
loc_8322FC90:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// oris r5,r11,128
	ctx.r5.u64 = ctx.r11.u64 | 8388608;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cc0ca0
	sub_82CC0CA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322FCA4"))) PPC_WEAK_FUNC(sub_8322FCA4);
PPC_FUNC_IMPL(__imp__sub_8322FCA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322FCA8"))) PPC_WEAK_FUNC(sub_8322FCA8);
PPC_FUNC_IMPL(__imp__sub_8322FCA8) {
	PPC_FUNC_PROLOGUE();
	// li r5,16384
	ctx.r5.s64 = 16384;
	// b 0x82cc0cf0
	sub_82CC0CF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322FCB0"))) PPC_WEAK_FUNC(sub_8322FCB0);
PPC_FUNC_IMPL(__imp__sub_8322FCB0) {
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
	// lis r10,1
	ctx.r10.s64 = 65536;
	// li r11,4096
	ctx.r11.s64 = 4096;
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8322fcd4
	if (!ctx.cr6.eq) goto loc_8322FCD4;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
loc_8322FCD4:
	// li r6,4
	ctx.r6.s64 = 4;
	// oris r5,r11,128
	ctx.r5.u64 = ctx.r11.u64 | 8388608;
	// bl 0x82cc0ca0
	ctx.lr = 0x8322FCE0;
	sub_82CC0CA0(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r10,1
	ctx.r3.u64 = ctx.r10.u64 ^ 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322FCFC"))) PPC_WEAK_FUNC(sub_8322FCFC);
PPC_FUNC_IMPL(__imp__sub_8322FCFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322FD00"))) PPC_WEAK_FUNC(sub_8322FD00);
PPC_FUNC_IMPL(__imp__sub_8322FD00) {
	PPC_FUNC_PROLOGUE();
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// b 0x82cc0cf0
	sub_82CC0CF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322FD10"))) PPC_WEAK_FUNC(sub_8322FD10);
PPC_FUNC_IMPL(__imp__sub_8322FD10) {
	PPC_FUNC_PROLOGUE();
	// lis r10,1
	ctx.r10.s64 = 65536;
	// li r11,8192
	ctx.r11.s64 = 8192;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8322fd28
	if (!ctx.cr6.eq) goto loc_8322FD28;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
loc_8322FD28:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// oris r5,r11,128
	ctx.r5.u64 = ctx.r11.u64 | 8388608;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82cc0ca0
	sub_82CC0CA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8322FD3C"))) PPC_WEAK_FUNC(sub_8322FD3C);
PPC_FUNC_IMPL(__imp__sub_8322FD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322FD40"))) PPC_WEAK_FUNC(sub_8322FD40);
PPC_FUNC_IMPL(__imp__sub_8322FD40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322FD44"))) PPC_WEAK_FUNC(sub_8322FD44);
PPC_FUNC_IMPL(__imp__sub_8322FD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322FD48"))) PPC_WEAK_FUNC(sub_8322FD48);
PPC_FUNC_IMPL(__imp__sub_8322FD48) {
	PPC_FUNC_PROLOGUE();
	// divwu r11,r5,r4
	ctx.r11.u32 = ctx.r5.u32 / ctx.r4.u32;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// twllei r4,0
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322FD68"))) PPC_WEAK_FUNC(sub_8322FD68);
PPC_FUNC_IMPL(__imp__sub_8322FD68) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8322fd9c
	if (ctx.cr6.eq) goto loc_8322FD9C;
loc_8322FD74:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8322fd90
	if (ctx.cr6.lt) goto loc_8322FD90;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8322fda0
	if (ctx.cr6.lt) goto loc_8322FDA0;
loc_8322FD90:
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8322fd74
	if (!ctx.cr6.eq) goto loc_8322FD74;
loc_8322FD9C:
	// li r9,0
	ctx.r9.s64 = 0;
loc_8322FDA0:
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r10,1
	ctx.r3.u64 = ctx.r10.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8322FDB0"))) PPC_WEAK_FUNC(sub_8322FDB0);
PPC_FUNC_IMPL(__imp__sub_8322FDB0) {
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
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r31,12(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8322fdfc
	if (ctx.cr6.eq) goto loc_8322FDFC;
loc_8322FDD4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8322fdf0
	if (ctx.cr6.lt) goto loc_8322FDF0;
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8322fe00
	if (ctx.cr6.lt) goto loc_8322FE00;
loc_8322FDF0:
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8322fdd4
	if (!ctx.cr6.eq) goto loc_8322FDD4;
loc_8322FDFC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8322FE00:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// subf r5,r8,r4
	ctx.r5.s64 = ctx.r4.s64 - ctx.r8.s64;
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// divwu r30,r5,r4
	ctx.r30.u32 = ctx.r5.u32 / ctx.r4.u32;
	// rlwinm r10,r30,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r8,r30,27
	ctx.r8.u64 = ctx.r30.u32 & 0x1F;
	// twllei r4,0
	// slw r7,r7,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// andc r4,r6,r7
	ctx.r4.u64 = ctx.r6.u64 & ~ctx.r7.u64;
	// stwx r4,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u32);
	// li r5,16384
	ctx.r5.s64 = 16384;
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x82cc0cf0
	ctx.lr = 0x8322FE50;
	sub_82CC0CF0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x8322fe60
	if (!ctx.cr6.lt) goto loc_8322FE60;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_8322FE60:
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

__attribute__((alias("__imp__sub_8322FE78"))) PPC_WEAK_FUNC(sub_8322FE78);
PPC_FUNC_IMPL(__imp__sub_8322FE78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x8322FE80;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// rlwinm r29,r10,0,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// bl 0x82ca3c68
	ctx.lr = 0x8322FEA0;
	sub_82CA3C68(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8322feb8
	if (!ctx.cr6.eq) goto loc_8322FEB8;
loc_8322FEAC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_8322FEB8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82ca3190
	ctx.lr = 0x8322FEC8;
	sub_82CA3190(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r11,8192
	ctx.r11.s64 = 8192;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8322fee8
	if (!ctx.cr6.eq) goto loc_8322FEE8;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
loc_8322FEE8:
	// li r6,1
	ctx.r6.s64 = 1;
	// oris r5,r11,128
	ctx.r5.u64 = ctx.r11.u64 | 8388608;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cc0ca0
	ctx.lr = 0x8322FEF8;
	sub_82CC0CA0(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8322feac
	if (ctx.cr6.eq) goto loc_8322FEAC;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_8322FF24"))) PPC_WEAK_FUNC(sub_8322FF24);
PPC_FUNC_IMPL(__imp__sub_8322FF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322FF28"))) PPC_WEAK_FUNC(sub_8322FF28);
PPC_FUNC_IMPL(__imp__sub_8322FF28) {
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
	// lwz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8322ff74
	if (ctx.cr6.eq) goto loc_8322FF74;
loc_8322FF48:
	// lis r5,0
	ctx.r5.s64 = 0;
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// bl 0x82cc0cf0
	ctx.lr = 0x8322FF60;
	sub_82CC0CF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ca5dc0
	ctx.lr = 0x8322FF68;
	sub_82CA5DC0(ctx, base);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8322ff48
	if (!ctx.cr6.eq) goto loc_8322FF48;
loc_8322FF74:
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

__attribute__((alias("__imp__sub_8322FF8C"))) PPC_WEAK_FUNC(sub_8322FF8C);
PPC_FUNC_IMPL(__imp__sub_8322FF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8322FF90"))) PPC_WEAK_FUNC(sub_8322FF90);
PPC_FUNC_IMPL(__imp__sub_8322FF90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x8322FF98;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r31,12(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8322ffcc
	if (ctx.cr6.eq) goto loc_8322FFCC;
loc_8322FFB0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83230000
	if (!ctx.cr6.eq) goto loc_83230000;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8322ffb0
	if (!ctx.cr6.eq) goto loc_8322FFB0;
loc_8322FFCC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8322fe78
	ctx.lr = 0x8322FFD4;
	sub_8322FE78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8322ffec
	if (!ctx.cr6.eq) goto loc_8322FFEC;
loc_8322FFE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_8322FFEC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8322fffc
	if (ctx.cr6.eq) goto loc_8322FFFC;
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// b 0x83230000
	goto loc_83230000;
loc_8322FFFC:
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
loc_83230000:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r9,4096
	ctx.r9.s64 = 4096;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mullw r11,r4,r30
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r30.s32);
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bne cr6,0x8323002c
	if (!ctx.cr6.eq) goto loc_8323002C;
	// lis r9,8192
	ctx.r9.s64 = 536870912;
	// ori r9,r9,4096
	ctx.r9.u64 = ctx.r9.u64 | 4096;
loc_8323002C:
	// li r6,4
	ctx.r6.s64 = 4;
	// oris r5,r9,128
	ctx.r5.u64 = ctx.r9.u64 | 8388608;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82cc0ca0
	ctx.lr = 0x8323003C;
	sub_82CC0CA0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8322ffe0
	if (ctx.cr6.eq) goto loc_8322FFE0;
	// rlwinm r11,r30,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r10,r31,16
	ctx.r10.s64 = ctx.r31.s64 + 16;
	// li r7,1
	ctx.r7.s64 = 1;
	// clrlwi r9,r30,27
	ctx.r9.u64 = ctx.r30.u32 & 0x1F;
	// slw r8,r7,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// or r5,r8,r6
	ctx.r5.u64 = ctx.r8.u64 | ctx.r6.u64;
	// stwx r5,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r5.u32);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r11.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// beq 0x83230150
	if (ctx.cr0.eq) goto loc_83230150;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r6,8(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r11,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r8,r11,27
	ctx.r8.u64 = ctx.r11.u32 & 0x1F;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// slw r5,r7,r8
	ctx.r5.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// and r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 & ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83230154
	if (ctx.cr6.eq) goto loc_83230154;
	// rotlwi r9,r4,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x832300cc
	if (!ctx.cr6.eq) goto loc_832300CC;
loc_832300B0:
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x8323013c
	if (!ctx.cr6.lt) goto loc_8323013C;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x832300b0
	if (ctx.cr6.eq) goto loc_832300B0;
loc_832300CC:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r10,r8,16
	ctx.r10.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// bne cr6,0x832300e4
	if (!ctx.cr6.eq) goto loc_832300E4;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// rlwinm r8,r8,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
loc_832300E4:
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// bne cr6,0x832300f8
	if (!ctx.cr6.eq) goto loc_832300F8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r8,r8,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
loc_832300F8:
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_83230100:
	// and r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 & ctx.r8.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x83230134
	if (ctx.cr6.eq) goto loc_83230134;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// blt cr6,0x83230100
	if (ctx.cr6.lt) goto loc_83230100;
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_83230134:
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x83230154
	if (ctx.cr6.lt) goto loc_83230154;
loc_8323013C:
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_83230150:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
loc_83230154:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_83230164"))) PPC_WEAK_FUNC(sub_83230164);
PPC_FUNC_IMPL(__imp__sub_83230164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83230168"))) PPC_WEAK_FUNC(sub_83230168);
PPC_FUNC_IMPL(__imp__sub_83230168) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323016C"))) PPC_WEAK_FUNC(sub_8323016C);
PPC_FUNC_IMPL(__imp__sub_8323016C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83230170"))) PPC_WEAK_FUNC(sub_83230170);
PPC_FUNC_IMPL(__imp__sub_83230170) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83230198
	if (ctx.cr6.eq) goto loc_83230198;
loc_83230180:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x83230198
	if (ctx.cr6.eq) goto loc_83230198;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83230180
	if (!ctx.cr6.eq) goto loc_83230180;
loc_83230198:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832301ac
	if (ctx.cr6.eq) goto loc_832301AC;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// blr 
	return;
loc_832301AC:
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832301B4"))) PPC_WEAK_FUNC(sub_832301B4);
PPC_FUNC_IMPL(__imp__sub_832301B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832301B8"))) PPC_WEAK_FUNC(sub_832301B8);
PPC_FUNC_IMPL(__imp__sub_832301B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832301e0
	if (ctx.cr6.eq) goto loc_832301E0;
loc_832301C8:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x832301e0
	if (!ctx.cr6.lt) goto loc_832301E0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832301c8
	if (!ctx.cr6.eq) goto loc_832301C8;
loc_832301E0:
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832301f4
	if (ctx.cr6.eq) goto loc_832301F4;
	// stw r4,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r4.u32);
	// blr 
	return;
loc_832301F4:
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832301FC"))) PPC_WEAK_FUNC(sub_832301FC);
PPC_FUNC_IMPL(__imp__sub_832301FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83230200"))) PPC_WEAK_FUNC(sub_83230200);
PPC_FUNC_IMPL(__imp__sub_83230200) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r7,r11,15
	ctx.r7.s64 = ctx.r11.s64 + 15;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// divwu r5,r7,r11
	ctx.r5.u32 = ctx.r7.u32 / ctx.r11.u32;
	// divwu r4,r6,r11
	ctx.r4.u32 = ctx.r6.u32 / ctx.r11.u32;
	// mullw r10,r5,r11
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// mullw r9,r4,r11
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// divwu r6,r7,r9
	ctx.r6.u32 = ctx.r7.u32 / ctx.r9.u32;
	// twllei r11,0
	// twllei r11,0
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// twllei r9,0
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83230250"))) PPC_WEAK_FUNC(sub_83230250);
PPC_FUNC_IMPL(__imp__sub_83230250) {
	PPC_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r5,r11,15
	ctx.r5.s64 = ctx.r11.s64 + 15;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// divwu r9,r5,r11
	ctx.r9.u32 = ctx.r5.u32 / ctx.r11.u32;
	// addi r6,r8,-1
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// twllei r11,0
	// divwu r4,r6,r11
	ctx.r4.u32 = ctx.r6.u32 / ctx.r11.u32;
	// mullw r6,r9,r11
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// mullw r8,r4,r11
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lwz r7,0(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// subf r5,r6,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r6.s64;
	// divwu r4,r5,r8
	ctx.r4.u32 = ctx.r5.u32 / ctx.r8.u32;
	// twllei r11,0
	// twllei r8,0
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832302C4"))) PPC_WEAK_FUNC(sub_832302C4);
PPC_FUNC_IMPL(__imp__sub_832302C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832302C8"))) PPC_WEAK_FUNC(sub_832302C8);
PPC_FUNC_IMPL(__imp__sub_832302C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,28(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x832302fc
	if (ctx.cr6.eq) goto loc_832302FC;
loc_832302D4:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x832302f0
	if (ctx.cr6.lt) goto loc_832302F0;
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83230304
	if (ctx.cr6.lt) goto loc_83230304;
loc_832302F0:
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x832302d4
	if (!ctx.cr6.eq) goto loc_832302D4;
loc_832302FC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_83230304:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// andc r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 & ~ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8323031C"))) PPC_WEAK_FUNC(sub_8323031C);
PPC_FUNC_IMPL(__imp__sub_8323031C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83230320"))) PPC_WEAK_FUNC(sub_83230320);
PPC_FUNC_IMPL(__imp__sub_83230320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x83230328;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r31,36
	ctx.r30.s64 = ctx.r31.s64 + 36;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d7408
	ctx.lr = 0x83230340;
	sub_822D7408(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// andc r4,r29,r10
	ctx.r4.u64 = ctx.r29.u64 & ~ctx.r10.u64;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// stw r8,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r8.u32);
	// stw r29,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r29.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// subf r5,r11,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r11.s64;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8323041c
	if (!ctx.cr6.eq) goto loc_8323041C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832303b8
	if (ctx.cr6.eq) goto loc_832303B8;
loc_832303A0:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x832303b8
	if (ctx.cr6.eq) goto loc_832303B8;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832303a0
	if (!ctx.cr6.eq) goto loc_832303A0;
loc_832303B8:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832303cc
	if (ctx.cr6.eq) goto loc_832303CC;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// b 0x832303d0
	goto loc_832303D0;
loc_832303CC:
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_832303D0:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x83235fc0
	ctx.lr = 0x832303D8;
	sub_83235FC0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mullw r7,r11,r9
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// subf r5,r7,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r7.s64;
	// stw r5,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r5.u32);
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// subf r11,r4,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r4.s64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// lwsync 
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_8323041C:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8323047c
	if (!ctx.cr6.eq) goto loc_8323047C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83230454
	if (ctx.cr6.eq) goto loc_83230454;
loc_8323043C:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x83230454
	if (!ctx.cr6.lt) goto loc_83230454;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8323043c
	if (!ctx.cr6.eq) goto loc_8323043C;
loc_83230454:
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83230478
	if (ctx.cr6.eq) goto loc_83230478;
	// stw r4,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r4.u32);
	// lwsync 
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_83230478:
	// stw r4,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r4.u32);
loc_8323047C:
	// lwsync 
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_83230490"))) PPC_WEAK_FUNC(sub_83230490);
PPC_FUNC_IMPL(__imp__sub_83230490) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// addi r10,r4,15
	ctx.r10.s64 = ctx.r4.s64 + 15;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// twllei r4,0
	// divwu r8,r10,r4
	ctx.r8.u32 = ctx.r10.u32 / ctx.r4.u32;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mullw r6,r8,r4
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// twllei r4,0
	// divwu r5,r7,r4
	ctx.r5.u32 = ctx.r7.u32 / ctx.r4.u32;
	// mullw r4,r5,r4
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// subf r10,r6,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r6.s64;
	// divwu r9,r10,r4
	ctx.r9.u32 = ctx.r10.u32 / ctx.r4.u32;
	// twllei r4,0
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832304E8"))) PPC_WEAK_FUNC(sub_832304E8);
PPC_FUNC_IMPL(__imp__sub_832304E8) {
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
	// lwz r9,28(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83230528
	if (ctx.cr6.eq) goto loc_83230528;
loc_83230500:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8323051c
	if (ctx.cr6.lt) goto loc_8323051C;
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8323053c
	if (ctx.cr6.lt) goto loc_8323053C;
loc_8323051C:
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x83230500
	if (!ctx.cr6.eq) goto loc_83230500;
loc_83230528:
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
loc_8323053C:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// andc r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 & ~ctx.r11.u64;
	// lwz r3,12(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// bl 0x83230320
	ctx.lr = 0x83230554;
	sub_83230320(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83230568"))) PPC_WEAK_FUNC(sub_83230568);
PPC_FUNC_IMPL(__imp__sub_83230568) {
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
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x83236230
	ctx.lr = 0x83230584;
	sub_83236230(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x832305a0
	if (!ctx.cr6.eq) goto loc_832305A0;
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
loc_832305A0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r11,15
	ctx.r10.s64 = ctx.r11.s64 + 15;
	// twllei r11,0
	// divwu r9,r10,r11
	ctx.r9.u32 = ctx.r10.u32 / ctx.r11.u32;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// mullw r10,r7,r8
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x832305f0
	if (ctx.cr6.eq) goto loc_832305F0;
loc_832305D8:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x832305d8
	if (!ctx.cr6.eq) goto loc_832305D8;
loc_832305F0:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83230628
	if (ctx.cr6.eq) goto loc_83230628;
loc_83230610:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x83230628
	if (!ctx.cr6.lt) goto loc_83230628;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83230610
	if (!ctx.cr6.eq) goto loc_83230610;
loc_83230628:
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8323063c
	if (ctx.cr6.eq) goto loc_8323063C;
	// stw r3,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r3.u32);
	// b 0x83230640
	goto loc_83230640;
loc_8323063C:
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
loc_83230640:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mullw r11,r8,r7
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf r10,r11,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r11.s64;
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r5,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r5.u32);
	// stw r4,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r4.u32);
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

__attribute__((alias("__imp__sub_83230684"))) PPC_WEAK_FUNC(sub_83230684);
PPC_FUNC_IMPL(__imp__sub_83230684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83230688"))) PPC_WEAK_FUNC(sub_83230688);
PPC_FUNC_IMPL(__imp__sub_83230688) {
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
	// addi r30,r31,36
	ctx.r30.s64 = ctx.r31.s64 + 36;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d7408
	ctx.lr = 0x832306AC;
	sub_822D7408(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x832306dc
	if (!ctx.cr6.eq) goto loc_832306DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83230568
	ctx.lr = 0x832306C0;
	sub_83230568(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x832306dc
	if (!ctx.cr6.eq) goto loc_832306DC;
	// lwsync 
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x83230764
	goto loc_83230764;
loc_832306DC:
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// bne cr6,0x8323073c
	if (!ctx.cr6.eq) goto loc_8323073C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83230724
	if (ctx.cr6.eq) goto loc_83230724;
loc_8323070C:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x83230724
	if (ctx.cr6.eq) goto loc_83230724;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8323070c
	if (!ctx.cr6.eq) goto loc_8323070C;
loc_83230724:
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83230738
	if (ctx.cr6.eq) goto loc_83230738;
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// b 0x8323073c
	goto loc_8323073C;
loc_83230738:
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_8323073C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// lwsync 
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r6,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r6.u32);
loc_83230764:
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

__attribute__((alias("__imp__sub_8323077C"))) PPC_WEAK_FUNC(sub_8323077C);
PPC_FUNC_IMPL(__imp__sub_8323077C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83230780"))) PPC_WEAK_FUNC(sub_83230780);
PPC_FUNC_IMPL(__imp__sub_83230780) {
	PPC_FUNC_PROLOGUE();
	// b 0x82ca5dc0
	sub_82CA5DC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83230784"))) PPC_WEAK_FUNC(sub_83230784);
PPC_FUNC_IMPL(__imp__sub_83230784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83230788"))) PPC_WEAK_FUNC(sub_83230788);
PPC_FUNC_IMPL(__imp__sub_83230788) {
	PPC_FUNC_PROLOGUE();
	// b 0x82ca3c68
	sub_82CA3C68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8323078C"))) PPC_WEAK_FUNC(sub_8323078C);
PPC_FUNC_IMPL(__imp__sub_8323078C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83230790"))) PPC_WEAK_FUNC(sub_83230790);
PPC_FUNC_IMPL(__imp__sub_83230790) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,27636(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27636);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_832307A4:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x832307a4
	if (!ctx.cr6.eq) goto loc_832307A4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832307C0"))) PPC_WEAK_FUNC(sub_832307C0);
PPC_FUNC_IMPL(__imp__sub_832307C0) {
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
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-7828
	ctx.r30.s64 = ctx.r11.s64 + -7828;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d7408
	ctx.lr = 0x832307E8;
	sub_822D7408(ctx, base);
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r11,27636(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27636);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83230810
	if (ctx.cr6.eq) goto loc_83230810;
loc_832307F8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x83230838
	if (ctx.cr6.eq) goto loc_83230838;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832307f8
	if (!ctx.cr6.eq) goto loc_832307F8;
loc_83230810:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_83230814:
	// lwsync 
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
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
loc_83230838:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83230810
	if (ctx.cr6.eq) goto loc_83230810;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x83230814
	goto loc_83230814;
}

__attribute__((alias("__imp__sub_83230848"))) PPC_WEAK_FUNC(sub_83230848);
PPC_FUNC_IMPL(__imp__sub_83230848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x83230850;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-7828
	ctx.r31.s64 = ctx.r11.s64 + -7828;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d7408
	ctx.lr = 0x83230868;
	sub_822D7408(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// lwz r4,27636(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27636);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8323089c
	if (ctx.cr6.eq) goto loc_8323089C;
loc_83230880:
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x832308b0
	if (ctx.cr6.eq) goto loc_832308B0;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x83230880
	if (!ctx.cr6.eq) goto loc_83230880;
loc_8323089C:
	// lwsync 
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_832308B0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832308c4
	if (ctx.cr6.eq) goto loc_832308C4;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// b 0x832308cc
	goto loc_832308CC;
loc_832308C4:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,27636(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27636, ctx.r11.u32);
loc_832308CC:
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r3,27632(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27632);
	// bl 0x8322faa0
	ctx.lr = 0x832308D8;
	sub_8322FAA0(ctx, base);
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cc0cf0
	ctx.lr = 0x832308EC;
	sub_82CC0CF0(ctx, base);
	// lwsync 
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_83230900"))) PPC_WEAK_FUNC(sub_83230900);
PPC_FUNC_IMPL(__imp__sub_83230900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x83230908;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,-7828
	ctx.r30.s64 = ctx.r11.s64 + -7828;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d7408
	ctx.lr = 0x83230920;
	sub_822D7408(ctx, base);
	// addis r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 65536;
	// lis r5,8336
	ctx.r5.s64 = 546308096;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// rlwinm r4,r11,0,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cc0ca0
	ctx.lr = 0x83230940;
	sub_82CC0CA0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83230964
	if (!ctx.cr6.eq) goto loc_83230964;
loc_8323094C:
	// lwsync 
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_83230964:
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r3,27632(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27632);
	// bl 0x8322fb30
	ctx.lr = 0x83230970;
	sub_8322FB30(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8323094c
	if (ctx.cr6.eq) goto loc_8323094C;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// lwz r11,27636(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27636);
	// stw r3,27636(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27636, ctx.r3.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwsync 
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_832309A8"))) PPC_WEAK_FUNC(sub_832309A8);
PPC_FUNC_IMPL(__imp__sub_832309A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r22,31608(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31608);
	// lwz r16,628(r10)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r10.u32 + 628);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82ca3c68
	ctx.lr = 0x832309CC;
	sub_82CA3C68(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83230a00
	if (ctx.cr6.eq) goto loc_83230A00;
	// li r11,12
	ctx.r11.s64 = 12;
	// li r10,340
	ctx.r10.s64 = 340;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// stw r3,27632(r8)
	PPC_STORE_U32(ctx.r8.u32 + 27632, ctx.r3.u32);
	// b 0x83230a08
	goto loc_83230A08;
loc_83230A00:
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stw r3,27632(r11)
	PPC_STORE_U32(ctx.r11.u32 + 27632, ctx.r3.u32);
loc_83230A08:
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832309B0"))) PPC_WEAK_FUNC(sub_832309B0);
PPC_FUNC_IMPL(__imp__sub_832309B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82ca3c68
	ctx.lr = 0x832309CC;
	sub_82CA3C68(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83230a00
	if (ctx.cr6.eq) goto loc_83230A00;
	// li r11,12
	ctx.r11.s64 = 12;
	// li r10,340
	ctx.r10.s64 = 340;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// lis r8,-31927
	ctx.r8.s64 = -2092367872;
	// stw r3,27632(r8)
	PPC_STORE_U32(ctx.r8.u32 + 27632, ctx.r3.u32);
	// b 0x83230a08
	goto loc_83230A08;
loc_83230A00:
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stw r3,27632(r11)
	PPC_STORE_U32(ctx.r11.u32 + 27632, ctx.r3.u32);
loc_83230A08:
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83230A1C"))) PPC_WEAK_FUNC(sub_83230A1C);
PPC_FUNC_IMPL(__imp__sub_83230A1C) {
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
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x829ce870
	ctx.lr = 0x83230A38;
	sub_829CE870(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83230A48"))) PPC_WEAK_FUNC(sub_83230A48);
PPC_FUNC_IMPL(__imp__sub_83230A48) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// lwz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// subf r8,r10,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r10.s64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r5,r11,r4
	ctx.r5.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r4,r8,1
	ctx.r4.s64 = ctx.r8.s64 + 1;
	// andc r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// addi r31,r10,-1
	ctx.r31.s64 = ctx.r10.s64 + -1;
	// andc r8,r5,r11
	ctx.r8.u64 = ctx.r5.u64 & ~ctx.r11.u64;
	// andc r11,r4,r31
	ctx.r11.u64 = ctx.r4.u64 & ~ctx.r31.u64;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// stw r8,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x83230ab8
	if (ctx.cr6.lt) goto loc_83230AB8;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x83230a98
	if (!ctx.cr6.lt) goto loc_83230A98;
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
loc_83230A98:
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x83230ab8
	if (ctx.cr6.gt) goto loc_83230AB8;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_83230AB8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83230AC8"))) PPC_WEAK_FUNC(sub_83230AC8);
PPC_FUNC_IMPL(__imp__sub_83230AC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83230adc
	if (!ctx.cr6.eq) goto loc_83230ADC;
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// blr 
	return;
loc_83230ADC:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83230b00
	if (ctx.cr6.eq) goto loc_83230B00;
loc_83230AEC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x83230aec
	if (!ctx.cr6.eq) goto loc_83230AEC;
loc_83230B00:
	// stw r4,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83230B08"))) PPC_WEAK_FUNC(sub_83230B08);
PPC_FUNC_IMPL(__imp__sub_83230B08) {
	PPC_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// subf r11,r8,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r8.s64;
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// cmplwi cr6,r11,1024
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1024, ctx.xer);
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_83230B40:
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,1024
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1024, ctx.xer);
	// bgt cr6,0x83230b40
	if (ctx.cr6.gt) goto loc_83230B40;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83230B58"))) PPC_WEAK_FUNC(sub_83230B58);
PPC_FUNC_IMPL(__imp__sub_83230B58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83230B5C"))) PPC_WEAK_FUNC(sub_83230B5C);
PPC_FUNC_IMPL(__imp__sub_83230B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83230B60"))) PPC_WEAK_FUNC(sub_83230B60);
PPC_FUNC_IMPL(__imp__sub_83230B60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83230B64"))) PPC_WEAK_FUNC(sub_83230B64);
PPC_FUNC_IMPL(__imp__sub_83230B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83230B68"))) PPC_WEAK_FUNC(sub_83230B68);
PPC_FUNC_IMPL(__imp__sub_83230B68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83230B6C"))) PPC_WEAK_FUNC(sub_83230B6C);
PPC_FUNC_IMPL(__imp__sub_83230B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83230B70"))) PPC_WEAK_FUNC(sub_83230B70);
PPC_FUNC_IMPL(__imp__sub_83230B70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83230B74"))) PPC_WEAK_FUNC(sub_83230B74);
PPC_FUNC_IMPL(__imp__sub_83230B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83230B78"))) PPC_WEAK_FUNC(sub_83230B78);
PPC_FUNC_IMPL(__imp__sub_83230B78) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83230bac
	if (ctx.cr6.eq) goto loc_83230BAC;
loc_83230B84:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83230ba0
	if (ctx.cr6.lt) goto loc_83230BA0;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83230bb4
	if (ctx.cr6.lt) goto loc_83230BB4;
loc_83230BA0:
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x83230b84
	if (!ctx.cr6.eq) goto loc_83230B84;
loc_83230BAC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_83230BB4:
	// lwz r3,-4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83230BBC"))) PPC_WEAK_FUNC(sub_83230BBC);
PPC_FUNC_IMPL(__imp__sub_83230BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83230BC0"))) PPC_WEAK_FUNC(sub_83230BC0);
PPC_FUNC_IMPL(__imp__sub_83230BC0) {
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
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r31,27624(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27624);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x822d7408
	ctx.lr = 0x83230BE8;
	sub_822D7408(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322faa0
	ctx.lr = 0x83230BF4;
	sub_8322FAA0(ctx, base);
	// lwsync 
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_83230C18"))) PPC_WEAK_FUNC(sub_83230C18);
PPC_FUNC_IMPL(__imp__sub_83230C18) {
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
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r31,27624(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27624);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x822d7408
	ctx.lr = 0x83230C38;
	sub_822D7408(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322fb30
	ctx.lr = 0x83230C40;
	sub_8322FB30(ctx, base);
	// lwsync 
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bne cr6,0x83230c6c
	if (!ctx.cr6.eq) goto loc_83230C6C;
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
loc_83230C6C:
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83230C88"))) PPC_WEAK_FUNC(sub_83230C88);
PPC_FUNC_IMPL(__imp__sub_83230C88) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83230a48
	ctx.lr = 0x83230CBC;
	sub_83230A48(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83230ce4
	if (ctx.cr6.eq) goto loc_83230CE4;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cc0cf0
	ctx.lr = 0x83230CD8;
	sub_82CC0CF0(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// subf r10,r30,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r30.s64;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
loc_83230CE4:
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

__attribute__((alias("__imp__sub_83230CFC"))) PPC_WEAK_FUNC(sub_83230CFC);
PPC_FUNC_IMPL(__imp__sub_83230CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83230D00"))) PPC_WEAK_FUNC(sub_83230D00);
PPC_FUNC_IMPL(__imp__sub_83230D00) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83230a48
	ctx.lr = 0x83230D34;
	sub_83230A48(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83230d84
	if (ctx.cr6.eq) goto loc_83230D84;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// li r11,4096
	ctx.r11.s64 = 4096;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x83230d5c
	if (!ctx.cr6.eq) goto loc_83230D5C;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
loc_83230D5C:
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// oris r5,r11,128
	ctx.r5.u64 = ctx.r11.u64 | 8388608;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82cc0ca0
	ctx.lr = 0x83230D70;
	sub_82CC0CA0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83230d88
	if (ctx.cr6.eq) goto loc_83230D88;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_83230D84:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83230D88:
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

__attribute__((alias("__imp__sub_83230DA0"))) PPC_WEAK_FUNC(sub_83230DA0);
PPC_FUNC_IMPL(__imp__sub_83230DA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x83230DA8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r29,1
	ctx.r29.s64 = 65536;
	// li r11,8192
	ctx.r11.s64 = 8192;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r26,r10,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// addi r8,r26,31
	ctx.r8.s64 = ctx.r26.s64 + 31;
	// rlwinm r27,r8,0,0,27
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// bne cr6,0x83230de4
	if (!ctx.cr6.eq) goto loc_83230DE4;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
loc_83230DE4:
	// li r6,1
	ctx.r6.s64 = 1;
	// oris r5,r11,128
	ctx.r5.u64 = ctx.r11.u64 | 8388608;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82cc0ca0
	ctx.lr = 0x83230DF4;
	sub_82CC0CA0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x83230e0c
	if (!ctx.cr6.eq) goto loc_83230E0C;
loc_83230E00:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_83230E0C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,4096
	ctx.r9.s64 = 4096;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// andc r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// bne cr6,0x83230e34
	if (!ctx.cr6.eq) goto loc_83230E34;
	// lis r9,8192
	ctx.r9.s64 = 536870912;
	// ori r9,r9,4096
	ctx.r9.u64 = ctx.r9.u64 | 4096;
loc_83230E34:
	// li r6,4
	ctx.r6.s64 = 4;
	// oris r5,r9,128
	ctx.r5.u64 = ctx.r9.u64 | 8388608;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cc0ca0
	ctx.lr = 0x83230E48;
	sub_82CC0CA0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83230e00
	if (ctx.cr6.eq) goto loc_83230E00;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r28,r30,16
	ctx.r28.s64 = ctx.r30.s64 + 16;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r30,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r30.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// bl 0x82ca3190
	ctx.lr = 0x83230E7C;
	sub_82CA3190(ctx, base);
	// add r11,r28,r26
	ctx.r11.u64 = ctx.r28.u64 + ctx.r26.u64;
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// lis r9,-21555
	ctx.r9.s64 = -1412628480;
	// addi r8,r11,15
	ctx.r8.s64 = ctx.r11.s64 + 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r29,r8,0,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF0;
	// ori r7,r9,61202
	ctx.r7.u64 = ctx.r9.u64 | 61202;
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r7.u32);
	// stw r10,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r27,r27,r6
	ctx.r27.s64 = ctx.r6.s64 - ctx.r27.s64;
	// stw r27,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r27.u32);
	// bl 0x83230c18
	ctx.lr = 0x83230EB8;
	sub_83230C18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83230e00
	if (ctx.cr6.eq) goto loc_83230E00;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r28
	ctx.r9.u64 = ctx.r10.u64 + ctx.r28.u64;
	// stw r11,-4(r9)
	PPC_STORE_U32(ctx.r9.u32 + -4, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_83230EEC"))) PPC_WEAK_FUNC(sub_83230EEC);
PPC_FUNC_IMPL(__imp__sub_83230EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83230EF0"))) PPC_WEAK_FUNC(sub_83230EF0);
PPC_FUNC_IMPL(__imp__sub_83230EF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r22,31608(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31608);
	// lwz r16,752(r10)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r10.u32 + 752);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82ca3c68
	ctx.lr = 0x83230F14;
	sub_82CA3C68(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83230f54
	if (ctx.cr6.eq) goto loc_83230F54;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,255
	ctx.r9.s64 = 255;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r8,r3,12
	ctx.r8.s64 = ctx.r3.s64 + 12;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r8,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r8.u32);
	// lis r7,-31927
	ctx.r7.s64 = -2092367872;
	// stw r3,27624(r7)
	PPC_STORE_U32(ctx.r7.u32 + 27624, ctx.r3.u32);
	// b 0x83230f5c
	goto loc_83230F5C;
loc_83230F54:
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stw r3,27624(r11)
	PPC_STORE_U32(ctx.r11.u32 + 27624, ctx.r3.u32);
loc_83230F5C:
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83230EF8"))) PPC_WEAK_FUNC(sub_83230EF8);
PPC_FUNC_IMPL(__imp__sub_83230EF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82ca3c68
	ctx.lr = 0x83230F14;
	sub_82CA3C68(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83230f54
	if (ctx.cr6.eq) goto loc_83230F54;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,255
	ctx.r9.s64 = 255;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r8,r3,12
	ctx.r8.s64 = ctx.r3.s64 + 12;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r8,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r8.u32);
	// lis r7,-31927
	ctx.r7.s64 = -2092367872;
	// stw r3,27624(r7)
	PPC_STORE_U32(ctx.r7.u32 + 27624, ctx.r3.u32);
	// b 0x83230f5c
	goto loc_83230F5C;
loc_83230F54:
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stw r3,27624(r11)
	PPC_STORE_U32(ctx.r11.u32 + 27624, ctx.r3.u32);
loc_83230F5C:
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83230F70"))) PPC_WEAK_FUNC(sub_83230F70);
PPC_FUNC_IMPL(__imp__sub_83230F70) {
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
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x829ce870
	ctx.lr = 0x83230F8C;
	sub_829CE870(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83230F9C"))) PPC_WEAK_FUNC(sub_83230F9C);
PPC_FUNC_IMPL(__imp__sub_83230F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83230FA0"))) PPC_WEAK_FUNC(sub_83230FA0);
PPC_FUNC_IMPL(__imp__sub_83230FA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x83230FA8;
	sub_82CA2BD4(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lwz r24,24(r23)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x83231050
	if (ctx.cr6.eq) goto loc_83231050;
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r27,-31927
	ctx.r27.s64 = -2092367872;
loc_83230FC4:
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8323102c
	if (!ctx.cr6.gt) goto loc_8323102C;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
loc_83230FD8:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// lwzx r30,r26,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x83231018
	if (ctx.cr6.eq) goto loc_83231018;
loc_83230FE8:
	// lwz r31,27624(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 27624);
	// lwz r29,12(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x822d7408
	ctx.lr = 0x83230FF8;
	sub_822D7408(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322faa0
	ctx.lr = 0x83231004;
	sub_8322FAA0(ctx, base);
	// lwsync 
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x83230fe8
	if (!ctx.cr6.eq) goto loc_83230FE8;
loc_83231018:
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83230fd8
	if (ctx.cr6.lt) goto loc_83230FD8;
loc_8323102C:
	// lis r5,0
	ctx.r5.s64 = 0;
	// lwz r31,8(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// bl 0x82cc0cf0
	ctx.lr = 0x83231044;
	sub_82CC0CF0(ctx, base);
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83230fc4
	if (!ctx.cr6.eq) goto loc_83230FC4;
loc_83231050:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_83231058"))) PPC_WEAK_FUNC(sub_83231058);
PPC_FUNC_IMPL(__imp__sub_83231058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bcc
	ctx.lr = 0x83231060;
	sub_82CA2BCC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// lwz r31,0(r21)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83231094
	if (ctx.cr6.eq) goto loc_83231094;
loc_8323107C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x832310a0
	if (!ctx.cr6.lt) goto loc_832310A0;
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8323107c
	if (!ctx.cr6.eq) goto loc_8323107C;
loc_83231094:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c1c
	// ERROR 82CA2C1C
	return;
loc_832310A0:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r27,4(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r26,r30,r27
	ctx.r26.u64 = ctx.r30.u64 + ctx.r27.u64;
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x832310c8
	if (ctx.cr6.lt) goto loc_832310C8;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
loc_832310C8:
	// addi r22,r27,16
	ctx.r22.s64 = ctx.r27.s64 + 16;
	// subf r28,r4,r30
	ctx.r28.s64 = ctx.r30.s64 - ctx.r4.s64;
	// add r11,r22,r4
	ctx.r11.u64 = ctx.r22.u64 + ctx.r4.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// addi r5,r11,-17
	ctx.r5.s64 = ctx.r11.s64 + -17;
	// beq cr6,0x832310ec
	if (ctx.cr6.eq) goto loc_832310EC;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// andc r10,r26,r11
	ctx.r10.u64 = ctx.r26.u64 & ~ctx.r11.u64;
loc_832310EC:
	// li r11,16
	ctx.r11.s64 = 16;
	// subfc r9,r11,r28
	ctx.xer.ca = ctx.r28.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r28.s64 - ctx.r11.s64;
	// subfe r11,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r25,r11,24
	ctx.r25.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8323110c
	if (ctx.cr6.eq) goto loc_8323110C;
	// addi r5,r5,16
	ctx.r5.s64 = ctx.r5.s64 + 16;
loc_8323110C:
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83231128
	if (!ctx.cr6.lt) goto loc_83231128;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
loc_83231128:
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83230d00
	ctx.lr = 0x83231138;
	sub_83230D00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83231094
	if (ctx.cr6.eq) goto loc_83231094;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8323115c
	if (ctx.cr6.eq) goto loc_8323115C;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// b 0x83231160
	goto loc_83231160;
loc_8323115C:
	// stw r11,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
loc_83231160:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8323116c
	if (ctx.cr6.eq) goto loc_8323116C;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_8323116C:
	// stw r24,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r24.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// stw r24,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r24.u32);
	// stw r24,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r24.u32);
	// stw r24,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r24.u32);
	// beq cr6,0x83231208
	if (ctx.cr6.eq) goto loc_83231208;
	// subf r11,r28,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r28.s64;
	// lis r9,-21555
	ctx.r9.s64 = -1412628480;
	// stw r11,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r8,r9,61202
	ctx.r8.u64 = ctx.r9.u64 | 61202;
	// stw r24,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r24.u32);
	// stw r28,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r28.u32);
	// stwx r8,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// lwz r7,16(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplw cr6,r28,r7
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x832311e8
	if (ctx.cr6.lt) goto loc_832311E8;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// bl 0x829fd1c8
	ctx.lr = 0x832311D0;
	sub_829FD1C8(ctx, base);
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x829fd158
	ctx.lr = 0x832311E4;
	sub_829FD158(ctx, base);
	// b 0x832311f8
	goto loc_832311F8;
loc_832311E8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83230bc0
	ctx.lr = 0x832311F0;
	sub_83230BC0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_832311F8:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x83231220
	if (ctx.cr6.eq) goto loc_83231220;
	// stw r28,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r28.u32);
	// b 0x83231220
	goto loc_83231220;
loc_83231208:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83230bc0
	ctx.lr = 0x83231214;
	sub_83230BC0(ctx, base);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x83231220
	if (ctx.cr6.eq) goto loc_83231220;
	// stw r24,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r24.u32);
loc_83231220:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r10,36(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c1c
	// ERROR 82CA2C1C
	return;
}

__attribute__((alias("__imp__sub_8323123C"))) PPC_WEAK_FUNC(sub_8323123C);
PPC_FUNC_IMPL(__imp__sub_8323123C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83231240"))) PPC_WEAK_FUNC(sub_83231240);
PPC_FUNC_IMPL(__imp__sub_83231240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc8
	ctx.lr = 0x83231248;
	sub_82CA2BC8(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// addi r23,r29,12
	ctx.r23.s64 = ctx.r29.s64 + 12;
	// li r20,0
	ctx.r20.s64 = 0;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r27,8(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// add r24,r11,r29
	ctx.r24.u64 = ctx.r11.u64 + ctx.r29.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// stw r9,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r9.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r24,r8
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x83231294
	if (ctx.cr6.lt) goto loc_83231294;
	// mr r24,r20
	ctx.r24.u64 = ctx.r20.u64;
loc_83231294:
	// addi r22,r29,16
	ctx.r22.s64 = ctx.r29.s64 + 16;
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
	// add r11,r22,r28
	ctx.r11.u64 = ctx.r22.u64 + ctx.r28.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// addi r21,r11,-17
	ctx.r21.s64 = ctx.r11.s64 + -17;
	// beq cr6,0x8323135c
	if (ctx.cr6.eq) goto loc_8323135C;
	// subf r29,r27,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r27.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r31,4(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x832312dc
	if (!ctx.cr6.eq) goto loc_832312DC;
	// bl 0x83230c18
	ctx.lr = 0x832312C4;
	sub_83230C18(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83231510
	if (ctx.cr6.eq) goto loc_83231510;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// b 0x83231320
	goto loc_83231320;
loc_832312DC:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x829fd1c8
	ctx.lr = 0x832312E8;
	sub_829FD1C8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,4(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83231308
	if (ctx.cr6.eq) goto loc_83231308;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// b 0x8323130c
	goto loc_8323130C;
loc_83231308:
	// stwx r10,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u32);
loc_8323130C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83231318
	if (ctx.cr6.eq) goto loc_83231318;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
loc_83231318:
	// stw r20,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r20.u32);
	// stw r20,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r20.u32);
loc_83231320:
	// add r28,r27,r28
	ctx.r28.u64 = ctx.r27.u64 + ctx.r28.u64;
	// addi r9,r29,15
	ctx.r9.s64 = ctx.r29.s64 + 15;
	// stw r28,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r28.u32);
	// addi r22,r22,-16
	ctx.r22.s64 = ctx.r22.s64 + -16;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// addi r23,r29,12
	ctx.r23.s64 = ctx.r29.s64 + 12;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// andc r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 & ~ctx.r8.u64;
	// andc r11,r22,r7
	ctx.r11.u64 = ctx.r22.u64 & ~ctx.r7.u64;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8323135c
	if (!ctx.cr6.lt) goto loc_8323135C;
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
loc_8323135C:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x832314a4
	if (ctx.cr6.eq) goto loc_832314A4;
	// lwz r31,4(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x832314a4
	if (ctx.cr6.eq) goto loc_832314A4;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x832313d8
	if (ctx.cr6.eq) goto loc_832313D8;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x83231448
	if (ctx.cr6.eq) goto loc_83231448;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829fd1c8
	ctx.lr = 0x83231390;
	sub_829FD1C8(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,4(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832313b0
	if (ctx.cr6.eq) goto loc_832313B0;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// b 0x832313b4
	goto loc_832313B4;
loc_832313B0:
	// stwx r11,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u32);
loc_832313B4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832313c0
	if (ctx.cr6.eq) goto loc_832313C0;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_832313C0:
	// stw r20,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r20.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r20,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r20.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83230bc0
	ctx.lr = 0x832313D4;
	sub_83230BC0(ctx, base);
	// b 0x83231448
	goto loc_83231448;
loc_832313D8:
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x832313f8
	if (!ctx.cr6.eq) goto loc_832313F8;
	// bl 0x83230c18
	ctx.lr = 0x832313E8;
	sub_83230C18(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83231510
	if (ctx.cr6.eq) goto loc_83231510;
	// b 0x8323143c
	goto loc_8323143C;
loc_832313F8:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r4,12(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// bl 0x829fd1c8
	ctx.lr = 0x83231404;
	sub_829FD1C8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,4(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83231424
	if (ctx.cr6.eq) goto loc_83231424;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// b 0x83231428
	goto loc_83231428;
loc_83231424:
	// stwx r10,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u32);
loc_83231428:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83231434
	if (ctx.cr6.eq) goto loc_83231434;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
loc_83231434:
	// stw r20,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r20.u32);
	// stw r20,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r20.u32);
loc_8323143C:
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_83231448:
	// lwz r11,12(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r28,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r28.u32);
	// add r24,r28,r29
	ctx.r24.u64 = ctx.r28.u64 + ctx.r29.u64;
	// stw r28,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83231474
	if (ctx.cr6.lt) goto loc_83231474;
	// mr r24,r20
	ctx.r24.u64 = ctx.r20.u64;
loc_83231474:
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r21,r21,16
	ctx.r21.s64 = ctx.r21.s64 + 16;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// and r8,r10,r21
	ctx.r8.u64 = ctx.r10.u64 & ctx.r21.u64;
	// beq cr6,0x83231494
	if (ctx.cr6.eq) goto loc_83231494;
	// and r11,r10,r24
	ctx.r11.u64 = ctx.r10.u64 & ctx.r24.u64;
loc_83231494:
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x832314a4
	if (!ctx.cr6.lt) goto loc_832314A4;
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r21,r11,-1
	ctx.r21.s64 = ctx.r11.s64 + -1;
loc_832314A4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x832314cc
	if (!ctx.cr6.eq) goto loc_832314CC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83230c18
	ctx.lr = 0x832314B4;
	sub_83230C18(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x83231510
	if (ctx.cr6.eq) goto loc_83231510;
	// stw r28,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r28.u32);
	// stw r29,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r29.u32);
	// stw r26,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r26.u32);
loc_832314CC:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829fd1c8
	ctx.lr = 0x832314DC;
	sub_829FD1C8(ctx, base);
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x829fd158
	ctx.lr = 0x832314F0;
	sub_829FD158(ctx, base);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83230c88
	ctx.lr = 0x83231504;
	sub_83230C88(ctx, base);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x83231510
	if (ctx.cr6.eq) goto loc_83231510;
	// stw r28,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r28.u32);
loc_83231510:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c18
	// ERROR 82CA2C18
	return;
}

__attribute__((alias("__imp__sub_83231518"))) PPC_WEAK_FUNC(sub_83231518);
PPC_FUNC_IMPL(__imp__sub_83231518) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8323157c
	if (ctx.cr6.eq) goto loc_8323157C;
	// lwz r5,24(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x83231560
	if (ctx.cr6.eq) goto loc_83231560;
loc_83231538:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83231554
	if (ctx.cr6.lt) goto loc_83231554;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83231574
	if (ctx.cr6.lt) goto loc_83231574;
loc_83231554:
	// lwz r5,8(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x83231538
	if (!ctx.cr6.eq) goto loc_83231538;
loc_83231560:
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
loc_83231574:
	// addi r4,r4,-16
	ctx.r4.s64 = ctx.r4.s64 + -16;
	// bl 0x83231240
	ctx.lr = 0x8323157C;
	sub_83231240(ctx, base);
loc_8323157C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83231590"))) PPC_WEAK_FUNC(sub_83231590);
PPC_FUNC_IMPL(__imp__sub_83231590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x83231598;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x832315b0
	if (!ctx.cr6.lt) goto loc_832315B0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_832315B0:
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x832315c0
	if (!ctx.cr6.eq) goto loc_832315C0;
	// li r4,16
	ctx.r4.s64 = 16;
loc_832315C0:
	// addi r11,r4,31
	ctx.r11.s64 = ctx.r4.s64 + 31;
	// lwz r28,24(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r27,r11,0,0,27
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
loc_832315CC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x83231624
	if (!ctx.cr6.eq) goto loc_83231624;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83230da0
	ctx.lr = 0x832315DC;
	sub_83230DA0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x832316e0
	if (ctx.cr6.eq) goto loc_832316E0;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x832315fc
	if (!ctx.cr6.eq) goto loc_832315FC;
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// b 0x83231624
	goto loc_83231624;
loc_832315FC:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83231620
	if (ctx.cr6.eq) goto loc_83231620;
loc_8323160C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8323160c
	if (!ctx.cr6.eq) goto loc_8323160C;
loc_83231620:
	// stw r28,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r28.u32);
loc_83231624:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r31,12
	ctx.r10.s64 = ctx.r31.s64 + 12;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8323163c
	if (ctx.cr6.lt) goto loc_8323163C;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_8323163C:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// subf r7,r11,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subf r6,r11,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subf r10,r9,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r9.s64;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// srw r5,r7,r8
	ctx.r5.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r8.u8 & 0x3F));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r4,r5,r5
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r5.s32);
	// srw r3,r10,r8
	ctx.r3.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r8.u8 & 0x3F));
	// mullw r5,r3,r3
	ctx.r5.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r3.s32);
	// srw r3,r5,r8
	ctx.r3.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r8.u8 & 0x3F));
	// mullw r10,r3,r10
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// srw r8,r4,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r8.u8 & 0x3F));
	// divwu r5,r10,r8
	ctx.r5.u32 = ctx.r10.u32 / ctx.r8.u32;
	// addi r4,r9,-1
	ctx.r4.s64 = ctx.r9.s64 + -1;
	// subf r3,r5,r7
	ctx.r3.s64 = ctx.r7.s64 - ctx.r5.s64;
	// twllei r8,0
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// twllei r6,0
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r10,r11,r4
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// divwu r29,r10,r6
	ctx.r29.u32 = ctx.r10.u32 / ctx.r6.u32;
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_832316A0:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// add r5,r30,r11
	ctx.r5.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83231058
	ctx.lr = 0x832316BC;
	sub_83231058(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x832316e4
	if (!ctx.cr6.eq) goto loc_832316E4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x832316a0
	if (ctx.cr6.lt) goto loc_832316A0;
	// lwz r28,8(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// b 0x832315cc
	goto loc_832315CC;
loc_832316E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832316E4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_832316EC"))) PPC_WEAK_FUNC(sub_832316EC);
PPC_FUNC_IMPL(__imp__sub_832316EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832316F0"))) PPC_WEAK_FUNC(sub_832316F0);
PPC_FUNC_IMPL(__imp__sub_832316F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832316F4"))) PPC_WEAK_FUNC(sub_832316F4);
PPC_FUNC_IMPL(__imp__sub_832316F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832316F8"))) PPC_WEAK_FUNC(sub_832316F8);
PPC_FUNC_IMPL(__imp__sub_832316F8) {
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
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r10,27595(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 27595);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83231734
	if (!ctx.cr6.eq) goto loc_83231734;
	// li r3,-1
	ctx.r3.s64 = -1;
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
loc_83231734:
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,27604(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27604);
	// bl 0x83236570
	ctx.lr = 0x83231744;
	sub_83236570(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x832317b4
	if (!ctx.cr6.eq) goto loc_832317B4;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,27608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27608);
	// bl 0x83236570
	ctx.lr = 0x8323175C;
	sub_83236570(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x832317b4
	if (!ctx.cr6.eq) goto loc_832317B4;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,27612(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27612);
	// bl 0x829fce58
	ctx.lr = 0x83231774;
	sub_829FCE58(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x832317b4
	if (!ctx.cr6.eq) goto loc_832317B4;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,27616(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27616);
	// bl 0x829fce58
	ctx.lr = 0x8323178C;
	sub_829FCE58(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x832317b4
	if (!ctx.cr6.eq) goto loc_832317B4;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,27620(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27620);
	// bl 0x829fce58
	ctx.lr = 0x832317A4;
	sub_829FCE58(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x832317b4
	if (!ctx.cr6.eq) goto loc_832317B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832307c0
	ctx.lr = 0x832317B4;
	sub_832307C0(ctx, base);
loc_832317B4:
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

__attribute__((alias("__imp__sub_832317C8"))) PPC_WEAK_FUNC(sub_832317C8);
PPC_FUNC_IMPL(__imp__sub_832317C8) {
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
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-19356
	ctx.r4.s64 = ctx.r10.s64 + -19356;
	// addi r7,r4,4
	ctx.r7.s64 = ctx.r4.s64 + 4;
	// addi r6,r4,-8
	ctx.r6.s64 = ctx.r4.s64 + -8;
	// addi r5,r4,-12
	ctx.r5.s64 = ctx.r4.s64 + -12;
	// bl 0x829fcf78
	ctx.lr = 0x832317F8;
	sub_829FCF78(ctx, base);
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// stw r3,27620(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27620, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83231810"))) PPC_WEAK_FUNC(sub_83231810);
PPC_FUNC_IMPL(__imp__sub_83231810) {
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
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-19372
	ctx.r4.s64 = ctx.r10.s64 + -19372;
	// addi r7,r4,-24
	ctx.r7.s64 = ctx.r4.s64 + -24;
	// addi r6,r4,12
	ctx.r6.s64 = ctx.r4.s64 + 12;
	// addi r5,r4,4
	ctx.r5.s64 = ctx.r4.s64 + 4;
	// bl 0x829fcf78
	ctx.lr = 0x83231840;
	sub_829FCF78(ctx, base);
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// stw r3,27616(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27616, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83231858"))) PPC_WEAK_FUNC(sub_83231858);
PPC_FUNC_IMPL(__imp__sub_83231858) {
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
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-19376
	ctx.r4.s64 = ctx.r10.s64 + -19376;
	// addi r7,r4,-24
	ctx.r7.s64 = ctx.r4.s64 + -24;
	// addi r6,r4,12
	ctx.r6.s64 = ctx.r4.s64 + 12;
	// addi r5,r4,8
	ctx.r5.s64 = ctx.r4.s64 + 8;
	// bl 0x829fcf78
	ctx.lr = 0x83231888;
	sub_829FCF78(ctx, base);
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// stw r3,27612(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27612, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832318A0"))) PPC_WEAK_FUNC(sub_832318A0);
PPC_FUNC_IMPL(__imp__sub_832318A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x832318A8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-19384
	ctx.r3.s64 = ctx.r11.s64 + -19384;
	// addi r5,r3,-16
	ctx.r5.s64 = ctx.r3.s64 + -16;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// bl 0x829fcee8
	ctx.lr = 0x832318C0;
	sub_829FCEE8(ctx, base);
	// lis r27,-31927
	ctx.r27.s64 = -2092367872;
	// li r26,16
	ctx.r26.s64 = 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,68
	ctx.r29.s64 = 68;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// stw r31,27608(r27)
	PPC_STORE_U32(ctx.r27.u32 + 27608, ctx.r31.u32);
loc_832318D8:
	// addi r11,r29,15
	ctx.r11.s64 = ctx.r29.s64 + 15;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83231940
	if (ctx.cr6.eq) goto loc_83231940;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x8323195c
	if (ctx.cr6.eq) goto loc_8323195C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r9,r11,15
	ctx.r9.s64 = ctx.r11.s64 + 15;
	// stw r26,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r26.u32);
	// rlwinm r8,r9,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// twllei r8,0
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r7,r11,-16
	ctx.r7.s64 = ctx.r11.s64 + -16;
	// divwu r6,r7,r8
	ctx.r6.u32 = ctx.r7.u32 / ctx.r8.u32;
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// b 0x8323195c
	goto loc_8323195C;
loc_83231940:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x829fd060
	ctx.lr = 0x83231950;
	sub_829FD060(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r31,27608(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 27608);
	// stwx r3,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r3.u32);
loc_8323195C:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r10,r29,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r29,512
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 512, ctx.xer);
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
	// ble cr6,0x832318d8
	if (!ctx.cr6.gt) goto loc_832318D8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8323197C"))) PPC_WEAK_FUNC(sub_8323197C);
PPC_FUNC_IMPL(__imp__sub_8323197C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83231980"))) PPC_WEAK_FUNC(sub_83231980);
PPC_FUNC_IMPL(__imp__sub_83231980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x83231988;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-19392
	ctx.r3.s64 = ctx.r11.s64 + -19392;
	// addi r5,r3,-12
	ctx.r5.s64 = ctx.r3.s64 + -12;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// bl 0x829fcee8
	ctx.lr = 0x832319A0;
	sub_829FCEE8(ctx, base);
	// lis r25,-31927
	ctx.r25.s64 = -2092367872;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,27604(r25)
	PPC_STORE_U32(ctx.r25.u32 + 27604, ctx.r3.u32);
	// bl 0x832365c0
	ctx.lr = 0x832319B8;
	sub_832365C0(ctx, base);
	// li r31,4
	ctx.r31.s64 = 4;
	// lwz r30,27604(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 27604);
loc_832319C0:
	// rlwinm r28,r31,30,2,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r29,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83231a40
	if (ctx.cr6.eq) goto loc_83231A40;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x83231a5c
	if (ctx.cr6.eq) goto loc_83231A5C;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// addi r10,r31,15
	ctx.r10.s64 = ctx.r31.s64 + 15;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// twllei r31,0
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// divwu r8,r10,r31
	ctx.r8.u32 = ctx.r10.u32 / ctx.r31.u32;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mullw r6,r8,r31
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r31.s32);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// twllei r31,0
	// divwu r5,r7,r31
	ctx.r5.u32 = ctx.r7.u32 / ctx.r31.u32;
	// mullw r4,r5,r31
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r31.s32);
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// subf r10,r6,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r6.s64;
	// divwu r9,r10,r4
	ctx.r9.u32 = ctx.r10.u32 / ctx.r4.u32;
	// twllei r4,0
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// b 0x83231a5c
	goto loc_83231A5C;
loc_83231A40:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x829fd060
	ctx.lr = 0x83231A50;
	sub_829FD060(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r30,27604(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 27604);
	// stwx r3,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r3.u32);
loc_83231A5C:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r31,48
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 48, ctx.xer);
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
	// ble cr6,0x832319c0
	if (!ctx.cr6.gt) goto loc_832319C0;
	// li r26,16
	ctx.r26.s64 = 16;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// b 0x83231a84
	goto loc_83231A84;
loc_83231A80:
	// lwz r30,27604(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 27604);
loc_83231A84:
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832365c0
	ctx.lr = 0x83231A98;
	sub_832365C0(ctx, base);
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// cmplwi cr6,r29,48
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 48, ctx.xer);
	// ble cr6,0x83231a80
	if (!ctx.cr6.gt) goto loc_83231A80;
	// cmplwi cr6,r31,64
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 64, ctx.xer);
	// bgt cr6,0x83231b54
	if (ctx.cr6.gt) goto loc_83231B54;
	// lwz r30,27604(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 27604);
	// addi r28,r31,15
	ctx.r28.s64 = ctx.r31.s64 + 15;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
loc_83231AB8:
	// rlwinm r11,r28,30,2,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 30) & 0x3FFFFFFC;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r9,r28,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFF0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r29,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83231b1c
	if (ctx.cr6.eq) goto loc_83231B1C;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x83231b38
	if (ctx.cr6.eq) goto loc_83231B38;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r9,r11,15
	ctx.r9.s64 = ctx.r11.s64 + 15;
	// stw r26,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r26.u32);
	// rlwinm r8,r9,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// twllei r8,0
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r7,r11,-16
	ctx.r7.s64 = ctx.r11.s64 + -16;
	// divwu r6,r7,r8
	ctx.r6.u32 = ctx.r7.u32 / ctx.r8.u32;
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// b 0x83231b38
	goto loc_83231B38;
loc_83231B1C:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829fd060
	ctx.lr = 0x83231B2C;
	sub_829FD060(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r30,27604(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 27604);
	// stwx r3,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r3.u32);
loc_83231B38:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// rlwinm r10,r31,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r31,64
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 64, ctx.xer);
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
	// ble cr6,0x83231ab8
	if (!ctx.cr6.gt) goto loc_83231AB8;
loc_83231B54:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_83231B5C"))) PPC_WEAK_FUNC(sub_83231B5C);
PPC_FUNC_IMPL(__imp__sub_83231B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83231B60"))) PPC_WEAK_FUNC(sub_83231B60);
PPC_FUNC_IMPL(__imp__sub_83231B60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x83231B68;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r11,12868
	ctx.r31.s64 = ctx.r11.s64 + 12868;
	// lwz r11,12872(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12872);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x83231b98
	if (!ctx.cr6.eq) goto loc_83231B98;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r11,12872(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12872, ctx.r11.u32);
loc_83231B98:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d7408
	ctx.lr = 0x83231BA0;
	sub_822D7408(ctx, base);
	// lis r30,-31927
	ctx.r30.s64 = -2092367872;
	// lbz r11,27595(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 27595);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83231bd8
	if (!ctx.cr6.eq) goto loc_83231BD8;
	// bl 0x83236150
	ctx.lr = 0x83231BB4;
	sub_83236150(ctx, base);
	// bl 0x83230ef8
	ctx.lr = 0x83231BB8;
	sub_83230EF8(ctx, base);
	// bl 0x832309b0
	ctx.lr = 0x83231BBC;
	sub_832309B0(ctx, base);
	// bl 0x83231980
	ctx.lr = 0x83231BC0;
	sub_83231980(ctx, base);
	// bl 0x832318a0
	ctx.lr = 0x83231BC4;
	sub_832318A0(ctx, base);
	// bl 0x83231858
	ctx.lr = 0x83231BC8;
	sub_83231858(ctx, base);
	// bl 0x83231810
	ctx.lr = 0x83231BCC;
	sub_83231810(ctx, base);
	// bl 0x832317c8
	ctx.lr = 0x83231BD0;
	sub_832317C8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,27595(r30)
	PPC_STORE_U8(ctx.r30.u32 + 27595, ctx.r11.u8);
loc_83231BD8:
	// lwsync 
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_83231BE8"))) PPC_WEAK_FUNC(sub_83231BE8);
PPC_FUNC_IMPL(__imp__sub_83231BE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x83231BF0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r10,27595(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 27595);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83231c14
	if (!ctx.cr6.eq) goto loc_83231C14;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_83231C14:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x83231c28
	if (!ctx.cr6.eq) goto loc_83231C28;
loc_83231C1C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_83231C28:
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,27604(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27604);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x832304e8
	ctx.lr = 0x83231C3C;
	sub_832304E8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83231c1c
	if (!ctx.cr6.eq) goto loc_83231C1C;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,27608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27608);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x832304e8
	ctx.lr = 0x83231C5C;
	sub_832304E8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83231c1c
	if (!ctx.cr6.eq) goto loc_83231C1C;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r30,27612(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27612);
	// addi r3,r30,40
	ctx.r3.s64 = ctx.r30.s64 + 40;
	// bl 0x822d7408
	ctx.lr = 0x83231C78;
	sub_822D7408(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83231518
	ctx.lr = 0x83231C84;
	sub_83231518(ctx, base);
	// lwsync 
	// li r29,0
	ctx.r29.s64 = 0;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// stw r29,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r29.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83231c1c
	if (!ctx.cr6.eq) goto loc_83231C1C;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r30,27616(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27616);
	// addi r3,r30,40
	ctx.r3.s64 = ctx.r30.s64 + 40;
	// bl 0x822d7408
	ctx.lr = 0x83231CAC;
	sub_822D7408(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83231518
	ctx.lr = 0x83231CB8;
	sub_83231518(ctx, base);
	// lwsync 
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// stw r29,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r29.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83231c1c
	if (!ctx.cr6.eq) goto loc_83231C1C;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r30,27620(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27620);
	// addi r3,r30,40
	ctx.r3.s64 = ctx.r30.s64 + 40;
	// bl 0x822d7408
	ctx.lr = 0x83231CDC;
	sub_822D7408(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83231518
	ctx.lr = 0x83231CE8;
	sub_83231518(ctx, base);
	// lwsync 
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// stw r29,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r29.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83231c1c
	if (!ctx.cr6.eq) goto loc_83231C1C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83230848
	ctx.lr = 0x83231D04;
	sub_83230848(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_83231D1C"))) PPC_WEAK_FUNC(sub_83231D1C);
PPC_FUNC_IMPL(__imp__sub_83231D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83231D20"))) PPC_WEAK_FUNC(sub_83231D20);
PPC_FUNC_IMPL(__imp__sub_83231D20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x83231D28;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r10,27595(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 27595);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83231d44
	if (!ctx.cr6.eq) goto loc_83231D44;
	// bl 0x83231b60
	ctx.lr = 0x83231D44;
	sub_83231B60(ctx, base);
loc_83231D44:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,-19348
	ctx.r11.s64 = ctx.r11.s64 + -19348;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_83231D54:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83231d98
	if (ctx.cr6.eq) goto loc_83231D98;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 24, ctx.xer);
	// blt cr6,0x83231d54
	if (ctx.cr6.lt) goto loc_83231D54;
	// cmplwi cr6,r31,64
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 64, ctx.xer);
	// bgt cr6,0x83231de0
	if (ctx.cr6.gt) goto loc_83231DE0;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r11,27604(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27604);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x83231dc4
	if (!ctx.cr6.gt) goto loc_83231DC4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_83231D98:
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r30,27620(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27620);
	// addi r3,r30,40
	ctx.r3.s64 = ctx.r30.s64 + 40;
	// bl 0x822d7408
	ctx.lr = 0x83231DA8;
	sub_822D7408(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83231590
	ctx.lr = 0x83231DB4;
	sub_83231590(ctx, base);
	// lwsync 
	// stw r29,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_83231DC4:
	// addi r10,r31,3
	ctx.r10.s64 = ctx.r31.s64 + 3;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r8,r10,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// lwzx r3,r8,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// bl 0x83230688
	ctx.lr = 0x83231DD8;
	sub_83230688(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_83231DE0:
	// cmplwi cr6,r31,512
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 512, ctx.xer);
	// bgt cr6,0x83231e08
	if (ctx.cr6.gt) goto loc_83231E08;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r11,27608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27608);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x83231dc4
	if (!ctx.cr6.gt) goto loc_83231DC4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_83231E08:
	// cmplwi cr6,r31,10240
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 10240, ctx.xer);
	// bgt cr6,0x83231e3c
	if (ctx.cr6.gt) goto loc_83231E3C;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r30,27612(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27612);
	// addi r3,r30,40
	ctx.r3.s64 = ctx.r30.s64 + 40;
	// bl 0x822d7408
	ctx.lr = 0x83231E20;
	sub_822D7408(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83231590
	ctx.lr = 0x83231E2C;
	sub_83231590(ctx, base);
	// lwsync 
	// stw r29,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_83231E3C:
	// lis r11,160
	ctx.r11.s64 = 10485760;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x83231e74
	if (ctx.cr6.gt) goto loc_83231E74;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r30,27616(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27616);
	// addi r3,r30,40
	ctx.r3.s64 = ctx.r30.s64 + 40;
	// bl 0x822d7408
	ctx.lr = 0x83231E58;
	sub_822D7408(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83231590
	ctx.lr = 0x83231E64;
	sub_83231590(ctx, base);
	// lwsync 
	// stw r29,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_83231E74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83230900
	ctx.lr = 0x83231E7C;
	sub_83230900(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_83231E84"))) PPC_WEAK_FUNC(sub_83231E84);
PPC_FUNC_IMPL(__imp__sub_83231E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83231E88"))) PPC_WEAK_FUNC(sub_83231E88);
PPC_FUNC_IMPL(__imp__sub_83231E88) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83231E9C"))) PPC_WEAK_FUNC(sub_83231E9C);
PPC_FUNC_IMPL(__imp__sub_83231E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83231EA0"))) PPC_WEAK_FUNC(sub_83231EA0);
PPC_FUNC_IMPL(__imp__sub_83231EA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// lis r9,-31946
	ctx.r9.s64 = -2093613056;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// addi r7,r9,-4108
	ctx.r7.s64 = ctx.r9.s64 + -4108;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwz r11,27648(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27648);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f11,r6,r7
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f1,f12,f11
	ctx.f1.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83231ED8"))) PPC_WEAK_FUNC(sub_83231ED8);
PPC_FUNC_IMPL(__imp__sub_83231ED8) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r4,14305
	ctx.r4.s64 = 937492480;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,34233
	ctx.r4.u64 = ctx.r4.u64 | 34233;
	// bl 0x82a1cb90
	ctx.lr = 0x83231F04;
	sub_82A1CB90(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82a1cb90
	ctx.lr = 0x83231F10;
	sub_82A1CB90(ctx, base);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addi r11,r11,-4108
	ctx.r11.s64 = ctx.r11.s64 + -4108;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwz r11,27648(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27648);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f11,r6,r9
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f1,f11,f12
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// bl 0x82a1cbf8
	ctx.lr = 0x83231F50;
	sub_82A1CBF8(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83231F6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_83231F84"))) PPC_WEAK_FUNC(sub_83231F84);
PPC_FUNC_IMPL(__imp__sub_83231F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83231F88"))) PPC_WEAK_FUNC(sub_83231F88);
PPC_FUNC_IMPL(__imp__sub_83231F88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x83231F90;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r29,r11,63
	ctx.r29.s64 = ctx.r11.s64 + 63;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,-6456(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6456);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83231fbc
	if (ctx.cr6.eq) goto loc_83231FBC;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_83231FBC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83231FD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83232120
	if (ctx.cr6.eq) goto loc_83232120;
	// lis r30,-31926
	ctx.r30.s64 = -2092302336;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,-6444(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6444);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83231ff4
	if (ctx.cr6.eq) goto loc_83231FF4;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_83231FF4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83232008;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83232050
	if (ctx.cr6.eq) goto loc_83232050;
	// lwz r11,-6444(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6444);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83232030
	if (ctx.cr6.eq) goto loc_83232030;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_83232030:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb08
	ctx.lr = 0x8323203C;
	sub_825CBB08(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83232050;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83232050:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// lis r8,-31946
	ctx.r8.s64 = -2093613056;
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// addi r10,r8,-4108
	ctx.r10.s64 = ctx.r8.s64 + -4108;
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwz r11,27648(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 27648);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r4,-31926
	ctx.r4.s64 = -2092302336;
	// addi r5,r10,8
	ctx.r5.s64 = ctx.r10.s64 + 8;
	// lwz r11,-6448(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -6448);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lfsx f11,r6,r5
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	ctx.f11.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// fmuls f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// beq cr6,0x832320a4
	if (ctx.cr6.eq) goto loc_832320A4;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_832320A4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832320B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x832320f0
	if (ctx.cr6.eq) goto loc_832320F0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832320DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x832320F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832320F0:
	// lwz r3,20(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8323210C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83232120;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83232120:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_83232128"))) PPC_WEAK_FUNC(sub_83232128);
PPC_FUNC_IMPL(__imp__sub_83232128) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// addi r10,r11,6948
	ctx.r10.s64 = ctx.r11.s64 + 6948;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// bl 0x82859340
	ctx.lr = 0x83232160;
	sub_82859340(ctx, base);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r7,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r7.u32);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// stw r6,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r6.u32);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r5,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r5.u32);
	// bl 0x829ff648
	ctx.lr = 0x83232188;
	sub_829FF648(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233dd70
	ctx.lr = 0x83232190;
	sub_8233DD70(ctx, base);
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

__attribute__((alias("__imp__sub_832321A8"))) PPC_WEAK_FUNC(sub_832321A8);
PPC_FUNC_IMPL(__imp__sub_832321A8) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,6948
	ctx.r10.s64 = ctx.r11.s64 + 6948;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82a12b08
	ctx.lr = 0x832321DC;
	sub_82A12B08(ctx, base);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_83232200"))) PPC_WEAK_FUNC(sub_83232200);
PPC_FUNC_IMPL(__imp__sub_83232200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x83232208;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8323222C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x83232284
	if (ctx.cr6.lt) goto loc_83232284;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r4,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r4.u8);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stb r3,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r3.u8);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, ctx.r11.u8);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// b 0x83232294
	goto loc_83232294;
loc_83232284:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1b480
	ctx.lr = 0x83232294;
	sub_82A1B480(ctx, base);
loc_83232294:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x832322c8
	if (ctx.cr6.eq) goto loc_832322C8;
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r9,91(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 91);
	// lbz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
loc_832322C8:
	// lis r11,14305
	ctx.r11.s64 = 937492480;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ori r9,r11,34233
	ctx.r9.u64 = ctx.r11.u64 | 34233;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x83232344
	if (!ctx.cr6.eq) goto loc_83232344;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x83232330
	if (ctx.cr6.lt) goto loc_83232330;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r4,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r4.u8);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stb r3,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r3.u8);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, ctx.r11.u8);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// b 0x8323235c
	goto loc_8323235C;
loc_83232330:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1b480
	ctx.lr = 0x83232340;
	sub_82A1B480(ctx, base);
	// b 0x8323235c
	goto loc_8323235C;
loc_83232344:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8323235C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8323235C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x832323b0
	if (ctx.cr6.lt) goto loc_832323B0;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r4,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r4.u8);
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stb r3,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r3.u8);
	// lbz r11,3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// stb r11,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, ctx.r11.u8);
	// b 0x832323c0
	goto loc_832323C0;
loc_832323B0:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1b480
	ctx.lr = 0x832323C0;
	sub_82A1B480(ctx, base);
loc_832323C0:
	// lbz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832323f8
	if (ctx.cr6.eq) goto loc_832323F8;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,83(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
loc_832323F8:
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r8,r10,-4108
	ctx.r8.s64 = ctx.r10.s64 + -4108;
	// lwz r11,27648(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27648);
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,-27468(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -27468);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lfsx f13,r7,r8
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// ble cr6,0x83232444
	if (!ctx.cr6.gt) goto loc_83232444;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83232444
	if (!ctx.cr6.eq) goto loc_83232444;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
loc_83232444:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x83225e80
	ctx.lr = 0x83232454;
	sub_83225E80(ctx, base);
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r30,r28,20
	ctx.r30.s64 = ctx.r28.s64 + 20;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x83232490
	if (ctx.cr6.eq) goto loc_83232490;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829ff648
	ctx.lr = 0x83232474;
	sub_829FF648(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83232490
	if (ctx.cr6.eq) goto loc_83232490;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83232490:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x829ff648
	ctx.lr = 0x83232498;
	sub_829FF648(ctx, base);
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832324b8
	if (ctx.cr6.eq) goto loc_832324B8;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832324B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_832324B8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_832324C0"))) PPC_WEAK_FUNC(sub_832324C0);
PPC_FUNC_IMPL(__imp__sub_832324C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x832324C8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r29,r11,63
	ctx.r29.s64 = ctx.r11.s64 + 63;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,-6456(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6456);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// beq cr6,0x832324fc
	if (ctx.cr6.eq) goto loc_832324FC;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_832324FC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83232510;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8323266c
	if (ctx.cr6.eq) goto loc_8323266C;
	// lis r30,-31926
	ctx.r30.s64 = -2092302336;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,-6444(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6444);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8323253c
	if (ctx.cr6.eq) goto loc_8323253C;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8323253C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83232550;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83232590
	if (ctx.cr6.eq) goto loc_83232590;
	// lwz r11,-6444(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6444);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83232570
	if (ctx.cr6.eq) goto loc_83232570;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_83232570:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb08
	ctx.lr = 0x8323257C;
	sub_825CBB08(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83232590;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83232590:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x832325c4
	if (!ctx.cr6.eq) goto loc_832325C4;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// lwz r11,-6452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6452);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832325b4
	if (ctx.cr6.eq) goto loc_832325B4;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_832325B4:
	// addi r5,r28,4
	ctx.r5.s64 = ctx.r28.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb08
	ctx.lr = 0x832325C0;
	sub_825CBB08(ctx, base);
	// b 0x83232610
	goto loc_83232610;
loc_832325C4:
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// lwz r11,-6448(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6448);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832325d8
	if (ctx.cr6.eq) goto loc_832325D8;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_832325D8:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb90
	ctx.lr = 0x832325E4;
	sub_825CBB90(ctx, base);
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r8,r10,-4108
	ctx.r8.s64 = ctx.r10.s64 + -4108;
	// lwz r11,27648(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27648);
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r7,r8
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfiwx f11,r28,r9
	PPC_STORE_U32(ctx.r28.u32 + ctx.r9.u32, ctx.f11.u32);
loc_83232610:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83225f18
	ctx.lr = 0x83232624;
	sub_83225F18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r28,20
	ctx.r3.s64 = ctx.r28.s64 + 20;
	// bl 0x823be9c0
	ctx.lr = 0x83232630;
	sub_823BE9C0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x83232638;
	sub_829FF648(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8323264C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r27,24
	ctx.r9.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8323266c
	if (ctx.cr6.eq) goto loc_8323266C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8323266C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8323266C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_83232674"))) PPC_WEAK_FUNC(sub_83232674);
PPC_FUNC_IMPL(__imp__sub_83232674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83232678"))) PPC_WEAK_FUNC(sub_83232678);
PPC_FUNC_IMPL(__imp__sub_83232678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd0
	ctx.lr = 0x83232680;
	sub_82CA2BD0(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r10,24
	ctx.r10.s64 = 24;
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// lwz r9,36(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw. r10,r8,r10
	ctx.r10.s32 = ctx.r8.s32 / ctx.r10.s32;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x83232a64
	if (!ctx.cr0.gt) goto loc_83232A64;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x83232814
	if (ctx.cr6.lt) goto loc_83232814;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r8,r8,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
loc_832326C8:
	// lbz r6,49(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 49);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lbz r4,48(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 48);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// lbz r24,74(r11)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r11.u32 + 74);
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
	// lbz r31,73(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 73);
	// lbz r30,72(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 72);
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// mullw r6,r6,r4
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// lbz r4,2(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r23,25(r11)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// lbz r22,24(r11)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// lbz r29,1(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// lbz r25,50(r11)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r11.u32 + 50);
	// lbz r26,26(r11)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r11.u32 + 26);
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// extsb r30,r30
	ctx.r30.s64 = ctx.r30.s8;
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// extsb r31,r31
	ctx.r31.s64 = ctx.r31.s8;
	// std r6,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r6.u64);
	// extsb r4,r22
	ctx.r4.s64 = ctx.r22.s8;
	// extsb r6,r23
	ctx.r6.s64 = ctx.r23.s8;
	// extsb r29,r29
	ctx.r29.s64 = ctx.r29.s8;
	// extsb r27,r27
	ctx.r27.s64 = ctx.r27.s8;
	// mullw r31,r31,r30
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r30.s32);
	// lfd f8,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f5,f8
	ctx.f5.f64 = double(ctx.f8.s64);
	// mullw r6,r6,r4
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f2,f13
	ctx.f2.f64 = double(ctx.f13.s64);
	// lfd f10,112(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f10
	ctx.f13.f64 = double(ctx.f10.s64);
	// mullw r30,r29,r27
	ctx.r30.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r27.s32);
	// frsp f8,f2
	ctx.f8.f64 = double(float(ctx.f2.f64));
	// extsw r4,r6
	ctx.r4.s64 = ctx.r6.s32;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// extsw r31,r31
	ctx.r31.s64 = ctx.r31.s32;
	// std r4,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// extsw r30,r30
	ctx.r30.s64 = ctx.r30.s32;
	// lfd f7,136(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// std r27,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r27.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r31,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r31.u64);
	// lfd f11,104(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r30,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r30.u64);
	// lfd f9,120(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r31,r1,148
	ctx.r31.s64 = ctx.r1.s64 + 148;
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f3,f0
	ctx.f3.f64 = double(ctx.f0.s64);
	// addi r6,r1,164
	ctx.r6.s64 = ctx.r1.s64 + 164;
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// fcfid f4,f9
	ctx.f4.f64 = double(ctx.f9.s64);
	// addi r30,r1,168
	ctx.r30.s64 = ctx.r1.s64 + 168;
	// fcfid f1,f12
	ctx.f1.f64 = double(ctx.f12.s64);
	// addi r29,r1,156
	ctx.r29.s64 = ctx.r1.s64 + 156;
	// fcfid f0,f11
	ctx.f0.f64 = double(ctx.f11.s64);
	// addi r27,r1,172
	ctx.r27.s64 = ctx.r1.s64 + 172;
	// frsp f11,f5
	ctx.f11.f64 = double(float(ctx.f5.f64));
	// stfsx f11,r9,r3
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, temp.u32);
	// frsp f9,f3
	ctx.f9.f64 = double(float(ctx.f3.f64));
	// stfsx f9,r9,r6
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r6.u32, temp.u32);
	// frsp f5,f13
	ctx.f5.f64 = double(float(ctx.f13.f64));
	// stfsx f8,r9,r4
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r4.u32, temp.u32);
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// stfsx f5,r9,r27
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r27.u32, temp.u32);
	// frsp f12,f6
	ctx.f12.f64 = double(float(ctx.f6.f64));
	// stfsx f12,r9,r31
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, temp.u32);
	// frsp f10,f4
	ctx.f10.f64 = double(float(ctx.f4.f64));
	// stfsx f10,r9,r5
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r5.u32, temp.u32);
	// frsp f7,f1
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// stfsx f7,r9,r30
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r30.u32, temp.u32);
	// frsp f6,f0
	ctx.f6.f64 = double(float(ctx.f0.f64));
	// stfsx f6,r9,r29
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r29.u32, temp.u32);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bne 0x832326c8
	if (!ctx.cr0.eq) goto loc_832326C8;
loc_83232814:
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x83232898
	if (!ctx.cr6.lt) goto loc_83232898;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,36(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// subf r8,r8,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r8.s64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_8323283C:
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// extsb r3,r7
	ctx.r3.s64 = ctx.r7.s8;
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// extsb r5,r5
	ctx.r5.s64 = ctx.r5.s8;
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// mullw r5,r3,r5
	ctx.r5.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r5.s32);
	// std r7,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r7.u64);
	// lfd f0,136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// extsw r3,r5
	ctx.r3.s64 = ctx.r5.s32;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfsx f12,r9,r4
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r4.u32, temp.u32);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// std r3,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r3.u64);
	// lfd f11,128(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// stfsx f9,r9,r6
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r6.u32, temp.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x8323283c
	if (!ctx.cr0.eq) goto loc_8323283C;
loc_83232898:
	// subfic r11,r10,4
	ctx.xer.ca = ctx.r10.u32 <= 4;
	ctx.r11.s64 = 4 - ctx.r10.s64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x8323295c
	if (ctx.cr6.lt) goto loc_8323295C;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,36(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// neg r8,r10
	ctx.r8.s64 = -ctx.r10.s64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r8,r8,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r5,-8(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + -8);
	// lbz r4,-7(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + -7);
	// extsb r3,r5
	ctx.r3.s64 = ctx.r5.s8;
	// lbz r6,-6(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + -6);
	// extsb r7,r4
	ctx.r7.s64 = ctx.r4.s8;
	// mullw r5,r3,r7
	ctx.r5.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// std r6,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r6.u64);
	// lfd f0,136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// std r4,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// lfd f12,136(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f13,f11
	ctx.f13.f64 = double(float(ctx.f11.f64));
loc_83232910:
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,148
	ctx.r6.s64 = ctx.r1.s64 + 148;
	// addi r5,r1,164
	ctx.r5.s64 = ctx.r1.s64 + 164;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// stfsx f13,r8,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, temp.u32);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// stfsx f0,r8,r7
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, temp.u32);
	// addi r11,r1,156
	ctx.r11.s64 = ctx.r1.s64 + 156;
	// addi r7,r1,172
	ctx.r7.s64 = ctx.r1.s64 + 172;
	// stfsx f13,r8,r6
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r6.u32, temp.u32);
	// stfsx f0,r8,r5
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r5.u32, temp.u32);
	// stfsx f13,r8,r4
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r4.u32, temp.u32);
	// stfsx f0,r8,r3
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, temp.u32);
	// stfsx f13,r8,r11
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, temp.u32);
	// stfsx f0,r8,r7
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, temp.u32);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// blt cr6,0x83232910
	if (ctx.cr6.lt) goto loc_83232910;
loc_8323295C:
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// bge cr6,0x832329fc
	if (!ctx.cr6.lt) goto loc_832329FC;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,36(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r7
	ctx.r4.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r31,r10,r8
	ctx.r31.u64 = ctx.r10.u64 + ctx.r8.u64;
	// subfic r9,r9,4
	ctx.xer.ca = ctx.r9.u32 <= 4;
	ctx.r9.s64 = 4 - ctx.r9.s64;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// rlwinm r29,r9,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r4,4
	ctx.r3.s64 = ctx.r4.s64 + 4;
	// lbz r6,-6(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + -6);
	// addi r7,r29,-4
	ctx.r7.s64 = ctx.r29.s64 + -4;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r7,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFC;
	// std r6,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r6.u64);
	// lfd f0,136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// bl 0x82ca30e8
	ctx.lr = 0x832329BC;
	sub_82CA30E8(ctx, base);
	// lbz r5,-8(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + -8);
	// lbz r4,-7(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + -7);
	// addi r11,r29,-4
	ctx.r11.s64 = ctx.r29.s64 + -4;
	// extsb r10,r5
	ctx.r10.s64 = ctx.r5.s8;
	// extsb r9,r4
	ctx.r9.s64 = ctx.r4.s8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mullw r8,r10,r9
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// std r7,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r7.u64);
	// lfd f11,136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// rlwinm r5,r11,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// stfs f9,0(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// bl 0x82ca30e8
	ctx.lr = 0x832329FC;
	sub_82CA30E8(ctx, base);
loc_832329FC:
	// addi r11,r1,148
	ctx.r11.s64 = ctx.r1.s64 + 148;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r9,r1,164
	ctx.r9.s64 = ctx.r1.s64 + 164;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// addi r7,r1,156
	ctx.r7.s64 = ctx.r1.s64 + 156;
	// addi r6,r1,152
	ctx.r6.s64 = ctx.r1.s64 + 152;
	// lvlx v0,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r5,r1,172
	ctx.r5.s64 = ctx.r1.s64 + 172;
	// lvlx v13,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// lvlx v12,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v11,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// lvlx v10,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v11,v12,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// lvlx v9,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r3,48
	ctx.r3.s64 = 48;
	// lvlx v8,0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v9,v10,4,3
	_mm_store_ps(ctx.v9.f32, _mm_blend_ps(_mm_load_ps(ctx.v9.f32), _mm_permute_ps(_mm_load_ps(ctx.v10.f32), 57), 4));
	// lvlx v7,0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r11,64
	ctx.r11.s64 = 64;
	// vrlimi128 v7,v8,4,3
	_mm_store_ps(ctx.v7.f32, _mm_blend_ps(_mm_load_ps(ctx.v7.f32), _mm_permute_ps(_mm_load_ps(ctx.v8.f32), 57), 4));
	// vrlimi128 v13,v9,3,2
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v9.f32), 78), 3));
	// vrlimi128 v11,v7,3,2
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v7.f32), 78), 3));
	// stvx128 v13,r28,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r28.u32 + ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r28,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r28.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_83232A64:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82ca2c20
	// ERROR 82CA2C20
	return;
}

__attribute__((alias("__imp__sub_83232A6C"))) PPC_WEAK_FUNC(sub_83232A6C);
PPC_FUNC_IMPL(__imp__sub_83232A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83232A70"))) PPC_WEAK_FUNC(sub_83232A70);
PPC_FUNC_IMPL(__imp__sub_83232A70) {
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
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8272e7d0
	ctx.lr = 0x83232A8C;
	sub_8272E7D0(ctx, base);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r6,r31,32
	ctx.r6.s64 = ctx.r31.s64 + 32;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83232b30
	if (ctx.cr6.eq) goto loc_83232B30;
	// li r10,24
	ctx.r10.s64 = 24;
	// subf r11,r9,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r9.s64;
	// cmplw cr6,r9,r9
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r9.u32, ctx.xer);
	// divw r11,r11,r10
	ctx.r11.s32 = ctx.r11.s32 / ctx.r10.s32;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 + ctx.r8.u64;
	// beq cr6,0x83232b2c
	if (ctx.cr6.eq) goto loc_83232B2C;
	// addi r11,r8,8
	ctx.r11.s64 = ctx.r8.s64 + 8;
	// addi r10,r9,12
	ctx.r10.s64 = ctx.r9.s64 + 12;
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
loc_83232AD0:
	// lwz r5,-12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	// stw r5,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r5.u32);
	// lfs f0,-8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfsx f13,r8,r11
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lbz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// stb r4,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r4.u8);
	// lbz r3,5(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// stb r3,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r3.u8);
	// lbz r5,6(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// stb r5,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r5.u8);
	// lbz r4,7(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// stb r4,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r4.u8);
	// lbz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// stb r3,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r3.u8);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// addi r5,r10,-12
	ctx.r5.s64 = ctx.r10.s64 + -12;
	// cmplw cr6,r5,r9
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x83232ad0
	if (!ctx.cr6.eq) goto loc_83232AD0;
loc_83232B2C:
	// stw r7,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r7.u32);
loc_83232B30:
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

