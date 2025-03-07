#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_826757B8"))) PPC_WEAK_FUNC(sub_826757B8);
PPC_FUNC_IMPL(__imp__sub_826757B8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,272
	ctx.r3.s64 = ctx.r3.s64 + 272;
	// b 0x821bfef8
	sub_821BFEF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826757C0"))) PPC_WEAK_FUNC(sub_826757C0);
PPC_FUNC_IMPL(__imp__sub_826757C0) {
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
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// li r10,528
	ctx.r10.s64 = 528;
	// addi r9,r11,-21136
	ctx.r9.s64 = ctx.r11.s64 + -21136;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lvx128 v0,r4,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r9
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vpermwi128 v12,v0,24
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xE7));
	// vpermwi128 v11,v13,24
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xE7));
	// vcmpeqfp. v10,v12,v11
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v10.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v11.f32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v10.f32), 0xF);
	// mfocrf r8,2
	ctx.r8.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// rlwinm r7,r8,25,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 25) & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82675864
	if (ctx.cr6.eq) goto loc_82675864;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x821e8750
	ctx.lr = 0x8267580C;
	sub_821E8750(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8267586c
	if (ctx.cr6.eq) goto loc_8267586C;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r4,r11,-28304
	ctx.r4.s64 = ctx.r11.s64 + -28304;
	// bl 0x822674d0
	ctx.lr = 0x82675824;
	sub_822674D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8267586c
	if (ctx.cr6.eq) goto loc_8267586C;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r11,r3,248
	ctx.r11.s64 = ctx.r3.s64 + 248;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f0,-27468(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -27468);
	ctx.f0.f64 = double(temp.f32);
	// lvlx v0,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v13,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v12,r11,r8
	temp.u32 = ctx.r11.u32 + ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v0,v13,4,3
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 57), 4));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v11,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v12,v11,4,3
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 57), 4));
	// vrlimi128 v0,v12,3,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 78), 3));
loc_82675864:
	// stvx128 v0,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x826758b4
	goto loc_826758B4;
loc_8267586C:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f0,-27468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27468);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvlx v13,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// lvlx v12,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v11,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v11,v12,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// vrlimi128 v11,v13,3,2
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 3));
	// stvx128 v11,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_826758B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_826758CC"))) PPC_WEAK_FUNC(sub_826758CC);
PPC_FUNC_IMPL(__imp__sub_826758CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826758D0"))) PPC_WEAK_FUNC(sub_826758D0);
PPC_FUNC_IMPL(__imp__sub_826758D0) {
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
	// bl 0x821e8750
	ctx.lr = 0x826758E0;
	sub_821E8750(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82675920
	if (ctx.cr6.eq) goto loc_82675920;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r4,r11,-28304
	ctx.r4.s64 = ctx.r11.s64 + -28304;
	// bl 0x822674d0
	ctx.lr = 0x826758F8;
	sub_822674D0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82675920
	if (ctx.cr6.eq) goto loc_82675920;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82675910;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82675920:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f1,-27468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27468);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82675938"))) PPC_WEAK_FUNC(sub_82675938);
PPC_FUNC_IMPL(__imp__sub_82675938) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r8,r9,0,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// cmpwi cr6,r8,16
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 16, ctx.xer);
	// bne cr6,0x82675a64
	if (!ctx.cr6.eq) goto loc_82675A64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82675a64
	if (!ctx.cr6.lt) goto loc_82675A64;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r9,r10,-26784
	ctx.r9.s64 = ctx.r10.s64 + -26784;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82675a64
	if (ctx.cr6.eq) goto loc_82675A64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82675a64
	if (!ctx.cr6.eq) goto loc_82675A64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227b18
	ctx.lr = 0x826759A4;
	sub_82227B18(ctx, base);
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// li r4,1
	ctx.r4.s64 = 1;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// addi r5,r11,-28840
	ctx.r5.s64 = ctx.r11.s64 + -28840;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822280c8
	ctx.lr = 0x826759BC;
	sub_822280C8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x826759f0
	if (ctx.cr6.eq) goto loc_826759F0;
	// bl 0x822281f8
	ctx.lr = 0x826759D4;
	sub_822281F8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82227680
	ctx.lr = 0x826759DC;
	sub_82227680(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,272
	ctx.r3.s64 = ctx.r30.s64 + 272;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x826726f8
	ctx.lr = 0x826759EC;
	sub_826726F8(ctx, base);
	// b 0x82675a2c
	goto loc_82675A2C;
loc_826759F0:
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r5,r11,-28704
	ctx.r5.s64 = ctx.r11.s64 + -28704;
	// bl 0x822280c8
	ctx.lr = 0x826759FC;
	sub_822280C8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82675a64
	if (ctx.cr6.eq) goto loc_82675A64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822281f8
	ctx.lr = 0x82675A14;
	sub_822281F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r30,272
	ctx.r3.s64 = ctx.r30.s64 + 272;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lvx128 v1,r0,r10
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82672618
	ctx.lr = 0x82675A2C;
	sub_82672618(ctx, base);
loc_82675A2C:
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,3
	ctx.r9.s64 = 3;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// li r3,1
	ctx.r3.s64 = 1;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// b 0x82675a68
	goto loc_82675A68;
loc_82675A64:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82675A68:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_82675A84"))) PPC_WEAK_FUNC(sub_82675A84);
PPC_FUNC_IMPL(__imp__sub_82675A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82675A88"))) PPC_WEAK_FUNC(sub_82675A88);
PPC_FUNC_IMPL(__imp__sub_82675A88) {
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
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,124(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82675AB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,272
	ctx.r3.s64 = ctx.r31.s64 + 272;
	// lvx128 v1,r0,r8
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x826724a8
	ctx.lr = 0x82675AC8;
	sub_826724A8(ctx, base);
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

__attribute__((alias("__imp__sub_82675ADC"))) PPC_WEAK_FUNC(sub_82675ADC);
PPC_FUNC_IMPL(__imp__sub_82675ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82675AE0"))) PPC_WEAK_FUNC(sub_82675AE0);
PPC_FUNC_IMPL(__imp__sub_82675AE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,376(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 376);
	// li r10,8
	ctx.r10.s64 = 8;
	// subfc r9,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r8,31
	ctx.r3.u64 = ctx.r8.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82675AF8"))) PPC_WEAK_FUNC(sub_82675AF8);
PPC_FUNC_IMPL(__imp__sub_82675AF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82675B00;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-24808
	ctx.r4.s64 = ctx.r11.s64 + -24808;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822a28a0
	ctx.lr = 0x82675B20;
	sub_822A28A0(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r29,r10,-21136
	ctx.r29.s64 = ctx.r10.s64 + -21136;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r9,-24784
	ctx.r5.s64 = ctx.r9.s64 + -24784;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lvx128 v1,r0,r29
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82488e60
	ctx.lr = 0x82675B44;
	sub_82488E60(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lvx128 v1,r0,r29
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r5,r8,-24760
	ctx.r5.s64 = ctx.r8.s64 + -24760;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82488e60
	ctx.lr = 0x82675B5C;
	sub_82488E60(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r7,-24740
	ctx.r4.s64 = ctx.r7.s64 + -24740;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822a28a0
	ctx.lr = 0x82675B70;
	sub_822A28A0(ctx, base);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lvx128 v1,r0,r29
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r6,-24712
	ctx.r5.s64 = ctx.r6.s64 + -24712;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82488e60
	ctx.lr = 0x82675B8C;
	sub_82488E60(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lvx128 v1,r0,r29
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r5,r5,-24684
	ctx.r5.s64 = ctx.r5.s64 + -24684;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82488e60
	ctx.lr = 0x82675BA4;
	sub_82488E60(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lvx128 v4,r0,r3
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,272
	ctx.r3.s64 = ctx.r31.s64 + 272;
	// lvx128 v3,r0,r11
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v2,r0,r10
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v1,r0,r9
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x826723e0
	ctx.lr = 0x82675BD4;
	sub_826723E0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82675BDC"))) PPC_WEAK_FUNC(sub_82675BDC);
PPC_FUNC_IMPL(__imp__sub_82675BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82675BE0"))) PPC_WEAK_FUNC(sub_82675BE0);
PPC_FUNC_IMPL(__imp__sub_82675BE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82675BE8;
	sub_82CA2BE8(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// li r12,-64
	ctx.r12.s64 = -64;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// vor128 v127,v1,v1
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r4,-6140(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6140);
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// stw r11,-6140(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6140, ctx.r11.u32);
	// bl 0x82331308
	ctx.lr = 0x82675C24;
	sub_82331308(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r9,-24660
	ctx.r4.s64 = ctx.r9.s64 + -24660;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82675C3C;
	sub_8222CF18(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821ec668
	ctx.lr = 0x82675C48;
	sub_821EC668(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82675C50;
	sub_82214F08(ctx, base);
	// lis r8,-31926
	ctx.r8.s64 = -2092302336;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r3,r8,-21204
	ctx.r3.s64 = ctx.r8.s64 + -21204;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x826826c0
	ctx.lr = 0x82675C68;
	sub_826826C0(ctx, base);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// stvx128 v127,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stb r30,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r30.u8);
	// stfs f31,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// bl 0x821f0108
	ctx.lr = 0x82675C88;
	sub_821F0108(ctx, base);
	// lis r6,-31926
	ctx.r6.s64 = -2092302336;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r6,-21168
	ctx.r4.s64 = ctx.r6.s64 + -21168;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82678da8
	ctx.lr = 0x82675CAC;
	sub_82678DA8(ctx, base);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x82214f08
	ctx.lr = 0x82675CB4;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82675CBC;
	sub_82214F08(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// li r0,-64
	ctx.r0.s64 = -64;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82675CD0"))) PPC_WEAK_FUNC(sub_82675CD0);
PPC_FUNC_IMPL(__imp__sub_82675CD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82675CD8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r30,r11,-21168
	ctx.r30.s64 = ctx.r11.s64 + -21168;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r29,r11,28344
	ctx.r29.s64 = ctx.r11.s64 + 28344;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82675D04:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
loc_82675D08:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82675d18
	if (ctx.cr6.eq) goto loc_82675D18;
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82675d1c
	if (ctx.cr6.eq) goto loc_82675D1C;
loc_82675D18:
	// twi 31,r0,22
loc_82675D1C:
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82675de8
	if (ctx.cr6.eq) goto loc_82675DE8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82675d30
	if (!ctx.cr6.eq) goto loc_82675D30;
	// twi 31,r0,22
loc_82675D30:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82675d40
	if (!ctx.cr6.eq) goto loc_82675D40;
	// twi 31,r0,22
loc_82675D40:
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplw cr6,r8,r27
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82675dd4
	if (!ctx.cr6.eq) goto loc_82675DD4;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// bne cr6,0x82675d60
	if (!ctx.cr6.eq) goto loc_82675D60;
	// twi 31,r0,22
loc_82675D60:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// bl 0x821c67d8
	ctx.lr = 0x82675D84;
	sub_821C67D8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_82675D88:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r7,0,r5
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r5.u32);
	ctx.r7.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// stwcx. r7,0,r5
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r5.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82675d88
	if (!ctx.cr0.eq) goto loc_82675D88;
	// stw r28,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221be68
	ctx.lr = 0x82675DB0;
	sub_8221BE68(ctx, base);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// b 0x82675d08
	goto loc_82675D08;
loc_82675DD4:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82675de0
	if (!ctx.cr6.eq) goto loc_82675DE0;
	// twi 31,r0,22
loc_82675DE0:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82675d04
	goto loc_82675D04;
loc_82675DE8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82675DF0"))) PPC_WEAK_FUNC(sub_82675DF0);
PPC_FUNC_IMPL(__imp__sub_82675DF0) {
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
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82675e14
	if (ctx.cr6.eq) goto loc_82675E14;
	// lvx128 v3,r0,r5
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82675e18
	goto loc_82675E18;
loc_82675E14:
	// vor v3,v1,v1
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
loc_82675E18:
	// bl 0x82675ea8
	ctx.lr = 0x82675E1C;
	sub_82675EA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82260cf0
	ctx.lr = 0x82675E24;
	sub_82260CF0(ctx, base);
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

__attribute__((alias("__imp__sub_82675E38"))) PPC_WEAK_FUNC(sub_82675E38);
PPC_FUNC_IMPL(__imp__sub_82675E38) {
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
	// vor v3,v1,v1
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82675ea8
	ctx.lr = 0x82675E54;
	sub_82675EA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82260cf0
	ctx.lr = 0x82675E5C;
	sub_82260CF0(ctx, base);
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

__attribute__((alias("__imp__sub_82675E70"))) PPC_WEAK_FUNC(sub_82675E70);
PPC_FUNC_IMPL(__imp__sub_82675E70) {
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
	// bl 0x82192268
	ctx.lr = 0x82675E88;
	sub_82192268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82260cf0
	ctx.lr = 0x82675E90;
	sub_82260CF0(ctx, base);
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

__attribute__((alias("__imp__sub_82675EA4"))) PPC_WEAK_FUNC(sub_82675EA4);
PPC_FUNC_IMPL(__imp__sub_82675EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82675EA8"))) PPC_WEAK_FUNC(sub_82675EA8);
PPC_FUNC_IMPL(__imp__sub_82675EA8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// vor v4,v2,v2
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_load_si128((__m128i*)ctx.v2.u8));
	// li r11,528
	ctx.r11.s64 = 528;
	// li r10,544
	ctx.r10.s64 = 544;
	// li r9,560
	ctx.r9.s64 = 560;
	// lis r8,-31926
	ctx.r8.s64 = -2092302336;
	// stw r4,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r4.u32);
	// addi r3,r31,400
	ctx.r3.s64 = ctx.r31.s64 + 400;
	// stvx128 v1,r31,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r8,-21136
	ctx.r7.s64 = ctx.r8.s64 + -21136;
	// stvx128 v2,r31,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r5,0
	ctx.r5.s64 = 0;
	// stvx128 v3,r31,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r4,0
	ctx.r4.s64 = 0;
	// lvx128 v3,r0,r7
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vor v2,v3,v3
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v3.u8));
	// vor v1,v3,v3
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v3.u8));
	// bl 0x826723e0
	ctx.lr = 0x82675F00;
	sub_826723E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82677910
	ctx.lr = 0x82675F08;
	sub_82677910(ctx, base);
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

__attribute__((alias("__imp__sub_82675F1C"))) PPC_WEAK_FUNC(sub_82675F1C);
PPC_FUNC_IMPL(__imp__sub_82675F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82675F20"))) PPC_WEAK_FUNC(sub_82675F20);
PPC_FUNC_IMPL(__imp__sub_82675F20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82675F28;
	sub_82CA2BEC(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82ca7504
	ctx.lr = 0x82675F30;
	sub_82CA7504(ctx, base);
	// li r12,-128
	ctx.r12.s64 = -128;
	// stvx128 v125,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r12,-112
	ctx.r12.s64 = -112;
	// stvx128 v126,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r12,-96
	ctx.r12.s64 = -96;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// vor128 v127,v1,v1
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// vor128 v125,v2,v2
	_mm_store_si128((__m128i*)ctx.v125.u8, _mm_load_si128((__m128i*)ctx.v2.u8));
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// vor128 v126,v3,v3
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_load_si128((__m128i*)ctx.v3.u8));
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r31,r11,-27236
	ctx.r31.s64 = ctx.r11.s64 + -27236;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lfs f13,240(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,18508(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 18508);
	ctx.f0.f64 = double(temp.f32);
	// lwz r4,124(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	// fmuls f30,f13,f0
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r8,64(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82675F90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// vspltisw v0,-1
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0xFFFFFFFF)));
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lis r5,-32246
	ctx.r5.s64 = -2113273856;
	// vslw v13,v0,v0
	ctx.v13.u32[0] = ctx.v0.u32[0] << (ctx.v0.u8[0] & 0x1F);
	ctx.v13.u32[1] = ctx.v0.u32[1] << (ctx.v0.u8[4] & 0x1F);
	ctx.v13.u32[2] = ctx.v0.u32[2] << (ctx.v0.u8[8] & 0x1F);
	ctx.v13.u32[3] = ctx.v0.u32[3] << (ctx.v0.u8[12] & 0x1F);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// vxor128 v12,v125,v13
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// lfs f1,-25888(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -25888);
	ctx.f1.f64 = double(temp.f32);
	// stvx128 v12,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f12,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// stvx128 v12,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f11,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,116(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x822a8ef8
	ctx.lr = 0x82675FCC;
	sub_822A8EF8(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// lvx128 v0,r0,r4
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// vsubfp128 v11,v0,v127
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v11.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v127.f32)));
	// stvx128 v0,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f8,160(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f8.f64 = double(temp.f32);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// stvx128 v0,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r4,124(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	// lfs f7,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f7.f64 = double(temp.f32);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stvx128 v11,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f6,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f6.f64 = double(temp.f32);
	// stvx128 v11,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f5,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f5.f64 = double(temp.f32);
	// lfs f28,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f27.f64 = double(temp.f32);
	// stvx128 v127,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// lfs f10,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f10.f64 = double(temp.f32);
	// stvx128 v127,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// fmuls f4,f5,f28
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f28.f64));
	// lfs f9,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f31,f27,f6,f4
	ctx.f31.f64 = double(float(ctx.f27.f64 * ctx.f6.f64 + ctx.f4.f64));
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f3,f28,f31
	ctx.f3.f64 = double(float(ctx.f28.f64 * ctx.f31.f64));
	// fmuls f2,f27,f31
	ctx.f2.f64 = double(float(ctx.f27.f64 * ctx.f31.f64));
	// fadds f1,f10,f3
	ctx.f1.f64 = double(float(ctx.f10.f64 + ctx.f3.f64));
	// fadds f0,f2,f9
	ctx.f0.f64 = double(float(ctx.f2.f64 + ctx.f9.f64));
	// fsubs f13,f1,f8
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f8.f64));
	// fsubs f12,f0,f7
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f7.f64));
	// fmuls f11,f13,f13
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f10,f12,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fsqrts f29,f10
	ctx.f29.f64 = double(float(sqrt(ctx.f10.f64)));
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82676074;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// ld r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r4,8(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// bl 0x821f5a28
	ctx.lr = 0x82676084;
	sub_821F5A28(ctx, base);
	// vor v2,v1,v1
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// vor128 v1,v125,v125
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v125.u8));
	// bl 0x82260808
	ctx.lr = 0x82676090;
	sub_82260808(ctx, base);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// lfs f12,8000(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8000);
	ctx.f12.f64 = double(temp.f32);
	// lis r6,-32240
	ctx.r6.s64 = -2112880640;
	// lfs f0,-232(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -232);
	ctx.f0.f64 = double(temp.f32);
	// lis r5,-32240
	ctx.r5.s64 = -2112880640;
	// lfs f11,-220(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -220);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r5,368
	ctx.r4.s64 = ctx.r5.s64 + 368;
	// lfs f13,512(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 512);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f9,f1,f13,f12
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 - ctx.f12.f64));
	// lfs f13,2064(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2064);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// mfcr r3
	ctx.r3.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r3.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r3.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r3.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r3.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r3.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r3.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r3.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r3.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r3.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r3.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r3.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r3.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r3.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r3.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r3.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r3.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r3.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r3.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r3.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r3.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r3.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r3.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r3.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r3.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r3.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r3.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r3.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r3.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r3.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r3.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r3.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r11,r3,27,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x4;
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// rlwinm r10,r3,30,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x4;
	// or r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lfsx f7,r4,r9
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	ctx.f7.f64 = double(temp.f32);
	// fsel f6,f7,f8,f0
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? ctx.f8.f64 : ctx.f0.f64;
	// fsubs f13,f11,f6
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f6.f64));
	// bge cr6,0x826760ec
	if (!ctx.cr6.lt) goto loc_826760EC;
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
loc_826760EC:
	// lfs f12,8004(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8004);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f29,f12
	ctx.f12.f64 = double(float(ctx.f29.f64 * ctx.f12.f64));
	// fcmpu cr6,f12,f30
	ctx.cr6.compare(ctx.f12.f64, ctx.f30.f64);
	// bge cr6,0x8267610c
	if (!ctx.cr6.lt) goto loc_8267610C;
	// fsubs f12,f30,f12
	ctx.f12.f64 = double(float(ctx.f30.f64 - ctx.f12.f64));
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fnmsubs f31,f11,f13,f31
	ctx.f31.f64 = double(float(-(ctx.f11.f64 * ctx.f13.f64 - ctx.f31.f64)));
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
loc_8267610C:
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// ble cr6,0x8267611c
	if (!ctx.cr6.gt) goto loc_8267611C;
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
loc_8267611C:
	// lfs f13,-624(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -624);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f31,f13
	ctx.cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// blt cr6,0x8267620c
	if (ctx.cr6.lt) goto loc_8267620C;
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x8267620c
	if (!ctx.cr6.gt) goto loc_8267620C;
	// addi r9,r1,108
	ctx.r9.s64 = ctx.r1.s64 + 108;
	// stfs f27,108(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stfs f28,112(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r1,100
	ctx.r11.s64 = ctx.r1.s64 + 100;
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lvlx v11,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltisw v13,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_set1_epi32(int(0x0)));
	// lvlx v10,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r3,124(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 124);
	// lvlx v0,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v12,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v12,v0,4,3
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// vrlimi128 v10,v11,4,3
	_mm_store_ps(ctx.v10.f32, _mm_blend_ps(_mm_load_ps(ctx.v10.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 57), 4));
	// lvlx v9,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// vspltw v8,v9,0
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0xFF));
	// stvx128 v13,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vrlimi128 v10,v12,3,2
	_mm_store_ps(ctx.v10.f32, _mm_blend_ps(_mm_load_ps(ctx.v10.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 78), 3));
	// lwz r11,72(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// vmaddfp128 v127,v10,v8,v127
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v127.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v127.f32)));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826761A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r9,r10,-21152
	ctx.r9.s64 = ctx.r10.s64 + -21152;
	// lvx128 v0,r0,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vaddfp128 v2,v127,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v2.f32, _mm_add_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v0.f32)));
	// vaddfp128 v1,v126,v0
	_mm_store_ps(ctx.v1.f32, _mm_add_ps(_mm_load_ps(ctx.v126.f32), _mm_load_ps(ctx.v0.f32)));
	// bl 0x822a5750
	ctx.lr = 0x826761BC;
	sub_822A5750(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x826761ec
	if (ctx.cr6.eq) goto loc_826761EC;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp128 v13,v0,v126
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v13.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v126.f32)));
	// lvlx v12,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v127,v12,0
	_mm_store_si128((__m128i*)ctx.v127.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// vmaddcfp128 v127,v13,v127,v126
	_mm_store_ps(ctx.v127.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v127.f32)), _mm_load_ps(ctx.v126.f32)));
loc_826761EC:
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// vor128 v3,v127,v127
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// vor128 v1,v127,v127
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r10,r11,-21136
	ctx.r10.s64 = ctx.r11.s64 + -21136;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lvx128 v2,r0,r10
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82675ea8
	ctx.lr = 0x8267620C;
	sub_82675EA8(ctx, base);
loc_8267620C:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// li r0,-128
	ctx.r0.s64 = -128;
	// lvx128 v125,r1,r0
	_mm_store_si128((__m128i*)ctx.v125.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r0,-112
	ctx.r0.s64 = -112;
	// lvx128 v126,r1,r0
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r0,-96
	ctx.r0.s64 = -96;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82ca7550
	ctx.lr = 0x82676230;
	sub_82CA7550(ctx, base);
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82676234"))) PPC_WEAK_FUNC(sub_82676234);
PPC_FUNC_IMPL(__imp__sub_82676234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82676238"))) PPC_WEAK_FUNC(sub_82676238);
PPC_FUNC_IMPL(__imp__sub_82676238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82676240;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r30,r28,576
	ctx.r30.s64 = ctx.r28.s64 + 576;
	// lwz r11,580(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 580);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82676278
	if (ctx.cr6.eq) goto loc_82676278;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82676324
	if (ctx.cr6.eq) goto loc_82676324;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82676278
	if (ctx.cr6.eq) goto loc_82676278;
	// bl 0x821820c8
	ctx.lr = 0x82676278;
	sub_821820C8(ctx, base);
loc_82676278:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r10,r11,5732
	ctx.r10.s64 = ctx.r11.s64 + 5732;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822149c8
	ctx.lr = 0x82676298;
	sub_822149C8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82978470
	ctx.lr = 0x826762A4;
	sub_82978470(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r8,r9,5732
	ctx.r8.s64 = ctx.r9.s64 + 5732;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x821940c8
	ctx.lr = 0x826762B8;
	sub_821940C8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267652c
	if (ctx.cr6.eq) goto loc_8267652C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82676330
	if (ctx.cr6.eq) goto loc_82676330;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267652c
	if (ctx.cr6.eq) goto loc_8267652C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// bl 0x825575c8
	ctx.lr = 0x826762E8;
	sub_825575C8(ctx, base);
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r10,r11,20,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8267640c
	if (ctx.cr6.eq) goto loc_8267640C;
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82676348
	if (ctx.cr6.eq) goto loc_82676348;
	// lbz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 76);
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82676410
	goto loc_82676410;
loc_82676324:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821940c8
	ctx.lr = 0x8267632C;
	sub_821940C8(ctx, base);
	// b 0x82676278
	goto loc_82676278;
loc_82676330:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821940c8
	ctx.lr = 0x82676338;
	sub_821940C8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82677910
	ctx.lr = 0x82676340;
	sub_82677910(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_82676348:
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r6,76(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x826763b4
	if (!ctx.cr0.gt) goto loc_826763B4;
loc_82676364:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,76
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 76, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x82676384
	if (ctx.cr6.lt) goto loc_82676384;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
loc_82676384:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x826763a0
	if (ctx.cr6.eq) goto loc_826763A0;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x826763a8
	goto loc_826763A8;
loc_826763A0:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_826763A8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82676364
	if (ctx.cr6.gt) goto loc_82676364;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_826763B4:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x826763f8
	if (ctx.cr6.eq) goto loc_826763F8;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,76
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 76, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x826763d0
	if (ctx.cr6.gt) goto loc_826763D0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_826763D0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826763f8
	if (!ctx.cr6.eq) goto loc_826763F8;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82676410
	goto loc_82676410;
loc_826763F8:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82676410
	goto loc_82676410;
loc_8267640C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82676410:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82676504
	if (!ctx.cr6.eq) goto loc_82676504;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825575c8
	ctx.lr = 0x82676424;
	sub_825575C8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rlwinm r10,r11,15,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82676504
	if (ctx.cr6.eq) goto loc_82676504;
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82676458
	if (ctx.cr6.eq) goto loc_82676458;
	// lbz r11,113(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 113);
	// rotlwi r11,r11,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82676500
	goto loc_82676500;
loc_82676458:
	// lwz r6,76(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x826764c0
	if (!ctx.cr0.gt) goto loc_826764C0;
loc_82676470:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,113
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 113, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x82676490
	if (ctx.cr6.lt) goto loc_82676490;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
loc_82676490:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x826764ac
	if (ctx.cr6.eq) goto loc_826764AC;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x826764b4
	goto loc_826764B4;
loc_826764AC:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_826764B4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82676470
	if (ctx.cr6.gt) goto loc_82676470;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_826764C0:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x826764f8
	if (ctx.cr6.eq) goto loc_826764F8;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,113
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 113, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x826764dc
	if (ctx.cr6.gt) goto loc_826764DC;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_826764DC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826764f8
	if (!ctx.cr6.eq) goto loc_826764F8;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x826764fc
	goto loc_826764FC;
loc_826764F8:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_826764FC:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82676500:
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_82676504:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82676518
	if (ctx.cr6.eq) goto loc_82676518;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x828ab510
	ctx.lr = 0x82676518;
	sub_828AB510(ctx, base);
loc_82676518:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8267652c
	if (ctx.cr6.eq) goto loc_8267652C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x828ab510
	ctx.lr = 0x8267652C;
	sub_828AB510(ctx, base);
loc_8267652C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82677910
	ctx.lr = 0x82676534;
	sub_82677910(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_8267653C"))) PPC_WEAK_FUNC(sub_8267653C);
PPC_FUNC_IMPL(__imp__sub_8267653C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82676540"))) PPC_WEAK_FUNC(sub_82676540);
PPC_FUNC_IMPL(__imp__sub_82676540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82676548;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,652(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 652);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r3,648
	ctx.r31.s64 = ctx.r3.s64 + 648;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8267655C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r31,r31
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8267656c
	if (ctx.cr6.eq) goto loc_8267656C;
	// twi 31,r0,22
loc_8267656C:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x826765d0
	if (ctx.cr6.eq) goto loc_826765D0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82676584
	if (!ctx.cr6.eq) goto loc_82676584;
	// twi 31,r0,22
loc_82676584:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826765ac
	if (ctx.cr6.eq) goto loc_826765AC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826765a8
	if (ctx.cr6.eq) goto loc_826765A8;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x826765b0
	goto loc_826765B0;
loc_826765A8:
	// bl 0x821940c8
	ctx.lr = 0x826765AC;
	sub_821940C8(ctx, base);
loc_826765AC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826765B0:
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82676638
	if (ctx.cr6.eq) goto loc_82676638;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x826765c8
	if (!ctx.cr6.eq) goto loc_826765C8;
	// twi 31,r0,22
loc_826765C8:
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x8267655c
	goto loc_8267655C;
loc_826765D0:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,5732
	ctx.r9.s64 = ctx.r11.s64 + 5732;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822149c8
	ctx.lr = 0x826765F0;
	sub_822149C8(ctx, base);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82704f68
	ctx.lr = 0x8267660C;
	sub_82704F68(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82676638
	if (ctx.cr6.eq) goto loc_82676638;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bne 0x82676638
	if (!ctx.cr0.eq) goto loc_82676638;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82676638
	if (!ctx.cr6.eq) goto loc_82676638;
	// bl 0x8221be68
	ctx.lr = 0x82676638;
	sub_8221BE68(ctx, base);
loc_82676638:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82676640"))) PPC_WEAK_FUNC(sub_82676640);
PPC_FUNC_IMPL(__imp__sub_82676640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82676648;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,652(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 652);
	// addi r30,r3,648
	ctx.r30.s64 = ctx.r3.s64 + 648;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
loc_82676664:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r30,r30
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82676674
	if (ctx.cr6.eq) goto loc_82676674;
	// twi 31,r0,22
loc_82676674:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x826766f4
	if (ctx.cr6.eq) goto loc_826766F4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8267668c
	if (!ctx.cr6.eq) goto loc_8267668C;
	// twi 31,r0,22
loc_8267668C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826766b4
	if (ctx.cr6.eq) goto loc_826766B4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826766b0
	if (ctx.cr6.eq) goto loc_826766B0;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x826766b8
	goto loc_826766B8;
loc_826766B0:
	// bl 0x821940c8
	ctx.lr = 0x826766B4;
	sub_821940C8(ctx, base);
loc_826766B4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826766B8:
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x826766d8
	if (ctx.cr6.eq) goto loc_826766D8;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x826766d0
	if (!ctx.cr6.eq) goto loc_826766D0;
	// twi 31,r0,22
loc_826766D0:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82676664
	goto loc_82676664;
loc_826766D8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82954458
	ctx.lr = 0x826766EC;
	sub_82954458(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_826766F4:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82676700"))) PPC_WEAK_FUNC(sub_82676700);
PPC_FUNC_IMPL(__imp__sub_82676700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82676708;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,652(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 652);
	// addi r30,r3,648
	ctx.r30.s64 = ctx.r3.s64 + 648;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82676724:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
loc_82676728:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8267673c
	if (ctx.cr6.eq) goto loc_8267673C;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82676740
	if (ctx.cr6.eq) goto loc_82676740;
loc_8267673C:
	// twi 31,r0,22
loc_82676740:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8267680c
	if (ctx.cr6.eq) goto loc_8267680C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82676754
	if (!ctx.cr6.eq) goto loc_82676754;
	// twi 31,r0,22
loc_82676754:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82676764
	if (!ctx.cr6.eq) goto loc_82676764;
	// twi 31,r0,22
loc_82676764:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826767d4
	if (ctx.cr6.eq) goto loc_826767D4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826767d0
	if (ctx.cr6.eq) goto loc_826767D0;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826767a0
	if (ctx.cr6.eq) goto loc_826767A0;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x826767a4
	if (!ctx.cr6.eq) goto loc_826767A4;
loc_826767A0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_826767A4:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826767dc
	if (ctx.cr6.eq) goto loc_826767DC;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82676800
	if (ctx.cr6.eq) goto loc_82676800;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x826767c8
	if (!ctx.cr6.eq) goto loc_826767C8;
	// twi 31,r0,22
loc_826767C8:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82676724
	goto loc_82676724;
loc_826767D0:
	// bl 0x821940c8
	ctx.lr = 0x826767D4;
	sub_821940C8(ctx, base);
loc_826767D4:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x826767a0
	goto loc_826767A0;
loc_826767DC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82954458
	ctx.lr = 0x826767EC;
	sub_82954458(ctx, base);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82676728
	goto loc_82676728;
loc_82676800:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_8267680C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82676818"))) PPC_WEAK_FUNC(sub_82676818);
PPC_FUNC_IMPL(__imp__sub_82676818) {
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
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-28360
	ctx.r4.s64 = ctx.r11.s64 + -28360;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82200688
	ctx.lr = 0x82676840;
	sub_82200688(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82676860
	if (ctx.cr6.eq) goto loc_82676860;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82676864
	if (!ctx.cr6.eq) goto loc_82676864;
loc_82676860:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82676864:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826769c0
	if (ctx.cr6.eq) goto loc_826769C0;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r8,r9,31,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82676978
	if (ctx.cr6.eq) goto loc_82676978;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826768b0
	if (ctx.cr6.eq) goto loc_826768B0;
	// lbz r10,97(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 97);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8267697c
	goto loc_8267697C;
loc_826768B0:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// subf r8,r10,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// srawi. r11,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82676920
	if (!ctx.cr0.gt) goto loc_82676920;
loc_826768D0:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,97
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 97, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x826768f0
	if (ctx.cr6.lt) goto loc_826768F0;
	// li r7,0
	ctx.r7.s64 = 0;
loc_826768F0:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8267690c
	if (ctx.cr6.eq) goto loc_8267690C;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82676914
	goto loc_82676914;
loc_8267690C:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82676914:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x826768d0
	if (ctx.cr6.gt) goto loc_826768D0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
loc_82676920:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82676964
	if (ctx.cr6.eq) goto loc_82676964;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8267693c
	if (ctx.cr6.gt) goto loc_8267693C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8267693C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82676964
	if (!ctx.cr6.eq) goto loc_82676964;
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8267697c
	goto loc_8267697C;
loc_82676964:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8267697c
	goto loc_8267697C;
loc_82676978:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8267697C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826769c0
	if (ctx.cr6.eq) goto loc_826769C0;
	// lbz r11,26(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 26);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826769c0
	if (ctx.cr6.eq) goto loc_826769C0;
	// lbz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826769a8
	if (ctx.cr6.eq) goto loc_826769A8;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x832b226c
	ctx.lr = 0x826769A8;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_826769A8:
	// li r3,1
	ctx.r3.s64 = 1;
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
loc_826769C0:
	// lbz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826769d4
	if (ctx.cr6.eq) goto loc_826769D4;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x832b226c
	ctx.lr = 0x826769D4;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_826769D4:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_826769EC"))) PPC_WEAK_FUNC(sub_826769EC);
PPC_FUNC_IMPL(__imp__sub_826769EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826769F0"))) PPC_WEAK_FUNC(sub_826769F0);
PPC_FUNC_IMPL(__imp__sub_826769F0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lbz r10,185(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 185);
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82676a1c
	if (ctx.cr6.eq) goto loc_82676A1C;
	// bl 0x82677910
	ctx.lr = 0x82676A18;
	sub_82677910(ctx, base);
	// stb r31,185(r3)
	PPC_STORE_U8(ctx.r3.u32 + 185, ctx.r31.u8);
loc_82676A1C:
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

__attribute__((alias("__imp__sub_82676A30"))) PPC_WEAK_FUNC(sub_82676A30);
PPC_FUNC_IMPL(__imp__sub_82676A30) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lbz r10,186(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 186);
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82676a5c
	if (ctx.cr6.eq) goto loc_82676A5C;
	// bl 0x82677910
	ctx.lr = 0x82676A58;
	sub_82677910(ctx, base);
	// stb r31,186(r3)
	PPC_STORE_U8(ctx.r3.u32 + 186, ctx.r31.u8);
loc_82676A5C:
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

__attribute__((alias("__imp__sub_82676A70"))) PPC_WEAK_FUNC(sub_82676A70);
PPC_FUNC_IMPL(__imp__sub_82676A70) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lbz r10,616(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 616);
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82676a9c
	if (ctx.cr6.eq) goto loc_82676A9C;
	// bl 0x82677910
	ctx.lr = 0x82676A98;
	sub_82677910(ctx, base);
	// stb r31,616(r3)
	PPC_STORE_U8(ctx.r3.u32 + 616, ctx.r31.u8);
loc_82676A9C:
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

__attribute__((alias("__imp__sub_82676AB0"))) PPC_WEAK_FUNC(sub_82676AB0);
PPC_FUNC_IMPL(__imp__sub_82676AB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82676ac8
	if (ctx.cr6.eq) goto loc_82676AC8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f1,-27852(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27852);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82676AC8:
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// lfs f1,-24032(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24032);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82676AD4"))) PPC_WEAK_FUNC(sub_82676AD4);
PPC_FUNC_IMPL(__imp__sub_82676AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82676AD8"))) PPC_WEAK_FUNC(sub_82676AD8);
PPC_FUNC_IMPL(__imp__sub_82676AD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82676AE0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r10,-24632
	ctx.r4.s64 = ctx.r10.s64 + -24632;
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bl 0x8222cf18
	ctx.lr = 0x82676B08;
	sub_8222CF18(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821f0108
	ctx.lr = 0x82676B14;
	sub_821F0108(ctx, base);
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,26912(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 26912);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,88(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 88);
	// lwz r3,4(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x82678ea8
	ctx.lr = 0x82676B3C;
	sub_82678EA8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82676B44;
	sub_82214F08(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x82676B4C;
	sub_82214F08(ctx, base);
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r30,r11,-21184
	ctx.r30.s64 = ctx.r11.s64 + -21184;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82676b68
	if (ctx.cr6.eq) goto loc_82676B68;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_82676B68:
	// lwz r28,100(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r29,104(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82676bb0
	if (ctx.cr6.eq) goto loc_82676BB0;
loc_82676B7C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,124(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82676B98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82442b68
	ctx.lr = 0x82676BA4;
	sub_82442B68(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82676b7c
	if (!ctx.cr6.eq) goto loc_82676B7C;
loc_82676BB0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82676bc0
	if (ctx.cr6.eq) goto loc_82676BC0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8221be68
	ctx.lr = 0x82676BC0;
	sub_8221BE68(ctx, base);
loc_82676BC0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82676BC8"))) PPC_WEAK_FUNC(sub_82676BC8);
PPC_FUNC_IMPL(__imp__sub_82676BC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82676BD0;
	sub_82CA2BEC(ctx, base);
	// li r12,-48
	ctx.r12.s64 = -48;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r30,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r30.s64 = ctx.r9.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble 0x82676cb8
	if (!ctx.cr0.gt) goto loc_82676CB8;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,-28704
	ctx.r5.s64 = ctx.r11.s64 + -28704;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822280c8
	ctx.lr = 0x82676C0C;
	sub_822280C8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82676cb8
	if (ctx.cr6.eq) goto loc_82676CB8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822281f8
	ctx.lr = 0x82676C24;
	sub_822281F8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// lvx128 v127,r0,r11
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// ble cr6,0x82676c74
	if (!ctx.cr6.gt) goto loc_82676C74;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82676cb8
	if (!ctx.cr6.lt) goto loc_82676CB8;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r9,r10,-26784
	ctx.r9.s64 = ctx.r10.s64 + -26784;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82676cb8
	if (ctx.cr6.eq) goto loc_82676CB8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82676cb8
	if (!ctx.cr6.eq) goto loc_82676CB8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227b18
	ctx.lr = 0x82676C70;
	sub_82227B18(ctx, base);
	// b 0x82676c7c
	goto loc_82676C7C;
loc_82676C74:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f1,-17912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17912);
	ctx.f1.f64 = double(temp.f32);
loc_82676C7C:
	// vor128 v1,v127,v127
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82676cd0
	ctx.lr = 0x82676C88;
	sub_82676CD0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// li r0,-48
	ctx.r0.s64 = -48;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82676CB8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// li r0,-48
	ctx.r0.s64 = -48;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82676CCC"))) PPC_WEAK_FUNC(sub_82676CCC);
PPC_FUNC_IMPL(__imp__sub_82676CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82676CD0"))) PPC_WEAK_FUNC(sub_82676CD0);
PPC_FUNC_IMPL(__imp__sub_82676CD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82676CD8;
	sub_82CA2BE0(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// li r12,-112
	ctx.r12.s64 = -112;
	// stvx128 v126,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r12,-96
	ctx.r12.s64 = -96;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// vor128 v127,v1,v1
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// fmuls f0,f1,f1
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// addi r9,r11,-21024
	ctx.r9.s64 = ctx.r11.s64 + -21024;
	// addi r8,r10,-28336
	ctx.r8.s64 = ctx.r10.s64 + -28336;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lvx128 v126,r0,r9
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp128 v13,v127,v126
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v13.f32, _mm_sub_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v126.f32)));
	// lvx128 v0,r0,r8
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vand v12,v13,v0
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vmsum3fp128 v11,v12,v13
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32), 0xEF));
	// stvx128 v11,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82676d98
	if (!ctx.cr6.gt) goto loc_82676D98;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,124(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82676D54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// vor128 v2,v127,v127
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// lvx128 v1,r0,r8
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82683a58
	ctx.lr = 0x82676D6C;
	sub_82683A58(ctx, base);
	// stw r3,164(r26)
	PPC_STORE_U32(ctx.r26.u32 + 164, ctx.r3.u32);
loc_82676D70:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f1,-8700(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8700);
	ctx.f1.f64 = double(temp.f32);
loc_82676D78:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// li r0,-112
	ctx.r0.s64 = -112;
	// lvx128 v126,r1,r0
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r0,-96
	ctx.r0.s64 = -96;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_82676D98:
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r31,r11,-21044
	ctx.r31.s64 = ctx.r11.s64 + -21044;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82676d70
	if (ctx.cr6.eq) goto loc_82676D70;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82676d70
	if (ctx.cr0.eq) goto loc_82676D70;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,124(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82676DD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r29,-1
	ctx.r29.s64 = -1;
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f30,3040(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3040);
	ctx.f30.f64 = double(temp.f32);
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
	// bl 0x82678d18
	ctx.lr = 0x82676DF4;
	sub_82678D18(ctx, base);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lwz r28,8(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// lvx128 v1,r0,r7
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// beq cr6,0x82676e68
	if (ctx.cr6.eq) goto loc_82676E68;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_82676E14:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82676e2c
	if (ctx.cr6.eq) goto loc_82676E2C;
	// subf r11,r31,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r31.s64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82676e30
	if (ctx.cr6.lt) goto loc_82676E30;
loc_82676E2C:
	// twi 31,r0,22
loc_82676E30:
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// vsubfp v13,v0,v1
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v1.f32)));
	// vmsum3fp128 v12,v13,v13
	_mm_store_ps(ctx.v12.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32), 0xEF));
	// stvx128 v12,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82676e58
	if (!ctx.cr6.lt) goto loc_82676E58;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82676E58:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82676e14
	if (ctx.cr6.lt) goto loc_82676E14;
loc_82676E68:
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f30.f64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// ble cr6,0x82676ee4
	if (!ctx.cr6.gt) goto loc_82676EE4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82676ea0
	if (ctx.cr6.eq) goto loc_82676EA0;
	// subf r11,r31,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r31.s64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82676ea4
	if (ctx.cr6.lt) goto loc_82676EA4;
loc_82676EA0:
	// twi 31,r0,22
loc_82676EA4:
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82676ec8
	if (ctx.cr6.eq) goto loc_82676EC8;
	// subf r10,r31,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r31.s64;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82676ecc
	if (ctx.cr6.lt) goto loc_82676ECC;
loc_82676EC8:
	// twi 31,r0,22
loc_82676ECC:
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lvx128 v3,r0,r9
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lvx128 v2,r11,r31
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r31.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x822734e8
	ctx.lr = 0x82676EE0;
	sub_822734E8(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
loc_82676EE4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82676ef4
	if (!ctx.cr6.eq) goto loc_82676EF4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82676efc
	goto loc_82676EFC;
loc_82676EF4:
	// subf r11,r31,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r31.s64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
loc_82676EFC:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82676f64
	if (!ctx.cr6.lt) goto loc_82676F64;
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82676f24
	if (ctx.cr6.eq) goto loc_82676F24;
	// subf r10,r31,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r31.s64;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82676f28
	if (ctx.cr6.lt) goto loc_82676F28;
loc_82676F24:
	// twi 31,r0,22
loc_82676F28:
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// beq cr6,0x82676f48
	if (ctx.cr6.eq) goto loc_82676F48;
	// subf r11,r31,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r31.s64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82676f4c
	if (ctx.cr6.lt) goto loc_82676F4C;
loc_82676F48:
	// twi 31,r0,22
loc_82676F4C:
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// lvx128 v3,r0,r10
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lvx128 v2,r11,r31
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r31.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x822734e8
	ctx.lr = 0x82676F60;
	sub_822734E8(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
loc_82676F64:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r30,r11,-8700
	ctx.r30.s64 = ctx.r11.s64 + -8700;
	// lfs f0,-9052(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -9052);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// ble cr6,0x82676fc0
	if (!ctx.cr6.gt) goto loc_82676FC0;
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x82676fc0
	if (!ctx.cr6.gt) goto loc_82676FC0;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,124(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82676F9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// vor128 v2,v127,v127
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// lvx128 v1,r0,r8
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82683a58
	ctx.lr = 0x82676FB4;
	sub_82683A58(ctx, base);
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// stw r3,164(r26)
	PPC_STORE_U32(ctx.r26.u32 + 164, ctx.r3.u32);
	// b 0x82676d78
	goto loc_82676D78;
loc_82676FC0:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// bge cr6,0x8267701c
	if (!ctx.cr6.lt) goto loc_8267701C;
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82676fe8
	if (ctx.cr6.eq) goto loc_82676FE8;
	// subf r10,r31,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r31.s64;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82676fec
	if (ctx.cr6.lt) goto loc_82676FEC;
loc_82676FE8:
	// twi 31,r0,22
loc_82676FEC:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r9,r31
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r31.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp v12,v0,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// vmsum3fp128 v11,v12,v12
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32), 0xEF));
	// stvx128 v11,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fsqrts f13,f0
	ctx.f13.f64 = double(float(sqrt(ctx.f0.f64)));
	// fadds f0,f13,f31
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// b 0x82677064
	goto loc_82677064;
loc_8267701C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82677034
	if (ctx.cr6.eq) goto loc_82677034;
	// subf r10,r31,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r31.s64;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82677038
	if (ctx.cr6.lt) goto loc_82677038;
loc_82677034:
	// twi 31,r0,22
loc_82677038:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// rlwinm r9,r29,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r9,r31
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r31.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp v12,v0,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// vmsum3fp128 v11,v12,v12
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32), 0xEF));
	// stvx128 v11,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fsqrts f13,f0
	ctx.f13.f64 = double(float(sqrt(ctx.f0.f64)));
	// fadds f0,f13,f30
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
loc_82677064:
	// addi r7,r27,-1
	ctx.r7.s64 = ctx.r27.s64 + -1;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x826770f4
	if (!ctx.cr6.lt) goto loc_826770F4;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
loc_82677080:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8267709c
	if (ctx.cr6.eq) goto loc_8267709C;
	// subf r10,r31,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r31.s64;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x826770a0
	if (ctx.cr6.lt) goto loc_826770A0;
loc_8267709C:
	// twi 31,r0,22
loc_826770A0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826770b8
	if (ctx.cr6.eq) goto loc_826770B8;
	// subf r10,r31,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r31.s64;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x826770bc
	if (ctx.cr6.lt) goto loc_826770BC;
loc_826770B8:
	// twi 31,r0,22
loc_826770BC:
	// lvx128 v0,r0,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lvx128 v13,r0,r8
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// vsubfp v12,v13,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// vmsum3fp128 v11,v12,v12
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32), 0xEF));
	// stvx128 v11,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f12,f13
	ctx.f12.f64 = double(float(sqrt(ctx.f13.f64)));
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// blt cr6,0x82677080
	if (ctx.cr6.lt) goto loc_82677080;
loc_826770F4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82677104
	if (!ctx.cr6.eq) goto loc_82677104;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8267710c
	goto loc_8267710C;
loc_82677104:
	// subf r11,r31,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r31.s64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
loc_8267710C:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82677128
	if (ctx.cr6.eq) goto loc_82677128;
	// subf r10,r31,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r31.s64;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8267712c
	if (ctx.cr6.lt) goto loc_8267712C;
loc_82677128:
	// twi 31,r0,22
loc_8267712C:
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lvx128 v0,r11,r31
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r31.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp128 v13,v126,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_sub_ps(_mm_load_ps(ctx.v126.f32), _mm_load_ps(ctx.v0.f32)));
	// vmsum3fp128 v12,v13,v13
	_mm_store_ps(ctx.v12.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32), 0xEF));
	// stvx128 v12,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,144(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f12,f13
	ctx.f12.f64 = double(float(sqrt(ctx.f13.f64)));
	// fadds f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// b 0x82676d78
	goto loc_82676D78;
}

__attribute__((alias("__imp__sub_82677154"))) PPC_WEAK_FUNC(sub_82677154);
PPC_FUNC_IMPL(__imp__sub_82677154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82677158"))) PPC_WEAK_FUNC(sub_82677158);
PPC_FUNC_IMPL(__imp__sub_82677158) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82677160;
	sub_82CA2BE8(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8226af00
	ctx.lr = 0x82677178;
	sub_8226AF00(ctx, base);
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82677288
	if (ctx.cr6.eq) goto loc_82677288;
	// lis r31,-31927
	ctx.r31.s64 = -2092367872;
	// lvx128 v1,r0,r30
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,-27468
	ctx.r29.s64 = ctx.r11.s64 + -27468;
	// lwz r11,26912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26912);
	// lfs f30,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r10,36(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826771d4
	if (ctx.cr6.eq) goto loc_826771D4;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x821eed10
	ctx.lr = 0x826771C8;
	sub_821EED10(ctx, base);
	// lwz r11,26912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26912);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// b 0x826771d8
	goto loc_826771D8;
loc_826771D4:
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f30.f64;
loc_826771D8:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lvx128 v1,r0,r30
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r11,36(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82677208
	if (ctx.cr6.eq) goto loc_82677208;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x821eeb28
	ctx.lr = 0x82677204;
	sub_821EEB28(ctx, base);
	// b 0x8267720c
	goto loc_8267720C;
loc_82677208:
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
loc_8267720C:
	// fadds f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v13,r0,r30
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// clrlwi r9,r28,24
	ctx.r9.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stvx128 v13,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,-24032(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24032);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fneg f11,f11
	ctx.f11.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// beq cr6,0x82677244
	if (ctx.cr6.eq) goto loc_82677244;
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// b 0x82677248
	goto loc_82677248;
loc_82677244:
	// lfs f12,-380(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -380);
	ctx.f12.f64 = double(temp.f32);
loc_82677248:
	// fcmpu cr6,f11,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// ble cr6,0x82677288
	if (!ctx.cr6.gt) goto loc_82677288;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r9,r11,-28176
	ctx.r9.s64 = ctx.r11.s64 + -28176;
	// li r3,1
	ctx.r3.s64 = 1;
	// lvlx v12,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvx128 v0,r0,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm v11,v13,v12,v0
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v11,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
loc_82677288:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_8267729C"))) PPC_WEAK_FUNC(sub_8267729C);
PPC_FUNC_IMPL(__imp__sub_8267729C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826772A0"))) PPC_WEAK_FUNC(sub_826772A0);
PPC_FUNC_IMPL(__imp__sub_826772A0) {
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
	// bl 0x821e8750
	ctx.lr = 0x826772B8;
	sub_821E8750(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826772c8
	if (ctx.cr6.eq) goto loc_826772C8;
	// lfs f1,240(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821e8388
	ctx.lr = 0x826772C8;
	sub_821E8388(ctx, base);
loc_826772C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82192268
	ctx.lr = 0x826772D0;
	sub_82192268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82260cf0
	ctx.lr = 0x826772D8;
	sub_82260CF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82677910
	ctx.lr = 0x826772E0;
	sub_82677910(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8263ee30
	ctx.lr = 0x826772E8;
	sub_8263EE30(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826772f8
	if (!ctx.cr6.eq) goto loc_826772F8;
loc_826772F0:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8267735c
	goto loc_8267735C;
loc_826772F8:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826772f0
	if (ctx.cr6.eq) goto loc_826772F0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826772f0
	if (ctx.cr6.eq) goto loc_826772F0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8267732C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r11,r11,-24976
	ctx.r11.s64 = ctx.r11.s64 + -24976;
loc_82677334:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82677380
	if (ctx.cr6.eq) goto loc_82677380;
	// lwz r3,268(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82677334
	if (!ctx.cr6.eq) goto loc_82677334;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8267734C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_8267735C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stb r9,646(r31)
	PPC_STORE_U8(ctx.r31.u32 + 646, ctx.r9.u8);
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
loc_82677380:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8267734c
	goto loc_8267734C;
}

__attribute__((alias("__imp__sub_82677388"))) PPC_WEAK_FUNC(sub_82677388);
PPC_FUNC_IMPL(__imp__sub_82677388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82677390;
	sub_82CA2BE0(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// lis r28,-31950
	ctx.r28.s64 = -2093875200;
	// lis r9,-31921
	ctx.r9.s64 = -2091974656;
	// lis r7,-31924
	ctx.r7.s64 = -2092171264;
	// addi r8,r9,27232
	ctx.r8.s64 = ctx.r9.s64 + 27232;
	// lwz r11,27248(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27248);
	// lwz r9,-27380(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + -27380);
	// clrlwi r6,r11,31
	ctx.r6.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stw r9,-6136(r7)
	PPC_STORE_U32(ctx.r7.u32 + -6136, ctx.r9.u32);
	// bne cr6,0x826773d8
	if (!ctx.cr6.eq) goto loc_826773D8;
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,27248(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27248, ctx.r11.u32);
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x826773dc
	goto loc_826773DC;
loc_826773D8:
	// lvx128 v0,r0,r8
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
loc_826773DC:
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// rlwinm r8,r11,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// addi r27,r9,-27456
	ctx.r27.s64 = ctx.r9.s64 + -27456;
	// lis r9,-31921
	ctx.r9.s64 = -2091974656;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r31,r9,27216
	ctx.r31.s64 = ctx.r9.s64 + 27216;
	// lfs f31,-12(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -12);
	ctx.f31.f64 = double(temp.f32);
	// bne cr6,0x8267745c
	if (!ctx.cr6.eq) goto loc_8267745C;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// lfs f0,2776(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2776);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lvlx v11,0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lvlx v10,0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lfs f0,2772(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2772);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,27248(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27248, ctx.r11.u32);
	// lfs f13,2768(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2768);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lvlx v13,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v12,0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v12,v13,4,3
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 57), 4));
	// vrlimi128 v10,v11,4,3
	_mm_store_ps(ctx.v10.f32, _mm_blend_ps(_mm_load_ps(ctx.v10.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 57), 4));
	// vrlimi128 v12,v10,3,2
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v10.f32), 78), 3));
	// stvx128 v12,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_8267745C:
	// vmsum3fp128 v13,v0,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lis r26,-31927
	ctx.r26.s64 = -2092367872;
	// stvx128 v13,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fsqrts f13,f0
	ctx.f13.f64 = double(float(sqrt(ctx.f0.f64)));
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// beq cr6,0x82677484
	if (ctx.cr6.eq) goto loc_82677484;
	// vor v1,v0,v0
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// b 0x826774a4
	goto loc_826774A4;
loc_82677484:
	// lwz r11,26912(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 26912);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,156(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// bl 0x821f8760
	ctx.lr = 0x82677494;
	sub_821F8760(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821dcf10
	ctx.lr = 0x826774A0;
	sub_821DCF10(ctx, base);
	// lvx128 v1,r0,r3
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
loc_826774A4:
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r11,-21200
	ctx.r9.s64 = ctx.r11.s64 + -21200;
	// lvx128 v0,r0,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmsum3fp128 v13,v0,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// stvx128 v13,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fsqrts f13,f0
	ctx.f13.f64 = double(float(sqrt(ctx.f0.f64)));
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// bne cr6,0x826774d0
	if (!ctx.cr6.eq) goto loc_826774D0;
	// lvx128 v0,r0,r31
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
loc_826774D0:
	// lis r30,-31950
	ctx.r30.s64 = -2093875200;
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// addi r29,r11,-6132
	ctx.r29.s64 = ctx.r11.s64 + -6132;
	// lwz r3,-28980(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28980);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8267752c
	if (ctx.cr6.eq) goto loc_8267752C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82683b48
	ctx.lr = 0x826774F0;
	sub_82683B48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267756c
	if (ctx.cr6.eq) goto loc_8267756C;
	// lis r31,-31924
	ctx.r31.s64 = -2092171264;
	// lwz r10,-27380(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -27380);
	// lwz r11,-6128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -6128);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8267756c
	if (!ctx.cr6.gt) goto loc_8267756C;
	// bl 0x82683d38
	ctx.lr = 0x82677518;
	sub_82683D38(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,-28980(r30)
	PPC_STORE_U32(ctx.r30.u32 + -28980, ctx.r11.u32);
	// lwz r11,-27380(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -27380);
	// stw r11,-6128(r31)
	PPC_STORE_U32(ctx.r31.u32 + -6128, ctx.r11.u32);
	// b 0x8267756c
	goto loc_8267756C;
loc_8267752C:
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// lbz r10,-6124(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -6124);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8267754c
	if (ctx.cr6.eq) goto loc_8267754C;
	// vor v2,v0,v0
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// b 0x82677554
	goto loc_82677554;
loc_8267754C:
	// vor v2,v1,v1
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// vor v1,v0,v0
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
loc_82677554:
	// bl 0x82683a58
	ctx.lr = 0x82677558;
	sub_82683A58(ctx, base);
	// stw r3,-28980(r30)
	PPC_STORE_U32(ctx.r30.u32 + -28980, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8267756c
	if (!ctx.cr6.eq) goto loc_8267756C;
	// lfs f0,18756(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 18756);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
loc_8267756C:
	// lwz r11,26912(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 26912);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r5,r10,30584
	ctx.r5.s64 = ctx.r10.s64 + 30584;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,96(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 96);
	// bl 0x821f5b90
	ctx.lr = 0x82677588;
	sub_821F5B90(ctx, base);
	// lis r8,-31924
	ctx.r8.s64 = -2092171264;
	// lfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// li r7,10
	ctx.r7.s64 = 10;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lwz r11,-6120(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -6120);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x821ee858
	ctx.lr = 0x826775AC;
	sub_821EE858(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b39978
	ctx.lr = 0x826775B8;
	sub_82B39978(ctx, base);
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// lfs f1,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r10,-24064
	ctx.r7.s64 = ctx.r10.s64 + -24064;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r31,23652(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23652);
	// bl 0x82b622f0
	ctx.lr = 0x826775E4;
	sub_82B622F0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82b614d0
	ctx.lr = 0x826775F4;
	sub_82B614D0(ctx, base);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x821c6868
	ctx.lr = 0x826775FC;
	sub_821C6868(ctx, base);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x821de318
	ctx.lr = 0x82677604;
	sub_821DE318(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r8,r9,-1124
	ctx.r8.s64 = ctx.r9.s64 + -1124;
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// bl 0x821c6868
	ctx.lr = 0x82677618;
	sub_821C6868(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x82677620;
	sub_82214F08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821de318
	ctx.lr = 0x82677628;
	sub_821DE318(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82677634"))) PPC_WEAK_FUNC(sub_82677634);
PPC_FUNC_IMPL(__imp__sub_82677634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82677638"))) PPC_WEAK_FUNC(sub_82677638);
PPC_FUNC_IMPL(__imp__sub_82677638) {
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
	// bl 0x821b01d0
	ctx.lr = 0x82677650;
	sub_821B01D0(ctx, base);
	// addi r3,r31,272
	ctx.r3.s64 = ctx.r31.s64 + 272;
	// bl 0x826728c0
	ctx.lr = 0x82677658;
	sub_826728C0(ctx, base);
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

__attribute__((alias("__imp__sub_8267766C"))) PPC_WEAK_FUNC(sub_8267766C);
PPC_FUNC_IMPL(__imp__sub_8267766C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82677670"))) PPC_WEAK_FUNC(sub_82677670);
PPC_FUNC_IMPL(__imp__sub_82677670) {
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826776A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10, ctx.xer);
	// bne cr6,0x826776b4
	if (!ctx.cr6.eq) goto loc_826776B4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826776d0
	ctx.lr = 0x826776B4;
	sub_826776D0(ctx, base);
loc_826776B4:
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

__attribute__((alias("__imp__sub_826776CC"))) PPC_WEAK_FUNC(sub_826776CC);
PPC_FUNC_IMPL(__imp__sub_826776CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826776D0"))) PPC_WEAK_FUNC(sub_826776D0);
PPC_FUNC_IMPL(__imp__sub_826776D0) {
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
	// lbz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82677814
	if (ctx.cr6.eq) goto loc_82677814;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwinm r9,r10,6,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826777e8
	if (ctx.cr6.eq) goto loc_826777E8;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8267772c
	if (ctx.cr6.eq) goto loc_8267772C;
	// lbz r10,58(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 58);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r31,4(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x826777ec
	goto loc_826777EC;
loc_8267772C:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82677798
	if (!ctx.cr0.gt) goto loc_82677798;
loc_82677748:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,58
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 58, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x82677768
	if (ctx.cr6.lt) goto loc_82677768;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
loc_82677768:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82677784
	if (ctx.cr6.eq) goto loc_82677784;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x8267778c
	goto loc_8267778C;
loc_82677784:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8267778C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82677748
	if (ctx.cr6.gt) goto loc_82677748;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_82677798:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x826777d8
	if (ctx.cr6.eq) goto loc_826777D8;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,58
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 58, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x826777b4
	if (ctx.cr6.gt) goto loc_826777B4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_826777B4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826777d8
	if (!ctx.cr6.eq) goto loc_826777D8;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x826777ec
	goto loc_826777EC;
loc_826777D8:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x826777ec
	goto loc_826777EC;
loc_826777E8:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_826777EC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82677814
	if (ctx.cr6.eq) goto loc_82677814;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827d6e20
	ctx.lr = 0x82677800;
	sub_827D6E20(ctx, base);
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// li r11,64
	ctx.r11.s64 = 64;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r10.u8);
	// stvx128 v0,r31,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82677814:
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

__attribute__((alias("__imp__sub_82677828"))) PPC_WEAK_FUNC(sub_82677828);
PPC_FUNC_IMPL(__imp__sub_82677828) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// li r12,-32
	ctx.r12.s64 = -32;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// vor128 v127,v1,v1
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stvx128 v127,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x8226af00
	ctx.lr = 0x82677850;
	sub_8226AF00(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82677870
	if (ctx.cr6.eq) goto loc_82677870;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82677874
	goto loc_82677874;
loc_82677870:
	// stvx128 v127,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82677874:
	// lfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82677890"))) PPC_WEAK_FUNC(sub_82677890);
PPC_FUNC_IMPL(__imp__sub_82677890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stb r3,27397(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27397, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267789C"))) PPC_WEAK_FUNC(sub_8267789C);
PPC_FUNC_IMPL(__imp__sub_8267789C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826778A0"))) PPC_WEAK_FUNC(sub_826778A0);
PPC_FUNC_IMPL(__imp__sub_826778A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r10,r11,-21200
	ctx.r10.s64 = ctx.r11.s64 + -21200;
	// stvx128 v1,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826778B0"))) PPC_WEAK_FUNC(sub_826778B0);
PPC_FUNC_IMPL(__imp__sub_826778B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,26912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// stb r10,27397(r9)
	PPC_STORE_U8(ctx.r9.u32 + 27397, ctx.r10.u8);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,156(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 156);
	// bl 0x821f8760
	ctx.lr = 0x826778DC;
	sub_821F8760(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821dcf10
	ctx.lr = 0x826778E8;
	sub_821DCF10(ctx, base);
	// lis r7,-31926
	ctx.r7.s64 = -2092302336;
	// lvx128 v0,r0,r3
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r6,r7,-21200
	ctx.r6.s64 = ctx.r7.s64 + -21200;
	// stvx128 v0,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82677908"))) PPC_WEAK_FUNC(sub_82677908);
PPC_FUNC_IMPL(__imp__sub_82677908) {
	PPC_FUNC_PROLOGUE();
	// stb r4,617(r3)
	PPC_STORE_U8(ctx.r3.u32 + 617, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82677910"))) PPC_WEAK_FUNC(sub_82677910);
PPC_FUNC_IMPL(__imp__sub_82677910) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r6,r1,-8
	ctx.r6.s64 = ctx.r1.s64 + -8;
	// addi r5,r1,-4
	ctx.r5.s64 = ctx.r1.s64 + -4;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r4,r1,-4
	ctx.r4.s64 = ctx.r1.s64 + -4;
	// lfs f0,-27468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27468);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,-8
	ctx.r11.s64 = ctx.r1.s64 + -8;
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// addi r9,r1,-12
	ctx.r9.s64 = ctx.r1.s64 + -12;
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// addi r8,r1,-12
	ctx.r8.s64 = ctx.r1.s64 + -12;
	// lvlx v10,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// lvlx v9,0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// vrlimi128 v9,v10,4,3
	_mm_store_ps(ctx.v9.f32, _mm_blend_ps(_mm_load_ps(ctx.v9.f32), _mm_permute_ps(_mm_load_ps(ctx.v10.f32), 57), 4));
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r10,96
	ctx.r10.s64 = 96;
	// lvlx v8,0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v7,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lvlx v13,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r9,112
	ctx.r9.s64 = 112;
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// vrlimi128 v7,v8,4,3
	_mm_store_ps(ctx.v7.f32, _mm_blend_ps(_mm_load_ps(ctx.v7.f32), _mm_permute_ps(_mm_load_ps(ctx.v8.f32), 57), 4));
	// lvlx v12,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// lvlx v11,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v11,v12,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// vrlimi128 v7,v9,3,2
	_mm_store_ps(ctx.v7.f32, _mm_blend_ps(_mm_load_ps(ctx.v7.f32), _mm_permute_ps(_mm_load_ps(ctx.v9.f32), 78), 3));
	// vrlimi128 v13,v11,3,2
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 78), 3));
	// stvx128 v7,r3,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r3,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826779A4"))) PPC_WEAK_FUNC(sub_826779A4);
PPC_FUNC_IMPL(__imp__sub_826779A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826779A8"))) PPC_WEAK_FUNC(sub_826779A8);
PPC_FUNC_IMPL(__imp__sub_826779A8) {
	PPC_FUNC_PROLOGUE();
	// stb r4,644(r3)
	PPC_STORE_U8(ctx.r3.u32 + 644, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826779B0"))) PPC_WEAK_FUNC(sub_826779B0);
PPC_FUNC_IMPL(__imp__sub_826779B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x826779B8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-24608
	ctx.r30.s64 = ctx.r11.s64 + -24608;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8222cf18
	ctx.lr = 0x826779D8;
	sub_8222CF18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82678fb0
	ctx.lr = 0x826779E4;
	sub_82678FB0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x826779EC;
	sub_82214F08(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-24596
	ctx.r4.s64 = ctx.r10.s64 + -24596;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x82677A00;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82677A10;
	sub_8222CF18(ctx, base);
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r9,-24880
	ctx.r6.s64 = ctx.r9.s64 + -24880;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x826791f8
	ctx.lr = 0x82677A28;
	sub_826791F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82677A30;
	sub_82214F08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82677A38;
	sub_82214F08(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,-24580
	ctx.r4.s64 = ctx.r8.s64 + -24580;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82677A4C;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x82677A5C;
	sub_8222CF18(ctx, base);
	// lis r7,-32153
	ctx.r7.s64 = -2107179008;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r7,17768
	ctx.r6.s64 = ctx.r7.s64 + 17768;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82679400
	ctx.lr = 0x82677A74;
	sub_82679400(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82677A7C;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82677A84;
	sub_82214F08(ctx, base);
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,14312
	ctx.r4.s64 = ctx.r6.s64 + 14312;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82677A98;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x82677AA8;
	sub_8222CF18(ctx, base);
	// lis r4,-32153
	ctx.r4.s64 = -2107179008;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r4,19104
	ctx.r6.s64 = ctx.r4.s64 + 19104;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82679608
	ctx.lr = 0x82677AC0;
	sub_82679608(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82677AC8;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82677AD0;
	sub_82214F08(ctx, base);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,-24564
	ctx.r4.s64 = ctx.r3.s64 + -24564;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82677AE4;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x82677AF4;
	sub_8222CF18(ctx, base);
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r11,19464
	ctx.r6.s64 = ctx.r11.s64 + 19464;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82679810
	ctx.lr = 0x82677B0C;
	sub_82679810(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82677B14;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82677B1C;
	sub_82214F08(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-24548
	ctx.r4.s64 = ctx.r10.s64 + -24548;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82677B30;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x82677B40;
	sub_8222CF18(ctx, base);
	// lis r9,-32153
	ctx.r9.s64 = -2107179008;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r9,19736
	ctx.r6.s64 = ctx.r9.s64 + 19736;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82679a18
	ctx.lr = 0x82677B58;
	sub_82679A18(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82677B60;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82677B68;
	sub_82214F08(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,-24540
	ctx.r4.s64 = ctx.r8.s64 + -24540;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82677B7C;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x82677B8C;
	sub_8222CF18(ctx, base);
	// lis r7,-32157
	ctx.r7.s64 = -2107441152;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r7,11152
	ctx.r6.s64 = ctx.r7.s64 + 11152;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82679c20
	ctx.lr = 0x82677BA4;
	sub_82679C20(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82677BAC;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82677BB4;
	sub_82214F08(ctx, base);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,-24528
	ctx.r4.s64 = ctx.r6.s64 + -24528;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82677BC8;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x82677BD8;
	sub_8222CF18(ctx, base);
	// lis r4,-32153
	ctx.r4.s64 = -2107179008;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r4,19864
	ctx.r6.s64 = ctx.r4.s64 + 19864;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82679de0
	ctx.lr = 0x82677BF0;
	sub_82679DE0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82677BF8;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82677C00;
	sub_82214F08(ctx, base);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,-24512
	ctx.r4.s64 = ctx.r3.s64 + -24512;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82677C14;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x82677C24;
	sub_8222CF18(ctx, base);
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r11,20224
	ctx.r6.s64 = ctx.r11.s64 + 20224;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82679fe8
	ctx.lr = 0x82677C3C;
	sub_82679FE8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82677C44;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82677C4C;
	sub_82214F08(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-24504
	ctx.r4.s64 = ctx.r10.s64 + -24504;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82677C60;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x82677C70;
	sub_8222CF18(ctx, base);
	// lis r9,-32153
	ctx.r9.s64 = -2107179008;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r9,17048
	ctx.r6.s64 = ctx.r9.s64 + 17048;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8267a1f0
	ctx.lr = 0x82677C88;
	sub_8267A1F0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82677C90;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82677C98;
	sub_82214F08(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,-24480
	ctx.r4.s64 = ctx.r8.s64 + -24480;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82677CAC;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x82677CBC;
	sub_8222CF18(ctx, base);
	// lis r7,-32229
	ctx.r7.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r7,464
	ctx.r6.s64 = ctx.r7.s64 + 464;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8267a3f8
	ctx.lr = 0x82677CD4;
	sub_8267A3F8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82677CDC;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82677CE4;
	sub_82214F08(ctx, base);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,-24468
	ctx.r4.s64 = ctx.r6.s64 + -24468;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82677CF8;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x82677D08;
	sub_8222CF18(ctx, base);
	// lis r4,-32153
	ctx.r4.s64 = -2107179008;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r4,22248
	ctx.r6.s64 = ctx.r4.s64 + 22248;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8267a5f8
	ctx.lr = 0x82677D20;
	sub_8267A5F8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82677D28;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82677D30;
	sub_82214F08(ctx, base);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,-24440
	ctx.r4.s64 = ctx.r3.s64 + -24440;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82677D44;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x82677D54;
	sub_8222CF18(ctx, base);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,17864
	ctx.r6.s64 = ctx.r11.s64 + 17864;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8267a7f8
	ctx.lr = 0x82677D6C;
	sub_8267A7F8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82677D74;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82677D7C;
	sub_82214F08(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-24428
	ctx.r4.s64 = ctx.r10.s64 + -24428;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82677D90;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x82677DA0;
	sub_8222CF18(ctx, base);
	// lis r9,-32157
	ctx.r9.s64 = -2107441152;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r9,10664
	ctx.r6.s64 = ctx.r9.s64 + 10664;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8267a9f8
	ctx.lr = 0x82677DB8;
	sub_8267A9F8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82677DC0;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82677DC8;
	sub_82214F08(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,-24412
	ctx.r4.s64 = ctx.r8.s64 + -24412;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82677DDC;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x82677DEC;
	sub_8222CF18(ctx, base);
	// lis r7,-32153
	ctx.r7.s64 = -2107179008;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r7,5416
	ctx.r6.s64 = ctx.r7.s64 + 5416;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8267a7f8
	ctx.lr = 0x82677E04;
	sub_8267A7F8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82677E0C;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82677E14;
	sub_82214F08(ctx, base);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,-24384
	ctx.r4.s64 = ctx.r6.s64 + -24384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82677E28;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x82677E38;
	sub_8222CF18(ctx, base);
	// lis r4,-32153
	ctx.r4.s64 = -2107179008;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r4,5424
	ctx.r6.s64 = ctx.r4.s64 + 5424;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8267a7f8
	ctx.lr = 0x82677E50;
	sub_8267A7F8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82677E58;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82677E60;
	sub_82214F08(ctx, base);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,-24360
	ctx.r4.s64 = ctx.r3.s64 + -24360;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82677E74;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x82677E84;
	sub_8222CF18(ctx, base);
	// lis r11,-32139
	ctx.r11.s64 = -2106261504;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,24256
	ctx.r6.s64 = ctx.r11.s64 + 24256;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8267a9f8
	ctx.lr = 0x82677E9C;
	sub_8267A9F8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82677EA4;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82677EAC;
	sub_82214F08(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-24332
	ctx.r4.s64 = ctx.r10.s64 + -24332;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82677EC0;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x82677ED0;
	sub_8222CF18(ctx, base);
	// lis r9,-32139
	ctx.r9.s64 = -2106261504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r9,24264
	ctx.r6.s64 = ctx.r9.s64 + 24264;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8267a9f8
	ctx.lr = 0x82677EE8;
	sub_8267A9F8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82677EF0;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82677EF8;
	sub_82214F08(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,-24308
	ctx.r4.s64 = ctx.r8.s64 + -24308;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82677F0C;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x82677F1C;
	sub_8222CF18(ctx, base);
	// lis r7,-32153
	ctx.r7.s64 = -2107179008;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r7,22328
	ctx.r6.s64 = ctx.r7.s64 + 22328;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82679c20
	ctx.lr = 0x82677F34;
	sub_82679C20(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82677F3C;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82677F44;
	sub_82214F08(ctx, base);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,-24296
	ctx.r4.s64 = ctx.r6.s64 + -24296;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82677F58;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x82677F68;
	sub_8222CF18(ctx, base);
	// lis r5,-32233
	ctx.r5.s64 = -2112421888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r5,17504
	ctx.r6.s64 = ctx.r5.s64 + 17504;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82679c20
	ctx.lr = 0x82677F80;
	sub_82679C20(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82677F88;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82677F90;
	sub_82214F08(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,-24284
	ctx.r4.s64 = ctx.r4.s64 + -24284;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82677FA4;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x82677FB4;
	sub_8222CF18(ctx, base);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,17840
	ctx.r6.s64 = ctx.r11.s64 + 17840;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82679c20
	ctx.lr = 0x82677FCC;
	sub_82679C20(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82677FD4;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82677FDC;
	sub_82214F08(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-24268
	ctx.r4.s64 = ctx.r10.s64 + -24268;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82677FF0;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x82678000;
	sub_8222CF18(ctx, base);
	// lis r9,-32153
	ctx.r9.s64 = -2107179008;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r9,5392
	ctx.r6.s64 = ctx.r9.s64 + 5392;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82679c20
	ctx.lr = 0x82678018;
	sub_82679C20(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82678020;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82678028;
	sub_82214F08(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,-24248
	ctx.r4.s64 = ctx.r8.s64 + -24248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8267803C;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x8267804C;
	sub_8222CF18(ctx, base);
	// lis r7,-32153
	ctx.r7.s64 = -2107179008;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r7,22464
	ctx.r6.s64 = ctx.r7.s64 + 22464;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8267abf8
	ctx.lr = 0x82678064;
	sub_8267ABF8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8267806C;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82678074;
	sub_82214F08(ctx, base);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,-24228
	ctx.r4.s64 = ctx.r6.s64 + -24228;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82678088;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x82678098;
	sub_8222CF18(ctx, base);
	// lis r5,-32153
	ctx.r5.s64 = -2107179008;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r5,5432
	ctx.r6.s64 = ctx.r5.s64 + 5432;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8267a7f8
	ctx.lr = 0x826780B0;
	sub_8267A7F8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x826780B8;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x826780C0;
	sub_82214F08(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,-24200
	ctx.r4.s64 = ctx.r4.s64 + -24200;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x826780D4;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x826780E4;
	sub_8222CF18(ctx, base);
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,22736
	ctx.r6.s64 = ctx.r11.s64 + 22736;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8267a9f8
	ctx.lr = 0x826780FC;
	sub_8267A9F8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82678104;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8267810C;
	sub_82214F08(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-24176
	ctx.r4.s64 = ctx.r10.s64 + -24176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82678120;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x82678130;
	sub_8222CF18(ctx, base);
	// lis r9,-32153
	ctx.r9.s64 = -2107179008;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r9,22840
	ctx.r6.s64 = ctx.r9.s64 + 22840;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8267adf8
	ctx.lr = 0x82678148;
	sub_8267ADF8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82678150;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82678158;
	sub_82214F08(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,-24156
	ctx.r4.s64 = ctx.r8.s64 + -24156;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8267816C;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x8267817C;
	sub_8222CF18(ctx, base);
	// lis r7,-32153
	ctx.r7.s64 = -2107179008;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r7,5440
	ctx.r6.s64 = ctx.r7.s64 + 5440;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8267a5f8
	ctx.lr = 0x82678194;
	sub_8267A5F8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8267819C;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x826781A4;
	sub_82214F08(ctx, base);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,-24136
	ctx.r4.s64 = ctx.r6.s64 + -24136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x826781B8;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x826781C8;
	sub_8222CF18(ctx, base);
	// lis r5,-32153
	ctx.r5.s64 = -2107179008;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r5,23176
	ctx.r6.s64 = ctx.r5.s64 + 23176;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8267aff8
	ctx.lr = 0x826781E0;
	sub_8267AFF8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x826781E8;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x826781F0;
	sub_82214F08(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,-24112
	ctx.r4.s64 = ctx.r4.s64 + -24112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82678204;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x82678214;
	sub_8222CF18(ctx, base);
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,23288
	ctx.r6.s64 = ctx.r11.s64 + 23288;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8267b1b8
	ctx.lr = 0x8267822C;
	sub_8267B1B8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82678234;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8267823C;
	sub_82214F08(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-24084
	ctx.r4.s64 = ctx.r10.s64 + -24084;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82678250;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x82678260;
	sub_8222CF18(ctx, base);
	// lis r9,-32153
	ctx.r9.s64 = -2107179008;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r9,5624
	ctx.r6.s64 = ctx.r9.s64 + 5624;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8267b3c0
	ctx.lr = 0x82678278;
	sub_8267B3C0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82678280;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82678288;
	sub_82214F08(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,-24060
	ctx.r4.s64 = ctx.r8.s64 + -24060;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8267829C;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x826782AC;
	sub_8222CF18(ctx, base);
	// lis r7,-32153
	ctx.r7.s64 = -2107179008;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r7,22456
	ctx.r6.s64 = ctx.r7.s64 + 22456;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8267a3f8
	ctx.lr = 0x826782C4;
	sub_8267A3F8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x826782CC;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x826782D4;
	sub_82214F08(ctx, base);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,-24032
	ctx.r4.s64 = ctx.r6.s64 + -24032;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x826782E8;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x826782F8;
	sub_8222CF18(ctx, base);
	// lis r5,-32153
	ctx.r5.s64 = -2107179008;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r5,17040
	ctx.r6.s64 = ctx.r5.s64 + 17040;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8267a3f8
	ctx.lr = 0x82678310;
	sub_8267A3F8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82678318;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82678320;
	sub_82214F08(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,-24012
	ctx.r4.s64 = ctx.r4.s64 + -24012;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82678334;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x82678344;
	sub_8222CF18(ctx, base);
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,22272
	ctx.r6.s64 = ctx.r11.s64 + 22272;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8267abf8
	ctx.lr = 0x8267835C;
	sub_8267ABF8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82678364;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8267836C;
	sub_82214F08(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-23996
	ctx.r4.s64 = ctx.r10.s64 + -23996;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82678380;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x82678390;
	sub_8222CF18(ctx, base);
	// lis r9,-32153
	ctx.r9.s64 = -2107179008;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r9,22352
	ctx.r6.s64 = ctx.r9.s64 + 22352;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8267b5c8
	ctx.lr = 0x826783A8;
	sub_8267B5C8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x826783B0;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x826783B8;
	sub_82214F08(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,-23976
	ctx.r4.s64 = ctx.r8.s64 + -23976;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x826783CC;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x826783DC;
	sub_8222CF18(ctx, base);
	// lis r7,-32153
	ctx.r7.s64 = -2107179008;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r7,27120
	ctx.r6.s64 = ctx.r7.s64 + 27120;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8267b7c8
	ctx.lr = 0x826783F4;
	sub_8267B7C8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x826783FC;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82678404;
	sub_82214F08(ctx, base);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,-23960
	ctx.r4.s64 = ctx.r6.s64 + -23960;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82678418;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x82678428;
	sub_8222CF18(ctx, base);
	// lis r5,-32153
	ctx.r5.s64 = -2107179008;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r5,31144
	ctx.r6.s64 = ctx.r5.s64 + 31144;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8267b7c8
	ctx.lr = 0x82678440;
	sub_8267B7C8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82678448;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82678450;
	sub_82214F08(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,-23936
	ctx.r4.s64 = ctx.r4.s64 + -23936;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82678464;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x82678474;
	sub_8222CF18(ctx, base);
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,27184
	ctx.r6.s64 = ctx.r11.s64 + 27184;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8267b7c8
	ctx.lr = 0x8267848C;
	sub_8267B7C8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82678494;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8267849C;
	sub_82214F08(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-23916
	ctx.r4.s64 = ctx.r10.s64 + -23916;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x826784B0;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x826784C0;
	sub_8222CF18(ctx, base);
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r9,-29152
	ctx.r6.s64 = ctx.r9.s64 + -29152;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82679c20
	ctx.lr = 0x826784D8;
	sub_82679C20(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x826784E0;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x826784E8;
	sub_82214F08(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,-23896
	ctx.r4.s64 = ctx.r8.s64 + -23896;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x826784FC;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x8267850C;
	sub_8222CF18(ctx, base);
	// lis r7,-32153
	ctx.r7.s64 = -2107179008;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r7,27592
	ctx.r6.s64 = ctx.r7.s64 + 27592;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8267adf8
	ctx.lr = 0x82678524;
	sub_8267ADF8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8267852C;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82678534;
	sub_82214F08(ctx, base);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,-23856
	ctx.r4.s64 = ctx.r6.s64 + -23856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82678548;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x82678558;
	sub_8222CF18(ctx, base);
	// lis r5,-32153
	ctx.r5.s64 = -2107179008;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r5,5632
	ctx.r6.s64 = ctx.r5.s64 + 5632;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8267b5c8
	ctx.lr = 0x82678570;
	sub_8267B5C8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82678578;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82678580;
	sub_82214F08(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,-23828
	ctx.r4.s64 = ctx.r4.s64 + -23828;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82678594;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x826785A4;
	sub_8222CF18(ctx, base);
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,5640
	ctx.r6.s64 = ctx.r11.s64 + 5640;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8267b5c8
	ctx.lr = 0x826785BC;
	sub_8267B5C8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x826785C4;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x826785CC;
	sub_82214F08(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-25296
	ctx.r4.s64 = ctx.r10.s64 + -25296;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x826785E0;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x826785F0;
	sub_8222CF18(ctx, base);
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r9,17712
	ctx.r6.s64 = ctx.r9.s64 + 17712;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82679c20
	ctx.lr = 0x82678608;
	sub_82679C20(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82678610;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82678618;
	sub_82214F08(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,-23796
	ctx.r4.s64 = ctx.r8.s64 + -23796;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8267862C;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x8267863C;
	sub_8222CF18(ctx, base);
	// lis r7,-32179
	ctx.r7.s64 = -2108882944;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r7,17872
	ctx.r6.s64 = ctx.r7.s64 + 17872;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8267b7c8
	ctx.lr = 0x82678654;
	sub_8267B7C8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8267865C;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82678664;
	sub_82214F08(ctx, base);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,-23756
	ctx.r4.s64 = ctx.r6.s64 + -23756;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82678678;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x82678688;
	sub_8222CF18(ctx, base);
	// lis r5,-32153
	ctx.r5.s64 = -2107179008;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r5,23264
	ctx.r6.s64 = ctx.r5.s64 + 23264;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8267aff8
	ctx.lr = 0x826786A0;
	sub_8267AFF8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x826786A8;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x826786B0;
	sub_82214F08(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,-23736
	ctx.r4.s64 = ctx.r4.s64 + -23736;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x826786C4;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x826786D4;
	sub_8222CF18(ctx, base);
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,24120
	ctx.r6.s64 = ctx.r11.s64 + 24120;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8267b9c8
	ctx.lr = 0x826786EC;
	sub_8267B9C8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x826786F4;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x826786FC;
	sub_82214F08(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-23712
	ctx.r4.s64 = ctx.r10.s64 + -23712;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82678710;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x82678720;
	sub_8222CF18(ctx, base);
	// lis r9,-32153
	ctx.r9.s64 = -2107179008;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r9,24176
	ctx.r6.s64 = ctx.r9.s64 + 24176;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8267a3f8
	ctx.lr = 0x82678738;
	sub_8267A3F8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82678740;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82678748;
	sub_82214F08(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,-23684
	ctx.r4.s64 = ctx.r8.s64 + -23684;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x8267875C;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x8267876C;
	sub_8222CF18(ctx, base);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r7,16688
	ctx.r6.s64 = ctx.r7.s64 + 16688;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82679c20
	ctx.lr = 0x82678784;
	sub_82679C20(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8267878C;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82678794;
	sub_82214F08(ctx, base);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,-23648
	ctx.r4.s64 = ctx.r6.s64 + -23648;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x826787A8;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x826787B8;
	sub_8222CF18(ctx, base);
	// lis r5,-32153
	ctx.r5.s64 = -2107179008;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r5,27248
	ctx.r6.s64 = ctx.r5.s64 + 27248;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8267b7c8
	ctx.lr = 0x826787D0;
	sub_8267B7C8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x826787D8;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x826787E0;
	sub_82214F08(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,-23632
	ctx.r4.s64 = ctx.r4.s64 + -23632;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x826787F4;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x82678804;
	sub_8222CF18(ctx, base);
	// lis r3,-32153
	ctx.r3.s64 = -2107179008;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r6,r3,30984
	ctx.r6.s64 = ctx.r3.s64 + 30984;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8267b7c8
	ctx.lr = 0x8267881C;
	sub_8267B7C8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82678824;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x8267882C;
	sub_82214F08(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-23604
	ctx.r4.s64 = ctx.r11.s64 + -23604;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82678840;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x82678850;
	sub_8222CF18(ctx, base);
	// lis r10,-32153
	ctx.r10.s64 = -2107179008;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r6,r10,5648
	ctx.r6.s64 = ctx.r10.s64 + 5648;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8267b7c8
	ctx.lr = 0x82678868;
	sub_8267B7C8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x82678870;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82678878;
	sub_82214F08(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x82678888;
	sub_824EF300(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824eef40
	ctx.lr = 0x82678898;
	sub_824EEF40(ctx, base);
	// lis r8,-32211
	ctx.r8.s64 = -2110980096;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// addi r5,r8,26232
	ctx.r5.s64 = ctx.r8.s64 + 26232;
	// addi r4,r7,-23568
	ctx.r4.s64 = ctx.r7.s64 + -23568;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8267bbd0
	ctx.lr = 0x826788B0;
	sub_8267BBD0(ctx, base);
	// lwz r31,88(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82678a9c
	if (ctx.cr6.eq) goto loc_82678A9C;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82229208
	ctx.lr = 0x826788D0;
	sub_82229208(ctx, base);
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r30,r11,6496
	ctx.r30.s64 = ctx.r11.s64 + 6496;
	// bl 0x822279a0
	ctx.lr = 0x826788E4;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-18688
	ctx.r4.s64 = ctx.r10.s64 + -18688;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x82678900;
	sub_8219AB28(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r30,r9,-23540
	ctx.r30.s64 = ctx.r9.s64 + -23540;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x824ef160
	ctx.lr = 0x82678918;
	sub_824EF160(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x82678928;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// addi r8,r11,-8
	ctx.r8.s64 = ctx.r11.s64 + -8;
	// stw r8,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r8.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82229208
	ctx.lr = 0x82678948;
	sub_82229208(ctx, base);
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r30,r11,5680
	ctx.r30.s64 = ctx.r11.s64 + 5680;
	// bl 0x822279a0
	ctx.lr = 0x8267895C;
	sub_822279A0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lis r6,-32152
	ctx.r6.s64 = -2107113472;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r6,-12808
	ctx.r4.s64 = ctx.r6.s64 + -12808;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x82678978;
	sub_8219AB28(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r30,r5,-23504
	ctx.r30.s64 = ctx.r5.s64 + -23504;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x824ef160
	ctx.lr = 0x82678990;
	sub_824EF160(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x826789A0;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// stw r3,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r3.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82229208
	ctx.lr = 0x826789C0;
	sub_82229208(ctx, base);
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r30,r11,6784
	ctx.r30.s64 = ctx.r11.s64 + 6784;
	// bl 0x822279a0
	ctx.lr = 0x826789D4;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32152
	ctx.r10.s64 = -2107113472;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-12600
	ctx.r4.s64 = ctx.r10.s64 + -12600;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x826789F0;
	sub_8219AB28(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r30,r9,-23464
	ctx.r30.s64 = ctx.r9.s64 + -23464;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	ctx.lr = 0x82678A08;
	sub_824EF160(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x82678A18;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// addi r8,r11,-8
	ctx.r8.s64 = ctx.r11.s64 + -8;
	// stw r8,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r8.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82229208
	ctx.lr = 0x82678A38;
	sub_82229208(ctx, base);
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,30760
	ctx.r31.s64 = ctx.r11.s64 + 30760;
	// bl 0x822279a0
	ctx.lr = 0x82678A4C;
	sub_822279A0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lis r6,-32152
	ctx.r6.s64 = -2107113472;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r6,-12536
	ctx.r4.s64 = ctx.r6.s64 + -12536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r31.u32);
	// bl 0x8219ab28
	ctx.lr = 0x82678A68;
	sub_8219AB28(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r31,r5,-23432
	ctx.r31.s64 = ctx.r5.s64 + -23432;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824ef160
	ctx.lr = 0x82678A80;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x82678A90;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// stw r4,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r4.u32);
loc_82678A9C:
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r5,r11,30864
	ctx.r5.s64 = ctx.r11.s64 + 30864;
	// addi r4,r10,-23412
	ctx.r4.s64 = ctx.r10.s64 + -23412;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82350e30
	ctx.lr = 0x82678AB4;
	sub_82350E30(ctx, base);
	// lis r9,-32153
	ctx.r9.s64 = -2107179008;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r5,r9,30880
	ctx.r5.s64 = ctx.r9.s64 + 30880;
	// addi r4,r8,-23400
	ctx.r4.s64 = ctx.r8.s64 + -23400;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823b14e8
	ctx.lr = 0x82678ACC;
	sub_823B14E8(ctx, base);
	// lis r7,-32153
	ctx.r7.s64 = -2107179008;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// addi r5,r7,30896
	ctx.r5.s64 = ctx.r7.s64 + 30896;
	// addi r4,r6,-23376
	ctx.r4.s64 = ctx.r6.s64 + -23376;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823a2d78
	ctx.lr = 0x82678AE4;
	sub_823A2D78(ctx, base);
	// lis r5,-32214
	ctx.r5.s64 = -2111176704;
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// addi r5,r5,4208
	ctx.r5.s64 = ctx.r5.s64 + 4208;
	// addi r4,r4,-23336
	ctx.r4.s64 = ctx.r4.s64 + -23336;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8267bc68
	ctx.lr = 0x82678AFC;
	sub_8267BC68(ctx, base);
	// lis r3,-32221
	ctx.r3.s64 = -2111635456;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r5,r3,-5800
	ctx.r5.s64 = ctx.r3.s64 + -5800;
	// addi r4,r11,-23312
	ctx.r4.s64 = ctx.r11.s64 + -23312;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8262d4c8
	ctx.lr = 0x82678B14;
	sub_8262D4C8(ctx, base);
	// lis r10,-32153
	ctx.r10.s64 = -2107179008;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r5,r10,7504
	ctx.r5.s64 = ctx.r10.s64 + 7504;
	// addi r4,r9,-23292
	ctx.r4.s64 = ctx.r9.s64 + -23292;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef020
	ctx.lr = 0x82678B2C;
	sub_824EF020(ctx, base);
	// lis r8,-32153
	ctx.r8.s64 = -2107179008;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// addi r5,r8,5656
	ctx.r5.s64 = ctx.r8.s64 + 5656;
	// addi r4,r7,-23268
	ctx.r4.s64 = ctx.r7.s64 + -23268;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823a2d78
	ctx.lr = 0x82678B44;
	sub_823A2D78(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x82678B4C;
	sub_829FF648(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x82678B54;
	sub_829FF648(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82678B5C"))) PPC_WEAK_FUNC(sub_82678B5C);
PPC_FUNC_IMPL(__imp__sub_82678B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82678B60"))) PPC_WEAK_FUNC(sub_82678B60);
PPC_FUNC_IMPL(__imp__sub_82678B60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82678B68;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x824ee0f8
	ctx.lr = 0x82678B80;
	sub_824EE0F8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82678b98
	if (ctx.cr6.eq) goto loc_82678B98;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82678b9c
	if (ctx.cr6.eq) goto loc_82678B9C;
loc_82678B98:
	// twi 31,r0,22
loc_82678B9C:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82678bd4
	if (ctx.cr6.eq) goto loc_82678BD4;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82678bc0
	if (ctx.cr6.lt) goto loc_82678BC0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82678BC0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82678bd4
	if (!ctx.cr6.eq) goto loc_82678BD4;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// b 0x82678be0
	goto loc_82678BE0;
loc_82678BD4:
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
loc_82678BE0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// stw r9,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82678BFC"))) PPC_WEAK_FUNC(sub_82678BFC);
PPC_FUNC_IMPL(__imp__sub_82678BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82678C00"))) PPC_WEAK_FUNC(sub_82678C00);
PPC_FUNC_IMPL(__imp__sub_82678C00) {
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
	// bl 0x829ff648
	ctx.lr = 0x82678C20;
	sub_829FF648(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82678c68
	if (ctx.cr6.eq) goto loc_82678C68;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8221f388
	ctx.lr = 0x82678C34;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82678c60
	if (ctx.cr6.eq) goto loc_82678C60;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32152
	ctx.r9.s64 = -2107113472;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r9,-29376
	ctx.r7.s64 = ctx.r9.s64 + -29376;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82678c64
	goto loc_82678C64;
loc_82678C60:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82678C64:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82678C68:
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

__attribute__((alias("__imp__sub_82678C80"))) PPC_WEAK_FUNC(sub_82678C80);
PPC_FUNC_IMPL(__imp__sub_82678C80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82678C88;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r30,r11,-21168
	ctx.r30.s64 = ctx.r11.s64 + -21168;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// beq cr6,0x82678d10
	if (ctx.cr6.eq) goto loc_82678D10;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r28,r11,28344
	ctx.r28.s64 = ctx.r11.s64 + 28344;
loc_82678CC8:
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x821c67d8
	ctx.lr = 0x82678CD4;
	sub_821C67D8(ctx, base);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
loc_82678CD8:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82678cd8
	if (!ctx.cr0.eq) goto loc_82678CD8;
	// stw r27,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221be68
	ctx.lr = 0x82678D00;
	sub_8221BE68(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82678cc8
	if (!ctx.cr6.eq) goto loc_82678CC8;
loc_82678D10:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82678D18"))) PPC_WEAK_FUNC(sub_82678D18);
PPC_FUNC_IMPL(__imp__sub_82678D18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82678d2c
	if (!ctx.cr6.eq) goto loc_82678D2C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82678D2C:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r3,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82678D3C"))) PPC_WEAK_FUNC(sub_82678D3C);
PPC_FUNC_IMPL(__imp__sub_82678D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82678D40"))) PPC_WEAK_FUNC(sub_82678D40);
PPC_FUNC_IMPL(__imp__sub_82678D40) {
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
	// beq cr6,0x82678d8c
	if (ctx.cr6.eq) goto loc_82678D8C;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r31,r30,16
	ctx.r31.s64 = ctx.r30.s64 + 16;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82678d74
	if (ctx.cr6.eq) goto loc_82678D74;
	// bl 0x8221be68
	ctx.lr = 0x82678D74;
	sub_8221BE68(ctx, base);
loc_82678D74:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x8221be68
	ctx.lr = 0x82678D8C;
	sub_8221BE68(ctx, base);
loc_82678D8C:
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

__attribute__((alias("__imp__sub_82678DA4"))) PPC_WEAK_FUNC(sub_82678DA4);
PPC_FUNC_IMPL(__imp__sub_82678DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82678DA8"))) PPC_WEAK_FUNC(sub_82678DA8);
PPC_FUNC_IMPL(__imp__sub_82678DA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82678DB0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r4.u64);
	// li r3,48
	ctx.r3.s64 = 48;
	// lwz r27,236(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r28,4(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x8221f388
	ctx.lr = 0x82678DCC;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82678ddc
	if (ctx.cr6.eq) goto loc_82678DDC;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_82678DDC:
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82678dec
	if (ctx.cr6.eq) goto loc_82678DEC;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
loc_82678DEC:
	// addic. r11,r31,16
	ctx.xer.ca = ctx.r31.u32 > 4294967279;
	ctx.r11.s64 = ctx.r31.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82678e20
	if (ctx.cr0.eq) goto loc_82678E20;
	// lvx128 v0,r0,r30
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r4,r30,28
	ctx.r4.s64 = ctx.r30.s64 + 28;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lbz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 20);
	// stb r10,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r10.u8);
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// bl 0x821f0108
	ctx.lr = 0x82678E20;
	sub_821F0108(ctx, base);
loc_82678E20:
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// lis r10,2047
	ctx.r10.s64 = 134152192;
	// addi r30,r11,-21168
	ctx.r30.s64 = ctx.r11.s64 + -21168;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bge cr6,0x82678e88
	if (!ctx.cr6.lt) goto loc_82678E88;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,11140
	ctx.r4.s64 = ctx.r11.s64 + 11140;
	// bl 0x822f2020
	ctx.lr = 0x82678E50;
	sub_822F2020(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826c3ef0
	ctx.lr = 0x82678E5C;
	sub_826C3EF0(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r28,r10,5696
	ctx.r28.s64 = ctx.r10.s64 + 5696;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// bl 0x822f1f00
	ctx.lr = 0x82678E70;
	sub_822F1F00(ctx, base);
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826c3fa8
	ctx.lr = 0x82678E7C;
	sub_826C3FA8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82171810
	ctx.lr = 0x82678E84;
	sub_82171810(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
loc_82678E88:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r31,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r31.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82678EA4"))) PPC_WEAK_FUNC(sub_82678EA4);
PPC_FUNC_IMPL(__imp__sub_82678EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82678EA8"))) PPC_WEAK_FUNC(sub_82678EA8);
PPC_FUNC_IMPL(__imp__sub_82678EA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82678EB0;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// addi r28,r11,36
	ctx.r28.s64 = ctx.r11.s64 + 36;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82678ee0
	if (ctx.cr6.eq) goto loc_82678EE0;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x82678ee8
	goto loc_82678EE8;
loc_82678EE0:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82678EE4:
	// li r29,1
	ctx.r29.s64 = 1;
loc_82678EE8:
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82678f04
	if (!ctx.cr6.eq) goto loc_82678F04;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82678f08
	if (ctx.cr6.eq) goto loc_82678F08;
loc_82678F04:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82678F08:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82678fa4
	if (!ctx.cr6.eq) goto loc_82678FA4;
	// lwz r31,8(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lbz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 144);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82678f90
	if (ctx.cr6.eq) goto loc_82678F90;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82203718
	ctx.lr = 0x82678F38;
	sub_82203718(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82678f90
	if (ctx.cr6.eq) goto loc_82678F90;
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82678f5c
	if (!ctx.cr6.eq) goto loc_82678F5C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82678f78
	goto loc_82678F78;
loc_82678F5C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82678f74
	if (ctx.cr6.eq) goto loc_82678F74;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82678f74
	if (ctx.cr6.eq) goto loc_82678F74;
	// bl 0x8226d750
	ctx.lr = 0x82678F70;
	sub_8226D750(ctx, base);
	// b 0x82678f78
	goto loc_82678F78;
loc_82678F74:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82678F78:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82678f90
	if (ctx.cr6.eq) goto loc_82678F90;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x829fd4b8
	ctx.lr = 0x82678F90;
	sub_829FD4B8(ctx, base);
loc_82678F90:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82678ee4
	if (ctx.cr6.eq) goto loc_82678EE4;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// b 0x82678ee8
	goto loc_82678EE8;
loc_82678FA4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82678FAC"))) PPC_WEAK_FUNC(sub_82678FAC);
PPC_FUNC_IMPL(__imp__sub_82678FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82678FB0"))) PPC_WEAK_FUNC(sub_82678FB0);
PPC_FUNC_IMPL(__imp__sub_82678FB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82678FB8;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82678fd8
	if (!ctx.cr6.eq) goto loc_82678FD8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r11,63
	ctx.r31.s64 = ctx.r11.s64 + 63;
	// b 0x82678fdc
	goto loc_82678FDC;
loc_82678FD8:
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82678FDC:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x82678FEC;
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824eef40
	ctx.lr = 0x82678FFC;
	sub_824EEF40(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x82679004;
	sub_829FF648(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8221f388
	ctx.lr = 0x8267900C;
	sub_8221F388(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82679054
	if (ctx.cr6.eq) goto loc_82679054;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r3,12
	ctx.r3.s64 = 12;
	// addi r10,r11,-1124
	ctx.r10.s64 = ctx.r11.s64 + -1124;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// bl 0x8221f388
	ctx.lr = 0x8267902C;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82679058
	if (ctx.cr6.eq) goto loc_82679058;
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = ctx.r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x8267905c
	goto loc_8267905C;
loc_82679054:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82679058:
	// li r28,0
	ctx.r28.s64 = 0;
loc_8267905C:
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82679160
	if (ctx.cr6.eq) goto loc_82679160;
	// lwz r26,0(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82229208
	ctx.lr = 0x8267907C;
	sub_82229208(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r30,r11,17248
	ctx.r30.s64 = ctx.r11.s64 + 17248;
	// bl 0x822279a0
	ctx.lr = 0x82679090;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32108
	ctx.r10.s64 = -2104229888;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-32
	ctx.r4.s64 = ctx.r10.s64 + -32;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x826790B0;
	sub_8219AB28(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r30,r9,-29448
	ctx.r30.s64 = ctx.r9.s64 + -29448;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x824ef160
	ctx.lr = 0x826790C8;
	sub_824EF160(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x826790D8;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// addi r8,r11,-8
	ctx.r8.s64 = ctx.r11.s64 + -8;
	// stw r8,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r8.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82229208
	ctx.lr = 0x826790F8;
	sub_82229208(ctx, base);
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,-17152
	ctx.r31.s64 = ctx.r11.s64 + -17152;
	// bl 0x822279a0
	ctx.lr = 0x8267910C;
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
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r29.u32);
	// stw r31,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r31.u32);
	// bl 0x8219ab28
	ctx.lr = 0x8267912C;
	sub_8219AB28(ctx, base);
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r31,r5,-29436
	ctx.r31.s64 = ctx.r5.s64 + -29436;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824ef160
	ctx.lr = 0x82679144;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x82679154;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// stw r4,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r4.u32);
loc_82679160:
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// beq cr6,0x8267918c
	if (ctx.cr6.eq) goto loc_8267918C;
loc_82679170:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r28
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r28.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r28
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r28.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82679170
	if (!ctx.cr0.eq) goto loc_82679170;
loc_8267918C:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x827f18f0
	ctx.lr = 0x8267919C;
	sub_827F18F0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x826791A4;
	sub_829FF648(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x826791e8
	if (ctx.cr6.eq) goto loc_826791E8;
loc_826791AC:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r28
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r28.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r28
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r28.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x826791ac
	if (!ctx.cr0.eq) goto loc_826791AC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826791e8
	if (!ctx.cr6.eq) goto loc_826791E8;
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826791E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8221be68
	ctx.lr = 0x826791E8;
	sub_8221BE68(ctx, base);
loc_826791E8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x826791F0;
	sub_829FF648(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_826791F8"))) PPC_WEAK_FUNC(sub_826791F8);
PPC_FUNC_IMPL(__imp__sub_826791F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82679200;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r27,r9,63
	ctx.r27.s64 = ctx.r9.s64 + 63;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r29,r10,-24880
	ctx.r29.s64 = ctx.r10.s64 + -24880;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// beq cr6,0x82679234
	if (ctx.cr6.eq) goto loc_82679234;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82679234:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x82679244;
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824eee50
	ctx.lr = 0x82679254;
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x8267925C;
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x82679264;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826792c8
	if (ctx.cr6.eq) goto loc_826792C8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3664
	ctx.r9.s64 = ctx.r11.s64 + 3664;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x821f0108
	ctx.lr = 0x82679294;
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// bl 0x8221f388
	ctx.lr = 0x826792A0;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826792cc
	if (ctx.cr6.eq) goto loc_826792CC;
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = ctx.r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x826792d0
	goto loc_826792D0;
loc_826792C8:
	// li r28,0
	ctx.r28.s64 = 0;
loc_826792CC:
	// li r29,0
	ctx.r29.s64 = 0;
loc_826792D0:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826792e4
	if (ctx.cr6.eq) goto loc_826792E4;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_826792E4:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82679364
	if (ctx.cr6.eq) goto loc_82679364;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x82679304;
	sub_82229208(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r30,r11,-17984
	ctx.r30.s64 = ctx.r11.s64 + -17984;
	// bl 0x822279a0
	ctx.lr = 0x82679318;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-22280
	ctx.r4.s64 = ctx.r10.s64 + -22280;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x82679338;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	ctx.lr = 0x82679348;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x82679358;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_82679364:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// beq cr6,0x82679390
	if (ctx.cr6.eq) goto loc_82679390;
loc_82679374:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82679374
	if (!ctx.cr0.eq) goto loc_82679374;
loc_82679390:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x827f18f0
	ctx.lr = 0x826793A0;
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x826793A8;
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x826793ec
	if (ctx.cr6.eq) goto loc_826793EC;
loc_826793B0:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x826793b0
	if (!ctx.cr0.eq) goto loc_826793B0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826793ec
	if (!ctx.cr6.eq) goto loc_826793EC;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826793E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221be68
	ctx.lr = 0x826793EC;
	sub_8221BE68(ctx, base);
loc_826793EC:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x826793F4;
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_826793FC"))) PPC_WEAK_FUNC(sub_826793FC);
PPC_FUNC_IMPL(__imp__sub_826793FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82679400"))) PPC_WEAK_FUNC(sub_82679400);
PPC_FUNC_IMPL(__imp__sub_82679400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82679408;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r10,-32153
	ctx.r10.s64 = -2107179008;
	// addi r27,r9,63
	ctx.r27.s64 = ctx.r9.s64 + 63;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r29,r10,17768
	ctx.r29.s64 = ctx.r10.s64 + 17768;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// beq cr6,0x8267943c
	if (ctx.cr6.eq) goto loc_8267943C;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8267943C:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x8267944C;
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824eee50
	ctx.lr = 0x8267945C;
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x82679464;
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x8267946C;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826794d0
	if (ctx.cr6.eq) goto loc_826794D0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3664
	ctx.r9.s64 = ctx.r11.s64 + 3664;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x821f0108
	ctx.lr = 0x8267949C;
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// bl 0x8221f388
	ctx.lr = 0x826794A8;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826794d4
	if (ctx.cr6.eq) goto loc_826794D4;
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = ctx.r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x826794d8
	goto loc_826794D8;
loc_826794D0:
	// li r28,0
	ctx.r28.s64 = 0;
loc_826794D4:
	// li r29,0
	ctx.r29.s64 = 0;
loc_826794D8:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826794ec
	if (ctx.cr6.eq) goto loc_826794EC;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_826794EC:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267956c
	if (ctx.cr6.eq) goto loc_8267956C;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x8267950C;
	sub_82229208(ctx, base);
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r30,r11,-17144
	ctx.r30.s64 = ctx.r11.s64 + -17144;
	// bl 0x822279a0
	ctx.lr = 0x82679520;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32152
	ctx.r10.s64 = -2107113472;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-12416
	ctx.r4.s64 = ctx.r10.s64 + -12416;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x82679540;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	ctx.lr = 0x82679550;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x82679560;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_8267956C:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// beq cr6,0x82679598
	if (ctx.cr6.eq) goto loc_82679598;
loc_8267957C:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8267957c
	if (!ctx.cr0.eq) goto loc_8267957C;
loc_82679598:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x827f18f0
	ctx.lr = 0x826795A8;
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x826795B0;
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x826795f4
	if (ctx.cr6.eq) goto loc_826795F4;
loc_826795B8:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x826795b8
	if (!ctx.cr0.eq) goto loc_826795B8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826795f4
	if (!ctx.cr6.eq) goto loc_826795F4;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826795EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221be68
	ctx.lr = 0x826795F4;
	sub_8221BE68(ctx, base);
loc_826795F4:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x826795FC;
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82679604"))) PPC_WEAK_FUNC(sub_82679604);
PPC_FUNC_IMPL(__imp__sub_82679604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82679608"))) PPC_WEAK_FUNC(sub_82679608);
PPC_FUNC_IMPL(__imp__sub_82679608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82679610;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r10,-32153
	ctx.r10.s64 = -2107179008;
	// addi r27,r9,63
	ctx.r27.s64 = ctx.r9.s64 + 63;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r29,r10,19104
	ctx.r29.s64 = ctx.r10.s64 + 19104;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// beq cr6,0x82679644
	if (ctx.cr6.eq) goto loc_82679644;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82679644:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x82679654;
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824eee50
	ctx.lr = 0x82679664;
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x8267966C;
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x82679674;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826796d8
	if (ctx.cr6.eq) goto loc_826796D8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3664
	ctx.r9.s64 = ctx.r11.s64 + 3664;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x821f0108
	ctx.lr = 0x826796A4;
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// bl 0x8221f388
	ctx.lr = 0x826796B0;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826796dc
	if (ctx.cr6.eq) goto loc_826796DC;
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = ctx.r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x826796e0
	goto loc_826796E0;
loc_826796D8:
	// li r28,0
	ctx.r28.s64 = 0;
loc_826796DC:
	// li r29,0
	ctx.r29.s64 = 0;
loc_826796E0:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826796f4
	if (ctx.cr6.eq) goto loc_826796F4;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_826796F4:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82679774
	if (ctx.cr6.eq) goto loc_82679774;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x82679714;
	sub_82229208(ctx, base);
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r30,r11,-16752
	ctx.r30.s64 = ctx.r11.s64 + -16752;
	// bl 0x822279a0
	ctx.lr = 0x82679728;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32152
	ctx.r10.s64 = -2107113472;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-12360
	ctx.r4.s64 = ctx.r10.s64 + -12360;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x82679748;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	ctx.lr = 0x82679758;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x82679768;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_82679774:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// beq cr6,0x826797a0
	if (ctx.cr6.eq) goto loc_826797A0;
loc_82679784:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82679784
	if (!ctx.cr0.eq) goto loc_82679784;
loc_826797A0:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x827f18f0
	ctx.lr = 0x826797B0;
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x826797B8;
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x826797fc
	if (ctx.cr6.eq) goto loc_826797FC;
loc_826797C0:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x826797c0
	if (!ctx.cr0.eq) goto loc_826797C0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826797fc
	if (!ctx.cr6.eq) goto loc_826797FC;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826797F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221be68
	ctx.lr = 0x826797FC;
	sub_8221BE68(ctx, base);
loc_826797FC:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x82679804;
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_8267980C"))) PPC_WEAK_FUNC(sub_8267980C);
PPC_FUNC_IMPL(__imp__sub_8267980C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82679810"))) PPC_WEAK_FUNC(sub_82679810);
PPC_FUNC_IMPL(__imp__sub_82679810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82679818;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r10,-32153
	ctx.r10.s64 = -2107179008;
	// addi r27,r9,63
	ctx.r27.s64 = ctx.r9.s64 + 63;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r29,r10,19464
	ctx.r29.s64 = ctx.r10.s64 + 19464;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// beq cr6,0x8267984c
	if (ctx.cr6.eq) goto loc_8267984C;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8267984C:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x8267985C;
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824eee50
	ctx.lr = 0x8267986C;
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x82679874;
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x8267987C;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826798e0
	if (ctx.cr6.eq) goto loc_826798E0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3664
	ctx.r9.s64 = ctx.r11.s64 + 3664;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x821f0108
	ctx.lr = 0x826798AC;
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// bl 0x8221f388
	ctx.lr = 0x826798B8;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826798e4
	if (ctx.cr6.eq) goto loc_826798E4;
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = ctx.r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x826798e8
	goto loc_826798E8;
loc_826798E0:
	// li r28,0
	ctx.r28.s64 = 0;
loc_826798E4:
	// li r29,0
	ctx.r29.s64 = 0;
loc_826798E8:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826798fc
	if (ctx.cr6.eq) goto loc_826798FC;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_826798FC:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267997c
	if (ctx.cr6.eq) goto loc_8267997C;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x8267991C;
	sub_82229208(ctx, base);
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r30,r11,-16344
	ctx.r30.s64 = ctx.r11.s64 + -16344;
	// bl 0x822279a0
	ctx.lr = 0x82679930;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32152
	ctx.r10.s64 = -2107113472;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-12304
	ctx.r4.s64 = ctx.r10.s64 + -12304;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x82679950;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	ctx.lr = 0x82679960;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x82679970;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_8267997C:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// beq cr6,0x826799a8
	if (ctx.cr6.eq) goto loc_826799A8;
loc_8267998C:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8267998c
	if (!ctx.cr0.eq) goto loc_8267998C;
loc_826799A8:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x827f18f0
	ctx.lr = 0x826799B8;
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x826799C0;
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82679a04
	if (ctx.cr6.eq) goto loc_82679A04;
loc_826799C8:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x826799c8
	if (!ctx.cr0.eq) goto loc_826799C8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82679a04
	if (!ctx.cr6.eq) goto loc_82679A04;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826799FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221be68
	ctx.lr = 0x82679A04;
	sub_8221BE68(ctx, base);
loc_82679A04:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x82679A0C;
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82679A14"))) PPC_WEAK_FUNC(sub_82679A14);
PPC_FUNC_IMPL(__imp__sub_82679A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82679A18"))) PPC_WEAK_FUNC(sub_82679A18);
PPC_FUNC_IMPL(__imp__sub_82679A18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82679A20;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r10,-32153
	ctx.r10.s64 = -2107179008;
	// addi r27,r9,63
	ctx.r27.s64 = ctx.r9.s64 + 63;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r29,r10,19736
	ctx.r29.s64 = ctx.r10.s64 + 19736;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// beq cr6,0x82679a54
	if (ctx.cr6.eq) goto loc_82679A54;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82679A54:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x82679A64;
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824eee50
	ctx.lr = 0x82679A74;
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x82679A7C;
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x82679A84;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82679ae8
	if (ctx.cr6.eq) goto loc_82679AE8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3664
	ctx.r9.s64 = ctx.r11.s64 + 3664;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x821f0108
	ctx.lr = 0x82679AB4;
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// bl 0x8221f388
	ctx.lr = 0x82679AC0;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82679aec
	if (ctx.cr6.eq) goto loc_82679AEC;
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = ctx.r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x82679af0
	goto loc_82679AF0;
loc_82679AE8:
	// li r28,0
	ctx.r28.s64 = 0;
loc_82679AEC:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82679AF0:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82679b04
	if (ctx.cr6.eq) goto loc_82679B04;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82679B04:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82679b84
	if (ctx.cr6.eq) goto loc_82679B84;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x82679B24;
	sub_82229208(ctx, base);
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r30,r11,-13184
	ctx.r30.s64 = ctx.r11.s64 + -13184;
	// bl 0x822279a0
	ctx.lr = 0x82679B38;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-17904
	ctx.r4.s64 = ctx.r10.s64 + -17904;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x82679B58;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	ctx.lr = 0x82679B68;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x82679B78;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_82679B84:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// beq cr6,0x82679bb0
	if (ctx.cr6.eq) goto loc_82679BB0;
loc_82679B94:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82679b94
	if (!ctx.cr0.eq) goto loc_82679B94;
loc_82679BB0:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x827f18f0
	ctx.lr = 0x82679BC0;
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x82679BC8;
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82679c0c
	if (ctx.cr6.eq) goto loc_82679C0C;
loc_82679BD0:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82679bd0
	if (!ctx.cr0.eq) goto loc_82679BD0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82679c0c
	if (!ctx.cr6.eq) goto loc_82679C0C;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82679C04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221be68
	ctx.lr = 0x82679C0C;
	sub_8221BE68(ctx, base);
loc_82679C0C:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x82679C14;
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82679C1C"))) PPC_WEAK_FUNC(sub_82679C1C);
PPC_FUNC_IMPL(__imp__sub_82679C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82679C20"))) PPC_WEAK_FUNC(sub_82679C20);
PPC_FUNC_IMPL(__imp__sub_82679C20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82679C28;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r27,r10,63
	ctx.r27.s64 = ctx.r10.s64 + 63;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82679c58
	if (ctx.cr6.eq) goto loc_82679C58;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82679C58:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x82679C68;
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824eee50
	ctx.lr = 0x82679C78;
	sub_824EEE50(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x829ff648
	ctx.lr = 0x82679C80;
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x82679C88;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82679cbc
	if (ctx.cr6.eq) goto loc_82679CBC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3664
	ctx.r9.s64 = ctx.r11.s64 + 3664;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x821f0108
	ctx.lr = 0x82679CB8;
	sub_821F0108(ctx, base);
	// b 0x82679cc0
	goto loc_82679CC0;
loc_82679CBC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82679CC0:
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// beq cr6,0x82679ce4
	if (ctx.cr6.eq) goto loc_82679CE4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8254c780
	ctx.lr = 0x82679CD8;
	sub_8254C780(ctx, base);
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82679cec
	goto loc_82679CEC;
loc_82679CE4:
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
loc_82679CEC:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82679d00
	if (ctx.cr6.eq) goto loc_82679D00;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82679D00:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82679d80
	if (ctx.cr6.eq) goto loc_82679D80;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x82679D20;
	sub_82229208(ctx, base);
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r30,r11,-14800
	ctx.r30.s64 = ctx.r11.s64 + -14800;
	// bl 0x822279a0
	ctx.lr = 0x82679D34;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32108
	ctx.r10.s64 = -2104229888;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-32
	ctx.r4.s64 = ctx.r10.s64 + -32;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x82679D54;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824ef160
	ctx.lr = 0x82679D64;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x82679D74;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_82679D80:
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// beq cr6,0x82679dac
	if (ctx.cr6.eq) goto loc_82679DAC;
loc_82679D90:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r28
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r28.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r28
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r28.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82679d90
	if (!ctx.cr0.eq) goto loc_82679D90;
loc_82679DAC:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x827f18f0
	ctx.lr = 0x82679DBC;
	sub_827F18F0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x82679DC4;
	sub_829FF648(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x82679DCC;
	sub_829FF648(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x82679DD4;
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82679DDC"))) PPC_WEAK_FUNC(sub_82679DDC);
PPC_FUNC_IMPL(__imp__sub_82679DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82679DE0"))) PPC_WEAK_FUNC(sub_82679DE0);
PPC_FUNC_IMPL(__imp__sub_82679DE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82679DE8;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r10,-32153
	ctx.r10.s64 = -2107179008;
	// addi r27,r9,63
	ctx.r27.s64 = ctx.r9.s64 + 63;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r29,r10,19864
	ctx.r29.s64 = ctx.r10.s64 + 19864;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// beq cr6,0x82679e1c
	if (ctx.cr6.eq) goto loc_82679E1C;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82679E1C:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x82679E2C;
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824eee50
	ctx.lr = 0x82679E3C;
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x82679E44;
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x82679E4C;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82679eb0
	if (ctx.cr6.eq) goto loc_82679EB0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3664
	ctx.r9.s64 = ctx.r11.s64 + 3664;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x821f0108
	ctx.lr = 0x82679E7C;
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// bl 0x8221f388
	ctx.lr = 0x82679E88;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82679eb4
	if (ctx.cr6.eq) goto loc_82679EB4;
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = ctx.r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x82679eb8
	goto loc_82679EB8;
loc_82679EB0:
	// li r28,0
	ctx.r28.s64 = 0;
loc_82679EB4:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82679EB8:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82679ecc
	if (ctx.cr6.eq) goto loc_82679ECC;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82679ECC:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82679f4c
	if (ctx.cr6.eq) goto loc_82679F4C;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x82679EEC;
	sub_82229208(ctx, base);
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r30,r11,-15568
	ctx.r30.s64 = ctx.r11.s64 + -15568;
	// bl 0x822279a0
	ctx.lr = 0x82679F00;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32152
	ctx.r10.s64 = -2107113472;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-12120
	ctx.r4.s64 = ctx.r10.s64 + -12120;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x82679F20;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	ctx.lr = 0x82679F30;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x82679F40;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_82679F4C:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// beq cr6,0x82679f78
	if (ctx.cr6.eq) goto loc_82679F78;
loc_82679F5C:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82679f5c
	if (!ctx.cr0.eq) goto loc_82679F5C;
loc_82679F78:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x827f18f0
	ctx.lr = 0x82679F88;
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x82679F90;
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82679fd4
	if (ctx.cr6.eq) goto loc_82679FD4;
loc_82679F98:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82679f98
	if (!ctx.cr0.eq) goto loc_82679F98;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82679fd4
	if (!ctx.cr6.eq) goto loc_82679FD4;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82679FCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221be68
	ctx.lr = 0x82679FD4;
	sub_8221BE68(ctx, base);
loc_82679FD4:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x82679FDC;
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82679FE4"))) PPC_WEAK_FUNC(sub_82679FE4);
PPC_FUNC_IMPL(__imp__sub_82679FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82679FE8"))) PPC_WEAK_FUNC(sub_82679FE8);
PPC_FUNC_IMPL(__imp__sub_82679FE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82679FF0;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r10,-32153
	ctx.r10.s64 = -2107179008;
	// addi r27,r9,63
	ctx.r27.s64 = ctx.r9.s64 + 63;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r29,r10,20224
	ctx.r29.s64 = ctx.r10.s64 + 20224;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// beq cr6,0x8267a024
	if (ctx.cr6.eq) goto loc_8267A024;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8267A024:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x8267A034;
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824eee50
	ctx.lr = 0x8267A044;
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x8267A04C;
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x8267A054;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8267a0b8
	if (ctx.cr6.eq) goto loc_8267A0B8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3664
	ctx.r9.s64 = ctx.r11.s64 + 3664;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x821f0108
	ctx.lr = 0x8267A084;
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// bl 0x8221f388
	ctx.lr = 0x8267A090;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8267a0bc
	if (ctx.cr6.eq) goto loc_8267A0BC;
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = ctx.r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x8267a0c0
	goto loc_8267A0C0;
loc_8267A0B8:
	// li r28,0
	ctx.r28.s64 = 0;
loc_8267A0BC:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8267A0C0:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267a0d4
	if (ctx.cr6.eq) goto loc_8267A0D4;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8267A0D4:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267a154
	if (ctx.cr6.eq) goto loc_8267A154;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x8267A0F4;
	sub_82229208(ctx, base);
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r30,r11,-15184
	ctx.r30.s64 = ctx.r11.s64 + -15184;
	// bl 0x822279a0
	ctx.lr = 0x8267A108;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32152
	ctx.r10.s64 = -2107113472;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-11904
	ctx.r4.s64 = ctx.r10.s64 + -11904;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x8267A128;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	ctx.lr = 0x8267A138;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x8267A148;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_8267A154:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// beq cr6,0x8267a180
	if (ctx.cr6.eq) goto loc_8267A180;
loc_8267A164:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8267a164
	if (!ctx.cr0.eq) goto loc_8267A164;
loc_8267A180:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x827f18f0
	ctx.lr = 0x8267A190;
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x8267A198;
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8267a1dc
	if (ctx.cr6.eq) goto loc_8267A1DC;
loc_8267A1A0:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8267a1a0
	if (!ctx.cr0.eq) goto loc_8267A1A0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8267a1dc
	if (!ctx.cr6.eq) goto loc_8267A1DC;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267A1D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221be68
	ctx.lr = 0x8267A1DC;
	sub_8221BE68(ctx, base);
loc_8267A1DC:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x8267A1E4;
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_8267A1EC"))) PPC_WEAK_FUNC(sub_8267A1EC);
PPC_FUNC_IMPL(__imp__sub_8267A1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267A1F0"))) PPC_WEAK_FUNC(sub_8267A1F0);
PPC_FUNC_IMPL(__imp__sub_8267A1F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x8267A1F8;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r10,-32153
	ctx.r10.s64 = -2107179008;
	// addi r27,r9,63
	ctx.r27.s64 = ctx.r9.s64 + 63;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r29,r10,17048
	ctx.r29.s64 = ctx.r10.s64 + 17048;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// beq cr6,0x8267a22c
	if (ctx.cr6.eq) goto loc_8267A22C;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8267A22C:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x8267A23C;
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824eee50
	ctx.lr = 0x8267A24C;
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x8267A254;
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x8267A25C;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8267a2c0
	if (ctx.cr6.eq) goto loc_8267A2C0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3664
	ctx.r9.s64 = ctx.r11.s64 + 3664;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x821f0108
	ctx.lr = 0x8267A28C;
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// bl 0x8221f388
	ctx.lr = 0x8267A298;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8267a2c4
	if (ctx.cr6.eq) goto loc_8267A2C4;
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = ctx.r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x8267a2c8
	goto loc_8267A2C8;
loc_8267A2C0:
	// li r28,0
	ctx.r28.s64 = 0;
loc_8267A2C4:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8267A2C8:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267a2dc
	if (ctx.cr6.eq) goto loc_8267A2DC;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8267A2DC:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267a35c
	if (ctx.cr6.eq) goto loc_8267A35C;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x8267A2FC;
	sub_82229208(ctx, base);
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r30,r11,-14800
	ctx.r30.s64 = ctx.r11.s64 + -14800;
	// bl 0x822279a0
	ctx.lr = 0x8267A310;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32152
	ctx.r10.s64 = -2107113472;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-11688
	ctx.r4.s64 = ctx.r10.s64 + -11688;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x8267A330;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	ctx.lr = 0x8267A340;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x8267A350;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_8267A35C:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// beq cr6,0x8267a388
	if (ctx.cr6.eq) goto loc_8267A388;
loc_8267A36C:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8267a36c
	if (!ctx.cr0.eq) goto loc_8267A36C;
loc_8267A388:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x827f18f0
	ctx.lr = 0x8267A398;
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x8267A3A0;
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8267a3e4
	if (ctx.cr6.eq) goto loc_8267A3E4;
loc_8267A3A8:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8267a3a8
	if (!ctx.cr0.eq) goto loc_8267A3A8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8267a3e4
	if (!ctx.cr6.eq) goto loc_8267A3E4;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267A3DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221be68
	ctx.lr = 0x8267A3E4;
	sub_8221BE68(ctx, base);
loc_8267A3E4:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x8267A3EC;
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_8267A3F4"))) PPC_WEAK_FUNC(sub_8267A3F4);
PPC_FUNC_IMPL(__imp__sub_8267A3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267A3F8"))) PPC_WEAK_FUNC(sub_8267A3F8);
PPC_FUNC_IMPL(__imp__sub_8267A3F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x8267A400;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r27,r10,63
	ctx.r27.s64 = ctx.r10.s64 + 63;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267a430
	if (ctx.cr6.eq) goto loc_8267A430;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8267A430:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x8267A440;
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824eee50
	ctx.lr = 0x8267A450;
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x8267A458;
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x8267A460;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8267a4c4
	if (ctx.cr6.eq) goto loc_8267A4C4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3664
	ctx.r9.s64 = ctx.r11.s64 + 3664;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x821f0108
	ctx.lr = 0x8267A490;
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// bl 0x8221f388
	ctx.lr = 0x8267A49C;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8267a4c8
	if (ctx.cr6.eq) goto loc_8267A4C8;
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = ctx.r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x8267a4cc
	goto loc_8267A4CC;
loc_8267A4C4:
	// li r28,0
	ctx.r28.s64 = 0;
loc_8267A4C8:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8267A4CC:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267a4e0
	if (ctx.cr6.eq) goto loc_8267A4E0;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8267A4E0:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267a560
	if (ctx.cr6.eq) goto loc_8267A560;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x8267A500;
	sub_82229208(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r30,r11,-1728
	ctx.r30.s64 = ctx.r11.s64 + -1728;
	// bl 0x822279a0
	ctx.lr = 0x8267A514;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32153
	ctx.r10.s64 = -2107179008;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-2704
	ctx.r4.s64 = ctx.r10.s64 + -2704;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x8267A534;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	ctx.lr = 0x8267A544;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x8267A554;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_8267A560:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// beq cr6,0x8267a58c
	if (ctx.cr6.eq) goto loc_8267A58C;
loc_8267A570:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8267a570
	if (!ctx.cr0.eq) goto loc_8267A570;
loc_8267A58C:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x827f18f0
	ctx.lr = 0x8267A59C;
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x8267A5A4;
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8267a5e8
	if (ctx.cr6.eq) goto loc_8267A5E8;
loc_8267A5AC:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8267a5ac
	if (!ctx.cr0.eq) goto loc_8267A5AC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8267a5e8
	if (!ctx.cr6.eq) goto loc_8267A5E8;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267A5E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221be68
	ctx.lr = 0x8267A5E8;
	sub_8221BE68(ctx, base);
loc_8267A5E8:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x8267A5F0;
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_8267A5F8"))) PPC_WEAK_FUNC(sub_8267A5F8);
PPC_FUNC_IMPL(__imp__sub_8267A5F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x8267A600;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r27,r10,63
	ctx.r27.s64 = ctx.r10.s64 + 63;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267a630
	if (ctx.cr6.eq) goto loc_8267A630;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8267A630:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x8267A640;
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824eee50
	ctx.lr = 0x8267A650;
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x8267A658;
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x8267A660;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8267a6c4
	if (ctx.cr6.eq) goto loc_8267A6C4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3664
	ctx.r9.s64 = ctx.r11.s64 + 3664;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x821f0108
	ctx.lr = 0x8267A690;
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// bl 0x8221f388
	ctx.lr = 0x8267A69C;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8267a6c8
	if (ctx.cr6.eq) goto loc_8267A6C8;
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = ctx.r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x8267a6cc
	goto loc_8267A6CC;
loc_8267A6C4:
	// li r28,0
	ctx.r28.s64 = 0;
loc_8267A6C8:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8267A6CC:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267a6e0
	if (ctx.cr6.eq) goto loc_8267A6E0;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8267A6E0:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267a760
	if (ctx.cr6.eq) goto loc_8267A760;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x8267A700;
	sub_82229208(ctx, base);
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r30,r11,-13184
	ctx.r30.s64 = ctx.r11.s64 + -13184;
	// bl 0x822279a0
	ctx.lr = 0x8267A714;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32123
	ctx.r10.s64 = -2105212928;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-17904
	ctx.r4.s64 = ctx.r10.s64 + -17904;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x8267A734;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	ctx.lr = 0x8267A744;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x8267A754;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_8267A760:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// beq cr6,0x8267a78c
	if (ctx.cr6.eq) goto loc_8267A78C;
loc_8267A770:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8267a770
	if (!ctx.cr0.eq) goto loc_8267A770;
loc_8267A78C:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x827f18f0
	ctx.lr = 0x8267A79C;
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x8267A7A4;
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8267a7e8
	if (ctx.cr6.eq) goto loc_8267A7E8;
loc_8267A7AC:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8267a7ac
	if (!ctx.cr0.eq) goto loc_8267A7AC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8267a7e8
	if (!ctx.cr6.eq) goto loc_8267A7E8;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267A7E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221be68
	ctx.lr = 0x8267A7E8;
	sub_8221BE68(ctx, base);
loc_8267A7E8:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x8267A7F0;
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_8267A7F8"))) PPC_WEAK_FUNC(sub_8267A7F8);
PPC_FUNC_IMPL(__imp__sub_8267A7F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x8267A800;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r27,r10,63
	ctx.r27.s64 = ctx.r10.s64 + 63;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267a830
	if (ctx.cr6.eq) goto loc_8267A830;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8267A830:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x8267A840;
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824eee50
	ctx.lr = 0x8267A850;
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x8267A858;
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x8267A860;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8267a8c4
	if (ctx.cr6.eq) goto loc_8267A8C4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3664
	ctx.r9.s64 = ctx.r11.s64 + 3664;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x821f0108
	ctx.lr = 0x8267A890;
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// bl 0x8221f388
	ctx.lr = 0x8267A89C;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8267a8c8
	if (ctx.cr6.eq) goto loc_8267A8C8;
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = ctx.r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x8267a8cc
	goto loc_8267A8CC;
loc_8267A8C4:
	// li r28,0
	ctx.r28.s64 = 0;
loc_8267A8C8:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8267A8CC:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267a8e0
	if (ctx.cr6.eq) goto loc_8267A8E0;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8267A8E0:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267a960
	if (ctx.cr6.eq) goto loc_8267A960;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x8267A900;
	sub_82229208(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r30,r11,-1728
	ctx.r30.s64 = ctx.r11.s64 + -1728;
	// bl 0x822279a0
	ctx.lr = 0x8267A914;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32133
	ctx.r10.s64 = -2105868288;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,7992
	ctx.r4.s64 = ctx.r10.s64 + 7992;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x8267A934;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	ctx.lr = 0x8267A944;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x8267A954;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_8267A960:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// beq cr6,0x8267a98c
	if (ctx.cr6.eq) goto loc_8267A98C;
loc_8267A970:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8267a970
	if (!ctx.cr0.eq) goto loc_8267A970;
loc_8267A98C:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x827f18f0
	ctx.lr = 0x8267A99C;
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x8267A9A4;
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8267a9e8
	if (ctx.cr6.eq) goto loc_8267A9E8;
loc_8267A9AC:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8267a9ac
	if (!ctx.cr0.eq) goto loc_8267A9AC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8267a9e8
	if (!ctx.cr6.eq) goto loc_8267A9E8;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267A9E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221be68
	ctx.lr = 0x8267A9E8;
	sub_8221BE68(ctx, base);
loc_8267A9E8:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x8267A9F0;
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_8267A9F8"))) PPC_WEAK_FUNC(sub_8267A9F8);
PPC_FUNC_IMPL(__imp__sub_8267A9F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x8267AA00;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r27,r10,63
	ctx.r27.s64 = ctx.r10.s64 + 63;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267aa30
	if (ctx.cr6.eq) goto loc_8267AA30;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8267AA30:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x8267AA40;
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824eee50
	ctx.lr = 0x8267AA50;
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x8267AA58;
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x8267AA60;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8267aac4
	if (ctx.cr6.eq) goto loc_8267AAC4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3664
	ctx.r9.s64 = ctx.r11.s64 + 3664;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x821f0108
	ctx.lr = 0x8267AA90;
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// bl 0x8221f388
	ctx.lr = 0x8267AA9C;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8267aac8
	if (ctx.cr6.eq) goto loc_8267AAC8;
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = ctx.r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x8267aacc
	goto loc_8267AACC;
loc_8267AAC4:
	// li r28,0
	ctx.r28.s64 = 0;
loc_8267AAC8:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8267AACC:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267aae0
	if (ctx.cr6.eq) goto loc_8267AAE0;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8267AAE0:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267ab60
	if (ctx.cr6.eq) goto loc_8267AB60;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x8267AB00;
	sub_82229208(ctx, base);
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r30,r11,-14424
	ctx.r30.s64 = ctx.r11.s64 + -14424;
	// bl 0x822279a0
	ctx.lr = 0x8267AB14;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32188
	ctx.r10.s64 = -2109472768;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,31000
	ctx.r4.s64 = ctx.r10.s64 + 31000;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x8267AB34;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	ctx.lr = 0x8267AB44;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x8267AB54;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_8267AB60:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// beq cr6,0x8267ab8c
	if (ctx.cr6.eq) goto loc_8267AB8C;
loc_8267AB70:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8267ab70
	if (!ctx.cr0.eq) goto loc_8267AB70;
loc_8267AB8C:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x827f18f0
	ctx.lr = 0x8267AB9C;
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x8267ABA4;
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8267abe8
	if (ctx.cr6.eq) goto loc_8267ABE8;
loc_8267ABAC:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8267abac
	if (!ctx.cr0.eq) goto loc_8267ABAC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8267abe8
	if (!ctx.cr6.eq) goto loc_8267ABE8;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267ABE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221be68
	ctx.lr = 0x8267ABE8;
	sub_8221BE68(ctx, base);
loc_8267ABE8:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x8267ABF0;
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_8267ABF8"))) PPC_WEAK_FUNC(sub_8267ABF8);
PPC_FUNC_IMPL(__imp__sub_8267ABF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x8267AC00;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r27,r10,63
	ctx.r27.s64 = ctx.r10.s64 + 63;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267ac30
	if (ctx.cr6.eq) goto loc_8267AC30;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8267AC30:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x8267AC40;
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824eee50
	ctx.lr = 0x8267AC50;
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x8267AC58;
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x8267AC60;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8267acc4
	if (ctx.cr6.eq) goto loc_8267ACC4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3664
	ctx.r9.s64 = ctx.r11.s64 + 3664;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x821f0108
	ctx.lr = 0x8267AC90;
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// bl 0x8221f388
	ctx.lr = 0x8267AC9C;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8267acc8
	if (ctx.cr6.eq) goto loc_8267ACC8;
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = ctx.r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x8267accc
	goto loc_8267ACCC;
loc_8267ACC4:
	// li r28,0
	ctx.r28.s64 = 0;
loc_8267ACC8:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8267ACCC:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267ace0
	if (ctx.cr6.eq) goto loc_8267ACE0;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8267ACE0:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267ad60
	if (ctx.cr6.eq) goto loc_8267AD60;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x8267AD00;
	sub_82229208(ctx, base);
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r30,r11,-14040
	ctx.r30.s64 = ctx.r11.s64 + -14040;
	// bl 0x822279a0
	ctx.lr = 0x8267AD14;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32212
	ctx.r10.s64 = -2111045632;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-3736
	ctx.r4.s64 = ctx.r10.s64 + -3736;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x8267AD34;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	ctx.lr = 0x8267AD44;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x8267AD54;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_8267AD60:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// beq cr6,0x8267ad8c
	if (ctx.cr6.eq) goto loc_8267AD8C;
loc_8267AD70:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8267ad70
	if (!ctx.cr0.eq) goto loc_8267AD70;
loc_8267AD8C:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x827f18f0
	ctx.lr = 0x8267AD9C;
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x8267ADA4;
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8267ade8
	if (ctx.cr6.eq) goto loc_8267ADE8;
loc_8267ADAC:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8267adac
	if (!ctx.cr0.eq) goto loc_8267ADAC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8267ade8
	if (!ctx.cr6.eq) goto loc_8267ADE8;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267ADE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221be68
	ctx.lr = 0x8267ADE8;
	sub_8221BE68(ctx, base);
loc_8267ADE8:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x8267ADF0;
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_8267ADF8"))) PPC_WEAK_FUNC(sub_8267ADF8);
PPC_FUNC_IMPL(__imp__sub_8267ADF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x8267AE00;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r27,r10,63
	ctx.r27.s64 = ctx.r10.s64 + 63;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267ae30
	if (ctx.cr6.eq) goto loc_8267AE30;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8267AE30:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x8267AE40;
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824eee50
	ctx.lr = 0x8267AE50;
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x8267AE58;
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x8267AE60;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8267aec4
	if (ctx.cr6.eq) goto loc_8267AEC4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3664
	ctx.r9.s64 = ctx.r11.s64 + 3664;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x821f0108
	ctx.lr = 0x8267AE90;
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// bl 0x8221f388
	ctx.lr = 0x8267AE9C;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8267aec8
	if (ctx.cr6.eq) goto loc_8267AEC8;
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = ctx.r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x8267aecc
	goto loc_8267AECC;
loc_8267AEC4:
	// li r28,0
	ctx.r28.s64 = 0;
loc_8267AEC8:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8267AECC:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267aee0
	if (ctx.cr6.eq) goto loc_8267AEE0;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8267AEE0:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267af60
	if (ctx.cr6.eq) goto loc_8267AF60;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x8267AF00;
	sub_82229208(ctx, base);
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r30,r11,-13648
	ctx.r30.s64 = ctx.r11.s64 + -13648;
	// bl 0x822279a0
	ctx.lr = 0x8267AF14;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32107
	ctx.r10.s64 = -2104164352;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,25424
	ctx.r4.s64 = ctx.r10.s64 + 25424;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x8267AF34;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	ctx.lr = 0x8267AF44;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x8267AF54;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_8267AF60:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// beq cr6,0x8267af8c
	if (ctx.cr6.eq) goto loc_8267AF8C;
loc_8267AF70:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8267af70
	if (!ctx.cr0.eq) goto loc_8267AF70;
loc_8267AF8C:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x827f18f0
	ctx.lr = 0x8267AF9C;
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x8267AFA4;
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8267afe8
	if (ctx.cr6.eq) goto loc_8267AFE8;
loc_8267AFAC:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8267afac
	if (!ctx.cr0.eq) goto loc_8267AFAC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8267afe8
	if (!ctx.cr6.eq) goto loc_8267AFE8;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267AFE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221be68
	ctx.lr = 0x8267AFE8;
	sub_8221BE68(ctx, base);
loc_8267AFE8:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x8267AFF0;
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_8267AFF8"))) PPC_WEAK_FUNC(sub_8267AFF8);
PPC_FUNC_IMPL(__imp__sub_8267AFF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x8267B000;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r27,r10,63
	ctx.r27.s64 = ctx.r10.s64 + 63;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267b030
	if (ctx.cr6.eq) goto loc_8267B030;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8267B030:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x8267B040;
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824eee50
	ctx.lr = 0x8267B050;
	sub_824EEE50(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x829ff648
	ctx.lr = 0x8267B058;
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x8267B060;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8267b094
	if (ctx.cr6.eq) goto loc_8267B094;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3664
	ctx.r9.s64 = ctx.r11.s64 + 3664;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x821f0108
	ctx.lr = 0x8267B090;
	sub_821F0108(ctx, base);
	// b 0x8267b098
	goto loc_8267B098;
loc_8267B094:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8267B098:
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// beq cr6,0x8267b0bc
	if (ctx.cr6.eq) goto loc_8267B0BC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8254c780
	ctx.lr = 0x8267B0B0;
	sub_8254C780(ctx, base);
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8267b0c4
	goto loc_8267B0C4;
loc_8267B0BC:
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
loc_8267B0C4:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267b0d8
	if (ctx.cr6.eq) goto loc_8267B0D8;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8267B0D8:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267b158
	if (ctx.cr6.eq) goto loc_8267B158;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x8267B0F8;
	sub_82229208(ctx, base);
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r30,r11,-15944
	ctx.r30.s64 = ctx.r11.s64 + -15944;
	// bl 0x822279a0
	ctx.lr = 0x8267B10C;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32108
	ctx.r10.s64 = -2104229888;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-32
	ctx.r4.s64 = ctx.r10.s64 + -32;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x8267B12C;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824ef160
	ctx.lr = 0x8267B13C;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x8267B14C;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_8267B158:
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// beq cr6,0x8267b184
	if (ctx.cr6.eq) goto loc_8267B184;
loc_8267B168:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r28
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r28.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r28
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r28.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8267b168
	if (!ctx.cr0.eq) goto loc_8267B168;
loc_8267B184:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x827f18f0
	ctx.lr = 0x8267B194;
	sub_827F18F0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x8267B19C;
	sub_829FF648(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x8267B1A4;
	sub_829FF648(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x8267B1AC;
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_8267B1B4"))) PPC_WEAK_FUNC(sub_8267B1B4);
PPC_FUNC_IMPL(__imp__sub_8267B1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267B1B8"))) PPC_WEAK_FUNC(sub_8267B1B8);
PPC_FUNC_IMPL(__imp__sub_8267B1B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x8267B1C0;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r10,-32153
	ctx.r10.s64 = -2107179008;
	// addi r27,r9,63
	ctx.r27.s64 = ctx.r9.s64 + 63;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r29,r10,23288
	ctx.r29.s64 = ctx.r10.s64 + 23288;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// beq cr6,0x8267b1f4
	if (ctx.cr6.eq) goto loc_8267B1F4;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8267B1F4:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x8267B204;
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824eee50
	ctx.lr = 0x8267B214;
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x8267B21C;
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x8267B224;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8267b288
	if (ctx.cr6.eq) goto loc_8267B288;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3664
	ctx.r9.s64 = ctx.r11.s64 + 3664;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x821f0108
	ctx.lr = 0x8267B254;
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// bl 0x8221f388
	ctx.lr = 0x8267B260;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8267b28c
	if (ctx.cr6.eq) goto loc_8267B28C;
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = ctx.r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x8267b290
	goto loc_8267B290;
loc_8267B288:
	// li r28,0
	ctx.r28.s64 = 0;
loc_8267B28C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8267B290:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267b2a4
	if (ctx.cr6.eq) goto loc_8267B2A4;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8267B2A4:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267b324
	if (ctx.cr6.eq) goto loc_8267B324;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x8267B2C4;
	sub_82229208(ctx, base);
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r30,r11,-13184
	ctx.r30.s64 = ctx.r11.s64 + -13184;
	// bl 0x822279a0
	ctx.lr = 0x8267B2D8;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32105
	ctx.r10.s64 = -2104033280;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-1064
	ctx.r4.s64 = ctx.r10.s64 + -1064;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x8267B2F8;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	ctx.lr = 0x8267B308;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x8267B318;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_8267B324:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// beq cr6,0x8267b350
	if (ctx.cr6.eq) goto loc_8267B350;
loc_8267B334:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8267b334
	if (!ctx.cr0.eq) goto loc_8267B334;
loc_8267B350:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x827f18f0
	ctx.lr = 0x8267B360;
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x8267B368;
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8267b3ac
	if (ctx.cr6.eq) goto loc_8267B3AC;
loc_8267B370:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8267b370
	if (!ctx.cr0.eq) goto loc_8267B370;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8267b3ac
	if (!ctx.cr6.eq) goto loc_8267B3AC;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267B3A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221be68
	ctx.lr = 0x8267B3AC;
	sub_8221BE68(ctx, base);
loc_8267B3AC:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x8267B3B4;
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_8267B3BC"))) PPC_WEAK_FUNC(sub_8267B3BC);
PPC_FUNC_IMPL(__imp__sub_8267B3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267B3C0"))) PPC_WEAK_FUNC(sub_8267B3C0);
PPC_FUNC_IMPL(__imp__sub_8267B3C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x8267B3C8;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r10,-32153
	ctx.r10.s64 = -2107179008;
	// addi r27,r9,63
	ctx.r27.s64 = ctx.r9.s64 + 63;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r29,r10,5624
	ctx.r29.s64 = ctx.r10.s64 + 5624;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// beq cr6,0x8267b3fc
	if (ctx.cr6.eq) goto loc_8267B3FC;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8267B3FC:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x8267B40C;
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824eee50
	ctx.lr = 0x8267B41C;
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x8267B424;
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x8267B42C;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8267b490
	if (ctx.cr6.eq) goto loc_8267B490;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3664
	ctx.r9.s64 = ctx.r11.s64 + 3664;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x821f0108
	ctx.lr = 0x8267B45C;
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// bl 0x8221f388
	ctx.lr = 0x8267B468;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8267b494
	if (ctx.cr6.eq) goto loc_8267B494;
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = ctx.r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x8267b498
	goto loc_8267B498;
loc_8267B490:
	// li r28,0
	ctx.r28.s64 = 0;
loc_8267B494:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8267B498:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267b4ac
	if (ctx.cr6.eq) goto loc_8267B4AC;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8267B4AC:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267b52c
	if (ctx.cr6.eq) goto loc_8267B52C;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x8267B4CC;
	sub_82229208(ctx, base);
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r30,r11,-13184
	ctx.r30.s64 = ctx.r11.s64 + -13184;
	// bl 0x822279a0
	ctx.lr = 0x8267B4E0;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32105
	ctx.r10.s64 = -2104033280;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-27048
	ctx.r4.s64 = ctx.r10.s64 + -27048;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x8267B500;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	ctx.lr = 0x8267B510;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x8267B520;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_8267B52C:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// beq cr6,0x8267b558
	if (ctx.cr6.eq) goto loc_8267B558;
loc_8267B53C:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8267b53c
	if (!ctx.cr0.eq) goto loc_8267B53C;
loc_8267B558:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x827f18f0
	ctx.lr = 0x8267B568;
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x8267B570;
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8267b5b4
	if (ctx.cr6.eq) goto loc_8267B5B4;
loc_8267B578:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8267b578
	if (!ctx.cr0.eq) goto loc_8267B578;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8267b5b4
	if (!ctx.cr6.eq) goto loc_8267B5B4;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267B5AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221be68
	ctx.lr = 0x8267B5B4;
	sub_8221BE68(ctx, base);
loc_8267B5B4:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x8267B5BC;
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_8267B5C4"))) PPC_WEAK_FUNC(sub_8267B5C4);
PPC_FUNC_IMPL(__imp__sub_8267B5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267B5C8"))) PPC_WEAK_FUNC(sub_8267B5C8);
PPC_FUNC_IMPL(__imp__sub_8267B5C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x8267B5D0;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r27,r10,63
	ctx.r27.s64 = ctx.r10.s64 + 63;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267b600
	if (ctx.cr6.eq) goto loc_8267B600;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8267B600:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x8267B610;
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824eee50
	ctx.lr = 0x8267B620;
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x8267B628;
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x8267B630;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8267b694
	if (ctx.cr6.eq) goto loc_8267B694;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3664
	ctx.r9.s64 = ctx.r11.s64 + 3664;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x821f0108
	ctx.lr = 0x8267B660;
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// bl 0x8221f388
	ctx.lr = 0x8267B66C;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8267b698
	if (ctx.cr6.eq) goto loc_8267B698;
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = ctx.r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x8267b69c
	goto loc_8267B69C;
loc_8267B694:
	// li r28,0
	ctx.r28.s64 = 0;
loc_8267B698:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8267B69C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267b6b0
	if (ctx.cr6.eq) goto loc_8267B6B0;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8267B6B0:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267b730
	if (ctx.cr6.eq) goto loc_8267B730;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x8267B6D0;
	sub_82229208(ctx, base);
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r30,r11,-13184
	ctx.r30.s64 = ctx.r11.s64 + -13184;
	// bl 0x822279a0
	ctx.lr = 0x8267B6E4;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,23232
	ctx.r4.s64 = ctx.r10.s64 + 23232;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x8267B704;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	ctx.lr = 0x8267B714;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x8267B724;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_8267B730:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// beq cr6,0x8267b75c
	if (ctx.cr6.eq) goto loc_8267B75C;
loc_8267B740:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8267b740
	if (!ctx.cr0.eq) goto loc_8267B740;
loc_8267B75C:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x827f18f0
	ctx.lr = 0x8267B76C;
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x8267B774;
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8267b7b8
	if (ctx.cr6.eq) goto loc_8267B7B8;
loc_8267B77C:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8267b77c
	if (!ctx.cr0.eq) goto loc_8267B77C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8267b7b8
	if (!ctx.cr6.eq) goto loc_8267B7B8;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267B7B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221be68
	ctx.lr = 0x8267B7B8;
	sub_8221BE68(ctx, base);
loc_8267B7B8:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x8267B7C0;
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_8267B7C8"))) PPC_WEAK_FUNC(sub_8267B7C8);
PPC_FUNC_IMPL(__imp__sub_8267B7C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x8267B7D0;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r27,r10,63
	ctx.r27.s64 = ctx.r10.s64 + 63;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267b800
	if (ctx.cr6.eq) goto loc_8267B800;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8267B800:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x8267B810;
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824eee50
	ctx.lr = 0x8267B820;
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x8267B828;
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x8267B830;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8267b894
	if (ctx.cr6.eq) goto loc_8267B894;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3664
	ctx.r9.s64 = ctx.r11.s64 + 3664;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x821f0108
	ctx.lr = 0x8267B860;
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// bl 0x8221f388
	ctx.lr = 0x8267B86C;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8267b898
	if (ctx.cr6.eq) goto loc_8267B898;
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = ctx.r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x8267b89c
	goto loc_8267B89C;
loc_8267B894:
	// li r28,0
	ctx.r28.s64 = 0;
loc_8267B898:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8267B89C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267b8b0
	if (ctx.cr6.eq) goto loc_8267B8B0;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8267B8B0:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267b930
	if (ctx.cr6.eq) goto loc_8267B930;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x8267B8D0;
	sub_82229208(ctx, base);
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r30,r11,-13184
	ctx.r30.s64 = ctx.r11.s64 + -13184;
	// bl 0x822279a0
	ctx.lr = 0x8267B8E4;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,15664
	ctx.r4.s64 = ctx.r10.s64 + 15664;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x8267B904;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	ctx.lr = 0x8267B914;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x8267B924;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_8267B930:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// beq cr6,0x8267b95c
	if (ctx.cr6.eq) goto loc_8267B95C;
loc_8267B940:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8267b940
	if (!ctx.cr0.eq) goto loc_8267B940;
loc_8267B95C:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x827f18f0
	ctx.lr = 0x8267B96C;
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x8267B974;
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8267b9b8
	if (ctx.cr6.eq) goto loc_8267B9B8;
loc_8267B97C:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8267b97c
	if (!ctx.cr0.eq) goto loc_8267B97C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8267b9b8
	if (!ctx.cr6.eq) goto loc_8267B9B8;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267B9B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221be68
	ctx.lr = 0x8267B9B8;
	sub_8221BE68(ctx, base);
loc_8267B9B8:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x8267B9C0;
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_8267B9C8"))) PPC_WEAK_FUNC(sub_8267B9C8);
PPC_FUNC_IMPL(__imp__sub_8267B9C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x8267B9D0;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r10,-32153
	ctx.r10.s64 = -2107179008;
	// addi r27,r9,63
	ctx.r27.s64 = ctx.r9.s64 + 63;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r29,r10,24120
	ctx.r29.s64 = ctx.r10.s64 + 24120;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// beq cr6,0x8267ba04
	if (ctx.cr6.eq) goto loc_8267BA04;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8267BA04:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x8267BA14;
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824eee50
	ctx.lr = 0x8267BA24;
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x8267BA2C;
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x8267BA34;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8267ba98
	if (ctx.cr6.eq) goto loc_8267BA98;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3664
	ctx.r9.s64 = ctx.r11.s64 + 3664;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x821f0108
	ctx.lr = 0x8267BA64;
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// bl 0x8221f388
	ctx.lr = 0x8267BA70;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8267ba9c
	if (ctx.cr6.eq) goto loc_8267BA9C;
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = ctx.r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x8267baa0
	goto loc_8267BAA0;
loc_8267BA98:
	// li r28,0
	ctx.r28.s64 = 0;
loc_8267BA9C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8267BAA0:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267bab4
	if (ctx.cr6.eq) goto loc_8267BAB4;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8267BAB4:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267bb34
	if (ctx.cr6.eq) goto loc_8267BB34;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x8267BAD4;
	sub_82229208(ctx, base);
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r30,r11,-13184
	ctx.r30.s64 = ctx.r11.s64 + -13184;
	// bl 0x822279a0
	ctx.lr = 0x8267BAE8;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32152
	ctx.r10.s64 = -2107113472;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-11512
	ctx.r4.s64 = ctx.r10.s64 + -11512;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x8267BB08;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	ctx.lr = 0x8267BB18;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x8267BB28;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_8267BB34:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// beq cr6,0x8267bb60
	if (ctx.cr6.eq) goto loc_8267BB60;
loc_8267BB44:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8267bb44
	if (!ctx.cr0.eq) goto loc_8267BB44;
loc_8267BB60:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x827f18f0
	ctx.lr = 0x8267BB70;
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x8267BB78;
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8267bbbc
	if (ctx.cr6.eq) goto loc_8267BBBC;
loc_8267BB80:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8267bb80
	if (!ctx.cr0.eq) goto loc_8267BB80;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8267bbbc
	if (!ctx.cr6.eq) goto loc_8267BBBC;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267BBB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221be68
	ctx.lr = 0x8267BBBC;
	sub_8221BE68(ctx, base);
loc_8267BBBC:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x8267BBC4;
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_8267BBCC"))) PPC_WEAK_FUNC(sub_8267BBCC);
PPC_FUNC_IMPL(__imp__sub_8267BBCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267BBD0"))) PPC_WEAK_FUNC(sub_8267BBD0);
PPC_FUNC_IMPL(__imp__sub_8267BBD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x8267BBD8;
	sub_82CA2BE8(ctx, base);
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
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267bc5c
	if (ctx.cr6.eq) goto loc_8267BC5C;
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82229208
	ctx.lr = 0x8267BC08;
	sub_82229208(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822279a0
	ctx.lr = 0x8267BC14;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-13656
	ctx.r4.s64 = ctx.r10.s64 + -13656;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// bl 0x8219ab28
	ctx.lr = 0x8267BC30;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824ef160
	ctx.lr = 0x8267BC40;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x8267BC50;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r9.u32);
loc_8267BC5C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_8267BC64"))) PPC_WEAK_FUNC(sub_8267BC64);
PPC_FUNC_IMPL(__imp__sub_8267BC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267BC68"))) PPC_WEAK_FUNC(sub_8267BC68);
PPC_FUNC_IMPL(__imp__sub_8267BC68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x8267BC70;
	sub_82CA2BE8(ctx, base);
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
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267bcf4
	if (ctx.cr6.eq) goto loc_8267BCF4;
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82229208
	ctx.lr = 0x8267BCA0;
	sub_82229208(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822279a0
	ctx.lr = 0x8267BCAC;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-22472
	ctx.r4.s64 = ctx.r10.s64 + -22472;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// bl 0x8219ab28
	ctx.lr = 0x8267BCC8;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824ef160
	ctx.lr = 0x8267BCD8;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x8267BCE8;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r9.u32);
loc_8267BCF4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_8267BCFC"))) PPC_WEAK_FUNC(sub_8267BCFC);
PPC_FUNC_IMPL(__imp__sub_8267BCFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267BD00"))) PPC_WEAK_FUNC(sub_8267BD00);
PPC_FUNC_IMPL(__imp__sub_8267BD00) {
	PPC_FUNC_PROLOGUE();
	// li r3,60
	ctx.r3.s64 = 60;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267BD08"))) PPC_WEAK_FUNC(sub_8267BD08);
PPC_FUNC_IMPL(__imp__sub_8267BD08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x8267BD10;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267bd3c
	if (ctx.cr6.eq) goto loc_8267BD3C;
	// lbz r9,144(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 144);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r6,r9,0,25,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8267bd40
	if (!ctx.cr6.eq) goto loc_8267BD40;
loc_8267BD3C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8267BD40:
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8267be84
	if (ctx.cr6.eq) goto loc_8267BE84;
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r6,r9,4,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0x1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8267be54
	if (ctx.cr6.eq) goto loc_8267BE54;
	// lwz r3,140(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8267bd8c
	if (ctx.cr6.eq) goto loc_8267BD8C;
	// lbz r9,60(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 60);
	// lwz r3,72(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r11,r9,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// add r6,r11,r3
	ctx.r6.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8267be58
	goto loc_8267BE58;
loc_8267BD8C:
	// lwz r31,72(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r28,76(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// subf r6,r31,r28
	ctx.r6.s64 = ctx.r28.s64 - ctx.r31.s64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// srawi. r11,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8267bdfc
	if (!ctx.cr0.gt) goto loc_8267BDFC;
loc_8267BDAC:
	// srawi r30,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r30.s64 = ctx.r11.s32 >> 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r29,r30,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r29,r31
	ctx.r31.u64 = ctx.r29.u64 + ctx.r31.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r9,60
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 60, ctx.xer);
	// blt cr6,0x8267bdcc
	if (ctx.cr6.lt) goto loc_8267BDCC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8267BDCC:
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8267bde8
	if (ctx.cr6.eq) goto loc_8267BDE8;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x8267bdf0
	goto loc_8267BDF0;
loc_8267BDE8:
	// subf r31,r29,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r29.s64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8267BDF0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8267bdac
	if (ctx.cr6.gt) goto loc_8267BDAC;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
loc_8267BDFC:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8267be40
	if (ctx.cr6.eq) goto loc_8267BE40;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,60
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 60, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8267be18
	if (ctx.cr6.gt) goto loc_8267BE18;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8267BE18:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8267be40
	if (!ctx.cr6.eq) goto loc_8267BE40;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8267be58
	goto loc_8267BE58;
loc_8267BE40:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8267be58
	goto loc_8267BE58;
loc_8267BE54:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8267BE58:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267be84
	if (ctx.cr6.eq) goto loc_8267BE84;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267BE7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_8267BE84:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_8267BE90"))) PPC_WEAK_FUNC(sub_8267BE90);
PPC_FUNC_IMPL(__imp__sub_8267BE90) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267becc
	if (ctx.cr6.eq) goto loc_8267BECC;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8267bed0
	if (!ctx.cr6.eq) goto loc_8267BED0;
loc_8267BECC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8267BED0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8267c00c
	if (ctx.cr6.eq) goto loc_8267C00C;
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r8,r9,4,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8267bfe4
	if (ctx.cr6.eq) goto loc_8267BFE4;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8267bf1c
	if (ctx.cr6.eq) goto loc_8267BF1C;
	// lbz r9,60(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 60);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r11,r9,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8267bfe8
	goto loc_8267BFE8;
loc_8267BF1C:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r30,76(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// subf r8,r10,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8267bf8c
	if (!ctx.cr0.gt) goto loc_8267BF8C;
loc_8267BF3C:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// li r31,1
	ctx.r31.s64 = 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r6,60
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 60, ctx.xer);
	// blt cr6,0x8267bf5c
	if (ctx.cr6.lt) goto loc_8267BF5C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8267BF5C:
	// clrlwi r6,r31,24
	ctx.r6.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8267bf78
	if (ctx.cr6.eq) goto loc_8267BF78;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x8267bf80
	goto loc_8267BF80;
loc_8267BF78:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8267BF80:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8267bf3c
	if (ctx.cr6.gt) goto loc_8267BF3C;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8267BF8C:
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8267bfd0
	if (ctx.cr6.eq) goto loc_8267BFD0;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,60
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 60, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8267bfa8
	if (ctx.cr6.gt) goto loc_8267BFA8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8267BFA8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8267bfd0
	if (!ctx.cr6.eq) goto loc_8267BFD0;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8267bfe8
	goto loc_8267BFE8;
loc_8267BFD0:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8267bfe8
	goto loc_8267BFE8;
loc_8267BFE4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8267BFE8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267c00c
	if (ctx.cr6.eq) goto loc_8267C00C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267C008;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8267c010
	goto loc_8267C010;
loc_8267C00C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8267C010:
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

__attribute__((alias("__imp__sub_8267C028"))) PPC_WEAK_FUNC(sub_8267C028);
PPC_FUNC_IMPL(__imp__sub_8267C028) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267c064
	if (ctx.cr6.eq) goto loc_8267C064;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8267c068
	if (!ctx.cr6.eq) goto loc_8267C068;
loc_8267C064:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8267C068:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8267c1a0
	if (ctx.cr6.eq) goto loc_8267C1A0;
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r8,r9,4,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8267c17c
	if (ctx.cr6.eq) goto loc_8267C17C;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8267c0b4
	if (ctx.cr6.eq) goto loc_8267C0B4;
	// lbz r9,60(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 60);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r11,r9,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8267c180
	goto loc_8267C180;
loc_8267C0B4:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r30,76(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// subf r8,r10,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8267c124
	if (!ctx.cr0.gt) goto loc_8267C124;
loc_8267C0D4:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// li r31,1
	ctx.r31.s64 = 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r6,60
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 60, ctx.xer);
	// blt cr6,0x8267c0f4
	if (ctx.cr6.lt) goto loc_8267C0F4;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8267C0F4:
	// clrlwi r6,r31,24
	ctx.r6.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8267c110
	if (ctx.cr6.eq) goto loc_8267C110;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x8267c118
	goto loc_8267C118;
loc_8267C110:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8267C118:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8267c0d4
	if (ctx.cr6.gt) goto loc_8267C0D4;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8267C124:
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8267c168
	if (ctx.cr6.eq) goto loc_8267C168;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,60
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 60, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8267c140
	if (ctx.cr6.gt) goto loc_8267C140;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8267C140:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8267c168
	if (!ctx.cr6.eq) goto loc_8267C168;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8267c180
	goto loc_8267C180;
loc_8267C168:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8267c180
	goto loc_8267C180;
loc_8267C17C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8267C180:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267c1a0
	if (ctx.cr6.eq) goto loc_8267C1A0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267C1A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8267C1A0:
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

__attribute__((alias("__imp__sub_8267C1B8"))) PPC_WEAK_FUNC(sub_8267C1B8);
PPC_FUNC_IMPL(__imp__sub_8267C1B8) {
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
	// beq cr6,0x8267c1e0
	if (ctx.cr6.eq) goto loc_8267C1E0;
	// lbz r11,144(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8267c1e4
	if (!ctx.cr6.eq) goto loc_8267C1E4;
loc_8267C1E0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8267C1E4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267c318
	if (ctx.cr6.eq) goto loc_8267C318;
	// lwz r10,40(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r9,r10,4,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8267c2e8
	if (ctx.cr6.eq) goto loc_8267C2E8;
	// lwz r11,140(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 140);
	// lwz r10,72(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267c22c
	if (ctx.cr6.eq) goto loc_8267C22C;
	// lbz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 60);
	// rotlwi r11,r11,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x8267c2ec
	goto loc_8267C2EC;
loc_8267C22C:
	// lwz r6,76(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// subf r9,r10,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// srawi. r11,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8267c298
	if (!ctx.cr0.gt) goto loc_8267C298;
loc_8267C248:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,60
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 60, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x8267c268
	if (ctx.cr6.lt) goto loc_8267C268;
	// li r7,0
	ctx.r7.s64 = 0;
loc_8267C268:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8267c284
	if (ctx.cr6.eq) goto loc_8267C284;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x8267c28c
	goto loc_8267C28C;
loc_8267C284:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8267C28C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8267c248
	if (ctx.cr6.gt) goto loc_8267C248;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8267C298:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8267c2d8
	if (ctx.cr6.eq) goto loc_8267C2D8;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,60
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 60, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8267c2b4
	if (ctx.cr6.gt) goto loc_8267C2B4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8267C2B4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8267c2d8
	if (!ctx.cr6.eq) goto loc_8267C2D8;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8267c2ec
	goto loc_8267C2EC;
loc_8267C2D8:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8267c2ec
	goto loc_8267C2EC;
loc_8267C2E8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8267C2EC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8267c318
	if (ctx.cr6.eq) goto loc_8267C318;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8267C308;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8267C318:
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

__attribute__((alias("__imp__sub_8267C32C"))) PPC_WEAK_FUNC(sub_8267C32C);
PPC_FUNC_IMPL(__imp__sub_8267C32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267C330"))) PPC_WEAK_FUNC(sub_8267C330);
PPC_FUNC_IMPL(__imp__sub_8267C330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x8267C338;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267c368
	if (ctx.cr6.eq) goto loc_8267C368;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8267c36c
	if (!ctx.cr6.eq) goto loc_8267C36C;
loc_8267C368:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8267C36C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8267c4a4
	if (ctx.cr6.eq) goto loc_8267C4A4;
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r7,r9,4,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8267c480
	if (ctx.cr6.eq) goto loc_8267C480;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8267c3b8
	if (ctx.cr6.eq) goto loc_8267C3B8;
	// lbz r9,60(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 60);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r11,r9,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8267c484
	goto loc_8267C484;
loc_8267C3B8:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r29,76(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// subf r7,r10,r29
	ctx.r7.s64 = ctx.r29.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8267c428
	if (!ctx.cr0.gt) goto loc_8267C428;
loc_8267C3D8:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// li r30,1
	ctx.r30.s64 = 1;
	// rlwinm r31,r9,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,60
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 60, ctx.xer);
	// blt cr6,0x8267c3f8
	if (ctx.cr6.lt) goto loc_8267C3F8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8267C3F8:
	// clrlwi r7,r30,24
	ctx.r7.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8267c414
	if (ctx.cr6.eq) goto loc_8267C414;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x8267c41c
	goto loc_8267C41C;
loc_8267C414:
	// subf r10,r31,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r31.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8267C41C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8267c3d8
	if (ctx.cr6.gt) goto loc_8267C3D8;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8267C428:
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8267c46c
	if (ctx.cr6.eq) goto loc_8267C46C;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,60
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 60, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8267c444
	if (ctx.cr6.gt) goto loc_8267C444;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8267C444:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8267c46c
	if (!ctx.cr6.eq) goto loc_8267C46C;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8267c484
	goto loc_8267C484;
loc_8267C46C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8267c484
	goto loc_8267C484;
loc_8267C480:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8267C484:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267c4a4
	if (ctx.cr6.eq) goto loc_8267C4A4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267C4A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8267C4A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_8267C4AC"))) PPC_WEAK_FUNC(sub_8267C4AC);
PPC_FUNC_IMPL(__imp__sub_8267C4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267C4B0"))) PPC_WEAK_FUNC(sub_8267C4B0);
PPC_FUNC_IMPL(__imp__sub_8267C4B0) {
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
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8267c4e8
	if (ctx.cr6.eq) goto loc_8267C4E8;
	// lbz r11,144(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8267c4ec
	if (!ctx.cr6.eq) goto loc_8267C4EC;
loc_8267C4E8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8267C4EC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267c614
	if (ctx.cr6.eq) goto loc_8267C614;
	// lwz r10,40(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r9,r10,4,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8267c5f0
	if (ctx.cr6.eq) goto loc_8267C5F0;
	// lwz r11,140(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 140);
	// lwz r10,72(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267c534
	if (ctx.cr6.eq) goto loc_8267C534;
	// lbz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 60);
	// rotlwi r11,r11,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x8267c5f4
	goto loc_8267C5F4;
loc_8267C534:
	// lwz r30,76(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// subf r9,r10,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r10.s64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// srawi. r11,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8267c5a0
	if (!ctx.cr0.gt) goto loc_8267C5A0;
loc_8267C550:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// li r31,1
	ctx.r31.s64 = 1;
	// rlwinm r4,r9,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,60
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 60, ctx.xer);
	// blt cr6,0x8267c570
	if (ctx.cr6.lt) goto loc_8267C570;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8267C570:
	// clrlwi r7,r31,24
	ctx.r7.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8267c58c
	if (ctx.cr6.eq) goto loc_8267C58C;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x8267c594
	goto loc_8267C594;
loc_8267C58C:
	// subf r10,r4,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r4.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8267C594:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8267c550
	if (ctx.cr6.gt) goto loc_8267C550;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8267C5A0:
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8267c5e0
	if (ctx.cr6.eq) goto loc_8267C5E0;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,60
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 60, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8267c5bc
	if (ctx.cr6.gt) goto loc_8267C5BC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8267C5BC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8267c5e0
	if (!ctx.cr6.eq) goto loc_8267C5E0;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8267c5f4
	goto loc_8267C5F4;
loc_8267C5E0:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8267c5f4
	goto loc_8267C5F4;
loc_8267C5F0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8267C5F4:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8267c614
	if (ctx.cr6.eq) goto loc_8267C614;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8267C614;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8267C614:
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

__attribute__((alias("__imp__sub_8267C62C"))) PPC_WEAK_FUNC(sub_8267C62C);
PPC_FUNC_IMPL(__imp__sub_8267C62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267C630"))) PPC_WEAK_FUNC(sub_8267C630);
PPC_FUNC_IMPL(__imp__sub_8267C630) {
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
	// beq cr6,0x8267c658
	if (ctx.cr6.eq) goto loc_8267C658;
	// lbz r11,144(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8267c65c
	if (!ctx.cr6.eq) goto loc_8267C65C;
loc_8267C658:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8267C65C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267c790
	if (ctx.cr6.eq) goto loc_8267C790;
	// lwz r10,40(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r9,r10,4,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8267c760
	if (ctx.cr6.eq) goto loc_8267C760;
	// lwz r11,140(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 140);
	// lwz r10,72(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267c6a4
	if (ctx.cr6.eq) goto loc_8267C6A4;
	// lbz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 60);
	// rotlwi r11,r11,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x8267c764
	goto loc_8267C764;
loc_8267C6A4:
	// lwz r6,76(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// subf r9,r10,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// srawi. r11,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8267c710
	if (!ctx.cr0.gt) goto loc_8267C710;
loc_8267C6C0:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,60
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 60, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x8267c6e0
	if (ctx.cr6.lt) goto loc_8267C6E0;
	// li r7,0
	ctx.r7.s64 = 0;
loc_8267C6E0:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8267c6fc
	if (ctx.cr6.eq) goto loc_8267C6FC;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x8267c704
	goto loc_8267C704;
loc_8267C6FC:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8267C704:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8267c6c0
	if (ctx.cr6.gt) goto loc_8267C6C0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8267C710:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8267c750
	if (ctx.cr6.eq) goto loc_8267C750;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,60
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 60, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8267c72c
	if (ctx.cr6.gt) goto loc_8267C72C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8267C72C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8267c750
	if (!ctx.cr6.eq) goto loc_8267C750;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8267c764
	goto loc_8267C764;
loc_8267C750:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8267c764
	goto loc_8267C764;
loc_8267C760:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8267C764:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8267c790
	if (ctx.cr6.eq) goto loc_8267C790;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8267C780;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8267C790:
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

__attribute__((alias("__imp__sub_8267C7A4"))) PPC_WEAK_FUNC(sub_8267C7A4);
PPC_FUNC_IMPL(__imp__sub_8267C7A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267C7A8"))) PPC_WEAK_FUNC(sub_8267C7A8);
PPC_FUNC_IMPL(__imp__sub_8267C7A8) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8267c7d0
	if (ctx.cr6.eq) goto loc_8267C7D0;
	// lbz r11,144(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8267c7d4
	if (!ctx.cr6.eq) goto loc_8267C7D4;
loc_8267C7D0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8267C7D4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267c90c
	if (ctx.cr6.eq) goto loc_8267C90C;
	// lwz r10,40(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r9,r10,4,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8267c8dc
	if (ctx.cr6.eq) goto loc_8267C8DC;
	// lwz r11,140(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267c81c
	if (ctx.cr6.eq) goto loc_8267C81C;
	// lbz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 60);
	// lwz r11,72(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x8267c8e0
	goto loc_8267C8E0;
loc_8267C81C:
	// lwz r10,72(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r6,76(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// subf r9,r10,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8267c88c
	if (!ctx.cr0.gt) goto loc_8267C88C;
loc_8267C83C:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,60
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 60, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x8267c85c
	if (ctx.cr6.lt) goto loc_8267C85C;
	// li r7,0
	ctx.r7.s64 = 0;
loc_8267C85C:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8267c878
	if (ctx.cr6.eq) goto loc_8267C878;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x8267c880
	goto loc_8267C880;
loc_8267C878:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8267C880:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8267c83c
	if (ctx.cr6.gt) goto loc_8267C83C;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8267C88C:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8267c8cc
	if (ctx.cr6.eq) goto loc_8267C8CC;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,60
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 60, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8267c8a8
	if (ctx.cr6.gt) goto loc_8267C8A8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8267C8A8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8267c8cc
	if (!ctx.cr6.eq) goto loc_8267C8CC;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8267c8e0
	goto loc_8267C8E0;
loc_8267C8CC:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8267c8e0
	goto loc_8267C8E0;
loc_8267C8DC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8267C8E0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8267c90c
	if (ctx.cr6.eq) goto loc_8267C90C;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8267C8FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8267C90C:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f1,-27468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27468);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267C924"))) PPC_WEAK_FUNC(sub_8267C924);
PPC_FUNC_IMPL(__imp__sub_8267C924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267C928"))) PPC_WEAK_FUNC(sub_8267C928);
PPC_FUNC_IMPL(__imp__sub_8267C928) {
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
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8267c958
	if (ctx.cr6.eq) goto loc_8267C958;
	// lbz r11,144(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8267c95c
	if (!ctx.cr6.eq) goto loc_8267C95C;
loc_8267C958:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8267C95C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267ca94
	if (ctx.cr6.eq) goto loc_8267CA94;
	// lwz r10,40(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r9,r10,4,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8267ca64
	if (ctx.cr6.eq) goto loc_8267CA64;
	// lwz r11,140(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267c9a4
	if (ctx.cr6.eq) goto loc_8267C9A4;
	// lbz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 60);
	// lwz r11,72(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x8267ca68
	goto loc_8267CA68;
loc_8267C9A4:
	// lwz r10,72(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 72);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r6,76(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 76);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// subf r9,r10,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8267ca14
	if (!ctx.cr0.gt) goto loc_8267CA14;
loc_8267C9C4:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,60
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 60, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x8267c9e4
	if (ctx.cr6.lt) goto loc_8267C9E4;
	// li r7,0
	ctx.r7.s64 = 0;
loc_8267C9E4:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8267ca00
	if (ctx.cr6.eq) goto loc_8267CA00;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x8267ca08
	goto loc_8267CA08;
loc_8267CA00:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8267CA08:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8267c9c4
	if (ctx.cr6.gt) goto loc_8267C9C4;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8267CA14:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8267ca54
	if (ctx.cr6.eq) goto loc_8267CA54;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,60
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 60, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8267ca30
	if (ctx.cr6.gt) goto loc_8267CA30;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8267CA30:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8267ca54
	if (!ctx.cr6.eq) goto loc_8267CA54;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8267ca68
	goto loc_8267CA68;
loc_8267CA54:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8267ca68
	goto loc_8267CA68;
loc_8267CA64:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8267CA68:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8267ca94
	if (ctx.cr6.eq) goto loc_8267CA94;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8267CA88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lvx128 v0,r0,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_8267CA94:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_8267CAAC"))) PPC_WEAK_FUNC(sub_8267CAAC);
PPC_FUNC_IMPL(__imp__sub_8267CAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267CAB0"))) PPC_WEAK_FUNC(sub_8267CAB0);
PPC_FUNC_IMPL(__imp__sub_8267CAB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x8267CAB8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r8,r9,0,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// blt cr6,0x8267cc74
	if (ctx.cr6.lt) goto loc_8267CC74;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,-28840
	ctx.r5.s64 = ctx.r11.s64 + -28840;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822280c8
	ctx.lr = 0x8267CAF0;
	sub_822280C8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8267cc74
	if (ctx.cr6.eq) goto loc_8267CC74;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822281f8
	ctx.lr = 0x8267CB08;
	sub_822281F8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82227680
	ctx.lr = 0x8267CB10;
	sub_82227680(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821dff48
	ctx.lr = 0x8267CB20;
	sub_821DFF48(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8267cb3c
	if (ctx.cr6.eq) goto loc_8267CB3C;
	// lbz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8267cb40
	if (!ctx.cr6.eq) goto loc_8267CB40;
loc_8267CB3C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8267CB40:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267cc74
	if (ctx.cr6.eq) goto loc_8267CC74;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r9,r10,4,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8267cc48
	if (ctx.cr6.eq) goto loc_8267CC48;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267cb88
	if (ctx.cr6.eq) goto loc_8267CB88;
	// lbz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 60);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x8267cc4c
	goto loc_8267CC4C;
loc_8267CB88:
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r6,76(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// subf r9,r10,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8267cbf8
	if (!ctx.cr0.gt) goto loc_8267CBF8;
loc_8267CBA8:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,60
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 60, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x8267cbc8
	if (ctx.cr6.lt) goto loc_8267CBC8;
	// li r7,0
	ctx.r7.s64 = 0;
loc_8267CBC8:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8267cbe4
	if (ctx.cr6.eq) goto loc_8267CBE4;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x8267cbec
	goto loc_8267CBEC;
loc_8267CBE4:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8267CBEC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8267cba8
	if (ctx.cr6.gt) goto loc_8267CBA8;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8267CBF8:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8267cc38
	if (ctx.cr6.eq) goto loc_8267CC38;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,60
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 60, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8267cc14
	if (ctx.cr6.gt) goto loc_8267CC14;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8267CC14:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8267cc38
	if (!ctx.cr6.eq) goto loc_8267CC38;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8267cc4c
	goto loc_8267CC4C;
loc_8267CC38:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8267cc4c
	goto loc_8267CC4C;
loc_8267CC48:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8267CC4C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8267cc74
	if (ctx.cr6.eq) goto loc_8267CC74;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8267CC6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_8267CC74:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_8267CC80"))) PPC_WEAK_FUNC(sub_8267CC80);
PPC_FUNC_IMPL(__imp__sub_8267CC80) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267ccac
	if (ctx.cr6.eq) goto loc_8267CCAC;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8267ccb0
	if (!ctx.cr6.eq) goto loc_8267CCB0;
loc_8267CCAC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8267CCB0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8267cde8
	if (ctx.cr6.eq) goto loc_8267CDE8;
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r8,r9,4,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8267cdc4
	if (ctx.cr6.eq) goto loc_8267CDC4;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8267ccfc
	if (ctx.cr6.eq) goto loc_8267CCFC;
	// lbz r9,60(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 60);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r11,r9,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8267cdc8
	goto loc_8267CDC8;
loc_8267CCFC:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// subf r8,r10,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8267cd6c
	if (!ctx.cr0.gt) goto loc_8267CD6C;
loc_8267CD1C:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,60
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 60, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x8267cd3c
	if (ctx.cr6.lt) goto loc_8267CD3C;
	// li r7,0
	ctx.r7.s64 = 0;
loc_8267CD3C:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8267cd58
	if (ctx.cr6.eq) goto loc_8267CD58;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x8267cd60
	goto loc_8267CD60;
loc_8267CD58:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8267CD60:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8267cd1c
	if (ctx.cr6.gt) goto loc_8267CD1C;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8267CD6C:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8267cdb0
	if (ctx.cr6.eq) goto loc_8267CDB0;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,60
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 60, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8267cd88
	if (ctx.cr6.gt) goto loc_8267CD88;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8267CD88:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8267cdb0
	if (!ctx.cr6.eq) goto loc_8267CDB0;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8267cdc8
	goto loc_8267CDC8;
loc_8267CDB0:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8267cdc8
	goto loc_8267CDC8;
loc_8267CDC4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8267CDC8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267cde8
	if (ctx.cr6.eq) goto loc_8267CDE8;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267CDE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8267CDE8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267CDF8"))) PPC_WEAK_FUNC(sub_8267CDF8);
PPC_FUNC_IMPL(__imp__sub_8267CDF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x8267CE00;
	sub_82CA2BEC(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// li r12,-64
	ctx.r12.s64 = -64;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822281f8
	ctx.lr = 0x8267CE1C;
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
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// lwz r30,0(r7)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// bl 0x822281f8
	ctx.lr = 0x8267CE4C;
	sub_822281F8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lvx128 v127,r0,r11
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x822b6e48
	ctx.lr = 0x8267CE68;
	sub_822B6E48(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r3,81(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82309580
	ctx.lr = 0x8267CE7C;
	sub_82309580(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// lbz r3,82(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82309580
	ctx.lr = 0x8267CE90;
	sub_82309580(ctx, base);
	// vor128 v1,v127,v127
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8267CEA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82227cd0
	ctx.lr = 0x8267CEAC;
	sub_82227CD0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// li r0,-64
	ctx.r0.s64 = -64;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_8267CEC4"))) PPC_WEAK_FUNC(sub_8267CEC4);
PPC_FUNC_IMPL(__imp__sub_8267CEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267CEC8"))) PPC_WEAK_FUNC(sub_8267CEC8);
PPC_FUNC_IMPL(__imp__sub_8267CEC8) {
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
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822281f8
	ctx.lr = 0x8267CEE4;
	sub_822281F8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8267d340
	ctx.lr = 0x8267CEF4;
	sub_8267D340(ctx, base);
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

__attribute__((alias("__imp__sub_8267CF08"))) PPC_WEAK_FUNC(sub_8267CF08);
PPC_FUNC_IMPL(__imp__sub_8267CF08) {
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
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822281f8
	ctx.lr = 0x8267CF24;
	sub_822281F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822281f8
	ctx.lr = 0x8267CF38;
	sub_822281F8(ctx, base);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lvx128 v1,r0,r4
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x8267CF48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_8267CF7C"))) PPC_WEAK_FUNC(sub_8267CF7C);
PPC_FUNC_IMPL(__imp__sub_8267CF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267CF80"))) PPC_WEAK_FUNC(sub_8267CF80);
PPC_FUNC_IMPL(__imp__sub_8267CF80) {
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
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// bl 0x822281f8
	ctx.lr = 0x8267CF98;
	sub_822281F8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8267d448
	ctx.lr = 0x8267CFA8;
	sub_8267D448(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267CFB8"))) PPC_WEAK_FUNC(sub_8267CFB8);
PPC_FUNC_IMPL(__imp__sub_8267CFB8) {
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
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// bl 0x822281f8
	ctx.lr = 0x8267CFD0;
	sub_822281F8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8267d580
	ctx.lr = 0x8267CFE0;
	sub_8267D580(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267CFF0"))) PPC_WEAK_FUNC(sub_8267CFF0);
PPC_FUNC_IMPL(__imp__sub_8267CFF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x8267CFF8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822281f8
	ctx.lr = 0x8267D008;
	sub_822281F8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// lwz r30,4(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r29,0(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x822281f8
	ctx.lr = 0x8267D034;
	sub_822281F8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82227680
	ctx.lr = 0x8267D03C;
	sub_82227680(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822281f8
	ctx.lr = 0x8267D04C;
	sub_822281F8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82227680
	ctx.lr = 0x8267D054;
	sub_82227680(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82309520
	ctx.lr = 0x8267D068;
	sub_82309520(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r3,81(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x822b6e48
	ctx.lr = 0x8267D07C;
	sub_822B6E48(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8267D098;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_8267D0A4"))) PPC_WEAK_FUNC(sub_8267D0A4);
PPC_FUNC_IMPL(__imp__sub_8267D0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267D0A8"))) PPC_WEAK_FUNC(sub_8267D0A8);
PPC_FUNC_IMPL(__imp__sub_8267D0A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8267D0B0;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822281f8
	ctx.lr = 0x8267D0C0;
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
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// lwz r30,4(r7)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r29,0(r7)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// bl 0x822281f8
	ctx.lr = 0x8267D0F4;
	sub_822281F8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82227680
	ctx.lr = 0x8267D0FC;
	sub_82227680(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822281f8
	ctx.lr = 0x8267D10C;
	sub_822281F8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82227680
	ctx.lr = 0x8267D114;
	sub_82227680(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82309520
	ctx.lr = 0x8267D128;
	sub_82309520(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lbz r3,81(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82309520
	ctx.lr = 0x8267D13C;
	sub_82309520(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r3,82(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// bl 0x822b6e48
	ctx.lr = 0x8267D150;
	sub_822B6E48(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8267D170;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8267D17C"))) PPC_WEAK_FUNC(sub_8267D17C);
PPC_FUNC_IMPL(__imp__sub_8267D17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267D180"))) PPC_WEAK_FUNC(sub_8267D180);
PPC_FUNC_IMPL(__imp__sub_8267D180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8267D188;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822281f8
	ctx.lr = 0x8267D198;
	sub_822281F8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// addi r7,r1,83
	ctx.r7.s64 = ctx.r1.s64 + 83;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// stb r11,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r11.u8);
	// lwz r30,4(r6)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r29,0(r6)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x822281f8
	ctx.lr = 0x8267D1D4;
	sub_822281F8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82227680
	ctx.lr = 0x8267D1DC;
	sub_82227680(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82309520
	ctx.lr = 0x8267D1F0;
	sub_82309520(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lbz r3,81(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82309520
	ctx.lr = 0x8267D204;
	sub_82309520(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lbz r3,82(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// bl 0x822b6e48
	ctx.lr = 0x8267D218;
	sub_822B6E48(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r3,83(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// bl 0x82309580
	ctx.lr = 0x8267D22C;
	sub_82309580(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8267D248;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8267D254"))) PPC_WEAK_FUNC(sub_8267D254);
PPC_FUNC_IMPL(__imp__sub_8267D254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267D258"))) PPC_WEAK_FUNC(sub_8267D258);
PPC_FUNC_IMPL(__imp__sub_8267D258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x8267D260;
	sub_82CA2BEC(ctx, base);
	// li r12,-48
	ctx.r12.s64 = -48;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822281f8
	ctx.lr = 0x8267D278;
	sub_822281F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822281f8
	ctx.lr = 0x8267D290;
	sub_822281F8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lvx128 v127,r0,r9
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x822281f8
	ctx.lr = 0x8267D2A8;
	sub_822281F8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82227680
	ctx.lr = 0x8267D2B0;
	sub_82227680(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// vor128 v1,v127,v127
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8267D2C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,1
	ctx.r6.s64 = 1;
	// cntlzw r5,r8
	ctx.r5.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r4,r5,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// xori r11,r4,1
	ctx.r11.u64 = ctx.r4.u64 ^ 1;
	// stw r6,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// li r0,-48
	ctx.r0.s64 = -48;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_8267D304"))) PPC_WEAK_FUNC(sub_8267D304);
PPC_FUNC_IMPL(__imp__sub_8267D304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267D308"))) PPC_WEAK_FUNC(sub_8267D308);
PPC_FUNC_IMPL(__imp__sub_8267D308) {
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
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// bl 0x822281f8
	ctx.lr = 0x8267D320;
	sub_822281F8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8267d658
	ctx.lr = 0x8267D330;
	sub_8267D658(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267D340"))) PPC_WEAK_FUNC(sub_8267D340);
PPC_FUNC_IMPL(__imp__sub_8267D340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x8267D348;
	sub_82CA2BEC(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// li r12,-80
	ctx.r12.s64 = -80;
	// stvx128 v126,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r12,-64
	ctx.r12.s64 = -64;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822281f8
	ctx.lr = 0x8267D374;
	sub_822281F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lvx128 v127,r0,r10
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x822281f8
	ctx.lr = 0x8267D38C;
	sub_822281F8(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// lvx128 v126,r0,r8
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stb r11,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r11.u8);
	// bl 0x822281f8
	ctx.lr = 0x8267D3B4;
	sub_822281F8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r29,0(r6)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82309580
	ctx.lr = 0x8267D3CC;
	sub_82309580(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lbz r3,81(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82309580
	ctx.lr = 0x8267D3E0;
	sub_82309580(ctx, base);
	// vor128 v1,v126,v126
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v126.u8));
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// vor128 v2,v127,v127
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8267D3F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// cntlzw r10,r5
	ctx.r10.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 ^ 1;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r7.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// li r0,-80
	ctx.r0.s64 = -80;
	// lvx128 v126,r1,r0
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r0,-64
	ctx.r0.s64 = -64;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_8267D444"))) PPC_WEAK_FUNC(sub_8267D444);
PPC_FUNC_IMPL(__imp__sub_8267D444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267D448"))) PPC_WEAK_FUNC(sub_8267D448);
PPC_FUNC_IMPL(__imp__sub_8267D448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x8267D450;
	sub_82CA2BD8(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// addi r7,r1,83
	ctx.r7.s64 = ctx.r1.s64 + 83;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// li r4,2
	ctx.r4.s64 = 2;
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// stb r11,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r11.u8);
	// stb r11,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r11.u8);
	// bl 0x822281f8
	ctx.lr = 0x8267D49C;
	sub_822281F8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82227680
	ctx.lr = 0x8267D4A4;
	sub_82227680(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822281f8
	ctx.lr = 0x8267D4B4;
	sub_822281F8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82227680
	ctx.lr = 0x8267D4BC;
	sub_82227680(ctx, base);
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82309520
	ctx.lr = 0x8267D4D0;
	sub_82309520(ctx, base);
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lbz r3,81(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x82309520
	ctx.lr = 0x8267D4E4;
	sub_82309520(ctx, base);
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lbz r3,82(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// bl 0x82309580
	ctx.lr = 0x8267D4F8;
	sub_82309580(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lbz r3,83(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x822b6e48
	ctx.lr = 0x8267D50C;
	sub_822B6E48(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lbz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// bl 0x82309580
	ctx.lr = 0x8267D520;
	sub_82309580(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8267D544;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// cntlzw r10,r5
	ctx.r10.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 ^ 1;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r7.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_8267D580"))) PPC_WEAK_FUNC(sub_8267D580);
PPC_FUNC_IMPL(__imp__sub_8267D580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8267D588;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,81
	ctx.r9.s64 = ctx.r1.s64 + 81;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// li r4,2
	ctx.r4.s64 = 2;
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822281f8
	ctx.lr = 0x8267D5B8;
	sub_822281F8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82227680
	ctx.lr = 0x8267D5C0;
	sub_82227680(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822281f8
	ctx.lr = 0x8267D5D0;
	sub_822281F8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82227680
	ctx.lr = 0x8267D5D8;
	sub_82227680(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82309520
	ctx.lr = 0x8267D5EC;
	sub_82309520(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lbz r3,81(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// bl 0x822b6e48
	ctx.lr = 0x8267D600;
	sub_822B6E48(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8267D61C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// lwz r7,8(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r6,1
	ctx.r6.s64 = 1;
	// cntlzw r5,r8
	ctx.r5.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r4,r5,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// xori r11,r4,1
	ctx.r11.u64 = ctx.r4.u64 ^ 1;
	// stw r6,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r10,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8267D654"))) PPC_WEAK_FUNC(sub_8267D654);
PPC_FUNC_IMPL(__imp__sub_8267D654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267D658"))) PPC_WEAK_FUNC(sub_8267D658);
PPC_FUNC_IMPL(__imp__sub_8267D658) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x8267D660;
	sub_82CA2BEC(ctx, base);
	// li r12,-64
	ctx.r12.s64 = -64;
	// stvx128 v126,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r12,-48
	ctx.r12.s64 = -48;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x822281f8
	ctx.lr = 0x8267D68C;
	sub_822281F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lvx128 v127,r0,r10
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x822281f8
	ctx.lr = 0x8267D6A4;
	sub_822281F8(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lvx128 v126,r0,r8
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82a1e620
	ctx.lr = 0x8267D6BC;
	sub_82A1E620(ctx, base);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// beq cr6,0x8267d6e4
	if (ctx.cr6.eq) goto loc_8267D6E4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8222d580
	ctx.lr = 0x8267D6D0;
	sub_8222D580(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8267d6e4
	if (!ctx.cr6.eq) goto loc_8267D6E4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f0,-27468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27468);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8267d6e8
	goto loc_8267D6E8;
loc_8267D6E4:
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
loc_8267D6E8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822281f8
	ctx.lr = 0x8267D6F4;
	sub_822281F8(ctx, base);
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82227680
	ctx.lr = 0x8267D708;
	sub_82227680(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// vor128 v1,v126,v126
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v126.u8));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// vor128 v2,v127,v127
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8267D724;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// li r0,-64
	ctx.r0.s64 = -64;
	// lvx128 v126,r1,r0
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r0,-48
	ctx.r0.s64 = -48;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_8267D740"))) PPC_WEAK_FUNC(sub_8267D740);
PPC_FUNC_IMPL(__imp__sub_8267D740) {
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
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8221f388
	ctx.lr = 0x8267D75C;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8267d7cc
	if (ctx.cr6.eq) goto loc_8267D7CC;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8221f388
	ctx.lr = 0x8267D770;
	sub_8221F388(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8267d780
	if (ctx.cr6.eq) goto loc_8267D780;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_8267D780:
	// addic. r10,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r10.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8267d78c
	if (ctx.cr0.eq) goto loc_8267D78C;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_8267D78C:
	// addic. r10,r3,8
	ctx.xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r10.s64 = ctx.r3.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8267d798
	if (ctx.cr0.eq) goto loc_8267D798;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_8267D798:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,25(r3)
	PPC_STORE_U8(ctx.r3.u32 + 25, ctx.r11.u8);
	// stb r10,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r10.u8);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stb r10,25(r3)
	PPC_STORE_U8(ctx.r3.u32 + 25, ctx.r10.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r8.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8267d7d0
	goto loc_8267D7D0;
loc_8267D7CC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8267D7D0:
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// lis r30,-31927
	ctx.r30.s64 = -2092367872;
	// addi r3,r11,-21092
	ctx.r3.s64 = ctx.r11.s64 + -21092;
	// addi r4,r30,27416
	ctx.r4.s64 = ctx.r30.s64 + 27416;
	// bl 0x8267e390
	ctx.lr = 0x8267D7E4;
	sub_8267E390(ctx, base);
	// lis r9,-31946
	ctx.r9.s64 = -2093613056;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// lwz r3,27416(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27416);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// stw r11,-5552(r9)
	PPC_STORE_U32(ctx.r9.u32 + -5552, ctx.r11.u32);
	// stw r10,27416(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27416, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8267D818"))) PPC_WEAK_FUNC(sub_8267D818);
PPC_FUNC_IMPL(__imp__sub_8267D818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x8267D820;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r3.u32);
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r5,r1,196
	ctx.r5.s64 = ctx.r1.s64 + 196;
	// addi r28,r11,-21092
	ctx.r28.s64 = ctx.r11.s64 + -21092;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r31,4(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x8267e5d0
	ctx.lr = 0x8267D844;
	sub_8267E5D0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267d858
	if (ctx.cr6.eq) goto loc_8267D858;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8267d85c
	if (ctx.cr6.eq) goto loc_8267D85C;
loc_8267D858:
	// twi 31,r0,22
loc_8267D85C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8267d9d0
	if (ctx.cr6.eq) goto loc_8267D9D0;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r4,r1,196
	ctx.r4.s64 = ctx.r1.s64 + 196;
	// addi r27,r11,-21080
	ctx.r27.s64 = ctx.r11.s64 + -21080;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8267e678
	ctx.lr = 0x8267D87C;
	sub_8267E678(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,196
	ctx.r4.s64 = ctx.r1.s64 + 196;
	// bl 0x8267e390
	ctx.lr = 0x8267D888;
	sub_8267E390(ctx, base);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r26,-31927
	ctx.r26.s64 = -2092367872;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
loc_8267D8A4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,196
	ctx.r4.s64 = ctx.r1.s64 + 196;
	// bl 0x8267e390
	ctx.lr = 0x8267D8B0;
	sub_8267E390(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// beq cr6,0x8267d8c8
	if (ctx.cr6.eq) goto loc_8267D8C8;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8267d8cc
	if (ctx.cr6.eq) goto loc_8267D8CC;
loc_8267D8C8:
	// twi 31,r0,22
loc_8267D8CC:
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8267d99c
	if (ctx.cr6.eq) goto loc_8267D99C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8267d8e0
	if (!ctx.cr6.eq) goto loc_8267D8E0;
	// twi 31,r0,22
loc_8267D8E0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8267d8f0
	if (!ctx.cr6.eq) goto loc_8267D8F0;
	// twi 31,r0,22
loc_8267D8F0:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// addi r31,r29,16
	ctx.r31.s64 = ctx.r29.s64 + 16;
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// beq cr6,0x8267d928
	if (ctx.cr6.eq) goto loc_8267D928;
loc_8267D90C:
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
	// bne 0x8267d90c
	if (!ctx.cr0.eq) goto loc_8267D90C;
loc_8267D928:
	// lwz r11,26912(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 26912);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x8234a788
	ctx.lr = 0x8267D944;
	sub_8234A788(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r1,196
	ctx.r4.s64 = ctx.r1.s64 + 196;
	// addi r24,r1,96
	ctx.r24.s64 = ctx.r1.s64 + 96;
	// bl 0x8267e678
	ctx.lr = 0x8267D954;
	sub_8267E678(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x824def68
	ctx.lr = 0x8267D95C;
	sub_824DEF68(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x8267D964;
	sub_829FF648(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x8267D96C;
	sub_829FF648(ctx, base);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8267d97c
	if (!ctx.cr6.eq) goto loc_8267D97C;
	// twi 31,r0,22
loc_8267D97C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829ff648
	ctx.lr = 0x8267D984;
	sub_829FF648(ctx, base);
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823d4f20
	ctx.lr = 0x8267D990;
	sub_823D4F20(ctx, base);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8267d8a4
	goto loc_8267D8A4;
loc_8267D99C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,196
	ctx.r4.s64 = ctx.r1.s64 + 196;
	// bl 0x8267e390
	ctx.lr = 0x8267D9A8;
	sub_8267E390(ctx, base);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8267d9c4
	if (ctx.cr6.eq) goto loc_8267D9C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82442a10
	ctx.lr = 0x8267D9BC;
	sub_82442A10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221be68
	ctx.lr = 0x8267D9C4;
	sub_8221BE68(ctx, base);
loc_8267D9C4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,196
	ctx.r4.s64 = ctx.r1.s64 + 196;
	// bl 0x8267e4e8
	ctx.lr = 0x8267D9D0;
	sub_8267E4E8(ctx, base);
loc_8267D9D0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_8267D9D8"))) PPC_WEAK_FUNC(sub_8267D9D8);
PPC_FUNC_IMPL(__imp__sub_8267D9D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x8267D9E0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// addi r30,r11,-21080
	ctx.r30.s64 = ctx.r11.s64 + -21080;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8267f2d0
	ctx.lr = 0x8267DA04;
	sub_8267F2D0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267da18
	if (ctx.cr6.eq) goto loc_8267DA18;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8267da1c
	if (ctx.cr6.eq) goto loc_8267DA1C;
loc_8267DA18:
	// twi 31,r0,22
loc_8267DA1C:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8267da54
	if (ctx.cr6.eq) goto loc_8267DA54;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8267da40
	if (ctx.cr6.lt) goto loc_8267DA40;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8267DA40:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8267da54
	if (!ctx.cr6.eq) goto loc_8267DA54;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// b 0x8267da60
	goto loc_8267DA60;
loc_8267DA54:
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
loc_8267DA60:
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267da7c
	if (ctx.cr6.eq) goto loc_8267DA7C;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8267da80
	if (ctx.cr6.eq) goto loc_8267DA80;
loc_8267DA7C:
	// twi 31,r0,22
loc_8267DA80:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8267dafc
	if (ctx.cr6.eq) goto loc_8267DAFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// bl 0x8267e678
	ctx.lr = 0x8267DA98;
	sub_8267E678(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8267e678
	ctx.lr = 0x8267DAAC;
	sub_8267E678(ctx, base);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8267daf0
	if (ctx.cr6.eq) goto loc_8267DAF0;
	// lis r29,-31927
	ctx.r29.s64 = -2092367872;
loc_8267DABC:
	// lwz r11,26912(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26912);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x8234a868
	ctx.lr = 0x8267DAD4;
	sub_8234A868(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bl 0x8267e678
	ctx.lr = 0x8267DAE4;
	sub_8267E678(ctx, base);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8267dabc
	if (!ctx.cr6.eq) goto loc_8267DABC;
loc_8267DAF0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// bl 0x8267e7f8
	ctx.lr = 0x8267DAFC;
	sub_8267E7F8(ctx, base);
loc_8267DAFC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_8267DB04"))) PPC_WEAK_FUNC(sub_8267DB04);
PPC_FUNC_IMPL(__imp__sub_8267DB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267DB08"))) PPC_WEAK_FUNC(sub_8267DB08);
PPC_FUNC_IMPL(__imp__sub_8267DB08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc8
	ctx.lr = 0x8267DB10;
	sub_82CA2BC8(ctx, base);
	// li r12,-144
	ctx.r12.s64 = -144;
	// stvx128 v126,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r12,-128
	ctx.r12.s64 = -128;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r23,r10,-21092
	ctx.r23.s64 = ctx.r10.s64 + -21092;
	// addi r21,r11,-5552
	ctx.r21.s64 = ctx.r11.s64 + -5552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r25,4(r23)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x8267e5d0
	ctx.lr = 0x8267DB5C;
	sub_8267E5D0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267db70
	if (ctx.cr6.eq) goto loc_8267DB70;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x8267db74
	if (ctx.cr6.eq) goto loc_8267DB74;
loc_8267DB70:
	// twi 31,r0,22
loc_8267DB74:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lvlx128 v127,r0,r31
	temp.u32 = ctx.r31.u32;
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// subf r7,r9,r25
	ctx.r7.s64 = ctx.r25.s64 - ctx.r9.s64;
	// lvlx128 v126,r0,r30
	temp.u32 = ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r10,8
	ctx.r10.s64 = 8;
	// li r29,4
	ctx.r29.s64 = 4;
	// lfs f0,-27468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27468);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r11,r26,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 8) & 0xFFFFFF00;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lvlx v0,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// cntlzw r5,r7
	ctx.r5.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// add r4,r11,r27
	ctx.r4.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lvlx v13,r31,r10
	temp.u32 = ctx.r31.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r3,r5,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// lvlx v12,r30,r10
	temp.u32 = ctx.r30.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v11,r31,r29
	temp.u32 = ctx.r31.u32 + ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r24,0
	ctx.r24.s64 = 0;
	// lvlx v10,r30,r29
	temp.u32 = ctx.r30.u32 + ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// xori r10,r3,1
	ctx.r10.u64 = ctx.r3.u64 ^ 1;
	// lvlx v9,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v127,v13,4,3
	_mm_store_ps(ctx.v127.f32, _mm_blend_ps(_mm_load_ps(ctx.v127.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 57), 4));
	// vrlimi128 v126,v12,4,3
	_mm_store_ps(ctx.v126.f32, _mm_blend_ps(_mm_load_ps(ctx.v126.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// vrlimi128 v10,v9,4,3
	_mm_store_ps(ctx.v10.f32, _mm_blend_ps(_mm_load_ps(ctx.v10.f32), _mm_permute_ps(_mm_load_ps(ctx.v9.f32), 57), 4));
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + ctx.r28.u64;
	// vrlimi128 v11,v0,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// clrlwi r20,r10,24
	ctx.r20.u64 = ctx.r10.u32 & 0xFF;
	// mr r22,r24
	ctx.r22.u64 = ctx.r24.u64;
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// vrlimi128 v126,v10,3,2
	_mm_store_ps(ctx.v126.f32, _mm_blend_ps(_mm_load_ps(ctx.v126.f32), _mm_permute_ps(_mm_load_ps(ctx.v10.f32), 78), 3));
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// vrlimi128 v127,v11,3,2
	_mm_store_ps(ctx.v127.f32, _mm_blend_ps(_mm_load_ps(ctx.v127.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 78), 3));
	// beq cr6,0x8267dd34
	if (ctx.cr6.eq) goto loc_8267DD34;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8267e390
	ctx.lr = 0x8267DC20;
	sub_8267E390(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8267e390
	ctx.lr = 0x8267DC38;
	sub_8267E390(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x8237c6f0
	ctx.lr = 0x8267DC4C;
	sub_8237C6F0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267dc60
	if (ctx.cr6.eq) goto loc_8267DC60;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8267dc64
	if (ctx.cr6.eq) goto loc_8267DC64;
loc_8267DC60:
	// twi 31,r0,22
loc_8267DC64:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8267dce4
	if (!ctx.cr6.eq) goto loc_8267DCE4;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8221f388
	ctx.lr = 0x8267DC78;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8267dcc0
	if (ctx.cr6.eq) goto loc_8267DCC0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r9,r11,25844
	ctx.r9.s64 = ctx.r11.s64 + 25844;
	// li r5,255
	ctx.r5.s64 = 255;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r24,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r24.u32);
	// stw r24,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r24.u32);
	// stw r24,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r24.u32);
	// stb r28,26(r3)
	PPC_STORE_U8(ctx.r3.u32 + 26, ctx.r28.u8);
	// stb r27,25(r3)
	PPC_STORE_U8(ctx.r3.u32 + 25, ctx.r27.u8);
	// stb r26,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r26.u8);
	// stb r5,27(r3)
	PPC_STORE_U8(ctx.r3.u32 + 27, ctx.r5.u8);
	// stb r24,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r24.u8);
	// b 0x8267dcc4
	goto loc_8267DCC4;
loc_8267DCC0:
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_8267DCC4:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8267e390
	ctx.lr = 0x8267DCD0;
	sub_8267E390(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8267e8e0
	ctx.lr = 0x8267DCDC;
	sub_8267E8E0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8238a848
	ctx.lr = 0x8267DCE4;
	sub_8238A848(ctx, base);
loc_8267DCE4:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8267e390
	ctx.lr = 0x8267DCF0;
	sub_8267E390(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8267e8e0
	ctx.lr = 0x8267DCFC;
	sub_8267E8E0(ctx, base);
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8267dd94
	if (ctx.cr6.eq) goto loc_8267DD94;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x8267DD14;
	sub_829FF648(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// mr r22,r31
	ctx.r22.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8267dd94
	goto loc_8267DD94;
loc_8267DD34:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8221f388
	ctx.lr = 0x8267DD3C;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8267dd80
	if (ctx.cr6.eq) goto loc_8267DD80;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// li r6,255
	ctx.r6.s64 = 255;
	// addi r9,r11,25844
	ctx.r9.s64 = ctx.r11.s64 + 25844;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r24,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r24.u32);
	// stw r24,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r24.u32);
	// stw r24,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r24.u32);
	// stb r28,26(r3)
	PPC_STORE_U8(ctx.r3.u32 + 26, ctx.r28.u8);
	// stb r27,25(r3)
	PPC_STORE_U8(ctx.r3.u32 + 25, ctx.r27.u8);
	// stb r26,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r26.u8);
	// stb r6,27(r3)
	PPC_STORE_U8(ctx.r3.u32 + 27, ctx.r6.u8);
	// stb r24,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r24.u8);
	// b 0x8267dd84
	goto loc_8267DD84;
loc_8267DD80:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_8267DD84:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8238a848
	ctx.lr = 0x8267DD8C;
	sub_8238A848(ctx, base);
	// lwz r22,92(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r25,88(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_8267DD94:
	// vor128 v2,v126,v126
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v126.u8));
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// vor128 v1,v127,v127
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// bl 0x82a3a508
	ctx.lr = 0x8267DDA4;
	sub_82A3A508(ctx, base);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x8267de64
	if (ctx.cr6.eq) goto loc_8267DE64;
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// lwz r10,12(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 5;
	// cmplwi cr6,r8,1024
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1024, ctx.xer);
	// ble cr6,0x8267decc
	if (!ctx.cr6.gt) goto loc_8267DECC;
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// stw r22,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// beq cr6,0x8267ddf0
	if (ctx.cr6.eq) goto loc_8267DDF0;
loc_8267DDD4:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r22
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r22.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r22
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r22.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8267ddd4
	if (!ctx.cr0.eq) goto loc_8267DDD4;
loc_8267DDF0:
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r11,26912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// bl 0x8234a788
	ctx.lr = 0x8267DE10;
	sub_8234A788(ctx, base);
	// lis r8,-31926
	ctx.r8.s64 = -2092302336;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r8,-21080
	ctx.r3.s64 = ctx.r8.s64 + -21080;
	// addi r31,r1,104
	ctx.r31.s64 = ctx.r1.s64 + 104;
	// bl 0x8267e678
	ctx.lr = 0x8267DE24;
	sub_8267E678(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824def68
	ctx.lr = 0x8267DE2C;
	sub_824DEF68(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x829ff648
	ctx.lr = 0x8267DE34;
	sub_829FF648(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x8267DE3C;
	sub_829FF648(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x8267DE44;
	sub_829FF648(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// bl 0x8267e390
	ctx.lr = 0x8267DE54;
	sub_8267E390(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8267e9e8
	ctx.lr = 0x8267DE60;
	sub_8267E9E8(ctx, base);
	// b 0x8267decc
	goto loc_8267DECC;
loc_8267DE64:
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// stw r22,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// beq cr6,0x8267de90
	if (ctx.cr6.eq) goto loc_8267DE90;
loc_8267DE74:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r22
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r22.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r22
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r22.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8267de74
	if (!ctx.cr0.eq) goto loc_8267DE74;
loc_8267DE90:
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r11,26912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// bl 0x8234a788
	ctx.lr = 0x8267DEB0;
	sub_8234A788(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x829ff648
	ctx.lr = 0x8267DEB8;
	sub_829FF648(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x8267DEC0;
	sub_829FF648(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x8267DEC8;
	sub_829FF648(ctx, base);
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
loc_8267DECC:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x8267DED4;
	sub_829FF648(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// li r0,-144
	ctx.r0.s64 = -144;
	// lvx128 v126,r1,r0
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r0,-128
	ctx.r0.s64 = -128;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82ca2c18
	// ERROR 82CA2C18
	return;
}

__attribute__((alias("__imp__sub_8267DEEC"))) PPC_WEAK_FUNC(sub_8267DEEC);
PPC_FUNC_IMPL(__imp__sub_8267DEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267DEF0"))) PPC_WEAK_FUNC(sub_8267DEF0);
PPC_FUNC_IMPL(__imp__sub_8267DEF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x8267DEF8;
	sub_82CA2BB0(ctx, base);
	// addi r12,r1,-160
	ctx.r12.s64 = ctx.r1.s64 + -160;
	// bl 0x82ffff44
	ctx.lr = 0x8267DF00;
	sub_82FFFF44(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r24,r10,-21092
	ctx.r24.s64 = ctx.r10.s64 + -21092;
	// addi r22,r11,-5552
	ctx.r22.s64 = ctx.r11.s64 + -5552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r27,4(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x8267e5d0
	ctx.lr = 0x8267DF38;
	sub_8267E5D0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267df4c
	if (ctx.cr6.eq) goto loc_8267DF4C;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x8267df50
	if (ctx.cr6.eq) goto loc_8267DF50;
loc_8267DF4C:
	// twi 31,r0,22
loc_8267DF50:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,8
	ctx.r9.s64 = 8;
	// lvlx128 v127,r0,r31
	temp.u32 = ctx.r31.u32;
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r8,r11,-27468
	ctx.r8.s64 = ctx.r11.s64 + -27468;
	// subf r10,r10,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r10.s64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f0,-27468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27468);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lfs f13,-392(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -392);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// li r25,4
	ctx.r25.s64 = 4;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r27,r1,100
	ctx.r27.s64 = ctx.r1.s64 + 100;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r19,r1,104
	ctx.r19.s64 = ctx.r1.s64 + 104;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r18,r1,108
	ctx.r18.s64 = ctx.r1.s64 + 108;
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r17,r1,112
	ctx.r17.s64 = ctx.r1.s64 + 112;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r16,r1,120
	ctx.r16.s64 = ctx.r1.s64 + 120;
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r15,r1,128
	ctx.r15.s64 = ctx.r1.s64 + 128;
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r14,r1,84
	ctx.r14.s64 = ctx.r1.s64 + 84;
	// lvlx v0,r31,r9
	temp.u32 = ctx.r31.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r28,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 8) & 0xFFFFFF00;
	// lvlx v13,r31,r25
	temp.u32 = ctx.r31.u32 + ctx.r25.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r10,r9,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// vrlimi128 v127,v0,4,3
	_mm_store_ps(ctx.v127.f32, _mm_blend_ps(_mm_load_ps(ctx.v127.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// xori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 ^ 1;
	// mr r23,r26
	ctx.r23.u64 = ctx.r26.u64;
	// lvlx v12,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + ctx.r30.u64;
	// clrlwi r20,r9,24
	ctx.r20.u64 = ctx.r9.u32 & 0xFF;
	// stw r23,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r23.u32);
	// lvlx128 v126,r0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// mr r21,r26
	ctx.r21.u64 = ctx.r26.u64;
	// lvlx v11,0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v126,v12,4,3
	_mm_store_ps(ctx.v126.f32, _mm_blend_ps(_mm_load_ps(ctx.v126.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// lvlx128 v125,r0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v125.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// lvlx v10,0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v125,v11,4,3
	_mm_store_ps(ctx.v125.f32, _mm_blend_ps(_mm_load_ps(ctx.v125.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 57), 4));
	// lvlx128 v124,r0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v124.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stw r21,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r21.u32);
	// lvlx v9,0,r27
	temp.u32 = ctx.r27.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v124,v10,4,3
	_mm_store_ps(ctx.v124.f32, _mm_blend_ps(_mm_load_ps(ctx.v124.f32), _mm_permute_ps(_mm_load_ps(ctx.v10.f32), 57), 4));
	// lvlx v8,0,r19
	temp.u32 = ctx.r19.u32;
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v13,v9,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v9.f32), 57), 4));
	// lvlx v7,0,r18
	temp.u32 = ctx.r18.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// lvlx v6,0,r17
	temp.u32 = ctx.r17.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v7,v8,4,3
	_mm_store_ps(ctx.v7.f32, _mm_blend_ps(_mm_load_ps(ctx.v7.f32), _mm_permute_ps(_mm_load_ps(ctx.v8.f32), 57), 4));
	// lvlx v5,0,r16
	temp.u32 = ctx.r16.u32;
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v4,0,r15
	temp.u32 = ctx.r15.u32;
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v5,v6,4,3
	_mm_store_ps(ctx.v5.f32, _mm_blend_ps(_mm_load_ps(ctx.v5.f32), _mm_permute_ps(_mm_load_ps(ctx.v6.f32), 57), 4));
	// lvlx v3,0,r14
	temp.u32 = ctx.r14.u32;
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v127,v13,3,2
	_mm_store_ps(ctx.v127.f32, _mm_blend_ps(_mm_load_ps(ctx.v127.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 3));
	// vrlimi128 v3,v4,4,3
	_mm_store_ps(ctx.v3.f32, _mm_blend_ps(_mm_load_ps(ctx.v3.f32), _mm_permute_ps(_mm_load_ps(ctx.v4.f32), 57), 4));
	// vrlimi128 v126,v7,3,2
	_mm_store_ps(ctx.v126.f32, _mm_blend_ps(_mm_load_ps(ctx.v126.f32), _mm_permute_ps(_mm_load_ps(ctx.v7.f32), 78), 3));
	// vrlimi128 v125,v5,3,2
	_mm_store_ps(ctx.v125.f32, _mm_blend_ps(_mm_load_ps(ctx.v125.f32), _mm_permute_ps(_mm_load_ps(ctx.v5.f32), 78), 3));
	// vrlimi128 v124,v3,3,2
	_mm_store_ps(ctx.v124.f32, _mm_blend_ps(_mm_load_ps(ctx.v124.f32), _mm_permute_ps(_mm_load_ps(ctx.v3.f32), 78), 3));
	// beq cr6,0x8267e1a0
	if (ctx.cr6.eq) goto loc_8267E1A0;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8267e390
	ctx.lr = 0x8267E08C;
	sub_8267E390(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r27,4(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8267e390
	ctx.lr = 0x8267E0A4;
	sub_8267E390(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x8237c6f0
	ctx.lr = 0x8267E0B8;
	sub_8237C6F0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267e0cc
	if (ctx.cr6.eq) goto loc_8267E0CC;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8267e0d0
	if (ctx.cr6.eq) goto loc_8267E0D0;
loc_8267E0CC:
	// twi 31,r0,22
loc_8267E0D0:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x8267e150
	if (!ctx.cr6.eq) goto loc_8267E150;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8221f388
	ctx.lr = 0x8267E0E4;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8267e12c
	if (ctx.cr6.eq) goto loc_8267E12C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r9,r11,25844
	ctx.r9.s64 = ctx.r11.s64 + 25844;
	// li r5,255
	ctx.r5.s64 = 255;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r26,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r26.u32);
	// stw r26,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r26.u32);
	// stw r26,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r26.u32);
	// stb r30,26(r3)
	PPC_STORE_U8(ctx.r3.u32 + 26, ctx.r30.u8);
	// stb r29,25(r3)
	PPC_STORE_U8(ctx.r3.u32 + 25, ctx.r29.u8);
	// stb r28,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r28.u8);
	// stb r5,27(r3)
	PPC_STORE_U8(ctx.r3.u32 + 27, ctx.r5.u8);
	// stb r26,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r26.u8);
	// b 0x8267e130
	goto loc_8267E130;
loc_8267E12C:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_8267E130:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8267e390
	ctx.lr = 0x8267E13C;
	sub_8267E390(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8267e8e0
	ctx.lr = 0x8267E148;
	sub_8267E8E0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8238a848
	ctx.lr = 0x8267E150;
	sub_8238A848(ctx, base);
loc_8267E150:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8267e390
	ctx.lr = 0x8267E15C;
	sub_8267E390(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8267e8e0
	ctx.lr = 0x8267E168;
	sub_8267E8E0(ctx, base);
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8267e200
	if (ctx.cr6.eq) goto loc_8267E200;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x829ff648
	ctx.lr = 0x8267E180;
	sub_829FF648(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r23,r30
	ctx.r23.u64 = ctx.r30.u64;
	// mr r21,r31
	ctx.r21.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r23,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r23.u32);
	// stw r21,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r21.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8267e200
	goto loc_8267E200;
loc_8267E1A0:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8221f388
	ctx.lr = 0x8267E1A8;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8267e1ec
	if (ctx.cr6.eq) goto loc_8267E1EC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r25,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r25.u32);
	// li r6,255
	ctx.r6.s64 = 255;
	// addi r9,r11,25844
	ctx.r9.s64 = ctx.r11.s64 + 25844;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r26,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r26.u32);
	// stw r26,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r26.u32);
	// stw r26,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r26.u32);
	// stb r30,26(r3)
	PPC_STORE_U8(ctx.r3.u32 + 26, ctx.r30.u8);
	// stb r29,25(r3)
	PPC_STORE_U8(ctx.r3.u32 + 25, ctx.r29.u8);
	// stb r28,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r28.u8);
	// stb r6,27(r3)
	PPC_STORE_U8(ctx.r3.u32 + 27, ctx.r6.u8);
	// stb r26,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r26.u8);
	// b 0x8267e1f0
	goto loc_8267E1F0;
loc_8267E1EC:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_8267E1F0:
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x8238a848
	ctx.lr = 0x8267E1F8;
	sub_8238A848(ctx, base);
	// lwz r21,140(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r23,136(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
loc_8267E200:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// vsubfp128 v2,v127,v126
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v2.f32, _mm_sub_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v126.f32)));
	// vaddfp128 v1,v127,v126
	_mm_store_ps(ctx.v1.f32, _mm_add_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v126.f32)));
	// bl 0x82a3a508
	ctx.lr = 0x8267E210;
	sub_82A3A508(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// vsubfp128 v2,v127,v125
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v2.f32, _mm_sub_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v125.f32)));
	// vaddfp128 v1,v127,v125
	_mm_store_ps(ctx.v1.f32, _mm_add_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v125.f32)));
	// bl 0x82a3a508
	ctx.lr = 0x8267E220;
	sub_82A3A508(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// vsubfp128 v2,v127,v124
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v2.f32, _mm_sub_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v124.f32)));
	// vaddfp128 v1,v127,v124
	_mm_store_ps(ctx.v1.f32, _mm_add_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v124.f32)));
	// bl 0x82a3a508
	ctx.lr = 0x8267E230;
	sub_82A3A508(ctx, base);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x8267e310
	if (ctx.cr6.eq) goto loc_8267E310;
	// lwz r11,16(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// lwz r10,12(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 5;
	// cmplwi cr6,r8,1024
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1024, ctx.xer);
	// ble cr6,0x8267e378
	if (!ctx.cr6.gt) goto loc_8267E378;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8267e390
	ctx.lr = 0x8267E25C;
	sub_8267E390(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8267e8e0
	ctx.lr = 0x8267E268;
	sub_8267E8E0(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// beq cr6,0x8267e29c
	if (ctx.cr6.eq) goto loc_8267E29C;
loc_8267E280:
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
	// bne 0x8267e280
	if (!ctx.cr0.eq) goto loc_8267E280;
loc_8267E29C:
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r11,26912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// bl 0x8234a788
	ctx.lr = 0x8267E2BC;
	sub_8234A788(ctx, base);
	// lis r8,-31926
	ctx.r8.s64 = -2092302336;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r8,-21080
	ctx.r3.s64 = ctx.r8.s64 + -21080;
	// addi r31,r1,120
	ctx.r31.s64 = ctx.r1.s64 + 120;
	// bl 0x8267e678
	ctx.lr = 0x8267E2D0;
	sub_8267E678(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824def68
	ctx.lr = 0x8267E2D8;
	sub_824DEF68(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x829ff648
	ctx.lr = 0x8267E2E0;
	sub_829FF648(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x829ff648
	ctx.lr = 0x8267E2E8;
	sub_829FF648(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x829ff648
	ctx.lr = 0x8267E2F0;
	sub_829FF648(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r26,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r26.u32);
	// bl 0x8267e390
	ctx.lr = 0x8267E300;
	sub_8267E390(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8267e9e8
	ctx.lr = 0x8267E30C;
	sub_8267E9E8(ctx, base);
	// b 0x8267e378
	goto loc_8267E378;
loc_8267E310:
	// stw r23,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r23.u32);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// stw r21,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r21.u32);
	// beq cr6,0x8267e33c
	if (ctx.cr6.eq) goto loc_8267E33C;
loc_8267E320:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r21
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r21.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r21
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r21.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8267e320
	if (!ctx.cr0.eq) goto loc_8267E320;
loc_8267E33C:
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r11,26912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// bl 0x8234a788
	ctx.lr = 0x8267E35C;
	sub_8234A788(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x829ff648
	ctx.lr = 0x8267E364;
	sub_829FF648(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x829ff648
	ctx.lr = 0x8267E36C;
	sub_829FF648(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x829ff648
	ctx.lr = 0x8267E374;
	sub_829FF648(ctx, base);
	// stw r26,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r26.u32);
loc_8267E378:
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x829ff648
	ctx.lr = 0x8267E380;
	sub_829FF648(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-160
	ctx.r12.s64 = ctx.r1.s64 + -160;
	// bl 0x830001dc
	ctx.lr = 0x8267E38C;
	sub_830001DC(ctx, base);
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8267E390"))) PPC_WEAK_FUNC(sub_8267E390);
PPC_FUNC_IMPL(__imp__sub_8267E390) {
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
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r31,r11,-21092
	ctx.r31.s64 = ctx.r11.s64 + -21092;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8267ee80
	ctx.lr = 0x8267E3C0;
	sub_8267EE80(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8267e3d4
	if (ctx.cr6.eq) goto loc_8267E3D4;
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8267e3d8
	if (ctx.cr6.eq) goto loc_8267E3D8;
loc_8267E3D4:
	// twi 31,r0,22
loc_8267E3D8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8267e40c
	if (ctx.cr6.eq) goto loc_8267E40C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8267e400
	if (ctx.cr6.lt) goto loc_8267E400;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8267E400:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267e440
	if (ctx.cr6.eq) goto loc_8267E440;
loc_8267E40C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8267ead0
	ctx.lr = 0x8267E430;
	sub_8267EAD0(ctx, base);
	// ld r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8267E440:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8267e44c
	if (!ctx.cr6.eq) goto loc_8267E44C;
	// twi 31,r0,22
loc_8267E44C:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8267e45c
	if (!ctx.cr6.eq) goto loc_8267E45C;
	// twi 31,r0,22
loc_8267E45C:
	// addi r3,r10,16
	ctx.r3.s64 = ctx.r10.s64 + 16;
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

__attribute__((alias("__imp__sub_8267E478"))) PPC_WEAK_FUNC(sub_8267E478);
PPC_FUNC_IMPL(__imp__sub_8267E478) {
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
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r11,-21092
	ctx.r31.s64 = ctx.r11.s64 + -21092;
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
	// bl 0x8267ed70
	ctx.lr = 0x8267E4BC;
	sub_8267ED70(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8221be68
	ctx.lr = 0x8267E4C4;
	sub_8221BE68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8267E4E8"))) PPC_WEAK_FUNC(sub_8267E4E8);
PPC_FUNC_IMPL(__imp__sub_8267E4E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x8267E4F0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r30,r11,-21092
	ctx.r30.s64 = ctx.r11.s64 + -21092;
	// lwz r28,4(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8267e554
	if (!ctx.cr6.eq) goto loc_8267E554;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
loc_8267E518:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x8267e52c
	if (ctx.cr6.lt) goto loc_8267E52C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8267E52C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8267e544
	if (ctx.cr6.eq) goto loc_8267E544;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8267e548
	goto loc_8267E548;
loc_8267E544:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_8267E548:
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8267e518
	if (ctx.cr6.eq) goto loc_8267E518;
loc_8267E554:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// bl 0x8267ee80
	ctx.lr = 0x8267E568;
	sub_8267EE80(ctx, base);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
loc_8267E578:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267e58c
	if (ctx.cr6.eq) goto loc_8267E58C;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8267e590
	if (ctx.cr6.eq) goto loc_8267E590;
loc_8267E58C:
	// twi 31,r0,22
loc_8267E590:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8267e5ac
	if (ctx.cr6.eq) goto loc_8267E5AC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x8273f9d8
	ctx.lr = 0x8267E5A8;
	sub_8273F9D8(ctx, base);
	// b 0x8267e578
	goto loc_8267E578;
loc_8267E5AC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8267ed70
	ctx.lr = 0x8267E5C0;
	sub_8267ED70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_8267E5CC"))) PPC_WEAK_FUNC(sub_8267E5CC);
PPC_FUNC_IMPL(__imp__sub_8267E5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267E5D0"))) PPC_WEAK_FUNC(sub_8267E5D0);
PPC_FUNC_IMPL(__imp__sub_8267E5D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x8267E5D8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-21092
	ctx.r31.s64 = ctx.r11.s64 + -21092;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8267ee80
	ctx.lr = 0x8267E5F8;
	sub_8267EE80(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267e60c
	if (ctx.cr6.eq) goto loc_8267E60C;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8267e610
	if (ctx.cr6.eq) goto loc_8267E610;
loc_8267E60C:
	// twi 31,r0,22
loc_8267E610:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8267e64c
	if (ctx.cr6.eq) goto loc_8267E64C;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8267e638
	if (ctx.cr6.lt) goto loc_8267E638;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8267E638:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8267e64c
	if (!ctx.cr6.eq) goto loc_8267E64C;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// b 0x8267e658
	goto loc_8267E658;
loc_8267E64C:
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
loc_8267E658:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// stw r9,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_8267E674"))) PPC_WEAK_FUNC(sub_8267E674);
PPC_FUNC_IMPL(__imp__sub_8267E674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267E678"))) PPC_WEAK_FUNC(sub_8267E678);
PPC_FUNC_IMPL(__imp__sub_8267E678) {
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
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r31,r11,-21080
	ctx.r31.s64 = ctx.r11.s64 + -21080;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8267f2d0
	ctx.lr = 0x8267E6A8;
	sub_8267F2D0(ctx, base);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8267e6bc
	if (ctx.cr6.eq) goto loc_8267E6BC;
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8267e6c0
	if (ctx.cr6.eq) goto loc_8267E6C0;
loc_8267E6BC:
	// twi 31,r0,22
loc_8267E6C0:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8267e6f8
	if (ctx.cr6.eq) goto loc_8267E6F8;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r7,12(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x8267e6ec
	if (ctx.cr6.lt) goto loc_8267E6EC;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8267E6EC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8267e750
	if (ctx.cr6.eq) goto loc_8267E750;
loc_8267E6F8:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// bl 0x826808a0
	ctx.lr = 0x8267E718;
	sub_826808A0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8267eee8
	ctx.lr = 0x8267E72C;
	sub_8267EEE8(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// ld r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// bl 0x82356698
	ctx.lr = 0x8267E740;
	sub_82356698(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82356698
	ctx.lr = 0x8267E748;
	sub_82356698(ctx, base);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8267E750:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8267e75c
	if (!ctx.cr6.eq) goto loc_8267E75C;
	// twi 31,r0,22
loc_8267E75C:
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8267e76c
	if (!ctx.cr6.eq) goto loc_8267E76C;
	// twi 31,r0,22
loc_8267E76C:
	// addi r3,r9,16
	ctx.r3.s64 = ctx.r9.s64 + 16;
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

__attribute__((alias("__imp__sub_8267E788"))) PPC_WEAK_FUNC(sub_8267E788);
PPC_FUNC_IMPL(__imp__sub_8267E788) {
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
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r11,-21080
	ctx.r31.s64 = ctx.r11.s64 + -21080;
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
	// bl 0x8267f188
	ctx.lr = 0x8267E7CC;
	sub_8267F188(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8221be68
	ctx.lr = 0x8267E7D4;
	sub_8221BE68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8267E7F8"))) PPC_WEAK_FUNC(sub_8267E7F8);
PPC_FUNC_IMPL(__imp__sub_8267E7F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x8267E800;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r30,r11,-21080
	ctx.r30.s64 = ctx.r11.s64 + -21080;
	// lwz r28,4(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lbz r10,33(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8267e864
	if (!ctx.cr6.eq) goto loc_8267E864;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
loc_8267E828:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x8267e83c
	if (ctx.cr6.lt) goto loc_8267E83C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8267E83C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8267e854
	if (ctx.cr6.eq) goto loc_8267E854;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8267e858
	goto loc_8267E858;
loc_8267E854:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_8267E858:
	// lbz r10,33(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8267e828
	if (ctx.cr6.eq) goto loc_8267E828;
loc_8267E864:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// bl 0x8267f2d0
	ctx.lr = 0x8267E878;
	sub_8267F2D0(ctx, base);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
loc_8267E888:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267e89c
	if (ctx.cr6.eq) goto loc_8267E89C;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8267e8a0
	if (ctx.cr6.eq) goto loc_8267E8A0;
loc_8267E89C:
	// twi 31,r0,22
loc_8267E8A0:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8267e8bc
	if (ctx.cr6.eq) goto loc_8267E8BC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82a962b0
	ctx.lr = 0x8267E8B8;
	sub_82A962B0(ctx, base);
	// b 0x8267e888
	goto loc_8267E888;
loc_8267E8BC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8267f188
	ctx.lr = 0x8267E8D0;
	sub_8267F188(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_8267E8DC"))) PPC_WEAK_FUNC(sub_8267E8DC);
PPC_FUNC_IMPL(__imp__sub_8267E8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267E8E0"))) PPC_WEAK_FUNC(sub_8267E8E0);
PPC_FUNC_IMPL(__imp__sub_8267E8E0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8267f5d0
	ctx.lr = 0x8267E90C;
	sub_8267F5D0(ctx, base);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8267e924
	if (ctx.cr6.eq) goto loc_8267E924;
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8267e928
	if (ctx.cr6.eq) goto loc_8267E928;
loc_8267E924:
	// twi 31,r0,22
loc_8267E928:
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8267e95c
	if (ctx.cr6.eq) goto loc_8267E95C;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r7,12(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x8267e950
	if (ctx.cr6.lt) goto loc_8267E950;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8267E950:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8267e9ac
	if (ctx.cr6.eq) goto loc_8267E9AC;
loc_8267E95C:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x8267f338
	ctx.lr = 0x8267E988;
	sub_8267F338(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// ld r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// bl 0x829ff648
	ctx.lr = 0x8267E99C;
	sub_829FF648(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x8267E9A4;
	sub_829FF648(ctx, base);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8267E9AC:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8267e9b8
	if (!ctx.cr6.eq) goto loc_8267E9B8;
	// twi 31,r0,22
loc_8267E9B8:
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8267e9c8
	if (!ctx.cr6.eq) goto loc_8267E9C8;
	// twi 31,r0,22
loc_8267E9C8:
	// addi r3,r9,16
	ctx.r3.s64 = ctx.r9.s64 + 16;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_8267E9E4"))) PPC_WEAK_FUNC(sub_8267E9E4);
PPC_FUNC_IMPL(__imp__sub_8267E9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267E9E8"))) PPC_WEAK_FUNC(sub_8267E9E8);
PPC_FUNC_IMPL(__imp__sub_8267E9E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x8267E9F0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,25(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8267ea54
	if (!ctx.cr6.eq) goto loc_8267EA54;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
loc_8267EA18:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x8267ea2c
	if (ctx.cr6.lt) goto loc_8267EA2C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8267EA2C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8267ea44
	if (ctx.cr6.eq) goto loc_8267EA44;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8267ea48
	goto loc_8267EA48;
loc_8267EA44:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_8267EA48:
	// lbz r10,25(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8267ea18
	if (ctx.cr6.eq) goto loc_8267EA18;
loc_8267EA54:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// bl 0x8267f5d0
	ctx.lr = 0x8267EA68;
	sub_8267F5D0(ctx, base);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
loc_8267EA78:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267ea8c
	if (ctx.cr6.eq) goto loc_8267EA8C;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8267ea90
	if (ctx.cr6.eq) goto loc_8267EA90;
loc_8267EA8C:
	// twi 31,r0,22
loc_8267EA90:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8267eaac
	if (ctx.cr6.eq) goto loc_8267EAAC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x823d4f20
	ctx.lr = 0x8267EAA8;
	sub_823D4F20(ctx, base);
	// b 0x8267ea78
	goto loc_8267EA78;
loc_8267EAAC:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82443110
	ctx.lr = 0x8267EAC0;
	sub_82443110(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_8267EACC"))) PPC_WEAK_FUNC(sub_8267EACC);
PPC_FUNC_IMPL(__imp__sub_8267EACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267EAD0"))) PPC_WEAK_FUNC(sub_8267EAD0);
PPC_FUNC_IMPL(__imp__sub_8267EAD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x8267EAD8;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r31,r11,-21092
	ctx.r31.s64 = ctx.r11.s64 + -21092;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// std r26,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r26.u64);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8267eb2c
	if (!ctx.cr6.eq) goto loc_8267EB2C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8267fbb8
	ctx.lr = 0x8267EB20;
	sub_8267FBB8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_8267EB2C:
	// lwz r28,4(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// beq cr6,0x8267eb48
	if (ctx.cr6.eq) goto loc_8267EB48;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8267eb4c
	if (ctx.cr6.eq) goto loc_8267EB4C;
loc_8267EB48:
	// twi 31,r0,22
loc_8267EB4C:
	// lwz r27,212(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8267eba0
	if (!ctx.cr6.eq) goto loc_8267EBA0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8267eb70
	if (ctx.cr6.lt) goto loc_8267EB70;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8267EB70:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267ed3c
	if (ctx.cr6.eq) goto loc_8267ED3C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8267fbb8
	ctx.lr = 0x8267EB94;
	sub_8267FBB8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_8267EBA0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267ebb0
	if (ctx.cr6.eq) goto loc_8267EBB0;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8267ebb4
	if (ctx.cr6.eq) goto loc_8267EBB4;
loc_8267EBB0:
	// twi 31,r0,22
loc_8267EBB4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r27,r28
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8267ec04
	if (!ctx.cr6.eq) goto loc_8267EC04;
	// lwz r6,8(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8267ebd8
	if (ctx.cr6.lt) goto loc_8267EBD8;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8267EBD8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267ed3c
	if (ctx.cr6.eq) goto loc_8267ED3C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8267fbb8
	ctx.lr = 0x8267EBF8;
	sub_8267FBB8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_8267EC04:
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x8267ec18
	if (ctx.cr6.lt) goto loc_8267EC18;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_8267EC18:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8267ec90
	if (ctx.cr6.eq) goto loc_8267EC90;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r26,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r26.u64);
	// bl 0x8250af60
	ctx.lr = 0x8267EC30;
	sub_8250AF60(ctx, base);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x8267ec4c
	if (ctx.cr6.lt) goto loc_8267EC4C;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_8267EC4C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8267ec8c
	if (ctx.cr6.eq) goto loc_8267EC8C;
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8267ed28
	if (!ctx.cr6.eq) goto loc_8267ED28;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
loc_8267EC78:
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8267fbb8
	ctx.lr = 0x8267EC80;
	sub_8267FBB8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_8267EC8C:
	// lwz r28,4(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_8267EC90:
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8267eca4
	if (ctx.cr6.lt) goto loc_8267ECA4;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8267ECA4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267ed3c
	if (ctx.cr6.eq) goto loc_8267ED3C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r26,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r26.u64);
	// bl 0x8273f9d8
	ctx.lr = 0x8267ECBC;
	sub_8273F9D8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267ecd0
	if (ctx.cr6.eq) goto loc_8267ECD0;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8267ecd4
	if (ctx.cr6.eq) goto loc_8267ECD4;
loc_8267ECD0:
	// twi 31,r0,22
loc_8267ECD4:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8267ed08
	if (ctx.cr6.eq) goto loc_8267ED08;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8267ecfc
	if (ctx.cr6.lt) goto loc_8267ECFC;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8267ECFC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267ed3c
	if (ctx.cr6.eq) goto loc_8267ED3C;
loc_8267ED08:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8267ec78
	if (ctx.cr6.eq) goto loc_8267EC78;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
loc_8267ED28:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8267fbb8
	ctx.lr = 0x8267ED30;
	sub_8267FBB8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_8267ED3C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8267f630
	ctx.lr = 0x8267ED4C;
	sub_8267F630(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_8267ED6C"))) PPC_WEAK_FUNC(sub_8267ED6C);
PPC_FUNC_IMPL(__imp__sub_8267ED6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267ED70"))) PPC_WEAK_FUNC(sub_8267ED70);
PPC_FUNC_IMPL(__imp__sub_8267ED70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x8267ED78;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// std r5,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r5.u64);
	// lwz r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-21092
	ctx.r31.s64 = ctx.r11.s64 + -21092;
	// std r6,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r6.u64);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8267edac
	if (ctx.cr6.eq) goto loc_8267EDAC;
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8267edb0
	if (ctx.cr6.eq) goto loc_8267EDB0;
loc_8267EDAC:
	// twi 31,r0,22
loc_8267EDB0:
	// lwz r8,180(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r28,188(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r29,184(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8267ee28
	if (!ctx.cr6.eq) goto loc_8267EE28;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8267edd4
	if (ctx.cr6.eq) goto loc_8267EDD4;
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8267edd8
	if (ctx.cr6.eq) goto loc_8267EDD8;
loc_8267EDD4:
	// twi 31,r0,22
loc_8267EDD8:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8267ee28
	if (!ctx.cr6.eq) goto loc_8267EE28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82367ae8
	ctx.lr = 0x8267EDEC;
	sub_82367AE8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_8267EE28:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8267ee38
	if (ctx.cr6.eq) goto loc_8267EE38;
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8267ee3c
	if (ctx.cr6.eq) goto loc_8267EE3C;
loc_8267EE38:
	// twi 31,r0,22
loc_8267EE3C:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8267ee70
	if (ctx.cr6.eq) goto loc_8267EE70;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x8273f9d8
	ctx.lr = 0x8267EE54;
	sub_8273F9D8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8267f790
	ctx.lr = 0x8267EE64;
	sub_8267F790(ctx, base);
	// ld r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// lwz r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// b 0x8267ee28
	goto loc_8267EE28;
loc_8267EE70:
	// std r5,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r5.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_8267EE80"))) PPC_WEAK_FUNC(sub_8267EE80);
PPC_FUNC_IMPL(__imp__sub_8267EE80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r8,r11,-21092
	ctx.r8.s64 = ctx.r11.s64 + -21092;
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8267eedc
	if (!ctx.cr6.eq) goto loc_8267EEDC;
	// lwz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
loc_8267EEA0:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x8267eeb4
	if (ctx.cr6.lt) goto loc_8267EEB4;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8267EEB4:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8267eec8
	if (ctx.cr6.eq) goto loc_8267EEC8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8267eed0
	goto loc_8267EED0;
loc_8267EEC8:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8267EED0:
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8267eea0
	if (ctx.cr6.eq) goto loc_8267EEA0;
loc_8267EEDC:
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267EEE8"))) PPC_WEAK_FUNC(sub_8267EEE8);
PPC_FUNC_IMPL(__imp__sub_8267EEE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x8267EEF0;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r31,r11,-21080
	ctx.r31.s64 = ctx.r11.s64 + -21080;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// std r26,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r26.u64);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8267ef44
	if (!ctx.cr6.eq) goto loc_8267EF44;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x826803c0
	ctx.lr = 0x8267EF38;
	sub_826803C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_8267EF44:
	// lwz r28,4(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// beq cr6,0x8267ef60
	if (ctx.cr6.eq) goto loc_8267EF60;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8267ef64
	if (ctx.cr6.eq) goto loc_8267EF64;
loc_8267EF60:
	// twi 31,r0,22
loc_8267EF64:
	// lwz r27,212(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8267efb8
	if (!ctx.cr6.eq) goto loc_8267EFB8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8267ef88
	if (ctx.cr6.lt) goto loc_8267EF88;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8267EF88:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267f154
	if (ctx.cr6.eq) goto loc_8267F154;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826803c0
	ctx.lr = 0x8267EFAC;
	sub_826803C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_8267EFB8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267efc8
	if (ctx.cr6.eq) goto loc_8267EFC8;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8267efcc
	if (ctx.cr6.eq) goto loc_8267EFCC;
loc_8267EFC8:
	// twi 31,r0,22
loc_8267EFCC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r27,r28
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8267f01c
	if (!ctx.cr6.eq) goto loc_8267F01C;
	// lwz r6,8(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8267eff0
	if (ctx.cr6.lt) goto loc_8267EFF0;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8267EFF0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267f154
	if (ctx.cr6.eq) goto loc_8267F154;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826803c0
	ctx.lr = 0x8267F010;
	sub_826803C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_8267F01C:
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x8267f030
	if (ctx.cr6.lt) goto loc_8267F030;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_8267F030:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8267f0a8
	if (ctx.cr6.eq) goto loc_8267F0A8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r26,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r26.u64);
	// bl 0x828836e8
	ctx.lr = 0x8267F048;
	sub_828836E8(ctx, base);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x8267f064
	if (ctx.cr6.lt) goto loc_8267F064;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_8267F064:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8267f0a4
	if (ctx.cr6.eq) goto loc_8267F0A4;
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r10,33(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8267f140
	if (!ctx.cr6.eq) goto loc_8267F140;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
loc_8267F090:
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x826803c0
	ctx.lr = 0x8267F098;
	sub_826803C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_8267F0A4:
	// lwz r28,4(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_8267F0A8:
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8267f0bc
	if (ctx.cr6.lt) goto loc_8267F0BC;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8267F0BC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267f154
	if (ctx.cr6.eq) goto loc_8267F154;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r26,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r26.u64);
	// bl 0x82a962b0
	ctx.lr = 0x8267F0D4;
	sub_82A962B0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267f0e8
	if (ctx.cr6.eq) goto loc_8267F0E8;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8267f0ec
	if (ctx.cr6.eq) goto loc_8267F0EC;
loc_8267F0E8:
	// twi 31,r0,22
loc_8267F0EC:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8267f120
	if (ctx.cr6.eq) goto loc_8267F120;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8267f114
	if (ctx.cr6.lt) goto loc_8267F114;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8267F114:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267f154
	if (ctx.cr6.eq) goto loc_8267F154;
loc_8267F120:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r10,33(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8267f090
	if (ctx.cr6.eq) goto loc_8267F090;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
loc_8267F140:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x826803c0
	ctx.lr = 0x8267F148;
	sub_826803C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_8267F154:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8267fe30
	ctx.lr = 0x8267F164;
	sub_8267FE30(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_8267F184"))) PPC_WEAK_FUNC(sub_8267F184);
PPC_FUNC_IMPL(__imp__sub_8267F184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267F188"))) PPC_WEAK_FUNC(sub_8267F188);
PPC_FUNC_IMPL(__imp__sub_8267F188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x8267F190;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// std r5,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r5.u64);
	// lwz r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r11,-21080
	ctx.r31.s64 = ctx.r11.s64 + -21080;
	// std r6,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r6.u64);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq cr6,0x8267f1c4
	if (ctx.cr6.eq) goto loc_8267F1C4;
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8267f1c8
	if (ctx.cr6.eq) goto loc_8267F1C8;
loc_8267F1C4:
	// twi 31,r0,22
loc_8267F1C8:
	// lwz r8,180(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r29,188(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r30,184(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8267f278
	if (!ctx.cr6.eq) goto loc_8267F278;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8267f1ec
	if (ctx.cr6.eq) goto loc_8267F1EC;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8267f1f0
	if (ctx.cr6.eq) goto loc_8267F1F0;
loc_8267F1EC:
	// twi 31,r0,22
loc_8267F1F0:
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8267f278
	if (!ctx.cr6.eq) goto loc_8267F278;
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// lbz r10,33(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 33);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8267f240
	if (!ctx.cr6.eq) goto loc_8267F240;
loc_8267F20C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82680740
	ctx.lr = 0x8267F218;
	sub_82680740(ctx, base);
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82356698
	ctx.lr = 0x8267F224;
	sub_82356698(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221be68
	ctx.lr = 0x8267F22C;
	sub_8221BE68(ctx, base);
	// lbz r11,33(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 33);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267f20c
	if (ctx.cr6.eq) goto loc_8267F20C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_8267F240:
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_8267F278:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8267f288
	if (ctx.cr6.eq) goto loc_8267F288;
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8267f28c
	if (ctx.cr6.eq) goto loc_8267F28C;
loc_8267F288:
	// twi 31,r0,22
loc_8267F28C:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8267f2c0
	if (ctx.cr6.eq) goto loc_8267F2C0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x82a962b0
	ctx.lr = 0x8267F2A4;
	sub_82A962B0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8267ff90
	ctx.lr = 0x8267F2B4;
	sub_8267FF90(ctx, base);
	// ld r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// lwz r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// b 0x8267f278
	goto loc_8267F278;
loc_8267F2C0:
	// std r5,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r5.u64);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_8267F2D0"))) PPC_WEAK_FUNC(sub_8267F2D0);
PPC_FUNC_IMPL(__imp__sub_8267F2D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r8,r11,-21080
	ctx.r8.s64 = ctx.r11.s64 + -21080;
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lbz r10,33(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8267f32c
	if (!ctx.cr6.eq) goto loc_8267F32C;
	// lwz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
loc_8267F2F0:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x8267f304
	if (ctx.cr6.lt) goto loc_8267F304;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8267F304:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8267f318
	if (ctx.cr6.eq) goto loc_8267F318;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8267f320
	goto loc_8267F320;
loc_8267F318:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8267F320:
	// lbz r10,33(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8267f2f0
	if (ctx.cr6.eq) goto loc_8267F2F0;
loc_8267F32C:
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267F338"))) PPC_WEAK_FUNC(sub_8267F338);
PPC_FUNC_IMPL(__imp__sub_8267F338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8267F340;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// std r31,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r31.u64);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8267f38c
	if (!ctx.cr6.eq) goto loc_8267F38C;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82551330
	ctx.lr = 0x8267F380;
	sub_82551330(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_8267F38C:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// beq cr6,0x8267f3a8
	if (ctx.cr6.eq) goto loc_8267F3A8;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8267f3ac
	if (ctx.cr6.eq) goto loc_8267F3AC;
loc_8267F3A8:
	// twi 31,r0,22
loc_8267F3AC:
	// lwz r27,196(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplw cr6,r27,r9
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8267f400
	if (!ctx.cr6.eq) goto loc_8267F400;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8267f3d0
	if (ctx.cr6.lt) goto loc_8267F3D0;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8267F3D0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267f59c
	if (ctx.cr6.eq) goto loc_8267F59C;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82551330
	ctx.lr = 0x8267F3F4;
	sub_82551330(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_8267F400:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267f410
	if (ctx.cr6.eq) goto loc_8267F410;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8267f414
	if (ctx.cr6.eq) goto loc_8267F414;
loc_8267F410:
	// twi 31,r0,22
loc_8267F414:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8267f464
	if (!ctx.cr6.eq) goto loc_8267F464;
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8267f438
	if (ctx.cr6.lt) goto loc_8267F438;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8267F438:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267f59c
	if (ctx.cr6.eq) goto loc_8267F59C;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82551330
	ctx.lr = 0x8267F458;
	sub_82551330(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_8267F464:
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x8267f478
	if (ctx.cr6.lt) goto loc_8267F478;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_8267F478:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8267f4ec
	if (ctx.cr6.eq) goto loc_8267F4EC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// bl 0x82498700
	ctx.lr = 0x8267F490;
	sub_82498700(ctx, base);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x8267f4ac
	if (ctx.cr6.lt) goto loc_8267F4AC;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_8267F4AC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8267f4ec
	if (ctx.cr6.eq) goto loc_8267F4EC;
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbz r10,25(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8267f588
	if (!ctx.cr6.eq) goto loc_8267F588;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
loc_8267F4D8:
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82551330
	ctx.lr = 0x8267F4E0;
	sub_82551330(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_8267F4EC:
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8267f500
	if (ctx.cr6.lt) goto loc_8267F500;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8267F500:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267f59c
	if (ctx.cr6.eq) goto loc_8267F59C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x823d4f20
	ctx.lr = 0x8267F51C;
	sub_823D4F20(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267f530
	if (ctx.cr6.eq) goto loc_8267F530;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8267f534
	if (ctx.cr6.eq) goto loc_8267F534;
loc_8267F530:
	// twi 31,r0,22
loc_8267F534:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8267f568
	if (ctx.cr6.eq) goto loc_8267F568;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8267f55c
	if (ctx.cr6.lt) goto loc_8267F55C;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8267F55C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267f59c
	if (ctx.cr6.eq) goto loc_8267F59C;
loc_8267F568:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbz r10,25(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8267f4d8
	if (ctx.cr6.eq) goto loc_8267F4D8;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
loc_8267F588:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82551330
	ctx.lr = 0x8267F590;
	sub_82551330(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_8267F59C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8247d6c8
	ctx.lr = 0x8267F5AC;
	sub_8247D6C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r9.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8267F5CC"))) PPC_WEAK_FUNC(sub_8267F5CC);
PPC_FUNC_IMPL(__imp__sub_8267F5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267F5D0"))) PPC_WEAK_FUNC(sub_8267F5D0);
PPC_FUNC_IMPL(__imp__sub_8267F5D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lbz r10,25(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8267f624
	if (!ctx.cr6.eq) goto loc_8267F624;
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
loc_8267F5E8:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x8267f5fc
	if (ctx.cr6.lt) goto loc_8267F5FC;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8267F5FC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8267f610
	if (ctx.cr6.eq) goto loc_8267F610;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8267f618
	goto loc_8267F618;
loc_8267F610:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8267F618:
	// lbz r10,25(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8267f5e8
	if (ctx.cr6.eq) goto loc_8267F5E8;
loc_8267F624:
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8267F630"))) PPC_WEAK_FUNC(sub_8267F630);
PPC_FUNC_IMPL(__imp__sub_8267F630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8267F638;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// li r26,1
	ctx.r26.s64 = 1;
	// addi r28,r11,-21092
	ctx.r28.s64 = ctx.r11.s64 + -21092;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8267f6ac
	if (!ctx.cr6.eq) goto loc_8267F6AC;
	// lwz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
loc_8267F670:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// blt cr6,0x8267f688
	if (ctx.cr6.lt) goto loc_8267F688;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8267F688:
	// clrlwi r30,r10,24
	ctx.r30.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8267f69c
	if (ctx.cr6.eq) goto loc_8267F69C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8267f6a0
	goto loc_8267F6A0;
loc_8267F69C:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_8267F6A0:
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8267f670
	if (ctx.cr6.eq) goto loc_8267F670;
loc_8267F6AC:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267f70c
	if (ctx.cr6.eq) goto loc_8267F70C;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8267f708
	if (!ctx.cr6.eq) goto loc_8267F708;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8267fbb8
	ctx.lr = 0x8267F6E4;
	sub_8267FBB8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r26,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r26.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_8267F708:
	// bl 0x8250af60
	ctx.lr = 0x8267F70C;
	sub_8250AF60(ctx, base);
loc_8267F70C:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8267f728
	if (ctx.cr6.lt) goto loc_8267F728;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8267F728:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267f770
	if (ctx.cr6.eq) goto loc_8267F770;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8267fbb8
	ctx.lr = 0x8267F74C;
	sub_8267FBB8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r26,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r26.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_8267F770:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r10.u8);
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8267F78C"))) PPC_WEAK_FUNC(sub_8267F78C);
PPC_FUNC_IMPL(__imp__sub_8267F78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267F790"))) PPC_WEAK_FUNC(sub_8267F790);
PPC_FUNC_IMPL(__imp__sub_8267F790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x8267F798;
	sub_82CA2BDC(ctx, base);
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
	// lbz r11,21(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267f7f8
	if (ctx.cr6.eq) goto loc_8267F7F8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5600
	ctx.r4.s64 = ctx.r11.s64 + 5600;
	// bl 0x822f2020
	ctx.lr = 0x8267F7C4;
	sub_822F2020(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826c3ef0
	ctx.lr = 0x8267F7D0;
	sub_826C3EF0(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r30,r10,5696
	ctx.r30.s64 = ctx.r10.s64 + 5696;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// bl 0x822f1f00
	ctx.lr = 0x8267F7E4;
	sub_822F1F00(ctx, base);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826c3fa8
	ctx.lr = 0x8267F7F0;
	sub_826C3FA8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82171810
	ctx.lr = 0x8267F7F8;
	sub_82171810(ctx, base);
loc_8267F7F8:
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// bl 0x8273f9d8
	ctx.lr = 0x8267F804;
	sub_8273F9D8(ctx, base);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lbz r11,21(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 21);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267f81c
	if (ctx.cr6.eq) goto loc_8267F81C;
	// lwz r27,8(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// b 0x8267f844
	goto loc_8267F844;
loc_8267F81C:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lbz r9,21(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8267f834
	if (ctx.cr6.eq) goto loc_8267F834;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// b 0x8267f844
	goto loc_8267F844;
loc_8267F834:
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// lwz r27,8(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bne cr6,0x8267f93c
	if (!ctx.cr6.eq) goto loc_8267F93C;
loc_8267F844:
	// lbz r11,21(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 21);
	// lwz r31,4(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8267f858
	if (!ctx.cr6.eq) goto loc_8267F858;
	// stw r31,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r31.u32);
loc_8267F858:
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r28,r11,-21092
	ctx.r28.s64 = ctx.r11.s64 + -21092;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x8267f878
	if (!ctx.cr6.eq) goto loc_8267F878;
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// b 0x8267f890
	goto loc_8267F890;
loc_8267F878:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x8267f88c
	if (!ctx.cr6.eq) goto loc_8267F88C;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// b 0x8267f890
	goto loc_8267F890;
loc_8267F88C:
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
loc_8267F890:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x8267f8e4
	if (!ctx.cr6.eq) goto loc_8267F8E4;
	// lbz r11,21(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 21);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267f8b4
	if (ctx.cr6.eq) goto loc_8267F8B4;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x8267f8dc
	goto loc_8267F8DC;
loc_8267F8B4:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lbz r9,21(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8267f8dc
	if (!ctx.cr6.eq) goto loc_8267F8DC;
loc_8267F8C8:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,21(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8267f8c8
	if (ctx.cr6.eq) goto loc_8267F8C8;
loc_8267F8DC:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8267F8E4:
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x8267f9d8
	if (!ctx.cr6.eq) goto loc_8267F9D8;
	// lbz r11,21(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 21);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267f90c
	if (ctx.cr6.eq) goto loc_8267F90C;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x8267f9d8
	goto loc_8267F9D8;
loc_8267F90C:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lbz r8,21(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8267f934
	if (!ctx.cr6.eq) goto loc_8267F934;
loc_8267F920:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,21(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8267f920
	if (ctx.cr6.eq) goto loc_8267F920;
loc_8267F934:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x8267f9d8
	goto loc_8267F9D8;
loc_8267F93C:
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,8(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8267f95c
	if (!ctx.cr6.eq) goto loc_8267F95C;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x8267f984
	goto loc_8267F984;
loc_8267F95C:
	// lbz r10,21(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 21);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8267f970
	if (!ctx.cr6.eq) goto loc_8267F970;
	// stw r31,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r31.u32);
loc_8267F970:
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r9,8(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
loc_8267F984:
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r28,r10,-21092
	ctx.r28.s64 = ctx.r10.s64 + -21092;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x8267f9a4
	if (!ctx.cr6.eq) goto loc_8267F9A4;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x8267f9c0
	goto loc_8267F9C0;
loc_8267F9A4:
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x8267f9bc
	if (!ctx.cr6.eq) goto loc_8267F9BC;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x8267f9c0
	goto loc_8267F9C0;
loc_8267F9BC:
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
loc_8267F9C0:
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lbz r9,20(r26)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + 20);
	// lbz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// stb r9,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r9.u8);
	// stb r8,20(r26)
	PPC_STORE_U8(ctx.r26.u32 + 20, ctx.r8.u8);
loc_8267F9D8:
	// lbz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 20);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8267fb78
	if (!ctx.cr6.eq) goto loc_8267FB78;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8267fb74
	if (ctx.cr6.eq) goto loc_8267FB74;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8267F9FC:
	// lbz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 20);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8267fb74
	if (!ctx.cr6.eq) goto loc_8267FB74;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8267fab8
	if (!ctx.cr6.eq) goto loc_8267FAB8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8267fa3c
	if (!ctx.cr6.eq) goto loc_8267FA3C;
	// stb r29,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r29.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r30,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82680640
	ctx.lr = 0x8267FA38;
	sub_82680640(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_8267FA3C:
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8267fb0c
	if (!ctx.cr6.eq) goto loc_8267FB0C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8267fa68
	if (!ctx.cr6.eq) goto loc_8267FA68;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// beq cr6,0x8267fb08
	if (ctx.cr6.eq) goto loc_8267FB08;
loc_8267FA68:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8267fa94
	if (!ctx.cr6.eq) goto loc_8267FA94;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r29,20(r10)
	PPC_STORE_U8(ctx.r10.u32 + 20, ctx.r29.u8);
	// stb r30,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r30.u8);
	// bl 0x826806c0
	ctx.lr = 0x8267FA90;
	sub_826806C0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_8267FA94:
	// lbz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r10,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r10.u8);
	// stb r29,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r29.u8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stb r29,20(r9)
	PPC_STORE_U8(ctx.r9.u32 + 20, ctx.r29.u8);
	// bl 0x82680640
	ctx.lr = 0x8267FAB4;
	sub_82680640(ctx, base);
	// b 0x8267fb74
	goto loc_8267FB74;
loc_8267FAB8:
	// lbz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8267fadc
	if (!ctx.cr6.eq) goto loc_8267FADC;
	// stb r29,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r29.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r30,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826806c0
	ctx.lr = 0x8267FAD8;
	sub_826806C0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_8267FADC:
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8267fb0c
	if (!ctx.cr6.eq) goto loc_8267FB0C;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8267fb28
	if (!ctx.cr6.eq) goto loc_8267FB28;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8267fb28
	if (!ctx.cr6.eq) goto loc_8267FB28;
loc_8267FB08:
	// stb r30,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r30.u8);
loc_8267FB0C:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8267f9fc
	if (!ctx.cr6.eq) goto loc_8267F9FC;
	// b 0x8267fb74
	goto loc_8267FB74;
loc_8267FB28:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8267fb54
	if (!ctx.cr6.eq) goto loc_8267FB54;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r29,20(r10)
	PPC_STORE_U8(ctx.r10.u32 + 20, ctx.r29.u8);
	// stb r30,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r30.u8);
	// bl 0x82680640
	ctx.lr = 0x8267FB50;
	sub_82680640(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_8267FB54:
	// lbz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r10,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r10.u8);
	// stb r29,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r29.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r29,20(r9)
	PPC_STORE_U8(ctx.r9.u32 + 20, ctx.r29.u8);
	// bl 0x826806c0
	ctx.lr = 0x8267FB74;
	sub_826806C0(ctx, base);
loc_8267FB74:
	// stb r29,20(r27)
	PPC_STORE_U8(ctx.r27.u32 + 20, ctx.r29.u8);
loc_8267FB78:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8221be68
	ctx.lr = 0x8267FB80;
	sub_8221BE68(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267fba8
	if (ctx.cr6.eq) goto loc_8267FBA8;
	// ld r10,256(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 256);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// std r10,0(r25)
	PPC_STORE_U64(ctx.r25.u32 + 0, ctx.r10.u64);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_8267FBA8:
	// ld r11,256(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 256);
	// std r11,0(r25)
	PPC_STORE_U64(ctx.r25.u32 + 0, ctx.r11.u64);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_8267FBB8"))) PPC_WEAK_FUNC(sub_8267FBB8);
PPC_FUNC_IMPL(__imp__sub_8267FBB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x8267FBC0;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// lis r10,8191
	ctx.r10.s64 = 536805376;
	// addi r30,r11,-21092
	ctx.r30.s64 = ctx.r11.s64 + -21092;
	// ori r9,r10,65534
	ctx.r9.u64 = ctx.r10.u64 | 65534;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8267fc34
	if (ctx.cr6.lt) goto loc_8267FC34;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5552
	ctx.r4.s64 = ctx.r11.s64 + 5552;
	// bl 0x822f2020
	ctx.lr = 0x8267FC00;
	sub_822F2020(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826c3ef0
	ctx.lr = 0x8267FC0C;
	sub_826C3EF0(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r29,r10,5696
	ctx.r29.s64 = ctx.r10.s64 + 5696;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// bl 0x822f1f00
	ctx.lr = 0x8267FC20;
	sub_822F1F00(ctx, base);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826c3fa8
	ctx.lr = 0x8267FC2C;
	sub_826C3FA8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82171810
	ctx.lr = 0x8267FC34;
	sub_82171810(ctx, base);
loc_8267FC34:
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r29,4(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8221f388
	ctx.lr = 0x8267FC40;
	sub_8221F388(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8267fc74
	if (ctx.cr6.eq) goto loc_8267FC74;
	// stw r29,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r29.u32);
	// stw r31,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r31.u32);
	// stw r29,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r29.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r11,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r11.u32);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r10,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r10.u32);
	// stb r25,20(r27)
	PPC_STORE_U8(ctx.r27.u32 + 20, ctx.r25.u8);
	// stb r25,21(r27)
	PPC_STORE_U8(ctx.r27.u32 + 21, ctx.r25.u8);
loc_8267FC74:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// bne cr6,0x8267fca0
	if (!ctx.cr6.eq) goto loc_8267FCA0;
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8267fce0
	goto loc_8267FCE0;
loc_8267FCA0:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267fccc
	if (ctx.cr6.eq) goto loc_8267FCCC;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8267fce4
	if (!ctx.cr6.eq) goto loc_8267FCE4;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// b 0x8267fce4
	goto loc_8267FCE4;
loc_8267FCCC:
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8267fce4
	if (!ctx.cr6.eq) goto loc_8267FCE4;
loc_8267FCE0:
	// stw r27,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
loc_8267FCE4:
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r11,r27,4
	ctx.r11.s64 = ctx.r27.s64 + 4;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// lbz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8267fe0c
	if (!ctx.cr6.eq) goto loc_8267FE0C;
loc_8267FD00:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8267fd88
	if (!ctx.cr6.eq) goto loc_8267FD88;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lbz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8267fd48
	if (!ctx.cr6.eq) goto loc_8267FD48;
	// rotlwi r9,r4,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stb r29,20(r9)
	PPC_STORE_U8(ctx.r9.u32 + 20, ctx.r29.u8);
	// stb r29,20(r10)
	PPC_STORE_U8(ctx.r10.u32 + 20, ctx.r29.u8);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stb r25,20(r7)
	PPC_STORE_U8(ctx.r7.u32 + 20, ctx.r25.u8);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r31,4(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// b 0x8267fdf8
	goto loc_8267FDF8;
loc_8267FD48:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8267fd60
	if (!ctx.cr6.eq) goto loc_8267FD60;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82680640
	ctx.lr = 0x8267FD60;
	sub_82680640(ctx, base);
loc_8267FD60:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r29.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r25,20(r9)
	PPC_STORE_U8(ctx.r9.u32 + 20, ctx.r25.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x826806c0
	ctx.lr = 0x8267FD84;
	sub_826806C0(ctx, base);
	// b 0x8267fdf8
	goto loc_8267FDF8;
loc_8267FD88:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8267fdbc
	if (!ctx.cr6.eq) goto loc_8267FDBC;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r29,20(r9)
	PPC_STORE_U8(ctx.r9.u32 + 20, ctx.r29.u8);
	// stb r29,20(r10)
	PPC_STORE_U8(ctx.r10.u32 + 20, ctx.r29.u8);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stb r25,20(r7)
	PPC_STORE_U8(ctx.r7.u32 + 20, ctx.r25.u8);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r31,4(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// b 0x8267fdf8
	goto loc_8267FDF8;
loc_8267FDBC:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8267fdd4
	if (!ctx.cr6.eq) goto loc_8267FDD4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x826806c0
	ctx.lr = 0x8267FDD4;
	sub_826806C0(ctx, base);
loc_8267FDD4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r29.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r25,20(r9)
	PPC_STORE_U8(ctx.r9.u32 + 20, ctx.r25.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x82680640
	ctx.lr = 0x8267FDF8;
	sub_82680640(ctx, base);
loc_8267FDF8:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lbz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8267fd00
	if (ctx.cr6.eq) goto loc_8267FD00;
loc_8267FE0C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r27,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r27.u32);
	// stw r30,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r30.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r29,20(r10)
	PPC_STORE_U8(ctx.r10.u32 + 20, ctx.r29.u8);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_8267FE2C"))) PPC_WEAK_FUNC(sub_8267FE2C);
PPC_FUNC_IMPL(__imp__sub_8267FE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267FE30"))) PPC_WEAK_FUNC(sub_8267FE30);
PPC_FUNC_IMPL(__imp__sub_8267FE30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x8267FE38;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// li r26,1
	ctx.r26.s64 = 1;
	// addi r28,r11,-21080
	ctx.r28.s64 = ctx.r11.s64 + -21080;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lbz r10,33(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8267feac
	if (!ctx.cr6.eq) goto loc_8267FEAC;
	// lwz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
loc_8267FE70:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// blt cr6,0x8267fe88
	if (ctx.cr6.lt) goto loc_8267FE88;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8267FE88:
	// clrlwi r30,r10,24
	ctx.r30.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8267fe9c
	if (ctx.cr6.eq) goto loc_8267FE9C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8267fea0
	goto loc_8267FEA0;
loc_8267FE9C:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_8267FEA0:
	// lbz r10,33(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8267fe70
	if (ctx.cr6.eq) goto loc_8267FE70;
loc_8267FEAC:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267ff0c
	if (ctx.cr6.eq) goto loc_8267FF0C;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8267ff08
	if (!ctx.cr6.eq) goto loc_8267FF08;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x826803c0
	ctx.lr = 0x8267FEE4;
	sub_826803C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r26,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r26.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_8267FF08:
	// bl 0x828836e8
	ctx.lr = 0x8267FF0C;
	sub_828836E8(ctx, base);
loc_8267FF0C:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8267ff28
	if (ctx.cr6.lt) goto loc_8267FF28;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8267FF28:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267ff70
	if (ctx.cr6.eq) goto loc_8267FF70;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826803c0
	ctx.lr = 0x8267FF4C;
	sub_826803C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r26,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r26.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_8267FF70:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r10.u8);
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8267FF8C"))) PPC_WEAK_FUNC(sub_8267FF8C);
PPC_FUNC_IMPL(__imp__sub_8267FF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8267FF90"))) PPC_WEAK_FUNC(sub_8267FF90);
PPC_FUNC_IMPL(__imp__sub_8267FF90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x8267FF98;
	sub_82CA2BDC(ctx, base);
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
	// lbz r11,33(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 33);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267fff8
	if (ctx.cr6.eq) goto loc_8267FFF8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5600
	ctx.r4.s64 = ctx.r11.s64 + 5600;
	// bl 0x822f2020
	ctx.lr = 0x8267FFC4;
	sub_822F2020(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826c3ef0
	ctx.lr = 0x8267FFD0;
	sub_826C3EF0(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r30,r10,5696
	ctx.r30.s64 = ctx.r10.s64 + 5696;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// bl 0x822f1f00
	ctx.lr = 0x8267FFE4;
	sub_822F1F00(ctx, base);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826c3fa8
	ctx.lr = 0x8267FFF0;
	sub_826C3FA8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82171810
	ctx.lr = 0x8267FFF8;
	sub_82171810(ctx, base);
loc_8267FFF8:
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// bl 0x82a962b0
	ctx.lr = 0x82680004;
	sub_82A962B0(ctx, base);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lbz r11,33(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 33);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268001c
	if (ctx.cr6.eq) goto loc_8268001C;
	// lwz r27,8(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// b 0x82680044
	goto loc_82680044;
loc_8268001C:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lbz r9,33(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82680034
	if (ctx.cr6.eq) goto loc_82680034;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// b 0x82680044
	goto loc_82680044;
loc_82680034:
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// lwz r27,8(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bne cr6,0x8268013c
	if (!ctx.cr6.eq) goto loc_8268013C;
loc_82680044:
	// lbz r11,33(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 33);
	// lwz r31,4(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82680058
	if (!ctx.cr6.eq) goto loc_82680058;
	// stw r31,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r31.u32);
loc_82680058:
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r28,r11,-21080
	ctx.r28.s64 = ctx.r11.s64 + -21080;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82680078
	if (!ctx.cr6.eq) goto loc_82680078;
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// b 0x82680090
	goto loc_82680090;
loc_82680078:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x8268008c
	if (!ctx.cr6.eq) goto loc_8268008C;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// b 0x82680090
	goto loc_82680090;
loc_8268008C:
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
loc_82680090:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x826800e4
	if (!ctx.cr6.eq) goto loc_826800E4;
	// lbz r11,33(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 33);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826800b4
	if (ctx.cr6.eq) goto loc_826800B4;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x826800dc
	goto loc_826800DC;
loc_826800B4:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lbz r9,33(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x826800dc
	if (!ctx.cr6.eq) goto loc_826800DC;
loc_826800C8:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,33(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826800c8
	if (ctx.cr6.eq) goto loc_826800C8;
loc_826800DC:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_826800E4:
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x826801d8
	if (!ctx.cr6.eq) goto loc_826801D8;
	// lbz r11,33(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 33);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268010c
	if (ctx.cr6.eq) goto loc_8268010C;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x826801d8
	goto loc_826801D8;
loc_8268010C:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lbz r8,33(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82680134
	if (!ctx.cr6.eq) goto loc_82680134;
loc_82680120:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,33(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82680120
	if (ctx.cr6.eq) goto loc_82680120;
loc_82680134:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x826801d8
	goto loc_826801D8;
loc_8268013C:
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,8(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8268015c
	if (!ctx.cr6.eq) goto loc_8268015C;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x82680184
	goto loc_82680184;
loc_8268015C:
	// lbz r10,33(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 33);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82680170
	if (!ctx.cr6.eq) goto loc_82680170;
	// stw r31,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r31.u32);
loc_82680170:
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r9,8(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
loc_82680184:
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r28,r10,-21080
	ctx.r28.s64 = ctx.r10.s64 + -21080;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x826801a4
	if (!ctx.cr6.eq) goto loc_826801A4;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x826801c0
	goto loc_826801C0;
loc_826801A4:
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x826801bc
	if (!ctx.cr6.eq) goto loc_826801BC;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x826801c0
	goto loc_826801C0;
loc_826801BC:
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
loc_826801C0:
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lbz r9,32(r26)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + 32);
	// lbz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// stb r9,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r9.u8);
	// stb r8,32(r26)
	PPC_STORE_U8(ctx.r26.u32 + 32, ctx.r8.u8);
loc_826801D8:
	// lbz r11,32(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82680378
	if (!ctx.cr6.eq) goto loc_82680378;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82680374
	if (ctx.cr6.eq) goto loc_82680374;
	// li r30,0
	ctx.r30.s64 = 0;
loc_826801FC:
	// lbz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82680374
	if (!ctx.cr6.eq) goto loc_82680374;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x826802b8
	if (!ctx.cr6.eq) goto loc_826802B8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8268023c
	if (!ctx.cr6.eq) goto loc_8268023C;
	// stb r29,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r29.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r30,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826807a0
	ctx.lr = 0x82680238;
	sub_826807A0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_8268023C:
	// lbz r10,33(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8268030c
	if (!ctx.cr6.eq) goto loc_8268030C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82680268
	if (!ctx.cr6.eq) goto loc_82680268;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// beq cr6,0x82680308
	if (ctx.cr6.eq) goto loc_82680308;
loc_82680268:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82680294
	if (!ctx.cr6.eq) goto loc_82680294;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r29,32(r10)
	PPC_STORE_U8(ctx.r10.u32 + 32, ctx.r29.u8);
	// stb r30,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r30.u8);
	// bl 0x82680820
	ctx.lr = 0x82680290;
	sub_82680820(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82680294:
	// lbz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r10,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r10.u8);
	// stb r29,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r29.u8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stb r29,32(r9)
	PPC_STORE_U8(ctx.r9.u32 + 32, ctx.r29.u8);
	// bl 0x826807a0
	ctx.lr = 0x826802B4;
	sub_826807A0(ctx, base);
	// b 0x82680374
	goto loc_82680374;
loc_826802B8:
	// lbz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826802dc
	if (!ctx.cr6.eq) goto loc_826802DC;
	// stb r29,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r29.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r30,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82680820
	ctx.lr = 0x826802D8;
	sub_82680820(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_826802DC:
	// lbz r10,33(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8268030c
	if (!ctx.cr6.eq) goto loc_8268030C;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82680328
	if (!ctx.cr6.eq) goto loc_82680328;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82680328
	if (!ctx.cr6.eq) goto loc_82680328;
loc_82680308:
	// stb r30,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r30.u8);
loc_8268030C:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x826801fc
	if (!ctx.cr6.eq) goto loc_826801FC;
	// b 0x82680374
	goto loc_82680374;
loc_82680328:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82680354
	if (!ctx.cr6.eq) goto loc_82680354;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r29,32(r10)
	PPC_STORE_U8(ctx.r10.u32 + 32, ctx.r29.u8);
	// stb r30,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r30.u8);
	// bl 0x826807a0
	ctx.lr = 0x82680350;
	sub_826807A0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82680354:
	// lbz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r10,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r10.u8);
	// stb r29,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r29.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r29,32(r9)
	PPC_STORE_U8(ctx.r9.u32 + 32, ctx.r29.u8);
	// bl 0x82680820
	ctx.lr = 0x82680374;
	sub_82680820(ctx, base);
loc_82680374:
	// stb r29,32(r27)
	PPC_STORE_U8(ctx.r27.u32 + 32, ctx.r29.u8);
loc_82680378:
	// addi r3,r26,16
	ctx.r3.s64 = ctx.r26.s64 + 16;
	// bl 0x82356698
	ctx.lr = 0x82680380;
	sub_82356698(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8221be68
	ctx.lr = 0x82680388;
	sub_8221BE68(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826803b0
	if (ctx.cr6.eq) goto loc_826803B0;
	// ld r10,256(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 256);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// std r10,0(r25)
	PPC_STORE_U64(ctx.r25.u32 + 0, ctx.r10.u64);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_826803B0:
	// ld r11,256(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 256);
	// std r11,0(r25)
	PPC_STORE_U64(ctx.r25.u32 + 0, ctx.r11.u64);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_826803C0"))) PPC_WEAK_FUNC(sub_826803C0);
PPC_FUNC_IMPL(__imp__sub_826803C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x826803C8;
	sub_82CA2BD8(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// lis r10,3276
	ctx.r10.s64 = 214695936;
	// addi r30,r11,-21080
	ctx.r30.s64 = ctx.r11.s64 + -21080;
	// ori r9,r10,52427
	ctx.r9.u64 = ctx.r10.u64 | 52427;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8268043c
	if (ctx.cr6.lt) goto loc_8268043C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5552
	ctx.r4.s64 = ctx.r11.s64 + 5552;
	// bl 0x822f2020
	ctx.lr = 0x82680408;
	sub_822F2020(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826c3ef0
	ctx.lr = 0x82680414;
	sub_826C3EF0(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r29,r10,5696
	ctx.r29.s64 = ctx.r10.s64 + 5696;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// bl 0x822f1f00
	ctx.lr = 0x82680428;
	sub_822F1F00(ctx, base);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826c3fa8
	ctx.lr = 0x82680434;
	sub_826C3FA8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82171810
	ctx.lr = 0x8268043C;
	sub_82171810(ctx, base);
loc_8268043C:
	// li r3,36
	ctx.r3.s64 = 36;
	// lwz r29,4(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8221f388
	ctx.lr = 0x82680448;
	sub_8221F388(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82680484
	if (ctx.cr6.eq) goto loc_82680484;
	// addi r11,r28,12
	ctx.r11.s64 = ctx.r28.s64 + 12;
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// addi r4,r27,4
	ctx.r4.s64 = ctx.r27.s64 + 4;
	// stw r29,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r29.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r11,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r11.u32);
	// bl 0x826808a0
	ctx.lr = 0x8268047C;
	sub_826808A0(ctx, base);
	// stb r25,32(r28)
	PPC_STORE_U8(ctx.r28.u32 + 32, ctx.r25.u8);
	// stb r25,33(r28)
	PPC_STORE_U8(ctx.r28.u32 + 33, ctx.r25.u8);
loc_82680484:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// bne cr6,0x826804b0
	if (!ctx.cr6.eq) goto loc_826804B0;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x826804f0
	goto loc_826804F0;
loc_826804B0:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826804dc
	if (ctx.cr6.eq) goto loc_826804DC;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x826804f4
	if (!ctx.cr6.eq) goto loc_826804F4;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// b 0x826804f4
	goto loc_826804F4;
loc_826804DC:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x826804f4
	if (!ctx.cr6.eq) goto loc_826804F4;
loc_826804F0:
	// stw r28,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
loc_826804F4:
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// lbz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8268061c
	if (!ctx.cr6.eq) goto loc_8268061C;
loc_82680510:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82680598
	if (!ctx.cr6.eq) goto loc_82680598;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lbz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82680558
	if (!ctx.cr6.eq) goto loc_82680558;
	// rotlwi r9,r4,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stb r29,32(r9)
	PPC_STORE_U8(ctx.r9.u32 + 32, ctx.r29.u8);
	// stb r29,32(r10)
	PPC_STORE_U8(ctx.r10.u32 + 32, ctx.r29.u8);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stb r25,32(r7)
	PPC_STORE_U8(ctx.r7.u32 + 32, ctx.r25.u8);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r31,4(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// b 0x82680608
	goto loc_82680608;
loc_82680558:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82680570
	if (!ctx.cr6.eq) goto loc_82680570;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x826807a0
	ctx.lr = 0x82680570;
	sub_826807A0(ctx, base);
loc_82680570:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r29.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r25,32(r9)
	PPC_STORE_U8(ctx.r9.u32 + 32, ctx.r25.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x82680820
	ctx.lr = 0x82680594;
	sub_82680820(ctx, base);
	// b 0x82680608
	goto loc_82680608;
loc_82680598:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x826805cc
	if (!ctx.cr6.eq) goto loc_826805CC;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r29,32(r9)
	PPC_STORE_U8(ctx.r9.u32 + 32, ctx.r29.u8);
	// stb r29,32(r10)
	PPC_STORE_U8(ctx.r10.u32 + 32, ctx.r29.u8);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stb r25,32(r7)
	PPC_STORE_U8(ctx.r7.u32 + 32, ctx.r25.u8);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r31,4(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// b 0x82680608
	goto loc_82680608;
loc_826805CC:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x826805e4
	if (!ctx.cr6.eq) goto loc_826805E4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82680820
	ctx.lr = 0x826805E4;
	sub_82680820(ctx, base);
loc_826805E4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r29.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r25,32(r9)
	PPC_STORE_U8(ctx.r9.u32 + 32, ctx.r25.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x826807a0
	ctx.lr = 0x82680608;
	sub_826807A0(ctx, base);
loc_82680608:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lbz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82680510
	if (ctx.cr6.eq) goto loc_82680510;
loc_8268061C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r28,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r28.u32);
	// stw r30,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r30.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r29,32(r10)
	PPC_STORE_U8(ctx.r10.u32 + 32, ctx.r29.u8);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_8268063C"))) PPC_WEAK_FUNC(sub_8268063C);
PPC_FUNC_IMPL(__imp__sub_8268063C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82680640"))) PPC_WEAK_FUNC(sub_82680640);
PPC_FUNC_IMPL(__imp__sub_82680640) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,21(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 21);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82680660
	if (!ctx.cr6.eq) goto loc_82680660;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_82680660:
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r8,r10,-21092
	ctx.r8.s64 = ctx.r10.s64 + -21092;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82680690
	if (!ctx.cr6.eq) goto loc_82680690;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82680690:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x826806b0
	if (!ctx.cr6.eq) goto loc_826806B0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_826806B0:
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826806C0"))) PPC_WEAK_FUNC(sub_826806C0);
PPC_FUNC_IMPL(__imp__sub_826806C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,21(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 21);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x826806e0
	if (!ctx.cr6.eq) goto loc_826806E0;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_826806E0:
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r8,r10,-21092
	ctx.r8.s64 = ctx.r10.s64 + -21092;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82680710
	if (!ctx.cr6.eq) goto loc_82680710;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82680710:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82680730
	if (!ctx.cr6.eq) goto loc_82680730;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82680730:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82680740"))) PPC_WEAK_FUNC(sub_82680740);
PPC_FUNC_IMPL(__imp__sub_82680740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82680748;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// lbz r11,33(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 33);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82680794
	if (!ctx.cr6.eq) goto loc_82680794;
loc_82680764:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82680740
	ctx.lr = 0x82680770;
	sub_82680740(ctx, base);
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82356698
	ctx.lr = 0x8268077C;
	sub_82356698(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221be68
	ctx.lr = 0x82680784;
	sub_8221BE68(ctx, base);
	// lbz r11,33(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 33);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82680764
	if (ctx.cr6.eq) goto loc_82680764;
loc_82680794:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_8268079C"))) PPC_WEAK_FUNC(sub_8268079C);
PPC_FUNC_IMPL(__imp__sub_8268079C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826807A0"))) PPC_WEAK_FUNC(sub_826807A0);
PPC_FUNC_IMPL(__imp__sub_826807A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,33(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 33);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x826807c0
	if (!ctx.cr6.eq) goto loc_826807C0;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_826807C0:
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r8,r10,-21080
	ctx.r8.s64 = ctx.r10.s64 + -21080;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x826807f0
	if (!ctx.cr6.eq) goto loc_826807F0;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_826807F0:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82680810
	if (!ctx.cr6.eq) goto loc_82680810;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82680810:
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82680820"))) PPC_WEAK_FUNC(sub_82680820);
PPC_FUNC_IMPL(__imp__sub_82680820) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,33(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 33);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82680840
	if (!ctx.cr6.eq) goto loc_82680840;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_82680840:
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r8,r10,-21080
	ctx.r8.s64 = ctx.r10.s64 + -21080;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82680870
	if (!ctx.cr6.eq) goto loc_82680870;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82680870:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82680890
	if (!ctx.cr6.eq) goto loc_82680890;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82680890:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826808A0"))) PPC_WEAK_FUNC(sub_826808A0);
PPC_FUNC_IMPL(__imp__sub_826808A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x826808A8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// stw r30,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r30.u32);
	// srawi. r4,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x826808e0
	if (!ctx.cr0.eq) goto loc_826808E0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x826808e8
	goto loc_826808E8;
loc_826808E0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827dfe60
	ctx.lr = 0x826808E8;
	sub_827DFE60(ctx, base);
loc_826808E8:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268096c
	if (ctx.cr6.eq) goto loc_8268096C;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// beq cr6,0x82680968
	if (ctx.cr6.eq) goto loc_82680968;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8268091C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82680958
	if (ctx.cr6.eq) goto loc_82680958;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// beq cr6,0x82680958
	if (ctx.cr6.eq) goto loc_82680958;
loc_8268093C:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r7,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r7.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stwcx. r7,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8268093c
	if (!ctx.cr0.eq) goto loc_8268093C;
loc_82680958:
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8268091c
	if (!ctx.cr6.eq) goto loc_8268091C;
loc_82680968:
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
loc_8268096C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82680978"))) PPC_WEAK_FUNC(sub_82680978);
PPC_FUNC_IMPL(__imp__sub_82680978) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-23248
	ctx.r9.s64 = ctx.r11.s64 + -23248;
	// lis r6,-31927
	ctx.r6.s64 = -2092367872;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r8,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r7,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r7.u32);
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lbz r3,27399(r6)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r6.u32 + 27399);
	// stw r5,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r5.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// bne cr6,0x82680a40
	if (!ctx.cr6.eq) goto loc_82680A40;
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// lis r5,-31927
	ctx.r5.s64 = -2092367872;
	// addi r9,r9,27424
	ctx.r9.s64 = ctx.r9.s64 + 27424;
	// addi r7,r11,-24024
	ctx.r7.s64 = ctx.r11.s64 + -24024;
	// li r8,6
	ctx.r8.s64 = 6;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// stw r8,27420(r5)
	PPC_STORE_U32(ctx.r5.u32 + 27420, ctx.r8.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_82680A0C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// blt cr6,0x82680a20
	if (ctx.cr6.lt) goto loc_82680A20;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82680A20:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r8,r7,96
	ctx.r8.s64 = ctx.r7.s64 + 96;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// blt cr6,0x82680a0c
	if (ctx.cr6.lt) goto loc_82680A0C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,27399(r6)
	PPC_STORE_U8(ctx.r6.u32 + 27399, ctx.r11.u8);
loc_82680A40:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82680bc0
	ctx.lr = 0x82680A48;
	sub_82680BC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82680da0
	ctx.lr = 0x82680A50;
	sub_82680DA0(ctx, base);
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

__attribute__((alias("__imp__sub_82680A64"))) PPC_WEAK_FUNC(sub_82680A64);
PPC_FUNC_IMPL(__imp__sub_82680A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82680A68"))) PPC_WEAK_FUNC(sub_82680A68);
PPC_FUNC_IMPL(__imp__sub_82680A68) {
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
	// bl 0x82680ab8
	ctx.lr = 0x82680A88;
	sub_82680AB8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82680aa0
	if (ctx.cr6.eq) goto loc_82680AA0;
	// bl 0x8221be68
	ctx.lr = 0x82680A9C;
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82680AA0:
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

__attribute__((alias("__imp__sub_82680AB8"))) PPC_WEAK_FUNC(sub_82680AB8);
PPC_FUNC_IMPL(__imp__sub_82680AB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82680AC0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r9,r10,-23248
	ctx.r9.s64 = ctx.r10.s64 + -23248;
	// lwz r11,27420(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27420);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82680b80
	if (!ctx.cr6.gt) goto loc_82680B80;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_82680AF0:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r7,r9,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi. r4,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82680b74
	if (ctx.cr0.eq) goto loc_82680B74;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_82680B14:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r11,r7,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82680b48
	if (ctx.cr6.eq) goto loc_82680B48;
loc_82680B2C:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// bne cr6,0x82680b2c
	if (!ctx.cr6.eq) goto loc_82680B2C;
loc_82680B48:
	// stwx r31,r7,r10
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r31.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r4,r7,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r7.s64;
	// srawi r3,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 2;
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x82680b14
	if (ctx.cr6.lt) goto loc_82680B14;
loc_82680B74:
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bne 0x82680af0
	if (!ctx.cr0.eq) goto loc_82680AF0;
loc_82680B80:
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// bl 0x828846e0
	ctx.lr = 0x82680B88;
	sub_828846E0(ctx, base);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r29,r30,4
	ctx.r29.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82680b9c
	if (ctx.cr6.eq) goto loc_82680B9C;
	// bl 0x8221be68
	ctx.lr = 0x82680B9C;
	sub_8221BE68(ctx, base);
loc_82680B9C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// addi r10,r11,-1124
	ctx.r10.s64 = ctx.r11.s64 + -1124;
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82680BBC"))) PPC_WEAK_FUNC(sub_82680BBC);
PPC_FUNC_IMPL(__imp__sub_82680BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82680BC0"))) PPC_WEAK_FUNC(sub_82680BC0);
PPC_FUNC_IMPL(__imp__sub_82680BC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd0
	ctx.lr = 0x82680BC8;
	sub_82CA2BD0(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r24,-31927
	ctx.r24.s64 = -2092367872;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// lwz r4,27420(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 27420);
	// bl 0x82680fc0
	ctx.lr = 0x82680BFC;
	sub_82680FC0(ctx, base);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// lwz r4,27420(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 27420);
	// bl 0x826810a0
	ctx.lr = 0x82680C18;
	sub_826810A0(ctx, base);
	// lwz r11,27420(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 27420);
	// mr r23,r27
	ctx.r23.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82680d98
	if (!ctx.cr6.gt) goto loc_82680D98;
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// li r25,-1
	ctx.r25.s64 = -1;
	// li r26,1
	ctx.r26.s64 = 1;
	// addi r22,r11,-24024
	ctx.r22.s64 = ctx.r11.s64 + -24024;
loc_82680C40:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r28,r29,r22
	ctx.r28.u64 = ctx.r29.u64 + ctx.r22.u64;
	// lwzx r10,r29,r22
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r22.u32);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// stw r27,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r27.u32);
	// bne cr6,0x82680c9c
	if (!ctx.cr6.eq) goto loc_82680C9C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,1
	ctx.r4.s64 = 1;
	// stwx r25,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r25.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r26,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r26.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r26,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r26.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r8,r30,r11
	ctx.r8.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r25,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r25.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82680f10
	ctx.lr = 0x82680C98;
	sub_82680F10(ctx, base);
	// b 0x82680d80
	goto loc_82680D80;
loc_82680C9C:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r31,36
	ctx.r11.s64 = ctx.r31.s64 + 36;
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// add r6,r30,r9
	ctx.r6.u64 = ctx.r30.u64 + ctx.r9.u64;
	// subf r5,r7,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r7.s64;
	// divw r4,r5,r10
	ctx.r4.s32 = ctx.r5.s32 / ctx.r10.s32;
	// stw r4,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r4.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// subf r6,r8,r3
	ctx.r6.s64 = ctx.r3.s64 - ctx.r8.s64;
	// add r7,r30,r9
	ctx.r7.u64 = ctx.r30.u64 + ctx.r9.u64;
	// divw r5,r6,r10
	ctx.r5.s32 = ctx.r6.s32 / ctx.r10.s32;
	// stw r5,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r5.u32);
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r3,r30,r9
	ctx.r3.u64 = ctx.r30.u64 + ctx.r9.u64;
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// subf r6,r4,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r4.s64;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mullw r7,r8,r10
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82680d14
	if (!ctx.cr6.lt) goto loc_82680D14;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r9,r30,r9
	ctx.r9.u64 = ctx.r30.u64 + ctx.r9.u64;
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
loc_82680D14:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r9,r30,r9
	ctx.r9.u64 = ctx.r30.u64 + ctx.r9.u64;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mullw r4,r10,r5
	ctx.r4.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// cmpw cr6,r4,r6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82680d44
	if (!ctx.cr6.lt) goto loc_82680D44;
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
loc_82680D44:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r3,r29,r10
	ctx.r3.u64 = ctx.r29.u64 + ctx.r10.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r4,r10,r9
	ctx.r4.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// bl 0x82680f10
	ctx.lr = 0x82680D64;
	sub_82680F10(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r7,4(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// add r8,r30,r11
	ctx.r8.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r7,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r7.u32);
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r5,r30,r6
	PPC_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r5.u32);
loc_82680D80:
	// lwz r11,27420(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 27420);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82680c40
	if (ctx.cr6.lt) goto loc_82680C40;
loc_82680D98:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c20
	// ERROR 82CA2C20
	return;
}

__attribute__((alias("__imp__sub_82680DA0"))) PPC_WEAK_FUNC(sub_82680DA0);
PPC_FUNC_IMPL(__imp__sub_82680DA0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82680DA8;
	sub_82CA2BE0(ctx, base);
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r27,27420(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27420);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x82680e9c
	if (!ctx.cr6.gt) goto loc_82680E9C;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
loc_82680DC4:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82680de0
	if (!ctx.cr6.eq) goto loc_82680DE0;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x82680e04
	goto loc_82680E04;
loc_82680DE0:
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// addi r10,r3,36
	ctx.r10.s64 = ctx.r3.s64 + 36;
	// lwz r8,36(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r7,48(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r5,40(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// subf r4,r8,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r8.s64;
	// subf r10,r5,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r5.s64;
	// divw r30,r4,r11
	ctx.r30.s32 = ctx.r4.s32 / ctx.r11.s32;
	// divw r29,r10,r11
	ctx.r29.s32 = ctx.r10.s32 / ctx.r11.s32;
loc_82680E04:
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82680e8c
	if (!ctx.cr6.gt) goto loc_82680E8C;
loc_82680E10:
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82680e80
	if (!ctx.cr6.gt) goto loc_82680E80;
	// rlwinm r4,r28,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
loc_82680E20:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mullw r11,r7,r5
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r5.s32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82680e70
	if (ctx.cr6.eq) goto loc_82680E70;
loc_82680E50:
	// lwz r26,0(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stb r6,80(r26)
	PPC_STORE_U8(ctx.r26.u32 + 80, ctx.r6.u8);
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// bne cr6,0x82680e50
	if (!ctx.cr6.eq) goto loc_82680E50;
loc_82680E70:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwx r6,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r6.u32);
	// cmpw cr6,r8,r30
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x82680e20
	if (ctx.cr6.lt) goto loc_82680E20;
loc_82680E80:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmpw cr6,r5,r29
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x82680e10
	if (ctx.cr6.lt) goto loc_82680E10;
loc_82680E8C:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x82680dc4
	if (ctx.cr6.lt) goto loc_82680DC4;
loc_82680E9C:
	// stw r6,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r6.u32);
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82680EA4"))) PPC_WEAK_FUNC(sub_82680EA4);
PPC_FUNC_IMPL(__imp__sub_82680EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82680EA8"))) PPC_WEAK_FUNC(sub_82680EA8);
PPC_FUNC_IMPL(__imp__sub_82680EA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82680ebc
	if (ctx.cr6.eq) goto loc_82680EBC;
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_82680EBC:
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82680ee4
	if (ctx.cr6.eq) goto loc_82680EE4;
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// stw r11,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r11.u32);
	// blr 
	return;
loc_82680EE4:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82680ef8
	if (!ctx.cr6.eq) goto loc_82680EF8;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_82680EF8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// stw r11,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82680F0C"))) PPC_WEAK_FUNC(sub_82680F0C);
PPC_FUNC_IMPL(__imp__sub_82680F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82680F10"))) PPC_WEAK_FUNC(sub_82680F10);
PPC_FUNC_IMPL(__imp__sub_82680F10) {
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r8,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r4,r8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82680f70
	if (!ctx.cr6.gt) goto loc_82680F70;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// subf r5,r7,r4
	ctx.r5.s64 = ctx.r4.s64 - ctx.r7.s64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82681838
	ctx.lr = 0x82680F60;
	sub_82681838(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82680F70:
	// bge cr6,0x82680fac
	if (!ctx.cr6.lt) goto loc_82680FAC;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// ld r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826817c0
	ctx.lr = 0x82680FAC;
	sub_826817C0(ctx, base);
loc_82680FAC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82680FBC"))) PPC_WEAK_FUNC(sub_82680FBC);
PPC_FUNC_IMPL(__imp__sub_82680FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82680FC0"))) PPC_WEAK_FUNC(sub_82680FC0);
PPC_FUNC_IMPL(__imp__sub_82680FC0) {
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
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r8,20
	ctx.r8.s64 = 20;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// subf r10,r9,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r10,r10,r8
	ctx.r10.s32 = ctx.r10.s32 / ctx.r8.s32;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82681014
	if (!ctx.cr6.gt) goto loc_82681014;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// subf r5,r10,r4
	ctx.r5.s64 = ctx.r4.s64 - ctx.r10.s64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82681188
	ctx.lr = 0x82681004;
	sub_82681188(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82681014:
	// bge cr6,0x8268108c
	if (!ctx.cr6.lt) goto loc_8268108C;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8268108c
	if (ctx.cr6.eq) goto loc_8268108C;
	// subf r10,r11,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r11.s64;
	// cmplw cr6,r11,r11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r11.u32, ctx.xer);
	// divw r10,r10,r8
	ctx.r10.s32 = ctx.r10.s32 / ctx.r8.s32;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// beq cr6,0x82681088
	if (ctx.cr6.eq) goto loc_82681088;
	// subf r6,r11,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r11.s64;
loc_82681058:
	// add r9,r6,r8
	ctx.r9.u64 = ctx.r6.u64 + ctx.r8.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82681068:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82681068
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82681068;
	// addi r8,r8,20
	ctx.r8.s64 = ctx.r8.s64 + 20;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82681058
	if (!ctx.cr6.eq) goto loc_82681058;
loc_82681088:
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
loc_8268108C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268109C"))) PPC_WEAK_FUNC(sub_8268109C);
PPC_FUNC_IMPL(__imp__sub_8268109C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826810A0"))) PPC_WEAK_FUNC(sub_826810A0);
PPC_FUNC_IMPL(__imp__sub_826810A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x826810A8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r31,8(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// subf r11,r10,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r10.s64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x826810ec
	if (!ctx.cr6.gt) goto loc_826810EC;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// subf r5,r11,r4
	ctx.r5.s64 = ctx.r4.s64 - ctx.r11.s64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82681488
	ctx.lr = 0x826810E4;
	sub_82681488(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_826810EC:
	// bge cr6,0x8268117c
	if (!ctx.cr6.lt) goto loc_8268117C;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8268117c
	if (ctx.cr6.eq) goto loc_8268117C;
	// subf r10,r31,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r31.s64;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// srawi r9,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	// cmplw cr6,r31,r31
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r31.u32, ctx.xer);
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq cr6,0x82681138
	if (ctx.cr6.eq) goto loc_82681138;
	// subf r29,r31,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r31.s64;
loc_82681120:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r3,r29,r30
	ctx.r3.u64 = ctx.r29.u64 + ctx.r30.u64;
	// bl 0x82681d10
	ctx.lr = 0x8268112C;
	sub_82681D10(ctx, base);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82681120
	if (!ctx.cr6.eq) goto loc_82681120;
loc_82681138:
	// lwz r29,8(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplw cr6,r27,r29
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82681178
	if (ctx.cr6.eq) goto loc_82681178;
	// addi r31,r27,4
	ctx.r31.s64 = ctx.r27.s64 + 4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8268114C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8268115c
	if (ctx.cr6.eq) goto loc_8268115C;
	// bl 0x8221be68
	ctx.lr = 0x8268115C;
	sub_8221BE68(ctx, base);
loc_8268115C:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8268114c
	if (!ctx.cr6.eq) goto loc_8268114C;
loc_82681178:
	// stw r27,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r27.u32);
loc_8268117C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82681184"))) PPC_WEAK_FUNC(sub_82681184);
PPC_FUNC_IMPL(__imp__sub_82681184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82681188"))) PPC_WEAK_FUNC(sub_82681188);
PPC_FUNC_IMPL(__imp__sub_82681188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bcc
	ctx.lr = 0x82681190;
	sub_82CA2BCC(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r25,0(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r24,4(r6)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r23,8(r6)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// li r26,20
	ctx.r26.s64 = 20;
	// lwz r22,12(r6)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// lwz r21,16(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// std r4,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r4.u64);
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
	// stw r21,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r21.u32);
	// bne cr6,0x826811e0
	if (!ctx.cr6.eq) goto loc_826811E0;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x826811ec
	goto loc_826811EC;
loc_826811E0:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r9,r9,r26
	ctx.r9.s32 = ctx.r9.s32 / ctx.r26.s32;
loc_826811EC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8268147c
	if (ctx.cr6.eq) goto loc_8268147C;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,3276
	ctx.r10.s64 = 214695936;
	// subf r8,r11,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r11.s64;
	// ori r10,r10,52428
	ctx.r10.u64 = ctx.r10.u64 | 52428;
	// divw r11,r8,r26
	ctx.r11.s32 = ctx.r8.s32 / ctx.r26.s32;
	// subf r7,r11,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r7,r30
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82681220
	if (!ctx.cr6.lt) goto loc_82681220;
	// bl 0x82a97648
	ctx.lr = 0x82681218;
	sub_82A97648(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c1c
	// ERROR 82CA2C1C
	return;
loc_82681220:
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82681324
	if (!ctx.cr6.lt) goto loc_82681324;
	// rlwinm r11,r9,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// li r28,0
	ctx.r28.s64 = 0;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82681244
	if (ctx.cr6.lt) goto loc_82681244;
	// add r28,r11,r9
	ctx.r28.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_82681244:
	// cmplw cr6,r28,r8
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82681250
	if (!ctx.cr6.lt) goto loc_82681250;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
loc_82681250:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8273fa80
	ctx.lr = 0x8268125C;
	sub_8273FA80(ctx, base);
	// lwz r27,236(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82681cb0
	ctx.lr = 0x82681278;
	sub_82681CB0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826812b0
	if (ctx.cr6.eq) goto loc_826812B0;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
loc_8268128C:
	// addic. r9,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r9.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x826812a8
	if (ctx.cr0.eq) goto loc_826812A8;
	// stw r25,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r25.u32);
	// stw r24,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r24.u32);
	// stw r23,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// stw r22,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r22.u32);
	// stw r21,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r21.u32);
loc_826812A8:
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// bdnz 0x8268128c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8268128C;
loc_826812B0:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82681cb0
	ctx.lr = 0x826812D0;
	sub_82681CB0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// subf r9,r3,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r3.s64;
	// divw r11,r9,r26
	ctx.r11.s32 = ctx.r9.s32 / ctx.r26.s32;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// beq cr6,0x826812f0
	if (ctx.cr6.eq) goto loc_826812F0;
	// bl 0x8221be68
	ctx.lr = 0x826812F0;
	sub_8221BE68(ctx, base);
loc_826812F0:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
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
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c1c
	// ERROR 82CA2C1C
	return;
loc_82681324:
	// lwz r29,236(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r29,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r29.s64;
	// divw r10,r11,r26
	ctx.r10.s32 = ctx.r11.s32 / ctx.r26.s32;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bge cr6,0x826813e4
	if (!ctx.cr6.lt) goto loc_826813E4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r6,r28,r29
	ctx.r6.u64 = ctx.r28.u64 + ctx.r29.u64;
	// bl 0x82681cb0
	ctx.lr = 0x82681354;
	sub_82681CB0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r29,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r29.s64;
	// divw r9,r10,r26
	ctx.r9.s32 = ctx.r10.s32 / ctx.r26.s32;
	// subf. r10,r9,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82681390
	if (ctx.cr0.eq) goto loc_82681390;
loc_82681368:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82681384
	if (ctx.cr6.eq) goto loc_82681384;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// stw r24,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r24.u32);
	// stw r23,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r23.u32);
	// stw r22,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r22.u32);
	// stw r21,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r21.u32);
loc_82681384:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// bne 0x82681368
	if (!ctx.cr0.eq) goto loc_82681368;
loc_82681390:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// subf r7,r28,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r28.s64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmplw cr6,r29,r7
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x8268147c
	if (ctx.cr6.eq) goto loc_8268147C;
loc_826813AC:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// li r8,5
	ctx.r8.s64 = 5;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_826813BC:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x826813bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826813BC;
	// addi r9,r9,20
	ctx.r9.s64 = ctx.r9.s64 + 20;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x826813ac
	if (!ctx.cr6.eq) goto loc_826813AC;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c1c
	// ERROR 82CA2C1C
	return;
loc_826813E4:
	// subf r30,r28,r5
	ctx.r30.s64 = ctx.r5.s64 - ctx.r28.s64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82681cb0
	ctx.lr = 0x826813F4;
	sub_82681CB0(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8268143c
	if (ctx.cr6.eq) goto loc_8268143C;
	// add r8,r28,r11
	ctx.r8.u64 = ctx.r28.u64 + ctx.r11.u64;
loc_82681408:
	// addi r11,r11,-20
	ctx.r11.s64 = ctx.r11.s64 + -20;
	// addi r8,r8,-20
	ctx.r8.s64 = ctx.r8.s64 + -20;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82681420:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82681420
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82681420;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82681408
	if (!ctx.cr6.eq) goto loc_82681408;
loc_8268143C:
	// add r7,r28,r29
	ctx.r7.u64 = ctx.r28.u64 + ctx.r29.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r7
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x8268147c
	if (ctx.cr6.eq) goto loc_8268147C;
loc_8268144C:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8268145C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8268145c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8268145C;
	// addi r8,r8,20
	ctx.r8.s64 = ctx.r8.s64 + 20;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8268144c
	if (!ctx.cr6.eq) goto loc_8268144C;
loc_8268147C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c1c
	// ERROR 82CA2C1C
	return;
}

__attribute__((alias("__imp__sub_82681484"))) PPC_WEAK_FUNC(sub_82681484);
PPC_FUNC_IMPL(__imp__sub_82681484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82681488"))) PPC_WEAK_FUNC(sub_82681488);
PPC_FUNC_IMPL(__imp__sub_82681488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82681490;
	sub_82CA2BD4(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// std r4,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r4.u64);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x82681b70
	ctx.lr = 0x826814AC;
	sub_82681B70(ctx, base);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// li r23,0
	ctx.r23.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826814c4
	if (!ctx.cr6.eq) goto loc_826814C4;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// b 0x826814d0
	goto loc_826814D0;
loc_826814C4:
	// lwz r10,12(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r9,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 4;
loc_826814D0:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x826817a8
	if (ctx.cr6.eq) goto loc_826817A8;
	// lwz r29,8(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// subf r8,r11,r29
	ctx.r8.s64 = ctx.r29.s64 - ctx.r11.s64;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// srawi r11,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 4;
	// subf r7,r11,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r7,r26
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x82681500
	if (!ctx.cr6.lt) goto loc_82681500;
	// bl 0x82a97648
	ctx.lr = 0x826814FC;
	sub_82A97648(ctx, base);
	// b 0x826817a8
	goto loc_826817A8;
loc_82681500:
	// add r8,r11,r26
	ctx.r8.u64 = ctx.r11.u64 + ctx.r26.u64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82681664
	if (!ctx.cr6.lt) goto loc_82681664;
	// rlwinm r11,r9,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82681524
	if (ctx.cr6.lt) goto loc_82681524;
	// add r24,r11,r9
	ctx.r24.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_82681524:
	// cmplw cr6,r24,r8
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82681530
	if (!ctx.cr6.lt) goto loc_82681530;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
loc_82681530:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82512640
	ctx.lr = 0x8268153C;
	sub_82512640(ctx, base);
	// lwz r30,4(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r28,204(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// beq cr6,0x82681578
	if (ctx.cr6.eq) goto loc_82681578;
loc_82681554:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82681568
	if (ctx.cr6.eq) goto loc_82681568;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82681b70
	ctx.lr = 0x82681568;
	sub_82681B70(ctx, base);
loc_82681568:
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82681554
	if (!ctx.cr6.eq) goto loc_82681554;
loc_82681578:
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x826815a8
	if (ctx.cr6.eq) goto loc_826815A8;
loc_82681588:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8268159c
	if (ctx.cr6.eq) goto loc_8268159C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82681b70
	ctx.lr = 0x8268159C;
	sub_82681B70(ctx, base);
loc_8268159C:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bne 0x82681588
	if (!ctx.cr0.eq) goto loc_82681588;
loc_826815A8:
	// lwz r29,8(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// rlwinm r11,r26,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r31,r11
	ctx.r30.u64 = ctx.r31.u64 + ctx.r11.u64;
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x826815ec
	if (ctx.cr6.eq) goto loc_826815EC;
	// subf r10,r31,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r31.s64;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 + ctx.r28.u64;
loc_826815C8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826815dc
	if (ctx.cr6.eq) goto loc_826815DC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82681b70
	ctx.lr = 0x826815DC;
	sub_82681B70(ctx, base);
loc_826815DC:
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x826815c8
	if (!ctx.cr6.eq) goto loc_826815C8;
loc_826815EC:
	// lwz r31,4(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r29,8(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// subf r11,r31,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r31.s64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// add r28,r11,r26
	ctx.r28.u64 = ctx.r11.u64 + ctx.r26.u64;
	// beq cr6,0x82681644
	if (ctx.cr6.eq) goto loc_82681644;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8268163c
	if (ctx.cr6.eq) goto loc_8268163C;
loc_82681610:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82681624
	if (ctx.cr6.eq) goto loc_82681624;
	// bl 0x8221be68
	ctx.lr = 0x82681624;
	sub_8221BE68(ctx, base);
loc_82681624:
	// stw r23,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r23.u32);
	// stw r23,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r23.u32);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// stw r23,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r23.u32);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82681610
	if (!ctx.cr6.eq) goto loc_82681610;
loc_8268163C:
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// bl 0x8221be68
	ctx.lr = 0x82681644;
	sub_8221BE68(ctx, base);
loc_82681644:
	// rlwinm r10,r24,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r27,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r27.u32);
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r10,12(r25)
	PPC_STORE_U32(ctx.r25.u32 + 12, ctx.r10.u32);
	// stw r9,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r9.u32);
	// b 0x826817a8
	goto loc_826817A8;
loc_82681664:
	// lwz r27,204(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// subf r11,r27,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r27.s64;
	// srawi r10,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x8268171c
	if (!ctx.cr6.lt) goto loc_8268171C;
	// rlwinm r28,r26,4,0,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplw cr6,r27,r29
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r29.u32, ctx.xer);
	// add r31,r27,r28
	ctx.r31.u64 = ctx.r27.u64 + ctx.r28.u64;
	// beq cr6,0x826816b0
	if (ctx.cr6.eq) goto loc_826816B0;
	// subf r30,r28,r31
	ctx.r30.s64 = ctx.r31.s64 - ctx.r28.s64;
loc_8268168C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826816a0
	if (ctx.cr6.eq) goto loc_826816A0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82681b70
	ctx.lr = 0x826816A0;
	sub_82681B70(ctx, base);
loc_826816A0:
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8268168c
	if (!ctx.cr6.eq) goto loc_8268168C;
loc_826816B0:
	// lwz r30,8(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// subf r11,r27,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r27.s64;
	// srawi r10,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// subf. r31,r10,r26
	ctx.r31.s64 = ctx.r26.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826816e4
	if (ctx.cr0.eq) goto loc_826816E4;
loc_826816C4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826816d8
	if (ctx.cr6.eq) goto loc_826816D8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82681b70
	ctx.lr = 0x826816D8;
	sub_82681B70(ctx, base);
loc_826816D8:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bne 0x826816c4
	if (!ctx.cr0.eq) goto loc_826816C4;
loc_826816E4:
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// subf r30,r28,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r28.s64;
	// stw r11,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r11.u32);
	// cmplw cr6,r27,r30
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x826817a8
	if (ctx.cr6.eq) goto loc_826817A8;
loc_82681700:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82681d10
	ctx.lr = 0x8268170C;
	sub_82681D10(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82681700
	if (!ctx.cr6.eq) goto loc_82681700;
	// b 0x826817a8
	goto loc_826817A8;
loc_8268171C:
	// rlwinm r26,r26,4,0,27
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// subf r31,r26,r29
	ctx.r31.s64 = ctx.r29.s64 - ctx.r26.s64;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82681758
	if (ctx.cr6.eq) goto loc_82681758;
loc_82681734:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82681748
	if (ctx.cr6.eq) goto loc_82681748;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82681b70
	ctx.lr = 0x82681748;
	sub_82681B70(ctx, base);
loc_82681748:
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82681734
	if (!ctx.cr6.eq) goto loc_82681734;
loc_82681758:
	// stw r30,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r30.u32);
	// cmplw cr6,r27,r31
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82681780
	if (ctx.cr6.eq) goto loc_82681780;
	// subf r30,r31,r29
	ctx.r30.s64 = ctx.r29.s64 - ctx.r31.s64;
loc_82681768:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r31,r30
	ctx.r3.u64 = ctx.r31.u64 + ctx.r30.u64;
	// bl 0x82681d10
	ctx.lr = 0x82681778;
	sub_82681D10(ctx, base);
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82681768
	if (!ctx.cr6.eq) goto loc_82681768;
loc_82681780:
	// add r30,r27,r26
	ctx.r30.u64 = ctx.r27.u64 + ctx.r26.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplw cr6,r27,r30
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x826817a8
	if (ctx.cr6.eq) goto loc_826817A8;
loc_82681790:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82681d10
	ctx.lr = 0x8268179C;
	sub_82681D10(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82681790
	if (!ctx.cr6.eq) goto loc_82681790;
loc_826817A8:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826817b8
	if (ctx.cr6.eq) goto loc_826817B8;
	// bl 0x8221be68
	ctx.lr = 0x826817B8;
	sub_8221BE68(ctx, base);
loc_826817B8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_826817C0"))) PPC_WEAK_FUNC(sub_826817C0);
PPC_FUNC_IMPL(__imp__sub_826817C0) {
	PPC_FUNC_PROLOGUE();
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// lwz r9,36(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	// lwz r11,44(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 44);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8268182c
	if (ctx.cr6.eq) goto loc_8268182C;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// beq cr6,0x82681828
	if (ctx.cr6.eq) goto loc_82681828;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
loc_826817F8:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stbx r7,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r7.u8);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r7,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r7.u8);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stb r7,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r7.u8);
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stb r7,3(r6)
	PPC_STORE_U8(ctx.r6.u32 + 3, ctx.r7.u8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x826817f8
	if (!ctx.cr6.eq) goto loc_826817F8;
loc_82681828:
	// stw r8,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
loc_8268182C:
	// std r5,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r5.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82681834"))) PPC_WEAK_FUNC(sub_82681834);
PPC_FUNC_IMPL(__imp__sub_82681834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82681838"))) PPC_WEAK_FUNC(sub_82681838);
PPC_FUNC_IMPL(__imp__sub_82681838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82681840;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r27,0(r6)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// std r4,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r4.u64);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82681868
	if (!ctx.cr6.eq) goto loc_82681868;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82681874
	goto loc_82681874;
loc_82681868:
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
loc_82681874:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82681b68
	if (ctx.cr6.eq) goto loc_82681B68;
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// srawi r11,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 2;
	// subf r6,r11,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r6,r31
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x826818a8
	if (!ctx.cr6.lt) goto loc_826818A8;
	// bl 0x82a97648
	ctx.lr = 0x826818A0;
	sub_82A97648(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_826818A8:
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x826819f8
	if (!ctx.cr6.lt) goto loc_826819F8;
	// rlwinm r11,r9,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// li r28,0
	ctx.r28.s64 = 0;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x826818cc
	if (ctx.cr6.lt) goto loc_826818CC;
	// add r28,r11,r9
	ctx.r28.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_826818CC:
	// cmplw cr6,r28,r7
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x826818d8
	if (!ctx.cr6.lt) goto loc_826818D8;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
loc_826818D8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333f78
	ctx.lr = 0x826818E4;
	sub_82333F78(ctx, base);
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
	// beq cr6,0x82681934
	if (ctx.cr6.eq) goto loc_82681934;
loc_826818FC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82681924
	if (ctx.cr6.eq) goto loc_82681924;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r8,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r8.u8);
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stb r6,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r6.u8);
	// lbz r5,3(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stb r5,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r5.u8);
loc_82681924:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x826818fc
	if (!ctx.cr6.eq) goto loc_826818FC;
loc_82681934:
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8268195c
	if (ctx.cr6.eq) goto loc_8268195C;
loc_82681944:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82681950
	if (ctx.cr6.eq) goto loc_82681950;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
loc_82681950:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82681944
	if (!ctx.cr0.eq) goto loc_82681944;
loc_8268195C:
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x826819b4
	if (ctx.cr6.eq) goto loc_826819B4;
	// subf r9,r9,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r9.s64;
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
loc_8268197C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826819a4
	if (ctx.cr6.eq) goto loc_826819A4;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// lbz r7,1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r7,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// lbz r6,2(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// stb r6,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r6.u8);
	// lbz r5,3(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// stb r5,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r5.u8);
loc_826819A4:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8268197c
	if (!ctx.cr6.eq) goto loc_8268197C;
loc_826819B4:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// srawi r11,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 2;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// beq cr6,0x826819d4
	if (ctx.cr6.eq) goto loc_826819D4;
	// bl 0x8221be68
	ctx.lr = 0x826819D4;
	sub_8221BE68(ctx, base);
loc_826819D4:
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
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
loc_826819F8:
	// lwz r7,156(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// subf r11,r7,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r7.s64;
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82681ab8
	if (!ctx.cr6.lt) goto loc_82681AB8;
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// add r11,r9,r7
	ctx.r11.u64 = ctx.r9.u64 + ctx.r7.u64;
	// beq cr6,0x82681a58
	if (ctx.cr6.eq) goto loc_82681A58;
	// subf r10,r9,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r9.s64;
loc_82681A20:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82681a48
	if (ctx.cr6.eq) goto loc_82681A48;
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stb r6,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// lbz r5,1(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r5,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r5.u8);
	// lbz r4,2(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// stb r4,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r4.u8);
	// lbz r3,3(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// stb r3,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r3.u8);
loc_82681A48:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82681a20
	if (!ctx.cr6.eq) goto loc_82681A20;
loc_82681A58:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r10,r7,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r7.s64;
	// srawi r8,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 2;
	// subf. r10,r8,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r8.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82681a84
	if (ctx.cr0.eq) goto loc_82681A84;
loc_82681A6C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82681a78
	if (ctx.cr6.eq) goto loc_82681A78;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
loc_82681A78:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82681a6c
	if (!ctx.cr0.eq) goto loc_82681A6C;
loc_82681A84:
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
	// beq cr6,0x82681b68
	if (ctx.cr6.eq) goto loc_82681B68;
loc_82681AA0:
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82681aa0
	if (!ctx.cr6.eq) goto loc_82681AA0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82681AB8:
	// rlwinm r6,r31,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// subf r11,r6,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r6.s64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82681b08
	if (ctx.cr6.eq) goto loc_82681B08;
loc_82681AD0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82681af8
	if (ctx.cr6.eq) goto loc_82681AF8;
	// lbz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r5,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r5.u8);
	// lbz r4,1(r9)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// stb r4,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r4.u8);
	// lbz r3,2(r9)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r3,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r3.u8);
	// lbz r5,3(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r5,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r5.u8);
loc_82681AF8:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82681ad0
	if (!ctx.cr6.eq) goto loc_82681AD0;
loc_82681B08:
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82681b48
	if (ctx.cr6.eq) goto loc_82681B48;
	// add r10,r6,r11
	ctx.r10.u64 = ctx.r6.u64 + ctx.r11.u64;
loc_82681B18:
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r8,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r8.u8);
	// lbz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stb r5,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r5.u8);
	// lbz r4,3(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stb r4,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r4.u8);
	// bne cr6,0x82681b18
	if (!ctx.cr6.eq) goto loc_82681B18;
loc_82681B48:
	// add r10,r6,r7
	ctx.r10.u64 = ctx.r6.u64 + ctx.r7.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82681b68
	if (ctx.cr6.eq) goto loc_82681B68;
loc_82681B58:
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82681b58
	if (!ctx.cr6.eq) goto loc_82681B58;
loc_82681B68:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82681B70"))) PPC_WEAK_FUNC(sub_82681B70);
PPC_FUNC_IMPL(__imp__sub_82681B70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82681B78;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// srawi. r4,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82681bb0
	if (!ctx.cr0.eq) goto loc_82681BB0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82681bb8
	goto loc_82681BB8;
loc_82681BB0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82681c38
	ctx.lr = 0x82681BB8;
	sub_82681C38(ctx, base);
loc_82681BB8:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82681c28
	if (ctx.cr6.eq) goto loc_82681C28;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// beq cr6,0x82681c24
	if (ctx.cr6.eq) goto loc_82681C24;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82681BEC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82681c14
	if (ctx.cr6.eq) goto loc_82681C14;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// lbz r7,1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r7,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// lbz r6,2(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// stb r6,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r6.u8);
	// lbz r5,3(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// stb r5,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r5.u8);
loc_82681C14:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82681bec
	if (!ctx.cr6.eq) goto loc_82681BEC;
loc_82681C24:
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_82681C28:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82681C34"))) PPC_WEAK_FUNC(sub_82681C34);
PPC_FUNC_IMPL(__imp__sub_82681C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82681C38"))) PPC_WEAK_FUNC(sub_82681C38);
PPC_FUNC_IMPL(__imp__sub_82681C38) {
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
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82681c6c
	if (!ctx.cr6.gt) goto loc_82681C6C;
	// bl 0x82a97648
	ctx.lr = 0x82681C68;
	sub_82A97648(ctx, base);
	// b 0x82681c90
	goto loc_82681C90;
loc_82681C6C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82333f78
	ctx.lr = 0x82681C78;
	sub_82333F78(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_82681C90:
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_82681CAC"))) PPC_WEAK_FUNC(sub_82681CAC);
PPC_FUNC_IMPL(__imp__sub_82681CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82681CB0"))) PPC_WEAK_FUNC(sub_82681CB0);
PPC_FUNC_IMPL(__imp__sub_82681CB0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// subf r10,r4,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r4.s64;
loc_82681CC4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82681cf4
	if (ctx.cr6.eq) goto loc_82681CF4;
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r8,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
loc_82681CF4:
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82681cc4
	if (!ctx.cr6.eq) goto loc_82681CC4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82681D0C"))) PPC_WEAK_FUNC(sub_82681D0C);
PPC_FUNC_IMPL(__imp__sub_82681D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82681D10"))) PPC_WEAK_FUNC(sub_82681D10);
PPC_FUNC_IMPL(__imp__sub_82681D10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82681D18;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82681f58
	if (ctx.cr6.eq) goto loc_82681F58;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi. r7,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bne 0x82681d7c
	if (!ctx.cr0.eq) goto loc_82681D7C;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826817c0
	ctx.lr = 0x82681D70;
	sub_826817C0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82681D7C:
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subf r6,r10,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r10.s64;
	// srawi r8,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 2;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x82681df4
	if (ctx.cr6.gt) goto loc_82681DF4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82681dc8
	if (ctx.cr6.eq) goto loc_82681DC8;
loc_82681D98:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r7,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r7.u8);
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stb r6,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r6.u8);
	// lbz r5,3(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stb r5,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r5.u8);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82681d98
	if (!ctx.cr6.eq) goto loc_82681D98;
loc_82681DC8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r6.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82681DF4:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82681e08
	if (!ctx.cr6.eq) goto loc_82681E08;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82681e14
	goto loc_82681E14;
loc_82681E08:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
loc_82681E14:
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82681ebc
	if (ctx.cr6.gt) goto loc_82681EBC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82681e60
	if (ctx.cr6.eq) goto loc_82681E60;
loc_82681E30:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r7,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r7.u8);
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stb r6,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r6.u8);
	// lbz r5,3(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stb r5,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r5.u8);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82681e30
	if (!ctx.cr6.eq) goto loc_82681E30;
loc_82681E60:
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82681eac
	if (ctx.cr6.eq) goto loc_82681EAC;
loc_82681E74:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82681e9c
	if (ctx.cr6.eq) goto loc_82681E9C;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// lbz r7,1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r7,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// lbz r6,2(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// stb r6,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r6.u8);
	// lbz r5,3(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// stb r5,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r5.u8);
loc_82681E9C:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82681e74
	if (!ctx.cr6.eq) goto loc_82681E74;
loc_82681EAC:
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82681EBC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82681ecc
	if (ctx.cr6.eq) goto loc_82681ECC;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x8221be68
	ctx.lr = 0x82681ECC;
	sub_8221BE68(ctx, base);
loc_82681ECC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// stw r30,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r30.u32);
	// srawi. r4,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82681ef4
	if (!ctx.cr0.eq) goto loc_82681EF4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82681efc
	goto loc_82681EFC;
loc_82681EF4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82681c38
	ctx.lr = 0x82681EFC;
	sub_82681C38(ctx, base);
loc_82681EFC:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82681f58
	if (ctx.cr6.eq) goto loc_82681F58;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82681f54
	if (ctx.cr6.eq) goto loc_82681F54;
loc_82681F1C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82681f44
	if (ctx.cr6.eq) goto loc_82681F44;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r7,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r7.u8);
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stb r6,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r6.u8);
	// lbz r5,3(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stb r5,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r5.u8);
loc_82681F44:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82681f1c
	if (!ctx.cr6.eq) goto loc_82681F1C;
loc_82681F54:
	// stw r10,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
loc_82681F58:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82681F64"))) PPC_WEAK_FUNC(sub_82681F64);
PPC_FUNC_IMPL(__imp__sub_82681F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82681F68"))) PPC_WEAK_FUNC(sub_82681F68);
PPC_FUNC_IMPL(__imp__sub_82681F68) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,13692
	ctx.r4.s64 = ctx.r11.s64 + 13692;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8222cf18
	ctx.lr = 0x82681F8C;
	sub_8222CF18(ctx, base);
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

__attribute__((alias("__imp__sub_82681FA4"))) PPC_WEAK_FUNC(sub_82681FA4);
PPC_FUNC_IMPL(__imp__sub_82681FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82681FA8"))) PPC_WEAK_FUNC(sub_82681FA8);
PPC_FUNC_IMPL(__imp__sub_82681FA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82681FB0;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// bl 0x821f0108
	ctx.lr = 0x82681FD0;
	sub_821F0108(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821f0108
	ctx.lr = 0x82681FDC;
	sub_821F0108(ctx, base);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x821cf7c8
	ctx.lr = 0x82681FEC;
	sub_821CF7C8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r10,r11,5732
	ctx.r10.s64 = ctx.r11.s64 + 5732;
	// stw r26,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r26.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// bl 0x821940c8
	ctx.lr = 0x82682008;
	sub_821940C8(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_8268201C"))) PPC_WEAK_FUNC(sub_8268201C);
PPC_FUNC_IMPL(__imp__sub_8268201C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82682020"))) PPC_WEAK_FUNC(sub_82682020);
PPC_FUNC_IMPL(__imp__sub_82682020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// stb r3,-29009(r11)
	PPC_STORE_U8(ctx.r11.u32 + -29009, ctx.r3.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268202C"))) PPC_WEAK_FUNC(sub_8268202C);
PPC_FUNC_IMPL(__imp__sub_8268202C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82682030"))) PPC_WEAK_FUNC(sub_82682030);
PPC_FUNC_IMPL(__imp__sub_82682030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r11,27444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27444);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82682048"))) PPC_WEAK_FUNC(sub_82682048);
PPC_FUNC_IMPL(__imp__sub_82682048) {
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
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82392c88
	ctx.lr = 0x82682070;
	sub_82392C88(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826820b4
	if (ctx.cr6.eq) goto loc_826820B4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r5,r31,16
	ctx.r5.s64 = ctx.r31.s64 + 16;
	// addi r4,r11,-23244
	ctx.r4.s64 = ctx.r11.s64 + -23244;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8239cd28
	ctx.lr = 0x8268208C;
	sub_8239CD28(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r5,r31,20
	ctx.r5.s64 = ctx.r31.s64 + 20;
	// addi r4,r10,-25640
	ctx.r4.s64 = ctx.r10.s64 + -25640;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8239ccb0
	ctx.lr = 0x826820A0;
	sub_8239CCB0(ctx, base);
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// addi r5,r31,24
	ctx.r5.s64 = ctx.r31.s64 + 24;
	// addi r4,r9,31936
	ctx.r4.s64 = ctx.r9.s64 + 31936;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8239ccb0
	ctx.lr = 0x826820B4;
	sub_8239CCB0(ctx, base);
loc_826820B4:
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

__attribute__((alias("__imp__sub_826820CC"))) PPC_WEAK_FUNC(sub_826820CC);
PPC_FUNC_IMPL(__imp__sub_826820CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826820D0"))) PPC_WEAK_FUNC(sub_826820D0);
PPC_FUNC_IMPL(__imp__sub_826820D0) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-23244
	ctx.r4.s64 = ctx.r11.s64 + -23244;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82682100;
	sub_8222CF18(ctx, base);
	// addi r5,r31,16
	ctx.r5.s64 = ctx.r31.s64 + 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a16ec0
	ctx.lr = 0x82682110;
	sub_82A16EC0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82682118;
	sub_82214F08(ctx, base);
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

__attribute__((alias("__imp__sub_82682130"))) PPC_WEAK_FUNC(sub_82682130);
PPC_FUNC_IMPL(__imp__sub_82682130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82682138;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8222cf18
	ctx.lr = 0x82682154;
	sub_8222CF18(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x8268215C;
	sub_82214F08(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r31,27444(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27444, ctx.r31.u32);
	// beq cr6,0x82682304
	if (ctx.cr6.eq) goto loc_82682304;
	// lis r29,-31927
	ctx.r29.s64 = -2092367872;
	// lwz r11,27432(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27432);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82682310
	if (!ctx.cr6.eq) goto loc_82682310;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r31,r11,-31996
	ctx.r31.s64 = ctx.r11.s64 + -31996;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8222cf18
	ctx.lr = 0x82682194;
	sub_8222CF18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x826821A4;
	sub_8222CF18(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// vspltisw v1,0
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_set1_epi32(int(0x0)));
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82391198
	ctx.lr = 0x826821C0;
	sub_82391198(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x826821CC;
	sub_82214F08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82214f08
	ctx.lr = 0x826821D4;
	sub_82214F08(ctx, base);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm r9,r10,5,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826822cc
	if (ctx.cr6.eq) goto loc_826822CC;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82682210
	if (ctx.cr6.eq) goto loc_82682210;
	// lbz r10,59(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 59);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r30,4(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x826822d0
	goto loc_826822D0;
loc_82682210:
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r6,76(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8268227c
	if (!ctx.cr0.gt) goto loc_8268227C;
loc_8268222C:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,59
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 59, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x8268224c
	if (ctx.cr6.lt) goto loc_8268224C;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
loc_8268224C:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82682268
	if (ctx.cr6.eq) goto loc_82682268;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82682270
	goto loc_82682270;
loc_82682268:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82682270:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8268222c
	if (ctx.cr6.gt) goto loc_8268222C;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
loc_8268227C:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x826822bc
	if (ctx.cr6.eq) goto loc_826822BC;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,59
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 59, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82682298
	if (ctx.cr6.gt) goto loc_82682298;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82682298:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826822bc
	if (!ctx.cr6.eq) goto loc_826822BC;
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x826822d0
	goto loc_826822D0;
loc_826822BC:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x826822d0
	goto loc_826822D0;
loc_826822CC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_826822D0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82682310
	if (ctx.cr6.eq) goto loc_82682310;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82682408
	ctx.lr = 0x826822E4;
	sub_82682408(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,27432(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27432, ctx.r11.u32);
	// beq cr6,0x82682310
	if (ctx.cr6.eq) goto loc_82682310;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,112(r11)
	PPC_STORE_U8(ctx.r11.u32 + 112, ctx.r10.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
loc_82682304:
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,27432(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27432, ctx.r11.u32);
loc_82682310:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82682318"))) PPC_WEAK_FUNC(sub_82682318);
PPC_FUNC_IMPL(__imp__sub_82682318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82682320;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31927
	ctx.r28.s64 = -2092367872;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r3,27444(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 27444);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826823d8
	if (ctx.cr6.eq) goto loc_826823D8;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r31,r10,63
	ctx.r31.s64 = ctx.r10.s64 + 63;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// beq cr6,0x82682360
	if (ctx.cr6.eq) goto loc_82682360;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82682360:
	// bl 0x82ea94d8
	ctx.lr = 0x82682364;
	sub_82EA94D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826823fc
	if (ctx.cr6.eq) goto loc_826823FC;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82682384
	if (ctx.cr6.eq) goto loc_82682384;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82682384:
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,-9704(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9704);
	// bl 0x82ea94e0
	ctx.lr = 0x82682398;
	sub_82EA94E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826823e4
	if (ctx.cr6.eq) goto loc_826823E4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,27444(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 27444);
	// bl 0x82e7cba8
	ctx.lr = 0x826823B0;
	sub_82E7CBA8(ctx, base);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,27448(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27448);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,27448(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27448, ctx.r11.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x826823D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826823D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_826823E4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826823FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826823FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82682408"))) PPC_WEAK_FUNC(sub_82682408);
PPC_FUNC_IMPL(__imp__sub_82682408) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,27444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27444);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268269c
	if (ctx.cr6.eq) goto loc_8268269C;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// addi r4,r5,128
	ctx.r4.s64 = ctx.r5.s64 + 128;
	// bl 0x82682318
	ctx.lr = 0x82682440;
	sub_82682318(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r4,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r4.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826826b8
	if (ctx.cr6.eq) goto loc_826826B8;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwinm r8,r9,3,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8268255c
	if (ctx.cr6.eq) goto loc_8268255C;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82682498
	if (ctx.cr6.eq) goto loc_82682498;
	// lbz r10,61(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 61);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82682560
	goto loc_82682560;
loc_82682498:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82682504
	if (!ctx.cr0.gt) goto loc_82682504;
loc_826824B4:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,61
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 61, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x826824d4
	if (ctx.cr6.lt) goto loc_826824D4;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
loc_826824D4:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x826824f0
	if (ctx.cr6.eq) goto loc_826824F0;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x826824f8
	goto loc_826824F8;
loc_826824F0:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_826824F8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x826824b4
	if (ctx.cr6.gt) goto loc_826824B4;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_82682504:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82682548
	if (ctx.cr6.eq) goto loc_82682548;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,61
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 61, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82682520
	if (ctx.cr6.gt) goto loc_82682520;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82682520:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82682548
	if (!ctx.cr6.eq) goto loc_82682548;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82682560
	goto loc_82682560;
loc_82682548:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82682560
	goto loc_82682560;
loc_8268255C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82682560:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82682574
	if (ctx.cr6.eq) goto loc_82682574;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x8287c9a0
	ctx.lr = 0x82682574;
	sub_8287C9A0(ctx, base);
loc_82682574:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwinm r9,r10,4,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8268267c
	if (ctx.cr6.eq) goto loc_8268267C;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826825b8
	if (ctx.cr6.eq) goto loc_826825B8;
	// lbz r9,60(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 60);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r11,r9,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82682680
	goto loc_82682680;
loc_826825B8:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82682624
	if (!ctx.cr0.gt) goto loc_82682624;
loc_826825D4:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,60
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 60, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x826825f4
	if (ctx.cr6.lt) goto loc_826825F4;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
loc_826825F4:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82682610
	if (ctx.cr6.eq) goto loc_82682610;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82682618
	goto loc_82682618;
loc_82682610:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82682618:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x826825d4
	if (ctx.cr6.gt) goto loc_826825D4;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_82682624:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82682668
	if (ctx.cr6.eq) goto loc_82682668;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,60
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 60, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82682640
	if (ctx.cr6.gt) goto loc_82682640;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82682640:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82682668
	if (!ctx.cr6.eq) goto loc_82682668;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82682680
	goto loc_82682680;
loc_82682668:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82682680
	goto loc_82682680;
loc_8268267C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82682680:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268269c
	if (ctx.cr6.eq) goto loc_8268269C;
	// lwz r11,168(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8268269c
	if (!ctx.cr6.eq) goto loc_8268269C;
	// bl 0x826772a0
	ctx.lr = 0x8268269C;
	sub_826772A0(ctx, base);
loc_8268269C:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
loc_826826A0:
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
loc_826826B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826826a0
	goto loc_826826A0;
}

__attribute__((alias("__imp__sub_826826C0"))) PPC_WEAK_FUNC(sub_826826C0);
PPC_FUNC_IMPL(__imp__sub_826826C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x826826C8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r11,5732
	ctx.r10.s64 = ctx.r11.s64 + 5732;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822149c8
	ctx.lr = 0x82682700;
	sub_822149C8(ctx, base);
	// cntlzw r8,r28
	ctx.r8.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82681fa8
	ctx.lr = 0x82682724;
	sub_82681FA8(ctx, base);
	// lis r7,-31926
	ctx.r7.s64 = -2092302336;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r7,-20996
	ctx.r3.s64 = ctx.r7.s64 + -20996;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82684c90
	ctx.lr = 0x82682744;
	sub_82684C90(ctx, base);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// addi r5,r6,5732
	ctx.r5.s64 = ctx.r6.s64 + 5732;
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// bl 0x821940c8
	ctx.lr = 0x82682758;
	sub_821940C8(ctx, base);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82214f08
	ctx.lr = 0x82682764;
	sub_82214F08(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82214f08
	ctx.lr = 0x8268276C;
	sub_82214F08(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82682774"))) PPC_WEAK_FUNC(sub_82682774);
PPC_FUNC_IMPL(__imp__sub_82682774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82682778"))) PPC_WEAK_FUNC(sub_82682778);
PPC_FUNC_IMPL(__imp__sub_82682778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82682780;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31927
	ctx.r30.s64 = -2092367872;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,27444(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27444);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82682b4c
	if (ctx.cr6.eq) goto loc_82682B4C;
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82682b44
	if (ctx.cr6.eq) goto loc_82682B44;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82682804
	if (!ctx.cr6.eq) goto loc_82682804;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r3,r29,12
	ctx.r3.s64 = ctx.r29.s64 + 12;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826827f4
	if (ctx.cr6.eq) goto loc_826827F4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826828fc
	if (ctx.cr6.eq) goto loc_826828FC;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826827f4
	if (ctx.cr6.eq) goto loc_826827F4;
	// bl 0x825575c8
	ctx.lr = 0x826827E0;
	sub_825575C8(ctx, base);
	// lbz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826827f8
	if (!ctx.cr6.eq) goto loc_826827F8;
loc_826827F4:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_826827F8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82682b44
	if (ctx.cr6.eq) goto loc_82682B44;
loc_82682804:
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r31,r10,63
	ctx.r31.s64 = ctx.r10.s64 + 63;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// beq cr6,0x82682820
	if (ctx.cr6.eq) goto loc_82682820;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82682820:
	// lwz r3,27444(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27444);
	// bl 0x82ea94d8
	ctx.lr = 0x82682828;
	sub_82EA94D8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82682864
	if (ctx.cr6.eq) goto loc_82682864;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82682848
	if (ctx.cr6.eq) goto loc_82682848;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82682848:
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r6,8(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,-9704(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9704);
	// bl 0x82ea94e0
	ctx.lr = 0x8268285C;
	sub_82EA94E0(ctx, base);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
loc_82682864:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82682880
	if (!ctx.cr6.eq) goto loc_82682880;
	// addi r3,r29,12
	ctx.r3.s64 = ctx.r29.s64 + 12;
	// bl 0x825575c8
	ctx.lr = 0x8268287C;
	sub_825575C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82682880:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82682b00
	if (ctx.cr6.eq) goto loc_82682B00;
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,27444(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27444);
	// bl 0x82e7cba8
	ctx.lr = 0x8268289C;
	sub_82E7CBA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82682b00
	if (ctx.cr6.eq) goto loc_82682B00;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r11,27448(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27448);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,27448(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27448, ctx.r11.u32);
	// beq cr6,0x82682b1c
	if (ctx.cr6.eq) goto loc_82682B1C;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// rlwinm r9,r10,3,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826829c0
	if (ctx.cr6.eq) goto loc_826829C0;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82682904
	if (ctx.cr6.eq) goto loc_82682904;
	// lbz r10,61(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 61);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x826829c4
	goto loc_826829C4;
loc_826828FC:
	// bl 0x821940c8
	ctx.lr = 0x82682900;
	sub_821940C8(ctx, base);
	// b 0x826827f4
	goto loc_826827F4;
loc_82682904:
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r6,76(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82682970
	if (!ctx.cr0.gt) goto loc_82682970;
loc_82682920:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,61
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 61, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x82682940
	if (ctx.cr6.lt) goto loc_82682940;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
loc_82682940:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8268295c
	if (ctx.cr6.eq) goto loc_8268295C;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82682964
	goto loc_82682964;
loc_8268295C:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82682964:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82682920
	if (ctx.cr6.gt) goto loc_82682920;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_82682970:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x826829b0
	if (ctx.cr6.eq) goto loc_826829B0;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,61
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 61, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8268298c
	if (ctx.cr6.gt) goto loc_8268298C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_8268298C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826829b0
	if (!ctx.cr6.eq) goto loc_826829B0;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x826829c4
	goto loc_826829C4;
loc_826829B0:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x826829c4
	goto loc_826829C4;
loc_826829C0:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_826829C4:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826829e0
	if (ctx.cr6.eq) goto loc_826829E0;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x8287c9a0
	ctx.lr = 0x826829E0;
	sub_8287C9A0(ctx, base);
loc_826829E0:
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// rlwinm r9,r10,4,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82682ad8
	if (ctx.cr6.eq) goto loc_82682AD8;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82682a1c
	if (ctx.cr6.eq) goto loc_82682A1C;
	// lbz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 60);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82682adc
	goto loc_82682ADC;
loc_82682A1C:
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r6,76(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82682a88
	if (!ctx.cr0.gt) goto loc_82682A88;
loc_82682A38:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,60
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 60, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x82682a58
	if (ctx.cr6.lt) goto loc_82682A58;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
loc_82682A58:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82682a74
	if (ctx.cr6.eq) goto loc_82682A74;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82682a7c
	goto loc_82682A7C;
loc_82682A74:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82682A7C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82682a38
	if (ctx.cr6.gt) goto loc_82682A38;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_82682A88:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82682ac8
	if (ctx.cr6.eq) goto loc_82682AC8;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,60
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 60, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82682aa4
	if (ctx.cr6.gt) goto loc_82682AA4;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82682AA4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82682ac8
	if (!ctx.cr6.eq) goto loc_82682AC8;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82682adc
	goto loc_82682ADC;
loc_82682AC8:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82682adc
	goto loc_82682ADC;
loc_82682AD8:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_82682ADC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82682b1c
	if (ctx.cr6.eq) goto loc_82682B1C;
	// lwz r10,168(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82682b1c
	if (!ctx.cr6.eq) goto loc_82682B1C;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x826772a0
	ctx.lr = 0x82682AFC;
	sub_826772A0(ctx, base);
	// b 0x82682b1c
	goto loc_82682B1C;
loc_82682B00:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x82682B14;
	sub_8222CF18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x82682B1C;
	sub_82214F08(ctx, base);
loc_82682B1C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82682b4c
	if (ctx.cr6.eq) goto loc_82682B4C;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82682B3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
loc_82682B44:
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x82675cd0
	ctx.lr = 0x82682B4C;
	sub_82675CD0(ctx, base);
loc_82682B4C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82682B54"))) PPC_WEAK_FUNC(sub_82682B54);
PPC_FUNC_IMPL(__imp__sub_82682B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82682B58"))) PPC_WEAK_FUNC(sub_82682B58);
PPC_FUNC_IMPL(__imp__sub_82682B58) {
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
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r4,r11,-20996
	ctx.r4.s64 = ctx.r11.s64 + -20996;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_82682B7C:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82682bc8
	if (ctx.cr6.eq) goto loc_82682BC8;
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82682ba4
	if (ctx.cr6.eq) goto loc_82682BA4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82682b9c
	if (!ctx.cr6.eq) goto loc_82682B9C;
	// twi 31,r0,22
loc_82682B9C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82682b7c
	goto loc_82682B7C;
loc_82682BA4:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826844b8
	ctx.lr = 0x82682BB4;
	sub_826844B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82682BC8:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82682BE0"))) PPC_WEAK_FUNC(sub_82682BE0);
PPC_FUNC_IMPL(__imp__sub_82682BE0) {
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
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82682c74
	if (ctx.cr6.eq) goto loc_82682C74;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82682C18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r11,r11,23188
	ctx.r11.s64 = ctx.r11.s64 + 23188;
loc_82682C20:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82682c5c
	if (ctx.cr6.eq) goto loc_82682C5C;
	// lwz r3,268(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82682c20
	if (!ctx.cr6.eq) goto loc_82682C20;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82682C38:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82682c64
	if (ctx.cr6.eq) goto loc_82682C64;
	// bl 0x82682ee0
	ctx.lr = 0x82682C50;
	sub_82682EE0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82682cd0
	goto loc_82682CD0;
loc_82682C5C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82682c38
	goto loc_82682C38;
loc_82682C64:
	// bl 0x82682ce8
	ctx.lr = 0x82682C68;
	sub_82682CE8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82682cd0
	goto loc_82682CD0;
loc_82682C74:
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r11,-20996
	ctx.r4.s64 = ctx.r11.s64 + -20996;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_82682C90:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82682ccc
	if (ctx.cr6.eq) goto loc_82682CCC;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82682cb8
	if (ctx.cr6.eq) goto loc_82682CB8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82682cb0
	if (!ctx.cr6.eq) goto loc_82682CB0;
	// twi 31,r0,22
loc_82682CB0:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82682c90
	goto loc_82682C90;
loc_82682CB8:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826844b8
	ctx.lr = 0x82682CC8;
	sub_826844B8(ctx, base);
	// b 0x82682cd0
	goto loc_82682CD0;
loc_82682CCC:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_82682CD0:
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

__attribute__((alias("__imp__sub_82682CE8"))) PPC_WEAK_FUNC(sub_82682CE8);
PPC_FUNC_IMPL(__imp__sub_82682CE8) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82682ec4
	if (ctx.cr6.eq) goto loc_82682EC4;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82682ebc
	if (ctx.cr6.eq) goto loc_82682EBC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8262e270
	ctx.lr = 0x82682D1C;
	sub_8262E270(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stb r10,132(r31)
	PPC_STORE_U8(ctx.r31.u32 + 132, ctx.r10.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82682d48
	if (ctx.cr6.eq) goto loc_82682D48;
	// lbz r10,144(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82682d4c
	if (!ctx.cr6.eq) goto loc_82682D4C;
loc_82682D48:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_82682D4C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82682e64
	if (ctx.cr6.eq) goto loc_82682E64;
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r9,r10,3,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82682e4c
	if (ctx.cr6.eq) goto loc_82682E4C;
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82682d90
	if (ctx.cr6.eq) goto loc_82682D90;
	// lbz r10,61(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 61);
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82682e50
	goto loc_82682E50;
loc_82682D90:
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r6,76(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82682dfc
	if (!ctx.cr0.gt) goto loc_82682DFC;
loc_82682DAC:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,61
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 61, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x82682dcc
	if (ctx.cr6.lt) goto loc_82682DCC;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
loc_82682DCC:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82682de8
	if (ctx.cr6.eq) goto loc_82682DE8;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82682df0
	goto loc_82682DF0;
loc_82682DE8:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82682DF0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82682dac
	if (ctx.cr6.gt) goto loc_82682DAC;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_82682DFC:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82682e3c
	if (ctx.cr6.eq) goto loc_82682E3C;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,61
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 61, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82682e18
	if (ctx.cr6.gt) goto loc_82682E18;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_82682E18:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82682e3c
	if (!ctx.cr6.eq) goto loc_82682E3C;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82682e50
	goto loc_82682E50;
loc_82682E3C:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82682e50
	goto loc_82682E50;
loc_82682E4C:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_82682E50:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82682e64
	if (ctx.cr6.eq) goto loc_82682E64;
	// stw r5,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// stw r5,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r5.u32);
loc_82682E64:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82682b58
	ctx.lr = 0x82682E6C;
	sub_82682B58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82682ea8
	if (!ctx.cr6.eq) goto loc_82682EA8;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r10,-21008
	ctx.r3.s64 = ctx.r10.s64 + -21008;
	// lwz r10,27444(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27444);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82684bb0
	ctx.lr = 0x82682EA8;
	sub_82684BB0(ctx, base);
loc_82682EA8:
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// lwz r11,27448(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27448);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,27448(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27448, ctx.r11.u32);
	// b 0x82682ec4
	goto loc_82682EC4;
loc_82682EBC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82682b58
	ctx.lr = 0x82682EC4;
	sub_82682B58(ctx, base);
loc_82682EC4:
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

__attribute__((alias("__imp__sub_82682EDC"))) PPC_WEAK_FUNC(sub_82682EDC);
PPC_FUNC_IMPL(__imp__sub_82682EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82682EE0"))) PPC_WEAK_FUNC(sub_82682EE0);
PPC_FUNC_IMPL(__imp__sub_82682EE0) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82682f94
	if (ctx.cr6.eq) goto loc_82682F94;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82682f8c
	if (ctx.cr6.eq) goto loc_82682F8C;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82682f2c
	if (ctx.cr6.eq) goto loc_82682F2C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82682f2c
	if (!ctx.cr6.eq) goto loc_82682F2C;
	// bl 0x821940c8
	ctx.lr = 0x82682F2C;
	sub_821940C8(ctx, base);
loc_82682F2C:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,225(r31)
	PPC_STORE_U8(ctx.r31.u32 + 225, ctx.r11.u8);
	// bl 0x82682b58
	ctx.lr = 0x82682F3C;
	sub_82682B58(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82682f78
	if (!ctx.cr6.eq) goto loc_82682F78;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r10,-21008
	ctx.r3.s64 = ctx.r10.s64 + -21008;
	// lwz r10,27444(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27444);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82684bb0
	ctx.lr = 0x82682F78;
	sub_82684BB0(ctx, base);
loc_82682F78:
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// lwz r11,27448(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27448);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,27448(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27448, ctx.r11.u32);
	// b 0x82682f94
	goto loc_82682F94;
loc_82682F8C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82682b58
	ctx.lr = 0x82682F94;
	sub_82682B58(ctx, base);
loc_82682F94:
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

__attribute__((alias("__imp__sub_82682FAC"))) PPC_WEAK_FUNC(sub_82682FAC);
PPC_FUNC_IMPL(__imp__sub_82682FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82682FB0"))) PPC_WEAK_FUNC(sub_82682FB0);
PPC_FUNC_IMPL(__imp__sub_82682FB0) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r6,r3,12
	ctx.r6.s64 = ctx.r3.s64 + 12;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82682fec
	if (!ctx.cr6.eq) goto loc_82682FEC;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r11,27444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27444);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82682fec
	if (ctx.cr6.eq) goto loc_82682FEC;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r4,r5,128
	ctx.r4.s64 = ctx.r5.s64 + 128;
	// bl 0x826826c0
	ctx.lr = 0x82682FEC;
	sub_826826C0(ctx, base);
loc_82682FEC:
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,-21068
	ctx.r3.s64 = ctx.r11.s64 + -21068;
	// bl 0x826842e8
	ctx.lr = 0x82682FF8;
	sub_826842E8(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r3,r10,-21056
	ctx.r3.s64 = ctx.r10.s64 + -21056;
	// bl 0x82684348
	ctx.lr = 0x82683004;
	sub_82684348(ctx, base);
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r9,r11,-21044
	ctx.r9.s64 = ctx.r11.s64 + -21044;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82683028
	if (!ctx.cr6.gt) goto loc_82683028;
	// twi 31,r0,22
	// twi 31,r0,22
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
loc_82683028:
	// beq cr6,0x82683030
	if (ctx.cr6.eq) goto loc_82683030;
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
loc_82683030:
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r8,r9,-21024
	ctx.r8.s64 = ctx.r9.s64 + -21024;
	// lis r7,-31927
	ctx.r7.s64 = -2092367872;
	// lis r6,-31927
	ctx.r6.s64 = -2092367872;
	// stw r11,-28984(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28984, ctx.r11.u32);
	// lis r5,-31927
	ctx.r5.s64 = -2092367872;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,27436(r7)
	PPC_STORE_U32(ctx.r7.u32 + 27436, ctx.r10.u32);
	// stw r9,27440(r6)
	PPC_STORE_U32(ctx.r6.u32 + 27440, ctx.r9.u32);
	// stb r11,27429(r5)
	PPC_STORE_U8(ctx.r5.u32 + 27429, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82683080"))) PPC_WEAK_FUNC(sub_82683080);
PPC_FUNC_IMPL(__imp__sub_82683080) {
	PPC_FUNC_PROLOGUE();
	// b 0x82682be0
	sub_82682BE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82683084"))) PPC_WEAK_FUNC(sub_82683084);
PPC_FUNC_IMPL(__imp__sub_82683084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82683088"))) PPC_WEAK_FUNC(sub_82683088);
PPC_FUNC_IMPL(__imp__sub_82683088) {
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
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82683108
	if (ctx.cr6.eq) goto loc_82683108;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826830C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r11,r11,23188
	ctx.r11.s64 = ctx.r11.s64 + 23188;
loc_826830CC:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x826830fc
	if (ctx.cr6.eq) goto loc_826830FC;
	// lwz r3,268(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826830cc
	if (!ctx.cr6.eq) goto loc_826830CC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_826830E4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// beq cr6,0x82683104
	if (ctx.cr6.eq) goto loc_82683104;
	// stb r30,225(r11)
	PPC_STORE_U8(ctx.r11.u32 + 225, ctx.r30.u8);
	// b 0x82683108
	goto loc_82683108;
loc_826830FC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x826830e4
	goto loc_826830E4;
loc_82683104:
	// stb r30,132(r11)
	PPC_STORE_U8(ctx.r11.u32 + 132, ctx.r30.u8);
loc_82683108:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwinm r9,r10,4,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82683214
	if (ctx.cr6.eq) goto loc_82683214;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8268314c
	if (ctx.cr6.eq) goto loc_8268314C;
	// lbz r9,60(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 60);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r11,r9,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82683218
	goto loc_82683218;
loc_8268314C:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// subf r8,r10,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x826831bc
	if (!ctx.cr0.gt) goto loc_826831BC;
loc_8268316C:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,60
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 60, ctx.xer);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// blt cr6,0x8268318c
	if (ctx.cr6.lt) goto loc_8268318C;
	// li r7,0
	ctx.r7.s64 = 0;
loc_8268318C:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x826831a8
	if (ctx.cr6.eq) goto loc_826831A8;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x826831b0
	goto loc_826831B0;
loc_826831A8:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_826831B0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8268316c
	if (ctx.cr6.gt) goto loc_8268316C;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_826831BC:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82683200
	if (ctx.cr6.eq) goto loc_82683200;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,60
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 60, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bgt cr6,0x826831d8
	if (ctx.cr6.gt) goto loc_826831D8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_826831D8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82683200
	if (!ctx.cr6.eq) goto loc_82683200;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82683218
	goto loc_82683218;
loc_82683200:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82683218
	goto loc_82683218;
loc_82683214:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82683218:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82683228
	if (ctx.cr6.eq) goto loc_82683228;
	// bl 0x821b01d0
	ctx.lr = 0x82683228;
	sub_821B01D0(ctx, base);
loc_82683228:
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

