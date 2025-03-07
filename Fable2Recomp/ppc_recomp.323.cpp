#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_832868B0"))) PPC_WEAK_FUNC(sub_832868B0);
PPC_FUNC_IMPL(__imp__sub_832868B0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,3828
	ctx.r3.s64 = ctx.r10.s64 + 3828;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832868D4;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-11760
	ctx.r3.s64 = ctx.r9.s64 + -11760;
	// bl 0x82ca3700
	ctx.lr = 0x832868E0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832868F0"))) PPC_WEAK_FUNC(sub_832868F0);
PPC_FUNC_IMPL(__imp__sub_832868F0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,3832
	ctx.r3.s64 = ctx.r10.s64 + 3832;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83286914;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-11744
	ctx.r3.s64 = ctx.r9.s64 + -11744;
	// bl 0x82ca3700
	ctx.lr = 0x83286920;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83286930"))) PPC_WEAK_FUNC(sub_83286930);
PPC_FUNC_IMPL(__imp__sub_83286930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r11,r11,3856
	ctx.r11.s64 = ctx.r11.s64 + 3856;
	// li r10,0
	ctx.r10.s64 = 0;
loc_83286940:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// bge 0x83286940
	if (!ctx.cr0.lt) goto loc_83286940;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-11728
	ctx.r3.s64 = ctx.r11.s64 + -11728;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328696C"))) PPC_WEAK_FUNC(sub_8328696C);
PPC_FUNC_IMPL(__imp__sub_8328696C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83286970"))) PPC_WEAK_FUNC(sub_83286970);
PPC_FUNC_IMPL(__imp__sub_83286970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,3836
	ctx.r11.s64 = ctx.r11.s64 + 3836;
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-11640
	ctx.r3.s64 = ctx.r9.s64 + -11640;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83286998"))) PPC_WEAK_FUNC(sub_83286998);
PPC_FUNC_IMPL(__imp__sub_83286998) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,3936
	ctx.r3.s64 = ctx.r10.s64 + 3936;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832869BC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-11616
	ctx.r3.s64 = ctx.r9.s64 + -11616;
	// bl 0x82ca3700
	ctx.lr = 0x832869C8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832869D8"))) PPC_WEAK_FUNC(sub_832869D8);
PPC_FUNC_IMPL(__imp__sub_832869D8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,3940
	ctx.r3.s64 = ctx.r10.s64 + 3940;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832869FC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-11600
	ctx.r3.s64 = ctx.r9.s64 + -11600;
	// bl 0x82ca3700
	ctx.lr = 0x83286A08;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83286A18"))) PPC_WEAK_FUNC(sub_83286A18);
PPC_FUNC_IMPL(__imp__sub_83286A18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,3944
	ctx.r11.s64 = ctx.r11.s64 + 3944;
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-11584
	ctx.r3.s64 = ctx.r9.s64 + -11584;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83286A40"))) PPC_WEAK_FUNC(sub_83286A40);
PPC_FUNC_IMPL(__imp__sub_83286A40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x83286A48;
	sub_82CA2BD4(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// addi r9,r11,-5256
	ctx.r9.s64 = ctx.r11.s64 + -5256;
	// lis r6,-32240
	ctx.r6.s64 = -2112880640;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r3,r1,-92
	ctx.r3.s64 = ctx.r1.s64 + -92;
	// lfs f11,-5256(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -5256);
	ctx.f11.f64 = double(temp.f32);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// stfs f11,-96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// lfs f0,-22212(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -22212);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r1,-116
	ctx.r30.s64 = ctx.r1.s64 + -116;
	// stfs f0,-136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -136, temp.u32);
	// addi r27,r1,-136
	ctx.r27.s64 = ctx.r1.s64 + -136;
	// stfs f0,-132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -132, temp.u32);
	// addi r26,r1,-132
	ctx.r26.s64 = ctx.r1.s64 + -132;
	// stfs f0,-140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -140, temp.u32);
	// addi r4,r1,-96
	ctx.r4.s64 = ctx.r1.s64 + -96;
	// stfs f0,-128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -128, temp.u32);
	// addi r31,r1,-140
	ctx.r31.s64 = ctx.r1.s64 + -140;
	// stfs f0,-124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -124, temp.u32);
	// addi r25,r1,-128
	ctx.r25.s64 = ctx.r1.s64 + -128;
	// stfs f0,-120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -120, temp.u32);
	// addi r24,r1,-112
	ctx.r24.s64 = ctx.r1.s64 + -112;
	// stfs f0,-112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -112, temp.u32);
	// addi r23,r1,-104
	ctx.r23.s64 = ctx.r1.s64 + -104;
	// stfs f0,-104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -104, temp.u32);
	// lis r5,-32240
	ctx.r5.s64 = -2112880640;
	// stfs f0,-100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -100, temp.u32);
	// addi r11,r1,-88
	ctx.r11.s64 = ctx.r1.s64 + -88;
	// lfs f0,3376(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3376);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r1,-124
	ctx.r8.s64 = ctx.r1.s64 + -124;
	// stfs f0,-116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -116, temp.u32);
	// addi r29,r1,-108
	ctx.r29.s64 = ctx.r1.s64 + -108;
	// lfs f0,3372(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 3372);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,-100
	ctx.r6.s64 = ctx.r1.s64 + -100;
	// lfs f13,2296(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2296);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,-144
	ctx.r10.s64 = ctx.r1.s64 + -144;
	// stfs f0,-92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// addi r28,r1,-88
	ctx.r28.s64 = ctx.r1.s64 + -88;
	// lvlx v0,0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r3,32
	ctx.r3.s64 = 32;
	// stfs f13,-144(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -144, temp.u32);
	// lfs f13,3368(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3368);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r1,-120
	ctx.r7.s64 = ctx.r1.s64 + -120;
	// lvlx v8,0,r30
	temp.u32 = ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v7,0,r27
	temp.u32 = ctx.r27.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v6,0,r26
	temp.u32 = ctx.r26.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v11,0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r4,16
	ctx.r4.s64 = 16;
	// lvlx v10,0,r31
	temp.u32 = ctx.r31.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v5,0,r25
	temp.u32 = ctx.r25.u32;
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v4,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v3,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v2,0,r24
	temp.u32 = ctx.r24.u32;
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v1,0,r23
	temp.u32 = ctx.r23.u32;
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v31,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f13,-108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -108, temp.u32);
	// lfs f13,3364(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 3364);
	ctx.f13.f64 = double(temp.f32);
	// lis r5,-31926
	ctx.r5.s64 = -2092302336;
	// stfs f13,-88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -88, temp.u32);
	// lvlx v13,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r5,r5,3968
	ctx.r5.s64 = ctx.r5.s64 + 3968;
	// lfs f12,-22200(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -22200);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,-88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -88, temp.u32);
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// lvlx v12,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v0,0,r29
	temp.u32 = ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v6,v7,4,3
	_mm_store_ps(ctx.v6.f32, _mm_blend_ps(_mm_load_ps(ctx.v6.f32), _mm_permute_ps(_mm_load_ps(ctx.v7.f32), 57), 4));
	// lvlx v9,0,r28
	temp.u32 = ctx.r28.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v9,v12,4,3
	_mm_store_ps(ctx.v9.f32, _mm_blend_ps(_mm_load_ps(ctx.v9.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// vrlimi128 v0,v8,4,3
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v8.f32), 57), 4));
	// vrlimi128 v11,v10,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v10.f32), 57), 4));
	// vor v12,v9,v9
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// vrlimi128 v4,v5,4,3
	_mm_store_ps(ctx.v4.f32, _mm_blend_ps(_mm_load_ps(ctx.v4.f32), _mm_permute_ps(_mm_load_ps(ctx.v5.f32), 57), 4));
	// vrlimi128 v2,v3,4,3
	_mm_store_ps(ctx.v2.f32, _mm_blend_ps(_mm_load_ps(ctx.v2.f32), _mm_permute_ps(_mm_load_ps(ctx.v3.f32), 57), 4));
	// vrlimi128 v31,v1,4,3
	_mm_store_ps(ctx.v31.f32, _mm_blend_ps(_mm_load_ps(ctx.v31.f32), _mm_permute_ps(_mm_load_ps(ctx.v1.f32), 57), 4));
	// vrlimi128 v0,v6,3,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v6.f32), 78), 3));
	// vrlimi128 v13,v4,3,2
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v4.f32), 78), 3));
	// vrlimi128 v12,v2,3,2
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v2.f32), 78), 3));
	// vrlimi128 v11,v31,3,2
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v31.f32), 78), 3));
	// stvx128 v0,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,48
	ctx.r11.s64 = 48;
	// stvx128 v13,r5,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r5,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32 + ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r5,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_83286BA0"))) PPC_WEAK_FUNC(sub_83286BA0);
PPC_FUNC_IMPL(__imp__sub_83286BA0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31926
	ctx.r8.s64 = -2092302336;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r6,r8,4032
	ctx.r6.s64 = ctx.r8.s64 + 4032;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,4032(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4032, ctx.r11.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// stw r9,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r9.u32);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// stw r11,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r11.u32);
	// stw r7,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r7.u32);
	// stw r10,24(r6)
	PPC_STORE_U32(ctx.r6.u32 + 24, ctx.r10.u32);
	// stw r9,28(r6)
	PPC_STORE_U32(ctx.r6.u32 + 28, ctx.r9.u32);
	// stw r8,32(r6)
	PPC_STORE_U32(ctx.r6.u32 + 32, ctx.r8.u32);
	// stw r11,36(r6)
	PPC_STORE_U32(ctx.r6.u32 + 36, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83286BE8"))) PPC_WEAK_FUNC(sub_83286BE8);
PPC_FUNC_IMPL(__imp__sub_83286BE8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,4072
	ctx.r3.s64 = ctx.r10.s64 + 4072;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83286C0C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-11560
	ctx.r3.s64 = ctx.r9.s64 + -11560;
	// bl 0x82ca3700
	ctx.lr = 0x83286C18;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83286C28"))) PPC_WEAK_FUNC(sub_83286C28);
PPC_FUNC_IMPL(__imp__sub_83286C28) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,4076
	ctx.r3.s64 = ctx.r10.s64 + 4076;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83286C4C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-11544
	ctx.r3.s64 = ctx.r9.s64 + -11544;
	// bl 0x82ca3700
	ctx.lr = 0x83286C58;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83286C68"))) PPC_WEAK_FUNC(sub_83286C68);
PPC_FUNC_IMPL(__imp__sub_83286C68) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,16368
	ctx.r3.s64 = ctx.r10.s64 + 16368;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83286C8C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-11528
	ctx.r3.s64 = ctx.r9.s64 + -11528;
	// bl 0x82ca3700
	ctx.lr = 0x83286C98;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83286CA8"))) PPC_WEAK_FUNC(sub_83286CA8);
PPC_FUNC_IMPL(__imp__sub_83286CA8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,16372
	ctx.r3.s64 = ctx.r10.s64 + 16372;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83286CCC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-11512
	ctx.r3.s64 = ctx.r9.s64 + -11512;
	// bl 0x82ca3700
	ctx.lr = 0x83286CD8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83286CE8"))) PPC_WEAK_FUNC(sub_83286CE8);
PPC_FUNC_IMPL(__imp__sub_83286CE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r11,r11,16376
	ctx.r11.s64 = ctx.r11.s64 + 16376;
	// li r10,0
	ctx.r10.s64 = 0;
loc_83286CF8:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// bge 0x83286cf8
	if (!ctx.cr0.lt) goto loc_83286CF8;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-11496
	ctx.r3.s64 = ctx.r11.s64 + -11496;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83286D24"))) PPC_WEAK_FUNC(sub_83286D24);
PPC_FUNC_IMPL(__imp__sub_83286D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83286D28"))) PPC_WEAK_FUNC(sub_83286D28);
PPC_FUNC_IMPL(__imp__sub_83286D28) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31926
	ctx.r8.s64 = -2092302336;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r6,r8,16456
	ctx.r6.s64 = ctx.r8.s64 + 16456;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,16456(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16456, ctx.r11.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// stw r9,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r9.u32);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// stw r11,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r11.u32);
	// stw r7,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r7.u32);
	// stw r10,24(r6)
	PPC_STORE_U32(ctx.r6.u32 + 24, ctx.r10.u32);
	// stw r9,28(r6)
	PPC_STORE_U32(ctx.r6.u32 + 28, ctx.r9.u32);
	// stw r8,32(r6)
	PPC_STORE_U32(ctx.r6.u32 + 32, ctx.r8.u32);
	// stw r11,36(r6)
	PPC_STORE_U32(ctx.r6.u32 + 36, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83286D70"))) PPC_WEAK_FUNC(sub_83286D70);
PPC_FUNC_IMPL(__imp__sub_83286D70) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,16496
	ctx.r3.s64 = ctx.r10.s64 + 16496;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83286D94;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-11408
	ctx.r3.s64 = ctx.r9.s64 + -11408;
	// bl 0x82ca3700
	ctx.lr = 0x83286DA0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83286DB0"))) PPC_WEAK_FUNC(sub_83286DB0);
PPC_FUNC_IMPL(__imp__sub_83286DB0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,16500
	ctx.r3.s64 = ctx.r10.s64 + 16500;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83286DD4;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-11392
	ctx.r3.s64 = ctx.r9.s64 + -11392;
	// bl 0x82ca3700
	ctx.lr = 0x83286DE0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83286DF0"))) PPC_WEAK_FUNC(sub_83286DF0);
PPC_FUNC_IMPL(__imp__sub_83286DF0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,16504
	ctx.r3.s64 = ctx.r10.s64 + 16504;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83286E14;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-11248
	ctx.r3.s64 = ctx.r9.s64 + -11248;
	// bl 0x82ca3700
	ctx.lr = 0x83286E20;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83286E30"))) PPC_WEAK_FUNC(sub_83286E30);
PPC_FUNC_IMPL(__imp__sub_83286E30) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,16508
	ctx.r3.s64 = ctx.r10.s64 + 16508;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83286E54;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-11232
	ctx.r3.s64 = ctx.r9.s64 + -11232;
	// bl 0x82ca3700
	ctx.lr = 0x83286E60;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83286E70"))) PPC_WEAK_FUNC(sub_83286E70);
PPC_FUNC_IMPL(__imp__sub_83286E70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// addi r8,r9,16512
	ctx.r8.s64 = ctx.r9.s64 + 16512;
	// lfs f0,-27860(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27860);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83286E98"))) PPC_WEAK_FUNC(sub_83286E98);
PPC_FUNC_IMPL(__imp__sub_83286E98) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,16528
	ctx.r3.s64 = ctx.r10.s64 + 16528;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83286EBC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-11216
	ctx.r3.s64 = ctx.r9.s64 + -11216;
	// bl 0x82ca3700
	ctx.lr = 0x83286EC8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83286ED8"))) PPC_WEAK_FUNC(sub_83286ED8);
PPC_FUNC_IMPL(__imp__sub_83286ED8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,16532
	ctx.r3.s64 = ctx.r10.s64 + 16532;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83286EFC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-11200
	ctx.r3.s64 = ctx.r9.s64 + -11200;
	// bl 0x82ca3700
	ctx.lr = 0x83286F08;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83286F18"))) PPC_WEAK_FUNC(sub_83286F18);
PPC_FUNC_IMPL(__imp__sub_83286F18) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,16536
	ctx.r3.s64 = ctx.r10.s64 + 16536;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83286F3C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-11184
	ctx.r3.s64 = ctx.r9.s64 + -11184;
	// bl 0x82ca3700
	ctx.lr = 0x83286F48;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83286F58"))) PPC_WEAK_FUNC(sub_83286F58);
PPC_FUNC_IMPL(__imp__sub_83286F58) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,16540
	ctx.r3.s64 = ctx.r10.s64 + 16540;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83286F7C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-11168
	ctx.r3.s64 = ctx.r9.s64 + -11168;
	// bl 0x82ca3700
	ctx.lr = 0x83286F88;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83286F98"))) PPC_WEAK_FUNC(sub_83286F98);
PPC_FUNC_IMPL(__imp__sub_83286F98) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,16544
	ctx.r3.s64 = ctx.r10.s64 + 16544;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83286FBC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-11152
	ctx.r3.s64 = ctx.r9.s64 + -11152;
	// bl 0x82ca3700
	ctx.lr = 0x83286FC8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83286FD8"))) PPC_WEAK_FUNC(sub_83286FD8);
PPC_FUNC_IMPL(__imp__sub_83286FD8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,16548
	ctx.r3.s64 = ctx.r10.s64 + 16548;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83286FFC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-11136
	ctx.r3.s64 = ctx.r9.s64 + -11136;
	// bl 0x82ca3700
	ctx.lr = 0x83287008;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83287018"))) PPC_WEAK_FUNC(sub_83287018);
PPC_FUNC_IMPL(__imp__sub_83287018) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,16552
	ctx.r3.s64 = ctx.r10.s64 + 16552;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8328703C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-11120
	ctx.r3.s64 = ctx.r9.s64 + -11120;
	// bl 0x82ca3700
	ctx.lr = 0x83287048;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83287058"))) PPC_WEAK_FUNC(sub_83287058);
PPC_FUNC_IMPL(__imp__sub_83287058) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,16556
	ctx.r3.s64 = ctx.r10.s64 + 16556;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8328707C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-11104
	ctx.r3.s64 = ctx.r9.s64 + -11104;
	// bl 0x82ca3700
	ctx.lr = 0x83287088;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83287098"))) PPC_WEAK_FUNC(sub_83287098);
PPC_FUNC_IMPL(__imp__sub_83287098) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,16560
	ctx.r3.s64 = ctx.r10.s64 + 16560;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832870BC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-11088
	ctx.r3.s64 = ctx.r9.s64 + -11088;
	// bl 0x82ca3700
	ctx.lr = 0x832870C8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832870D8"))) PPC_WEAK_FUNC(sub_832870D8);
PPC_FUNC_IMPL(__imp__sub_832870D8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,16564
	ctx.r3.s64 = ctx.r10.s64 + 16564;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832870FC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-11072
	ctx.r3.s64 = ctx.r9.s64 + -11072;
	// bl 0x82ca3700
	ctx.lr = 0x83287108;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83287118"))) PPC_WEAK_FUNC(sub_83287118);
PPC_FUNC_IMPL(__imp__sub_83287118) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,16568
	ctx.r3.s64 = ctx.r10.s64 + 16568;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8328713C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-11056
	ctx.r3.s64 = ctx.r9.s64 + -11056;
	// bl 0x82ca3700
	ctx.lr = 0x83287148;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83287158"))) PPC_WEAK_FUNC(sub_83287158);
PPC_FUNC_IMPL(__imp__sub_83287158) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,16572
	ctx.r3.s64 = ctx.r10.s64 + 16572;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8328717C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-11040
	ctx.r3.s64 = ctx.r9.s64 + -11040;
	// bl 0x82ca3700
	ctx.lr = 0x83287188;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83287198"))) PPC_WEAK_FUNC(sub_83287198);
PPC_FUNC_IMPL(__imp__sub_83287198) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,16576
	ctx.r3.s64 = ctx.r10.s64 + 16576;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832871BC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-11024
	ctx.r3.s64 = ctx.r9.s64 + -11024;
	// bl 0x82ca3700
	ctx.lr = 0x832871C8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832871D8"))) PPC_WEAK_FUNC(sub_832871D8);
PPC_FUNC_IMPL(__imp__sub_832871D8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,16580
	ctx.r3.s64 = ctx.r10.s64 + 16580;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832871FC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-11008
	ctx.r3.s64 = ctx.r9.s64 + -11008;
	// bl 0x82ca3700
	ctx.lr = 0x83287208;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83287218"))) PPC_WEAK_FUNC(sub_83287218);
PPC_FUNC_IMPL(__imp__sub_83287218) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,16584
	ctx.r3.s64 = ctx.r10.s64 + 16584;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8328723C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-10992
	ctx.r3.s64 = ctx.r9.s64 + -10992;
	// bl 0x82ca3700
	ctx.lr = 0x83287248;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83287258"))) PPC_WEAK_FUNC(sub_83287258);
PPC_FUNC_IMPL(__imp__sub_83287258) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,16588
	ctx.r3.s64 = ctx.r10.s64 + 16588;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8328727C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-10976
	ctx.r3.s64 = ctx.r9.s64 + -10976;
	// bl 0x82ca3700
	ctx.lr = 0x83287288;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83287298"))) PPC_WEAK_FUNC(sub_83287298);
PPC_FUNC_IMPL(__imp__sub_83287298) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,16592
	ctx.r3.s64 = ctx.r10.s64 + 16592;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832872BC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-10960
	ctx.r3.s64 = ctx.r9.s64 + -10960;
	// bl 0x82ca3700
	ctx.lr = 0x832872C8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832872D8"))) PPC_WEAK_FUNC(sub_832872D8);
PPC_FUNC_IMPL(__imp__sub_832872D8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,16596
	ctx.r3.s64 = ctx.r10.s64 + 16596;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832872FC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-10944
	ctx.r3.s64 = ctx.r9.s64 + -10944;
	// bl 0x82ca3700
	ctx.lr = 0x83287308;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83287318"))) PPC_WEAK_FUNC(sub_83287318);
PPC_FUNC_IMPL(__imp__sub_83287318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r11,r11,16600
	ctx.r11.s64 = ctx.r11.s64 + 16600;
	// li r10,0
	ctx.r10.s64 = 0;
loc_83287328:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// bge 0x83287328
	if (!ctx.cr0.lt) goto loc_83287328;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-10928
	ctx.r3.s64 = ctx.r11.s64 + -10928;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83287354"))) PPC_WEAK_FUNC(sub_83287354);
PPC_FUNC_IMPL(__imp__sub_83287354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83287358"))) PPC_WEAK_FUNC(sub_83287358);
PPC_FUNC_IMPL(__imp__sub_83287358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-10840
	ctx.r3.s64 = ctx.r11.s64 + -10840;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83287364"))) PPC_WEAK_FUNC(sub_83287364);
PPC_FUNC_IMPL(__imp__sub_83287364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83287368"))) PPC_WEAK_FUNC(sub_83287368);
PPC_FUNC_IMPL(__imp__sub_83287368) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,16684
	ctx.r3.s64 = ctx.r10.s64 + 16684;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8328738C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-10720
	ctx.r3.s64 = ctx.r9.s64 + -10720;
	// bl 0x82ca3700
	ctx.lr = 0x83287398;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832873A8"))) PPC_WEAK_FUNC(sub_832873A8);
PPC_FUNC_IMPL(__imp__sub_832873A8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,16688
	ctx.r3.s64 = ctx.r10.s64 + 16688;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832873CC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-10704
	ctx.r3.s64 = ctx.r9.s64 + -10704;
	// bl 0x82ca3700
	ctx.lr = 0x832873D8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832873E8"))) PPC_WEAK_FUNC(sub_832873E8);
PPC_FUNC_IMPL(__imp__sub_832873E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,16692
	ctx.r11.s64 = ctx.r11.s64 + 16692;
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-10688
	ctx.r3.s64 = ctx.r9.s64 + -10688;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83287410"))) PPC_WEAK_FUNC(sub_83287410);
PPC_FUNC_IMPL(__imp__sub_83287410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,16712
	ctx.r11.s64 = ctx.r11.s64 + 16712;
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-10664
	ctx.r3.s64 = ctx.r9.s64 + -10664;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83287438"))) PPC_WEAK_FUNC(sub_83287438);
PPC_FUNC_IMPL(__imp__sub_83287438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-10640
	ctx.r3.s64 = ctx.r11.s64 + -10640;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83287444"))) PPC_WEAK_FUNC(sub_83287444);
PPC_FUNC_IMPL(__imp__sub_83287444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83287448"))) PPC_WEAK_FUNC(sub_83287448);
PPC_FUNC_IMPL(__imp__sub_83287448) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,16748
	ctx.r3.s64 = ctx.r10.s64 + 16748;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8328746C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-10552
	ctx.r3.s64 = ctx.r9.s64 + -10552;
	// bl 0x82ca3700
	ctx.lr = 0x83287478;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83287488"))) PPC_WEAK_FUNC(sub_83287488);
PPC_FUNC_IMPL(__imp__sub_83287488) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,16752
	ctx.r3.s64 = ctx.r10.s64 + 16752;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832874AC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-10536
	ctx.r3.s64 = ctx.r9.s64 + -10536;
	// bl 0x82ca3700
	ctx.lr = 0x832874B8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832874C8"))) PPC_WEAK_FUNC(sub_832874C8);
PPC_FUNC_IMPL(__imp__sub_832874C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,16756
	ctx.r11.s64 = ctx.r11.s64 + 16756;
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-10520
	ctx.r3.s64 = ctx.r9.s64 + -10520;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832874F0"))) PPC_WEAK_FUNC(sub_832874F0);
PPC_FUNC_IMPL(__imp__sub_832874F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,16776
	ctx.r11.s64 = ctx.r11.s64 + 16776;
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-10496
	ctx.r3.s64 = ctx.r9.s64 + -10496;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83287518"))) PPC_WEAK_FUNC(sub_83287518);
PPC_FUNC_IMPL(__imp__sub_83287518) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,16796
	ctx.r3.s64 = ctx.r10.s64 + 16796;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8328753C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-10472
	ctx.r3.s64 = ctx.r9.s64 + -10472;
	// bl 0x82ca3700
	ctx.lr = 0x83287548;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83287558"))) PPC_WEAK_FUNC(sub_83287558);
PPC_FUNC_IMPL(__imp__sub_83287558) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,16800
	ctx.r3.s64 = ctx.r10.s64 + 16800;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8328757C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-10456
	ctx.r3.s64 = ctx.r9.s64 + -10456;
	// bl 0x82ca3700
	ctx.lr = 0x83287588;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83287598"))) PPC_WEAK_FUNC(sub_83287598);
PPC_FUNC_IMPL(__imp__sub_83287598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// addi r11,r11,16880
	ctx.r11.s64 = ctx.r11.s64 + 16880;
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// lis r5,-32241
	ctx.r5.s64 = -2112946176;
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// li r8,22
	ctx.r8.s64 = 22;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r7,24236
	ctx.r7.s64 = ctx.r7.s64 + 24236;
	// addi r6,r6,24232
	ctx.r6.s64 = ctx.r6.s64 + 24232;
	// addi r9,r9,-23720
	ctx.r9.s64 = ctx.r9.s64 + -23720;
	// addi r5,r5,24220
	ctx.r5.s64 = ctx.r5.s64 + 24220;
	// addi r4,r4,24204
	ctx.r4.s64 = ctx.r4.s64 + 24204;
loc_832875D4:
	// stw r10,-24(r11)
	PPC_STORE_U32(ctx.r11.u32 + -24, ctx.r10.u32);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r9,-20(r11)
	PPC_STORE_U32(ctx.r11.u32 + -20, ctx.r9.u32);
	// stw r4,-28(r11)
	PPC_STORE_U32(ctx.r11.u32 + -28, ctx.r4.u32);
	// stw r5,-20(r11)
	PPC_STORE_U32(ctx.r11.u32 + -20, ctx.r5.u32);
	// stw r10,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r10.u32);
	// stw r10,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r10.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r6,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r6.u32);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// bge 0x832875d4
	if (!ctx.cr0.lt) goto loc_832875D4;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-10440
	ctx.r3.s64 = ctx.r11.s64 + -10440;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83287610"))) PPC_WEAK_FUNC(sub_83287610);
PPC_FUNC_IMPL(__imp__sub_83287610) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,26464
	ctx.r4.s64 = ctx.r11.s64 + 26464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x83287630;
	sub_8222CF18(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r10,16804
	ctx.r3.s64 = ctx.r10.s64 + 16804;
	// bl 0x822ab200
	ctx.lr = 0x83287640;
	sub_822AB200(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-10264
	ctx.r3.s64 = ctx.r9.s64 + -10264;
	// bl 0x82ca3700
	ctx.lr = 0x8328764C;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328765C"))) PPC_WEAK_FUNC(sub_8328765C);
PPC_FUNC_IMPL(__imp__sub_8328765C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83287660"))) PPC_WEAK_FUNC(sub_83287660);
PPC_FUNC_IMPL(__imp__sub_83287660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-10248
	ctx.r3.s64 = ctx.r11.s64 + -10248;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328766C"))) PPC_WEAK_FUNC(sub_8328766C);
PPC_FUNC_IMPL(__imp__sub_8328766C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83287670"))) PPC_WEAK_FUNC(sub_83287670);
PPC_FUNC_IMPL(__imp__sub_83287670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-10128
	ctx.r3.s64 = ctx.r11.s64 + -10128;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328767C"))) PPC_WEAK_FUNC(sub_8328767C);
PPC_FUNC_IMPL(__imp__sub_8328767C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83287680"))) PPC_WEAK_FUNC(sub_83287680);
PPC_FUNC_IMPL(__imp__sub_83287680) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,19168
	ctx.r3.s64 = ctx.r10.s64 + 19168;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832876A4;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-10112
	ctx.r3.s64 = ctx.r9.s64 + -10112;
	// bl 0x82ca3700
	ctx.lr = 0x832876B0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832876C0"))) PPC_WEAK_FUNC(sub_832876C0);
PPC_FUNC_IMPL(__imp__sub_832876C0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,19172
	ctx.r3.s64 = ctx.r10.s64 + 19172;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832876E4;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-10096
	ctx.r3.s64 = ctx.r9.s64 + -10096;
	// bl 0x82ca3700
	ctx.lr = 0x832876F0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83287700"))) PPC_WEAK_FUNC(sub_83287700);
PPC_FUNC_IMPL(__imp__sub_83287700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r1,-12
	ctx.r9.s64 = ctx.r1.s64 + -12;
	// addi r8,r1,-12
	ctx.r8.s64 = ctx.r1.s64 + -12;
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// lfs f0,-27456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27456);
	ctx.f0.f64 = double(temp.f32);
	// lis r6,-31926
	ctx.r6.s64 = -2092302336;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r5,r6,19184
	ctx.r5.s64 = ctx.r6.s64 + 19184;
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lvlx v13,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// lvlx v12,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v11,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v11,v12,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// vor v0,v11,v11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// vrlimi128 v0,v13,3,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 3));
	// stvx128 v0,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83287758"))) PPC_WEAK_FUNC(sub_83287758);
PPC_FUNC_IMPL(__imp__sub_83287758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-27468
	ctx.r9.s64 = ctx.r11.s64 + -27468;
	// addi r10,r1,-12
	ctx.r10.s64 = ctx.r1.s64 + -12;
	// addi r7,r1,-12
	ctx.r7.s64 = ctx.r1.s64 + -12;
	// lfs f0,-27468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27468);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lis r5,-31926
	ctx.r5.s64 = -2092302336;
	// lvlx v13,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lfs f13,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r5,19200
	ctx.r4.s64 = ctx.r5.s64 + 19200;
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// lvlx v12,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v11,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v11,v12,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// vor v0,v11,v11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// vrlimi128 v0,v13,3,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 3));
	// stvx128 v0,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832877B8"))) PPC_WEAK_FUNC(sub_832877B8);
PPC_FUNC_IMPL(__imp__sub_832877B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-10080
	ctx.r3.s64 = ctx.r11.s64 + -10080;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832877C4"))) PPC_WEAK_FUNC(sub_832877C4);
PPC_FUNC_IMPL(__imp__sub_832877C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832877C8"))) PPC_WEAK_FUNC(sub_832877C8);
PPC_FUNC_IMPL(__imp__sub_832877C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-9984
	ctx.r3.s64 = ctx.r11.s64 + -9984;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832877D4"))) PPC_WEAK_FUNC(sub_832877D4);
PPC_FUNC_IMPL(__imp__sub_832877D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832877D8"))) PPC_WEAK_FUNC(sub_832877D8);
PPC_FUNC_IMPL(__imp__sub_832877D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-9888
	ctx.r3.s64 = ctx.r11.s64 + -9888;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832877E4"))) PPC_WEAK_FUNC(sub_832877E4);
PPC_FUNC_IMPL(__imp__sub_832877E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832877E8"))) PPC_WEAK_FUNC(sub_832877E8);
PPC_FUNC_IMPL(__imp__sub_832877E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,19292
	ctx.r11.s64 = ctx.r11.s64 + 19292;
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-9872
	ctx.r3.s64 = ctx.r9.s64 + -9872;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83287810"))) PPC_WEAK_FUNC(sub_83287810);
PPC_FUNC_IMPL(__imp__sub_83287810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,19312
	ctx.r11.s64 = ctx.r11.s64 + 19312;
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-9848
	ctx.r3.s64 = ctx.r9.s64 + -9848;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83287838"))) PPC_WEAK_FUNC(sub_83287838);
PPC_FUNC_IMPL(__imp__sub_83287838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,19332
	ctx.r11.s64 = ctx.r11.s64 + 19332;
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-9824
	ctx.r3.s64 = ctx.r9.s64 + -9824;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83287860"))) PPC_WEAK_FUNC(sub_83287860);
PPC_FUNC_IMPL(__imp__sub_83287860) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,19352
	ctx.r3.s64 = ctx.r10.s64 + 19352;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83287884;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-9712
	ctx.r3.s64 = ctx.r9.s64 + -9712;
	// bl 0x82ca3700
	ctx.lr = 0x83287890;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832878A0"))) PPC_WEAK_FUNC(sub_832878A0);
PPC_FUNC_IMPL(__imp__sub_832878A0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,19356
	ctx.r3.s64 = ctx.r10.s64 + 19356;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832878C4;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-9696
	ctx.r3.s64 = ctx.r9.s64 + -9696;
	// bl 0x82ca3700
	ctx.lr = 0x832878D0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832878E0"))) PPC_WEAK_FUNC(sub_832878E0);
PPC_FUNC_IMPL(__imp__sub_832878E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-9680
	ctx.r3.s64 = ctx.r11.s64 + -9680;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832878EC"))) PPC_WEAK_FUNC(sub_832878EC);
PPC_FUNC_IMPL(__imp__sub_832878EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832878F0"))) PPC_WEAK_FUNC(sub_832878F0);
PPC_FUNC_IMPL(__imp__sub_832878F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-9592
	ctx.r3.s64 = ctx.r11.s64 + -9592;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832878FC"))) PPC_WEAK_FUNC(sub_832878FC);
PPC_FUNC_IMPL(__imp__sub_832878FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83287900"))) PPC_WEAK_FUNC(sub_83287900);
PPC_FUNC_IMPL(__imp__sub_83287900) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-9504
	ctx.r3.s64 = ctx.r11.s64 + -9504;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328790C"))) PPC_WEAK_FUNC(sub_8328790C);
PPC_FUNC_IMPL(__imp__sub_8328790C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83287910"))) PPC_WEAK_FUNC(sub_83287910);
PPC_FUNC_IMPL(__imp__sub_83287910) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,19408
	ctx.r3.s64 = ctx.r10.s64 + 19408;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83287934;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-9416
	ctx.r3.s64 = ctx.r9.s64 + -9416;
	// bl 0x82ca3700
	ctx.lr = 0x83287940;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83287950"))) PPC_WEAK_FUNC(sub_83287950);
PPC_FUNC_IMPL(__imp__sub_83287950) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,19412
	ctx.r3.s64 = ctx.r10.s64 + 19412;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83287974;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-9400
	ctx.r3.s64 = ctx.r9.s64 + -9400;
	// bl 0x82ca3700
	ctx.lr = 0x83287980;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83287990"))) PPC_WEAK_FUNC(sub_83287990);
PPC_FUNC_IMPL(__imp__sub_83287990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-9384
	ctx.r3.s64 = ctx.r11.s64 + -9384;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328799C"))) PPC_WEAK_FUNC(sub_8328799C);
PPC_FUNC_IMPL(__imp__sub_8328799C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832879A0"))) PPC_WEAK_FUNC(sub_832879A0);
PPC_FUNC_IMPL(__imp__sub_832879A0) {
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
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8221f388
	ctx.lr = 0x832879B4;
	sub_8221F388(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832879c4
	if (ctx.cr6.eq) goto loc_832879C4;
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
loc_832879C4:
	// addic. r10,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r10.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x832879d0
	if (ctx.cr0.eq) goto loc_832879D0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_832879D0:
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,19420
	ctx.r8.s64 = ctx.r9.s64 + 19420;
	// lis r7,-31957
	ctx.r7.s64 = -2094333952;
	// addi r3,r7,-9320
	ctx.r3.s64 = ctx.r7.s64 + -9320;
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// bl 0x82ca3700
	ctx.lr = 0x832879F0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83287A00"))) PPC_WEAK_FUNC(sub_83287A00);
PPC_FUNC_IMPL(__imp__sub_83287A00) {
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
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8221f388
	ctx.lr = 0x83287A14;
	sub_8221F388(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83287a24
	if (ctx.cr6.eq) goto loc_83287A24;
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
loc_83287A24:
	// addic. r10,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r10.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83287a30
	if (ctx.cr0.eq) goto loc_83287A30;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_83287A30:
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,19432
	ctx.r8.s64 = ctx.r9.s64 + 19432;
	// lis r7,-31957
	ctx.r7.s64 = -2094333952;
	// addi r3,r7,-9248
	ctx.r3.s64 = ctx.r7.s64 + -9248;
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// bl 0x82ca3700
	ctx.lr = 0x83287A50;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83287A60"))) PPC_WEAK_FUNC(sub_83287A60);
PPC_FUNC_IMPL(__imp__sub_83287A60) {
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
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8221f388
	ctx.lr = 0x83287A74;
	sub_8221F388(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83287a84
	if (ctx.cr6.eq) goto loc_83287A84;
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
loc_83287A84:
	// addic. r10,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r10.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83287a90
	if (ctx.cr0.eq) goto loc_83287A90;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_83287A90:
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,19444
	ctx.r8.s64 = ctx.r9.s64 + 19444;
	// lis r7,-31957
	ctx.r7.s64 = -2094333952;
	// addi r3,r7,-9176
	ctx.r3.s64 = ctx.r7.s64 + -9176;
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// bl 0x82ca3700
	ctx.lr = 0x83287AB0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83287AC0"))) PPC_WEAK_FUNC(sub_83287AC0);
PPC_FUNC_IMPL(__imp__sub_83287AC0) {
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
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8221f388
	ctx.lr = 0x83287AD4;
	sub_8221F388(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83287ae4
	if (ctx.cr6.eq) goto loc_83287AE4;
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
loc_83287AE4:
	// addic. r10,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r10.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83287af0
	if (ctx.cr0.eq) goto loc_83287AF0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_83287AF0:
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,19456
	ctx.r8.s64 = ctx.r9.s64 + 19456;
	// lis r7,-31957
	ctx.r7.s64 = -2094333952;
	// addi r3,r7,-9040
	ctx.r3.s64 = ctx.r7.s64 + -9040;
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// bl 0x82ca3700
	ctx.lr = 0x83287B10;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83287B20"))) PPC_WEAK_FUNC(sub_83287B20);
PPC_FUNC_IMPL(__imp__sub_83287B20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r8,r1,-12
	ctx.r8.s64 = ctx.r1.s64 + -12;
	// addi r7,r1,-12
	ctx.r7.s64 = ctx.r1.s64 + -12;
	// lfs f0,-27468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27468);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lis r5,-31950
	ctx.r5.s64 = -2093875200;
	// lvlx v0,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r4,16
	ctx.r4.s64 = 16;
	// lfs f13,3628(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3628);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r5,-21760
	ctx.r3.s64 = ctx.r5.s64 + -21760;
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lvlx v13,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// lvlx v12,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v11,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v11,v12,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// vor v0,v11,v11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// vrlimi128 v0,v13,3,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 3));
	// stvx128 v0,r3,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83287B84"))) PPC_WEAK_FUNC(sub_83287B84);
PPC_FUNC_IMPL(__imp__sub_83287B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83287B88"))) PPC_WEAK_FUNC(sub_83287B88);
PPC_FUNC_IMPL(__imp__sub_83287B88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r10,r1,-12
	ctx.r10.s64 = ctx.r1.s64 + -12;
	// addi r9,r11,-27456
	ctx.r9.s64 = ctx.r11.s64 + -27456;
	// addi r8,r1,-8
	ctx.r8.s64 = ctx.r1.s64 + -8;
	// addi r7,r1,-8
	ctx.r7.s64 = ctx.r1.s64 + -8;
	// lfs f0,-27456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27456);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lis r5,-31926
	ctx.r5.s64 = -2092302336;
	// lfs f0,-12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// addi r4,r5,19472
	ctx.r4.s64 = ctx.r5.s64 + 19472;
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lvlx v13,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lfs f0,18756(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 18756);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lvlx v12,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// lvlx v11,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v11,v12,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// vor v0,v11,v11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// vrlimi128 v0,v13,3,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 3));
	// stvx128 v0,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83287BEC"))) PPC_WEAK_FUNC(sub_83287BEC);
PPC_FUNC_IMPL(__imp__sub_83287BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83287BF0"))) PPC_WEAK_FUNC(sub_83287BF0);
PPC_FUNC_IMPL(__imp__sub_83287BF0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,19488
	ctx.r3.s64 = ctx.r10.s64 + 19488;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83287C14;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-8968
	ctx.r3.s64 = ctx.r9.s64 + -8968;
	// bl 0x82ca3700
	ctx.lr = 0x83287C20;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83287C30"))) PPC_WEAK_FUNC(sub_83287C30);
PPC_FUNC_IMPL(__imp__sub_83287C30) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,19492
	ctx.r3.s64 = ctx.r10.s64 + 19492;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83287C54;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-8952
	ctx.r3.s64 = ctx.r9.s64 + -8952;
	// bl 0x82ca3700
	ctx.lr = 0x83287C60;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83287C70"))) PPC_WEAK_FUNC(sub_83287C70);
PPC_FUNC_IMPL(__imp__sub_83287C70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r1,-12
	ctx.r9.s64 = ctx.r1.s64 + -12;
	// addi r8,r1,-12
	ctx.r8.s64 = ctx.r1.s64 + -12;
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// lfs f0,-27456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27456);
	ctx.f0.f64 = double(temp.f32);
	// lis r6,-31926
	ctx.r6.s64 = -2092302336;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r5,r6,19504
	ctx.r5.s64 = ctx.r6.s64 + 19504;
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lvlx v13,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// lvlx v12,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v11,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v11,v12,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// vor v0,v11,v11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// vrlimi128 v0,v13,3,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 3));
	// stvx128 v0,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83287CC8"))) PPC_WEAK_FUNC(sub_83287CC8);
PPC_FUNC_IMPL(__imp__sub_83287CC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r1,-12
	ctx.r9.s64 = ctx.r1.s64 + -12;
	// addi r8,r1,-12
	ctx.r8.s64 = ctx.r1.s64 + -12;
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// lfs f0,3168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3168);
	ctx.f0.f64 = double(temp.f32);
	// lis r6,-31926
	ctx.r6.s64 = -2092302336;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r5,r6,19520
	ctx.r5.s64 = ctx.r6.s64 + 19520;
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lvlx v13,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// lvlx v12,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v11,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v11,v12,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// vor v0,v11,v11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// vrlimi128 v0,v13,3,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 3));
	// stvx128 v0,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83287D20"))) PPC_WEAK_FUNC(sub_83287D20);
PPC_FUNC_IMPL(__imp__sub_83287D20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r1,-12
	ctx.r9.s64 = ctx.r1.s64 + -12;
	// addi r8,r1,-12
	ctx.r8.s64 = ctx.r1.s64 + -12;
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// lfs f0,-17912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -17912);
	ctx.f0.f64 = double(temp.f32);
	// lis r6,-31926
	ctx.r6.s64 = -2092302336;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r5,r6,19536
	ctx.r5.s64 = ctx.r6.s64 + 19536;
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lvlx v13,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// lvlx v12,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v11,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v11,v12,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// vor v0,v11,v11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// vrlimi128 v0,v13,3,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 3));
	// stvx128 v0,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83287D78"))) PPC_WEAK_FUNC(sub_83287D78);
PPC_FUNC_IMPL(__imp__sub_83287D78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-27468
	ctx.r9.s64 = ctx.r11.s64 + -27468;
	// addi r10,r1,-12
	ctx.r10.s64 = ctx.r1.s64 + -12;
	// addi r7,r1,-12
	ctx.r7.s64 = ctx.r1.s64 + -12;
	// lfs f13,-27468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27468);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lis r5,-31926
	ctx.r5.s64 = -2092302336;
	// lvlx v13,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lfs f0,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r5,19552
	ctx.r4.s64 = ctx.r5.s64 + 19552;
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// lvlx v12,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v11,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v11,v12,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// vor v0,v11,v11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// vrlimi128 v0,v13,3,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 3));
	// stvx128 v0,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83287DD8"))) PPC_WEAK_FUNC(sub_83287DD8);
PPC_FUNC_IMPL(__imp__sub_83287DD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r10,r1,-12
	ctx.r10.s64 = ctx.r1.s64 + -12;
	// addi r9,r11,-27468
	ctx.r9.s64 = ctx.r11.s64 + -27468;
	// addi r8,r1,-8
	ctx.r8.s64 = ctx.r1.s64 + -8;
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// addi r6,r1,-8
	ctx.r6.s64 = ctx.r1.s64 + -8;
	// lfs f0,-27468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27468);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lis r5,-31926
	ctx.r5.s64 = -2092302336;
	// lfs f13,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// addi r4,r5,19568
	ctx.r4.s64 = ctx.r5.s64 + 19568;
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f13,-8(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lvlx v13,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lvlx v12,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// lvlx v11,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v11,v12,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// vor v0,v11,v11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// vrlimi128 v0,v13,3,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 3));
	// stvx128 v0,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83287E38"))) PPC_WEAK_FUNC(sub_83287E38);
PPC_FUNC_IMPL(__imp__sub_83287E38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r9,r11,-27696
	ctx.r9.s64 = ctx.r11.s64 + -27696;
	// addi r8,r10,19584
	ctx.r8.s64 = ctx.r10.s64 + 19584;
	// lvx128 v0,r0,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83287E54"))) PPC_WEAK_FUNC(sub_83287E54);
PPC_FUNC_IMPL(__imp__sub_83287E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83287E58"))) PPC_WEAK_FUNC(sub_83287E58);
PPC_FUNC_IMPL(__imp__sub_83287E58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r9,r11,-27680
	ctx.r9.s64 = ctx.r11.s64 + -27680;
	// addi r8,r10,19600
	ctx.r8.s64 = ctx.r10.s64 + 19600;
	// lvx128 v0,r0,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83287E74"))) PPC_WEAK_FUNC(sub_83287E74);
PPC_FUNC_IMPL(__imp__sub_83287E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83287E78"))) PPC_WEAK_FUNC(sub_83287E78);
PPC_FUNC_IMPL(__imp__sub_83287E78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r9,r11,-27664
	ctx.r9.s64 = ctx.r11.s64 + -27664;
	// addi r8,r10,19616
	ctx.r8.s64 = ctx.r10.s64 + 19616;
	// lvx128 v0,r0,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83287E94"))) PPC_WEAK_FUNC(sub_83287E94);
PPC_FUNC_IMPL(__imp__sub_83287E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83287E98"))) PPC_WEAK_FUNC(sub_83287E98);
PPC_FUNC_IMPL(__imp__sub_83287E98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r9,r11,-27648
	ctx.r9.s64 = ctx.r11.s64 + -27648;
	// addi r8,r10,19632
	ctx.r8.s64 = ctx.r10.s64 + 19632;
	// lvx128 v0,r0,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83287EB4"))) PPC_WEAK_FUNC(sub_83287EB4);
PPC_FUNC_IMPL(__imp__sub_83287EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83287EB8"))) PPC_WEAK_FUNC(sub_83287EB8);
PPC_FUNC_IMPL(__imp__sub_83287EB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-8936
	ctx.r3.s64 = ctx.r11.s64 + -8936;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83287EC4"))) PPC_WEAK_FUNC(sub_83287EC4);
PPC_FUNC_IMPL(__imp__sub_83287EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83287EC8"))) PPC_WEAK_FUNC(sub_83287EC8);
PPC_FUNC_IMPL(__imp__sub_83287EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-8872
	ctx.r3.s64 = ctx.r11.s64 + -8872;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83287ED4"))) PPC_WEAK_FUNC(sub_83287ED4);
PPC_FUNC_IMPL(__imp__sub_83287ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83287ED8"))) PPC_WEAK_FUNC(sub_83287ED8);
PPC_FUNC_IMPL(__imp__sub_83287ED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-8808
	ctx.r3.s64 = ctx.r11.s64 + -8808;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83287EE4"))) PPC_WEAK_FUNC(sub_83287EE4);
PPC_FUNC_IMPL(__imp__sub_83287EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83287EE8"))) PPC_WEAK_FUNC(sub_83287EE8);
PPC_FUNC_IMPL(__imp__sub_83287EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-8744
	ctx.r3.s64 = ctx.r11.s64 + -8744;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83287EF4"))) PPC_WEAK_FUNC(sub_83287EF4);
PPC_FUNC_IMPL(__imp__sub_83287EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83287EF8"))) PPC_WEAK_FUNC(sub_83287EF8);
PPC_FUNC_IMPL(__imp__sub_83287EF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-8680
	ctx.r3.s64 = ctx.r11.s64 + -8680;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83287F04"))) PPC_WEAK_FUNC(sub_83287F04);
PPC_FUNC_IMPL(__imp__sub_83287F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83287F08"))) PPC_WEAK_FUNC(sub_83287F08);
PPC_FUNC_IMPL(__imp__sub_83287F08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,19684
	ctx.r11.s64 = ctx.r11.s64 + 19684;
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-8616
	ctx.r3.s64 = ctx.r9.s64 + -8616;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83287F30"))) PPC_WEAK_FUNC(sub_83287F30);
PPC_FUNC_IMPL(__imp__sub_83287F30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-8592
	ctx.r3.s64 = ctx.r11.s64 + -8592;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83287F3C"))) PPC_WEAK_FUNC(sub_83287F3C);
PPC_FUNC_IMPL(__imp__sub_83287F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83287F40"))) PPC_WEAK_FUNC(sub_83287F40);
PPC_FUNC_IMPL(__imp__sub_83287F40) {
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
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8221f388
	ctx.lr = 0x83287F54;
	sub_8221F388(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83287f64
	if (ctx.cr6.eq) goto loc_83287F64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_83287F64:
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83287f70
	if (ctx.cr0.eq) goto loc_83287F70;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_83287F70:
	// addic. r11,r3,8
	ctx.xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r11.s64 = ctx.r3.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83287f7c
	if (ctx.cr0.eq) goto loc_83287F7C;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_83287F7C:
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// stb r10,29(r3)
	PPC_STORE_U8(ctx.r3.u32 + 29, ctx.r10.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r8,r9,19704
	ctx.r8.s64 = ctx.r9.s64 + 19704;
	// stb r11,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r11.u8);
	// lis r7,-31957
	ctx.r7.s64 = -2094333952;
	// stw r3,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r3.u32);
	// stb r11,29(r3)
	PPC_STORE_U8(ctx.r3.u32 + 29, ctx.r11.u8);
	// addi r3,r7,-8520
	ctx.r3.s64 = ctx.r7.s64 + -8520;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// bl 0x82ca3700
	ctx.lr = 0x83287FC0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83287FD0"))) PPC_WEAK_FUNC(sub_83287FD0);
PPC_FUNC_IMPL(__imp__sub_83287FD0) {
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
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8221f388
	ctx.lr = 0x83287FE4;
	sub_8221F388(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83287ff4
	if (ctx.cr6.eq) goto loc_83287FF4;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_83287FF4:
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83288000
	if (ctx.cr0.eq) goto loc_83288000;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_83288000:
	// addic. r11,r3,8
	ctx.xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r11.s64 = ctx.r3.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8328800c
	if (ctx.cr0.eq) goto loc_8328800C;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8328800C:
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// stb r10,29(r3)
	PPC_STORE_U8(ctx.r3.u32 + 29, ctx.r10.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r8,r9,19716
	ctx.r8.s64 = ctx.r9.s64 + 19716;
	// stb r11,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r11.u8);
	// lis r7,-31957
	ctx.r7.s64 = -2094333952;
	// stw r3,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r3.u32);
	// stb r11,29(r3)
	PPC_STORE_U8(ctx.r3.u32 + 29, ctx.r11.u8);
	// addi r3,r7,-8504
	ctx.r3.s64 = ctx.r7.s64 + -8504;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// bl 0x82ca3700
	ctx.lr = 0x83288050;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83288060"))) PPC_WEAK_FUNC(sub_83288060);
PPC_FUNC_IMPL(__imp__sub_83288060) {
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
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8221f388
	ctx.lr = 0x83288074;
	sub_8221F388(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83288084
	if (ctx.cr6.eq) goto loc_83288084;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_83288084:
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83288090
	if (ctx.cr0.eq) goto loc_83288090;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_83288090:
	// addic. r11,r3,8
	ctx.xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r11.s64 = ctx.r3.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8328809c
	if (ctx.cr0.eq) goto loc_8328809C;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8328809C:
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// stb r10,29(r3)
	PPC_STORE_U8(ctx.r3.u32 + 29, ctx.r10.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r8,r9,19728
	ctx.r8.s64 = ctx.r9.s64 + 19728;
	// stb r11,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r11.u8);
	// lis r7,-31957
	ctx.r7.s64 = -2094333952;
	// stw r3,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r3.u32);
	// stb r11,29(r3)
	PPC_STORE_U8(ctx.r3.u32 + 29, ctx.r11.u8);
	// addi r3,r7,-8488
	ctx.r3.s64 = ctx.r7.s64 + -8488;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// bl 0x82ca3700
	ctx.lr = 0x832880E0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832880F0"))) PPC_WEAK_FUNC(sub_832880F0);
PPC_FUNC_IMPL(__imp__sub_832880F0) {
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
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8221f388
	ctx.lr = 0x83288104;
	sub_8221F388(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83288114
	if (ctx.cr6.eq) goto loc_83288114;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_83288114:
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x83288120
	if (ctx.cr0.eq) goto loc_83288120;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_83288120:
	// addic. r11,r3,8
	ctx.xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r11.s64 = ctx.r3.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8328812c
	if (ctx.cr0.eq) goto loc_8328812C;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8328812C:
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// stb r10,29(r3)
	PPC_STORE_U8(ctx.r3.u32 + 29, ctx.r10.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r8,r9,19740
	ctx.r8.s64 = ctx.r9.s64 + 19740;
	// stb r11,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r11.u8);
	// lis r7,-31957
	ctx.r7.s64 = -2094333952;
	// stw r3,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r3.u32);
	// stb r11,29(r3)
	PPC_STORE_U8(ctx.r3.u32 + 29, ctx.r11.u8);
	// addi r3,r7,-8472
	ctx.r3.s64 = ctx.r7.s64 + -8472;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// bl 0x82ca3700
	ctx.lr = 0x83288170;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83288180"))) PPC_WEAK_FUNC(sub_83288180);
PPC_FUNC_IMPL(__imp__sub_83288180) {
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
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8221f388
	ctx.lr = 0x83288194;
	sub_8221F388(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832881a4
	if (ctx.cr6.eq) goto loc_832881A4;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_832881A4:
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832881b0
	if (ctx.cr0.eq) goto loc_832881B0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_832881B0:
	// addic. r11,r3,8
	ctx.xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r11.s64 = ctx.r3.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832881bc
	if (ctx.cr0.eq) goto loc_832881BC;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_832881BC:
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// stb r10,29(r3)
	PPC_STORE_U8(ctx.r3.u32 + 29, ctx.r10.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r8,r9,19752
	ctx.r8.s64 = ctx.r9.s64 + 19752;
	// stb r11,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r11.u8);
	// lis r7,-31957
	ctx.r7.s64 = -2094333952;
	// stw r3,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r3.u32);
	// stb r11,29(r3)
	PPC_STORE_U8(ctx.r3.u32 + 29, ctx.r11.u8);
	// addi r3,r7,-8456
	ctx.r3.s64 = ctx.r7.s64 + -8456;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// bl 0x82ca3700
	ctx.lr = 0x83288200;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83288210"))) PPC_WEAK_FUNC(sub_83288210);
PPC_FUNC_IMPL(__imp__sub_83288210) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,19764
	ctx.r3.s64 = ctx.r10.s64 + 19764;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83288234;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-8440
	ctx.r3.s64 = ctx.r9.s64 + -8440;
	// bl 0x82ca3700
	ctx.lr = 0x83288240;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83288250"))) PPC_WEAK_FUNC(sub_83288250);
PPC_FUNC_IMPL(__imp__sub_83288250) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,19768
	ctx.r3.s64 = ctx.r10.s64 + 19768;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83288274;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-8424
	ctx.r3.s64 = ctx.r9.s64 + -8424;
	// bl 0x82ca3700
	ctx.lr = 0x83288280;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83288290"))) PPC_WEAK_FUNC(sub_83288290);
PPC_FUNC_IMPL(__imp__sub_83288290) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31926
	ctx.r8.s64 = -2092302336;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r6,r8,19776
	ctx.r6.s64 = ctx.r8.s64 + 19776;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,19776(r8)
	PPC_STORE_U32(ctx.r8.u32 + 19776, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r11.u32);
	// stw r10,24(r6)
	PPC_STORE_U32(ctx.r6.u32 + 24, ctx.r10.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stb r9,28(r6)
	PPC_STORE_U8(ctx.r6.u32 + 28, ctx.r9.u8);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r7,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r11,36(r6)
	PPC_STORE_U32(ctx.r6.u32 + 36, ctx.r11.u32);
	// stw r10,44(r6)
	PPC_STORE_U32(ctx.r6.u32 + 44, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,48(r6)
	PPC_STORE_U32(ctx.r6.u32 + 48, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r8,32(r6)
	PPC_STORE_U32(ctx.r6.u32 + 32, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r7,40(r6)
	PPC_STORE_U32(ctx.r6.u32 + 40, ctx.r7.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,56(r6)
	PPC_STORE_U32(ctx.r6.u32 + 56, ctx.r11.u32);
	// stb r10,64(r6)
	PPC_STORE_U8(ctx.r6.u32 + 64, ctx.r10.u8);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r9,68(r6)
	PPC_STORE_U32(ctx.r6.u32 + 68, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r8,52(r6)
	PPC_STORE_U32(ctx.r6.u32 + 52, ctx.r8.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r7,60(r6)
	PPC_STORE_U32(ctx.r6.u32 + 60, ctx.r7.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r11,76(r6)
	PPC_STORE_U32(ctx.r6.u32 + 76, ctx.r11.u32);
	// stw r10,84(r6)
	PPC_STORE_U32(ctx.r6.u32 + 84, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,88(r6)
	PPC_STORE_U32(ctx.r6.u32 + 88, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r8,72(r6)
	PPC_STORE_U32(ctx.r6.u32 + 72, ctx.r8.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r7,80(r6)
	PPC_STORE_U32(ctx.r6.u32 + 80, ctx.r7.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,96(r6)
	PPC_STORE_U32(ctx.r6.u32 + 96, ctx.r11.u32);
	// stw r10,104(r6)
	PPC_STORE_U32(ctx.r6.u32 + 104, ctx.r10.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r9,108(r6)
	PPC_STORE_U32(ctx.r6.u32 + 108, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r8,92(r6)
	PPC_STORE_U32(ctx.r6.u32 + 92, ctx.r8.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r7,100(r6)
	PPC_STORE_U8(ctx.r6.u32 + 100, ctx.r7.u8);
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,116(r6)
	PPC_STORE_U32(ctx.r6.u32 + 116, ctx.r11.u32);
	// stw r10,124(r6)
	PPC_STORE_U32(ctx.r6.u32 + 124, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,128(r6)
	PPC_STORE_U32(ctx.r6.u32 + 128, ctx.r9.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r8,112(r6)
	PPC_STORE_U32(ctx.r6.u32 + 112, ctx.r8.u32);
	// stw r7,120(r6)
	PPC_STORE_U32(ctx.r6.u32 + 120, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r11,136(r6)
	PPC_STORE_U8(ctx.r6.u32 + 136, ctx.r11.u8);
	// stw r10,144(r6)
	PPC_STORE_U32(ctx.r6.u32 + 144, ctx.r10.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r9,148(r6)
	PPC_STORE_U32(ctx.r6.u32 + 148, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r8,132(r6)
	PPC_STORE_U32(ctx.r6.u32 + 132, ctx.r8.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r7,140(r6)
	PPC_STORE_U32(ctx.r6.u32 + 140, ctx.r7.u32);
	// stw r11,152(r6)
	PPC_STORE_U32(ctx.r6.u32 + 152, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,156(r6)
	PPC_STORE_U32(ctx.r6.u32 + 156, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,160(r6)
	PPC_STORE_U32(ctx.r6.u32 + 160, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,164(r6)
	PPC_STORE_U32(ctx.r6.u32 + 164, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,168(r6)
	PPC_STORE_U32(ctx.r6.u32 + 168, ctx.r10.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r9,172(r6)
	PPC_STORE_U8(ctx.r6.u32 + 172, ctx.r9.u8);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,176(r6)
	PPC_STORE_U32(ctx.r6.u32 + 176, ctx.r11.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r10,180(r6)
	PPC_STORE_U32(ctx.r6.u32 + 180, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,184(r6)
	PPC_STORE_U32(ctx.r6.u32 + 184, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,188(r6)
	PPC_STORE_U32(ctx.r6.u32 + 188, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,192(r6)
	PPC_STORE_U32(ctx.r6.u32 + 192, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,196(r6)
	PPC_STORE_U32(ctx.r6.u32 + 196, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,200(r6)
	PPC_STORE_U32(ctx.r6.u32 + 200, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,204(r6)
	PPC_STORE_U32(ctx.r6.u32 + 204, ctx.r10.u32);
	// stb r9,208(r6)
	PPC_STORE_U8(ctx.r6.u32 + 208, ctx.r9.u8);
	// stw r11,212(r6)
	PPC_STORE_U32(ctx.r6.u32 + 212, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328844C"))) PPC_WEAK_FUNC(sub_8328844C);
PPC_FUNC_IMPL(__imp__sub_8328844C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83288450"))) PPC_WEAK_FUNC(sub_83288450);
PPC_FUNC_IMPL(__imp__sub_83288450) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31926
	ctx.r8.s64 = -2092302336;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r8,19992
	ctx.r6.s64 = ctx.r8.s64 + 19992;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,19992(r8)
	PPC_STORE_U32(ctx.r8.u32 + 19992, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r5,-31957
	ctx.r5.s64 = -2094333952;
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// stw r9,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r9.u32);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// addi r3,r5,-8408
	ctx.r3.s64 = ctx.r5.s64 + -8408;
	// stw r11,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r11.u32);
	// stw r7,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r7.u32);
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83288490"))) PPC_WEAK_FUNC(sub_83288490);
PPC_FUNC_IMPL(__imp__sub_83288490) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,20016
	ctx.r3.s64 = ctx.r10.s64 + 20016;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832884B4;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-8400
	ctx.r3.s64 = ctx.r9.s64 + -8400;
	// bl 0x82ca3700
	ctx.lr = 0x832884C0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832884D0"))) PPC_WEAK_FUNC(sub_832884D0);
PPC_FUNC_IMPL(__imp__sub_832884D0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,20020
	ctx.r3.s64 = ctx.r10.s64 + 20020;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832884F4;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-8384
	ctx.r3.s64 = ctx.r9.s64 + -8384;
	// bl 0x82ca3700
	ctx.lr = 0x83288500;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83288510"))) PPC_WEAK_FUNC(sub_83288510);
PPC_FUNC_IMPL(__imp__sub_83288510) {
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
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,20024
	ctx.r3.s64 = ctx.r11.s64 + 20024;
	// bl 0x8228b8c8
	ctx.lr = 0x83288528;
	sub_8228B8C8(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,-8368
	ctx.r3.s64 = ctx.r10.s64 + -8368;
	// bl 0x82ca3700
	ctx.lr = 0x83288534;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83288544"))) PPC_WEAK_FUNC(sub_83288544);
PPC_FUNC_IMPL(__imp__sub_83288544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83288548"))) PPC_WEAK_FUNC(sub_83288548);
PPC_FUNC_IMPL(__imp__sub_83288548) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,26600
	ctx.r4.s64 = ctx.r11.s64 + 26600;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x83288568;
	sub_8222CF18(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r10,20980
	ctx.r3.s64 = ctx.r10.s64 + 20980;
	// bl 0x822ab200
	ctx.lr = 0x83288578;
	sub_822AB200(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-8352
	ctx.r3.s64 = ctx.r9.s64 + -8352;
	// bl 0x82ca3700
	ctx.lr = 0x83288584;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83288594"))) PPC_WEAK_FUNC(sub_83288594);
PPC_FUNC_IMPL(__imp__sub_83288594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83288598"))) PPC_WEAK_FUNC(sub_83288598);
PPC_FUNC_IMPL(__imp__sub_83288598) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,21056
	ctx.r3.s64 = ctx.r10.s64 + 21056;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832885BC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-8336
	ctx.r3.s64 = ctx.r9.s64 + -8336;
	// bl 0x82ca3700
	ctx.lr = 0x832885C8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832885D8"))) PPC_WEAK_FUNC(sub_832885D8);
PPC_FUNC_IMPL(__imp__sub_832885D8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,21060
	ctx.r3.s64 = ctx.r10.s64 + 21060;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832885FC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-8320
	ctx.r3.s64 = ctx.r9.s64 + -8320;
	// bl 0x82ca3700
	ctx.lr = 0x83288608;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83288618"))) PPC_WEAK_FUNC(sub_83288618);
PPC_FUNC_IMPL(__imp__sub_83288618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-8304
	ctx.r3.s64 = ctx.r11.s64 + -8304;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83288624"))) PPC_WEAK_FUNC(sub_83288624);
PPC_FUNC_IMPL(__imp__sub_83288624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83288628"))) PPC_WEAK_FUNC(sub_83288628);
PPC_FUNC_IMPL(__imp__sub_83288628) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,21080
	ctx.r3.s64 = ctx.r10.s64 + 21080;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8328864C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-8216
	ctx.r3.s64 = ctx.r9.s64 + -8216;
	// bl 0x82ca3700
	ctx.lr = 0x83288658;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83288668"))) PPC_WEAK_FUNC(sub_83288668);
PPC_FUNC_IMPL(__imp__sub_83288668) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,21084
	ctx.r3.s64 = ctx.r10.s64 + 21084;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8328868C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-8200
	ctx.r3.s64 = ctx.r9.s64 + -8200;
	// bl 0x82ca3700
	ctx.lr = 0x83288698;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832886A8"))) PPC_WEAK_FUNC(sub_832886A8);
PPC_FUNC_IMPL(__imp__sub_832886A8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,21088
	ctx.r3.s64 = ctx.r10.s64 + 21088;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832886CC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-8184
	ctx.r3.s64 = ctx.r9.s64 + -8184;
	// bl 0x82ca3700
	ctx.lr = 0x832886D8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832886E8"))) PPC_WEAK_FUNC(sub_832886E8);
PPC_FUNC_IMPL(__imp__sub_832886E8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,21092
	ctx.r3.s64 = ctx.r10.s64 + 21092;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8328870C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-8168
	ctx.r3.s64 = ctx.r9.s64 + -8168;
	// bl 0x82ca3700
	ctx.lr = 0x83288718;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83288728"))) PPC_WEAK_FUNC(sub_83288728);
PPC_FUNC_IMPL(__imp__sub_83288728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r11,r11,21096
	ctx.r11.s64 = ctx.r11.s64 + 21096;
	// li r10,0
	ctx.r10.s64 = 0;
loc_83288738:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// bge 0x83288738
	if (!ctx.cr0.lt) goto loc_83288738;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-8152
	ctx.r3.s64 = ctx.r11.s64 + -8152;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83288764"))) PPC_WEAK_FUNC(sub_83288764);
PPC_FUNC_IMPL(__imp__sub_83288764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83288768"))) PPC_WEAK_FUNC(sub_83288768);
PPC_FUNC_IMPL(__imp__sub_83288768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,21176
	ctx.r11.s64 = ctx.r11.s64 + 21176;
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-8064
	ctx.r3.s64 = ctx.r9.s64 + -8064;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83288790"))) PPC_WEAK_FUNC(sub_83288790);
PPC_FUNC_IMPL(__imp__sub_83288790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,21196
	ctx.r11.s64 = ctx.r11.s64 + 21196;
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-8040
	ctx.r3.s64 = ctx.r9.s64 + -8040;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832887B8"))) PPC_WEAK_FUNC(sub_832887B8);
PPC_FUNC_IMPL(__imp__sub_832887B8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,21216
	ctx.r3.s64 = ctx.r10.s64 + 21216;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832887DC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-8016
	ctx.r3.s64 = ctx.r9.s64 + -8016;
	// bl 0x82ca3700
	ctx.lr = 0x832887E8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832887F8"))) PPC_WEAK_FUNC(sub_832887F8);
PPC_FUNC_IMPL(__imp__sub_832887F8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,21220
	ctx.r3.s64 = ctx.r10.s64 + 21220;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8328881C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-8000
	ctx.r3.s64 = ctx.r9.s64 + -8000;
	// bl 0x82ca3700
	ctx.lr = 0x83288828;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83288838"))) PPC_WEAK_FUNC(sub_83288838);
PPC_FUNC_IMPL(__imp__sub_83288838) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,21224
	ctx.r3.s64 = ctx.r10.s64 + 21224;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8328885C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-7984
	ctx.r3.s64 = ctx.r9.s64 + -7984;
	// bl 0x82ca3700
	ctx.lr = 0x83288868;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83288878"))) PPC_WEAK_FUNC(sub_83288878);
PPC_FUNC_IMPL(__imp__sub_83288878) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,21228
	ctx.r3.s64 = ctx.r10.s64 + 21228;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8328889C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-7968
	ctx.r3.s64 = ctx.r9.s64 + -7968;
	// bl 0x82ca3700
	ctx.lr = 0x832888A8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832888B8"))) PPC_WEAK_FUNC(sub_832888B8);
PPC_FUNC_IMPL(__imp__sub_832888B8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,21232
	ctx.r3.s64 = ctx.r10.s64 + 21232;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832888DC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-7952
	ctx.r3.s64 = ctx.r9.s64 + -7952;
	// bl 0x82ca3700
	ctx.lr = 0x832888E8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832888F8"))) PPC_WEAK_FUNC(sub_832888F8);
PPC_FUNC_IMPL(__imp__sub_832888F8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,21236
	ctx.r3.s64 = ctx.r10.s64 + 21236;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8328891C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-7936
	ctx.r3.s64 = ctx.r9.s64 + -7936;
	// bl 0x82ca3700
	ctx.lr = 0x83288928;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83288938"))) PPC_WEAK_FUNC(sub_83288938);
PPC_FUNC_IMPL(__imp__sub_83288938) {
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
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x8221f388
	ctx.lr = 0x8328894C;
	sub_8221F388(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8328895c
	if (ctx.cr6.eq) goto loc_8328895C;
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
loc_8328895C:
	// addic. r10,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r10.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83288968
	if (ctx.cr0.eq) goto loc_83288968;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_83288968:
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,21240
	ctx.r8.s64 = ctx.r9.s64 + 21240;
	// lis r7,-31957
	ctx.r7.s64 = -2094333952;
	// addi r3,r7,-7920
	ctx.r3.s64 = ctx.r7.s64 + -7920;
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// bl 0x82ca3700
	ctx.lr = 0x83288988;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83288998"))) PPC_WEAK_FUNC(sub_83288998);
PPC_FUNC_IMPL(__imp__sub_83288998) {
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
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x8221f388
	ctx.lr = 0x832889AC;
	sub_8221F388(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832889bc
	if (ctx.cr6.eq) goto loc_832889BC;
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
loc_832889BC:
	// addic. r10,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r10.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x832889c8
	if (ctx.cr0.eq) goto loc_832889C8;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_832889C8:
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,21252
	ctx.r8.s64 = ctx.r9.s64 + 21252;
	// lis r7,-31957
	ctx.r7.s64 = -2094333952;
	// addi r3,r7,-7848
	ctx.r3.s64 = ctx.r7.s64 + -7848;
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// bl 0x82ca3700
	ctx.lr = 0x832889E8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832889F8"))) PPC_WEAK_FUNC(sub_832889F8);
PPC_FUNC_IMPL(__imp__sub_832889F8) {
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
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x8221f388
	ctx.lr = 0x83288A0C;
	sub_8221F388(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83288a1c
	if (ctx.cr6.eq) goto loc_83288A1C;
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
loc_83288A1C:
	// addic. r10,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r10.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83288a28
	if (ctx.cr0.eq) goto loc_83288A28;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_83288A28:
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,21264
	ctx.r8.s64 = ctx.r9.s64 + 21264;
	// lis r7,-31957
	ctx.r7.s64 = -2094333952;
	// addi r3,r7,-7776
	ctx.r3.s64 = ctx.r7.s64 + -7776;
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// bl 0x82ca3700
	ctx.lr = 0x83288A48;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83288A58"))) PPC_WEAK_FUNC(sub_83288A58);
PPC_FUNC_IMPL(__imp__sub_83288A58) {
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
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x8221f388
	ctx.lr = 0x83288A6C;
	sub_8221F388(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83288a7c
	if (ctx.cr6.eq) goto loc_83288A7C;
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
loc_83288A7C:
	// addic. r10,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r10.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83288a88
	if (ctx.cr0.eq) goto loc_83288A88;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_83288A88:
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,21276
	ctx.r8.s64 = ctx.r9.s64 + 21276;
	// lis r7,-31957
	ctx.r7.s64 = -2094333952;
	// addi r3,r7,-7704
	ctx.r3.s64 = ctx.r7.s64 + -7704;
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// bl 0x82ca3700
	ctx.lr = 0x83288AA8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83288AB8"))) PPC_WEAK_FUNC(sub_83288AB8);
PPC_FUNC_IMPL(__imp__sub_83288AB8) {
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
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x8221f388
	ctx.lr = 0x83288ACC;
	sub_8221F388(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83288adc
	if (ctx.cr6.eq) goto loc_83288ADC;
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
loc_83288ADC:
	// addic. r10,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r10.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83288ae8
	if (ctx.cr0.eq) goto loc_83288AE8;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_83288AE8:
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,21288
	ctx.r8.s64 = ctx.r9.s64 + 21288;
	// lis r7,-31957
	ctx.r7.s64 = -2094333952;
	// addi r3,r7,-7632
	ctx.r3.s64 = ctx.r7.s64 + -7632;
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// bl 0x82ca3700
	ctx.lr = 0x83288B08;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83288B18"))) PPC_WEAK_FUNC(sub_83288B18);
PPC_FUNC_IMPL(__imp__sub_83288B18) {
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
	// li r3,88
	ctx.r3.s64 = 88;
	// bl 0x8221f388
	ctx.lr = 0x83288B2C;
	sub_8221F388(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83288b3c
	if (ctx.cr6.eq) goto loc_83288B3C;
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
loc_83288B3C:
	// addic. r10,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r10.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x83288b48
	if (ctx.cr0.eq) goto loc_83288B48;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_83288B48:
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,21300
	ctx.r8.s64 = ctx.r9.s64 + 21300;
	// lis r7,-31957
	ctx.r7.s64 = -2094333952;
	// addi r3,r7,-7560
	ctx.r3.s64 = ctx.r7.s64 + -7560;
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// bl 0x82ca3700
	ctx.lr = 0x83288B68;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83288B78"))) PPC_WEAK_FUNC(sub_83288B78);
PPC_FUNC_IMPL(__imp__sub_83288B78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-7488
	ctx.r3.s64 = ctx.r11.s64 + -7488;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83288B84"))) PPC_WEAK_FUNC(sub_83288B84);
PPC_FUNC_IMPL(__imp__sub_83288B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83288B88"))) PPC_WEAK_FUNC(sub_83288B88);
PPC_FUNC_IMPL(__imp__sub_83288B88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-7400
	ctx.r3.s64 = ctx.r11.s64 + -7400;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83288B94"))) PPC_WEAK_FUNC(sub_83288B94);
PPC_FUNC_IMPL(__imp__sub_83288B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83288B98"))) PPC_WEAK_FUNC(sub_83288B98);
PPC_FUNC_IMPL(__imp__sub_83288B98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-7384
	ctx.r3.s64 = ctx.r11.s64 + -7384;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83288BA4"))) PPC_WEAK_FUNC(sub_83288BA4);
PPC_FUNC_IMPL(__imp__sub_83288BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83288BA8"))) PPC_WEAK_FUNC(sub_83288BA8);
PPC_FUNC_IMPL(__imp__sub_83288BA8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,21324
	ctx.r3.s64 = ctx.r10.s64 + 21324;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83288BCC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-7368
	ctx.r3.s64 = ctx.r9.s64 + -7368;
	// bl 0x82ca3700
	ctx.lr = 0x83288BD8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83288BE8"))) PPC_WEAK_FUNC(sub_83288BE8);
PPC_FUNC_IMPL(__imp__sub_83288BE8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,21328
	ctx.r3.s64 = ctx.r10.s64 + 21328;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83288C0C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-7352
	ctx.r3.s64 = ctx.r9.s64 + -7352;
	// bl 0x82ca3700
	ctx.lr = 0x83288C18;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83288C28"))) PPC_WEAK_FUNC(sub_83288C28);
PPC_FUNC_IMPL(__imp__sub_83288C28) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,21332
	ctx.r3.s64 = ctx.r10.s64 + 21332;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83288C4C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-7336
	ctx.r3.s64 = ctx.r9.s64 + -7336;
	// bl 0x82ca3700
	ctx.lr = 0x83288C58;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83288C68"))) PPC_WEAK_FUNC(sub_83288C68);
PPC_FUNC_IMPL(__imp__sub_83288C68) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,21336
	ctx.r3.s64 = ctx.r10.s64 + 21336;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83288C8C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-7320
	ctx.r3.s64 = ctx.r9.s64 + -7320;
	// bl 0x82ca3700
	ctx.lr = 0x83288C98;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83288CA8"))) PPC_WEAK_FUNC(sub_83288CA8);
PPC_FUNC_IMPL(__imp__sub_83288CA8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,21340
	ctx.r3.s64 = ctx.r10.s64 + 21340;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83288CCC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-7304
	ctx.r3.s64 = ctx.r9.s64 + -7304;
	// bl 0x82ca3700
	ctx.lr = 0x83288CD8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83288CE8"))) PPC_WEAK_FUNC(sub_83288CE8);
PPC_FUNC_IMPL(__imp__sub_83288CE8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,21344
	ctx.r3.s64 = ctx.r10.s64 + 21344;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83288D0C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-7288
	ctx.r3.s64 = ctx.r9.s64 + -7288;
	// bl 0x82ca3700
	ctx.lr = 0x83288D18;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83288D28"))) PPC_WEAK_FUNC(sub_83288D28);
PPC_FUNC_IMPL(__imp__sub_83288D28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-7272
	ctx.r3.s64 = ctx.r11.s64 + -7272;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83288D34"))) PPC_WEAK_FUNC(sub_83288D34);
PPC_FUNC_IMPL(__imp__sub_83288D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83288D38"))) PPC_WEAK_FUNC(sub_83288D38);
PPC_FUNC_IMPL(__imp__sub_83288D38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-7256
	ctx.r3.s64 = ctx.r11.s64 + -7256;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83288D44"))) PPC_WEAK_FUNC(sub_83288D44);
PPC_FUNC_IMPL(__imp__sub_83288D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83288D48"))) PPC_WEAK_FUNC(sub_83288D48);
PPC_FUNC_IMPL(__imp__sub_83288D48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-7240
	ctx.r3.s64 = ctx.r11.s64 + -7240;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83288D54"))) PPC_WEAK_FUNC(sub_83288D54);
PPC_FUNC_IMPL(__imp__sub_83288D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83288D58"))) PPC_WEAK_FUNC(sub_83288D58);
PPC_FUNC_IMPL(__imp__sub_83288D58) {
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
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21380
	ctx.r3.s64 = ctx.r11.s64 + 21380;
	// bl 0x832b258c
	ctx.lr = 0x83288D70;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,-7224
	ctx.r3.s64 = ctx.r10.s64 + -7224;
	// bl 0x82ca3700
	ctx.lr = 0x83288D7C;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83288D8C"))) PPC_WEAK_FUNC(sub_83288D8C);
PPC_FUNC_IMPL(__imp__sub_83288D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83288D90"))) PPC_WEAK_FUNC(sub_83288D90);
PPC_FUNC_IMPL(__imp__sub_83288D90) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,21408
	ctx.r3.s64 = ctx.r10.s64 + 21408;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83288DB4;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-7216
	ctx.r3.s64 = ctx.r9.s64 + -7216;
	// bl 0x82ca3700
	ctx.lr = 0x83288DC0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83288DD0"))) PPC_WEAK_FUNC(sub_83288DD0);
PPC_FUNC_IMPL(__imp__sub_83288DD0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,21412
	ctx.r3.s64 = ctx.r10.s64 + 21412;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83288DF4;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-7200
	ctx.r3.s64 = ctx.r9.s64 + -7200;
	// bl 0x82ca3700
	ctx.lr = 0x83288E00;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83288E10"))) PPC_WEAK_FUNC(sub_83288E10);
PPC_FUNC_IMPL(__imp__sub_83288E10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,21416
	ctx.r11.s64 = ctx.r11.s64 + 21416;
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-7184
	ctx.r3.s64 = ctx.r9.s64 + -7184;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83288E38"))) PPC_WEAK_FUNC(sub_83288E38);
PPC_FUNC_IMPL(__imp__sub_83288E38) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,21436
	ctx.r3.s64 = ctx.r10.s64 + 21436;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83288E5C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-7160
	ctx.r3.s64 = ctx.r9.s64 + -7160;
	// bl 0x82ca3700
	ctx.lr = 0x83288E68;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83288E78"))) PPC_WEAK_FUNC(sub_83288E78);
PPC_FUNC_IMPL(__imp__sub_83288E78) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,21440
	ctx.r3.s64 = ctx.r10.s64 + 21440;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83288E9C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-7144
	ctx.r3.s64 = ctx.r9.s64 + -7144;
	// bl 0x82ca3700
	ctx.lr = 0x83288EA8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83288EB8"))) PPC_WEAK_FUNC(sub_83288EB8);
PPC_FUNC_IMPL(__imp__sub_83288EB8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,21444
	ctx.r3.s64 = ctx.r10.s64 + 21444;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83288EDC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-7128
	ctx.r3.s64 = ctx.r9.s64 + -7128;
	// bl 0x82ca3700
	ctx.lr = 0x83288EE8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83288EF8"))) PPC_WEAK_FUNC(sub_83288EF8);
PPC_FUNC_IMPL(__imp__sub_83288EF8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,21448
	ctx.r3.s64 = ctx.r10.s64 + 21448;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83288F1C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-7112
	ctx.r3.s64 = ctx.r9.s64 + -7112;
	// bl 0x82ca3700
	ctx.lr = 0x83288F28;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83288F38"))) PPC_WEAK_FUNC(sub_83288F38);
PPC_FUNC_IMPL(__imp__sub_83288F38) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31926
	ctx.r7.s64 = -2092302336;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r7,21452
	ctx.r6.s64 = ctx.r7.s64 + 21452;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,21452(r7)
	PPC_STORE_U32(ctx.r7.u32 + 21452, ctx.r11.u32);
	// lis r5,-31957
	ctx.r5.s64 = -2094333952;
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// stw r9,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r9.u32);
	// addi r3,r5,-7096
	ctx.r3.s64 = ctx.r5.s64 + -7096;
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83288F6C"))) PPC_WEAK_FUNC(sub_83288F6C);
PPC_FUNC_IMPL(__imp__sub_83288F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83288F70"))) PPC_WEAK_FUNC(sub_83288F70);
PPC_FUNC_IMPL(__imp__sub_83288F70) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31926
	ctx.r7.s64 = -2092302336;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r7,21468
	ctx.r6.s64 = ctx.r7.s64 + 21468;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,21468(r7)
	PPC_STORE_U32(ctx.r7.u32 + 21468, ctx.r11.u32);
	// lis r5,-31957
	ctx.r5.s64 = -2094333952;
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// stw r9,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r9.u32);
	// addi r3,r5,-7016
	ctx.r3.s64 = ctx.r5.s64 + -7016;
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83288FA4"))) PPC_WEAK_FUNC(sub_83288FA4);
PPC_FUNC_IMPL(__imp__sub_83288FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83288FA8"))) PPC_WEAK_FUNC(sub_83288FA8);
PPC_FUNC_IMPL(__imp__sub_83288FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31926
	ctx.r7.s64 = -2092302336;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r7,21484
	ctx.r6.s64 = ctx.r7.s64 + 21484;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,21484(r7)
	PPC_STORE_U32(ctx.r7.u32 + 21484, ctx.r11.u32);
	// lis r5,-31957
	ctx.r5.s64 = -2094333952;
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// stw r9,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r9.u32);
	// addi r3,r5,-6936
	ctx.r3.s64 = ctx.r5.s64 + -6936;
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83288FDC"))) PPC_WEAK_FUNC(sub_83288FDC);
PPC_FUNC_IMPL(__imp__sub_83288FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83288FE0"))) PPC_WEAK_FUNC(sub_83288FE0);
PPC_FUNC_IMPL(__imp__sub_83288FE0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31926
	ctx.r7.s64 = -2092302336;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r7,21500
	ctx.r6.s64 = ctx.r7.s64 + 21500;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,21500(r7)
	PPC_STORE_U32(ctx.r7.u32 + 21500, ctx.r11.u32);
	// lis r5,-31957
	ctx.r5.s64 = -2094333952;
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// stw r9,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r9.u32);
	// addi r3,r5,-6856
	ctx.r3.s64 = ctx.r5.s64 + -6856;
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83289014"))) PPC_WEAK_FUNC(sub_83289014);
PPC_FUNC_IMPL(__imp__sub_83289014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83289018"))) PPC_WEAK_FUNC(sub_83289018);
PPC_FUNC_IMPL(__imp__sub_83289018) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31926
	ctx.r7.s64 = -2092302336;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r7,21516
	ctx.r6.s64 = ctx.r7.s64 + 21516;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,21516(r7)
	PPC_STORE_U32(ctx.r7.u32 + 21516, ctx.r11.u32);
	// lis r5,-31957
	ctx.r5.s64 = -2094333952;
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// stw r9,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r9.u32);
	// addi r3,r5,-6776
	ctx.r3.s64 = ctx.r5.s64 + -6776;
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328904C"))) PPC_WEAK_FUNC(sub_8328904C);
PPC_FUNC_IMPL(__imp__sub_8328904C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83289050"))) PPC_WEAK_FUNC(sub_83289050);
PPC_FUNC_IMPL(__imp__sub_83289050) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31926
	ctx.r7.s64 = -2092302336;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r7,21532
	ctx.r6.s64 = ctx.r7.s64 + 21532;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,21532(r7)
	PPC_STORE_U32(ctx.r7.u32 + 21532, ctx.r11.u32);
	// lis r5,-31957
	ctx.r5.s64 = -2094333952;
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// stw r9,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r9.u32);
	// addi r3,r5,-6696
	ctx.r3.s64 = ctx.r5.s64 + -6696;
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83289084"))) PPC_WEAK_FUNC(sub_83289084);
PPC_FUNC_IMPL(__imp__sub_83289084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83289088"))) PPC_WEAK_FUNC(sub_83289088);
PPC_FUNC_IMPL(__imp__sub_83289088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-6616
	ctx.r3.s64 = ctx.r11.s64 + -6616;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83289094"))) PPC_WEAK_FUNC(sub_83289094);
PPC_FUNC_IMPL(__imp__sub_83289094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83289098"))) PPC_WEAK_FUNC(sub_83289098);
PPC_FUNC_IMPL(__imp__sub_83289098) {
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
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8221f388
	ctx.lr = 0x832890AC;
	sub_8221F388(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832890bc
	if (ctx.cr6.eq) goto loc_832890BC;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_832890BC:
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832890c8
	if (ctx.cr0.eq) goto loc_832890C8;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_832890C8:
	// addic. r11,r3,8
	ctx.xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r11.s64 = ctx.r3.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832890d4
	if (ctx.cr0.eq) goto loc_832890D4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_832890D4:
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// stb r10,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r10.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r8,r9,21548
	ctx.r8.s64 = ctx.r9.s64 + 21548;
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r11.u8);
	// lis r7,-31957
	ctx.r7.s64 = -2094333952;
	// stw r3,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r3.u32);
	// stb r11,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r11.u8);
	// addi r3,r7,-6520
	ctx.r3.s64 = ctx.r7.s64 + -6520;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// bl 0x82ca3700
	ctx.lr = 0x83289118;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83289128"))) PPC_WEAK_FUNC(sub_83289128);
PPC_FUNC_IMPL(__imp__sub_83289128) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,21560
	ctx.r3.s64 = ctx.r10.s64 + 21560;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8328914C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-6488
	ctx.r3.s64 = ctx.r9.s64 + -6488;
	// bl 0x82ca3700
	ctx.lr = 0x83289158;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83289168"))) PPC_WEAK_FUNC(sub_83289168);
PPC_FUNC_IMPL(__imp__sub_83289168) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,21564
	ctx.r3.s64 = ctx.r10.s64 + 21564;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8328918C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-6472
	ctx.r3.s64 = ctx.r9.s64 + -6472;
	// bl 0x82ca3700
	ctx.lr = 0x83289198;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832891A8"))) PPC_WEAK_FUNC(sub_832891A8);
PPC_FUNC_IMPL(__imp__sub_832891A8) {
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
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x8221f388
	ctx.lr = 0x832891BC;
	sub_8221F388(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x832891cc
	if (ctx.cr6.eq) goto loc_832891CC;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_832891CC:
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832891d8
	if (ctx.cr0.eq) goto loc_832891D8;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_832891D8:
	// addic. r11,r3,8
	ctx.xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r11.s64 = ctx.r3.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x832891e4
	if (ctx.cr0.eq) goto loc_832891E4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_832891E4:
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// stb r10,25(r3)
	PPC_STORE_U8(ctx.r3.u32 + 25, ctx.r10.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r8,r9,21568
	ctx.r8.s64 = ctx.r9.s64 + 21568;
	// stb r11,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r11.u8);
	// lis r7,-31957
	ctx.r7.s64 = -2094333952;
	// stw r3,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r3.u32);
	// stb r11,25(r3)
	PPC_STORE_U8(ctx.r3.u32 + 25, ctx.r11.u8);
	// addi r3,r7,-6456
	ctx.r3.s64 = ctx.r7.s64 + -6456;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// bl 0x82ca3700
	ctx.lr = 0x83289228;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83289238"))) PPC_WEAK_FUNC(sub_83289238);
PPC_FUNC_IMPL(__imp__sub_83289238) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,21580
	ctx.r3.s64 = ctx.r10.s64 + 21580;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8328925C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-6440
	ctx.r3.s64 = ctx.r9.s64 + -6440;
	// bl 0x82ca3700
	ctx.lr = 0x83289268;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83289278"))) PPC_WEAK_FUNC(sub_83289278);
PPC_FUNC_IMPL(__imp__sub_83289278) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,21584
	ctx.r3.s64 = ctx.r10.s64 + 21584;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8328929C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-6424
	ctx.r3.s64 = ctx.r9.s64 + -6424;
	// bl 0x82ca3700
	ctx.lr = 0x832892A8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832892B8"))) PPC_WEAK_FUNC(sub_832892B8);
PPC_FUNC_IMPL(__imp__sub_832892B8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,21588
	ctx.r3.s64 = ctx.r10.s64 + 21588;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832892DC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-6408
	ctx.r3.s64 = ctx.r9.s64 + -6408;
	// bl 0x82ca3700
	ctx.lr = 0x832892E8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832892F8"))) PPC_WEAK_FUNC(sub_832892F8);
PPC_FUNC_IMPL(__imp__sub_832892F8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,21592
	ctx.r3.s64 = ctx.r10.s64 + 21592;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8328931C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-6392
	ctx.r3.s64 = ctx.r9.s64 + -6392;
	// bl 0x82ca3700
	ctx.lr = 0x83289328;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83289338"))) PPC_WEAK_FUNC(sub_83289338);
PPC_FUNC_IMPL(__imp__sub_83289338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-6376
	ctx.r3.s64 = ctx.r11.s64 + -6376;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83289344"))) PPC_WEAK_FUNC(sub_83289344);
PPC_FUNC_IMPL(__imp__sub_83289344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83289348"))) PPC_WEAK_FUNC(sub_83289348);
PPC_FUNC_IMPL(__imp__sub_83289348) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-6288
	ctx.r3.s64 = ctx.r11.s64 + -6288;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83289354"))) PPC_WEAK_FUNC(sub_83289354);
PPC_FUNC_IMPL(__imp__sub_83289354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83289358"))) PPC_WEAK_FUNC(sub_83289358);
PPC_FUNC_IMPL(__imp__sub_83289358) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,21628
	ctx.r3.s64 = ctx.r10.s64 + 21628;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8328937C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-6096
	ctx.r3.s64 = ctx.r9.s64 + -6096;
	// bl 0x82ca3700
	ctx.lr = 0x83289388;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83289398"))) PPC_WEAK_FUNC(sub_83289398);
PPC_FUNC_IMPL(__imp__sub_83289398) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,21632
	ctx.r3.s64 = ctx.r10.s64 + 21632;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832893BC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-6080
	ctx.r3.s64 = ctx.r9.s64 + -6080;
	// bl 0x82ca3700
	ctx.lr = 0x832893C8;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832893D8"))) PPC_WEAK_FUNC(sub_832893D8);
PPC_FUNC_IMPL(__imp__sub_832893D8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,21636
	ctx.r3.s64 = ctx.r10.s64 + 21636;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832893FC;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-5976
	ctx.r3.s64 = ctx.r9.s64 + -5976;
	// bl 0x82ca3700
	ctx.lr = 0x83289408;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83289418"))) PPC_WEAK_FUNC(sub_83289418);
PPC_FUNC_IMPL(__imp__sub_83289418) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,21640
	ctx.r3.s64 = ctx.r10.s64 + 21640;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x8328943C;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-5960
	ctx.r3.s64 = ctx.r9.s64 + -5960;
	// bl 0x82ca3700
	ctx.lr = 0x83289448;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83289458"))) PPC_WEAK_FUNC(sub_83289458);
PPC_FUNC_IMPL(__imp__sub_83289458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-5944
	ctx.r3.s64 = ctx.r11.s64 + -5944;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83289464"))) PPC_WEAK_FUNC(sub_83289464);
PPC_FUNC_IMPL(__imp__sub_83289464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83289468"))) PPC_WEAK_FUNC(sub_83289468);
PPC_FUNC_IMPL(__imp__sub_83289468) {
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
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21664
	ctx.r3.s64 = ctx.r11.s64 + 21664;
	// bl 0x82aaff50
	ctx.lr = 0x83289480;
	sub_82AAFF50(ctx, base);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// addi r3,r10,-5856
	ctx.r3.s64 = ctx.r10.s64 + -5856;
	// bl 0x82ca3700
	ctx.lr = 0x8328948C;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8328949C"))) PPC_WEAK_FUNC(sub_8328949C);
PPC_FUNC_IMPL(__imp__sub_8328949C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832894A0"))) PPC_WEAK_FUNC(sub_832894A0);
PPC_FUNC_IMPL(__imp__sub_832894A0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,21776
	ctx.r3.s64 = ctx.r10.s64 + 21776;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832894C4;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-5840
	ctx.r3.s64 = ctx.r9.s64 + -5840;
	// bl 0x82ca3700
	ctx.lr = 0x832894D0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832894E0"))) PPC_WEAK_FUNC(sub_832894E0);
PPC_FUNC_IMPL(__imp__sub_832894E0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,21780
	ctx.r3.s64 = ctx.r10.s64 + 21780;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83289504;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-5824
	ctx.r3.s64 = ctx.r9.s64 + -5824;
	// bl 0x82ca3700
	ctx.lr = 0x83289510;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83289520"))) PPC_WEAK_FUNC(sub_83289520);
PPC_FUNC_IMPL(__imp__sub_83289520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-5808
	ctx.r3.s64 = ctx.r11.s64 + -5808;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328952C"))) PPC_WEAK_FUNC(sub_8328952C);
PPC_FUNC_IMPL(__imp__sub_8328952C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83289530"))) PPC_WEAK_FUNC(sub_83289530);
PPC_FUNC_IMPL(__imp__sub_83289530) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,21788
	ctx.r3.s64 = ctx.r10.s64 + 21788;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83289554;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-5728
	ctx.r3.s64 = ctx.r9.s64 + -5728;
	// bl 0x82ca3700
	ctx.lr = 0x83289560;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83289570"))) PPC_WEAK_FUNC(sub_83289570);
PPC_FUNC_IMPL(__imp__sub_83289570) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,21792
	ctx.r3.s64 = ctx.r10.s64 + 21792;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83289594;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-5712
	ctx.r3.s64 = ctx.r9.s64 + -5712;
	// bl 0x82ca3700
	ctx.lr = 0x832895A0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832895B0"))) PPC_WEAK_FUNC(sub_832895B0);
PPC_FUNC_IMPL(__imp__sub_832895B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-5696
	ctx.r3.s64 = ctx.r11.s64 + -5696;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832895BC"))) PPC_WEAK_FUNC(sub_832895BC);
PPC_FUNC_IMPL(__imp__sub_832895BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832895C0"))) PPC_WEAK_FUNC(sub_832895C0);
PPC_FUNC_IMPL(__imp__sub_832895C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-5680
	ctx.r3.s64 = ctx.r11.s64 + -5680;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832895CC"))) PPC_WEAK_FUNC(sub_832895CC);
PPC_FUNC_IMPL(__imp__sub_832895CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832895D0"))) PPC_WEAK_FUNC(sub_832895D0);
PPC_FUNC_IMPL(__imp__sub_832895D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-5664
	ctx.r3.s64 = ctx.r11.s64 + -5664;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832895DC"))) PPC_WEAK_FUNC(sub_832895DC);
PPC_FUNC_IMPL(__imp__sub_832895DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832895E0"))) PPC_WEAK_FUNC(sub_832895E0);
PPC_FUNC_IMPL(__imp__sub_832895E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-5648
	ctx.r3.s64 = ctx.r11.s64 + -5648;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832895EC"))) PPC_WEAK_FUNC(sub_832895EC);
PPC_FUNC_IMPL(__imp__sub_832895EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832895F0"))) PPC_WEAK_FUNC(sub_832895F0);
PPC_FUNC_IMPL(__imp__sub_832895F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-5632
	ctx.r3.s64 = ctx.r11.s64 + -5632;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832895FC"))) PPC_WEAK_FUNC(sub_832895FC);
PPC_FUNC_IMPL(__imp__sub_832895FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83289600"))) PPC_WEAK_FUNC(sub_83289600);
PPC_FUNC_IMPL(__imp__sub_83289600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-5616
	ctx.r3.s64 = ctx.r11.s64 + -5616;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328960C"))) PPC_WEAK_FUNC(sub_8328960C);
PPC_FUNC_IMPL(__imp__sub_8328960C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83289610"))) PPC_WEAK_FUNC(sub_83289610);
PPC_FUNC_IMPL(__imp__sub_83289610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-5600
	ctx.r3.s64 = ctx.r11.s64 + -5600;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328961C"))) PPC_WEAK_FUNC(sub_8328961C);
PPC_FUNC_IMPL(__imp__sub_8328961C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83289620"))) PPC_WEAK_FUNC(sub_83289620);
PPC_FUNC_IMPL(__imp__sub_83289620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r3,r11,-5584
	ctx.r3.s64 = ctx.r11.s64 + -5584;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328962C"))) PPC_WEAK_FUNC(sub_8328962C);
PPC_FUNC_IMPL(__imp__sub_8328962C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83289630"))) PPC_WEAK_FUNC(sub_83289630);
PPC_FUNC_IMPL(__imp__sub_83289630) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,21956
	ctx.r3.s64 = ctx.r10.s64 + 21956;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83289654;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-5568
	ctx.r3.s64 = ctx.r9.s64 + -5568;
	// bl 0x82ca3700
	ctx.lr = 0x83289660;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83289670"))) PPC_WEAK_FUNC(sub_83289670);
PPC_FUNC_IMPL(__imp__sub_83289670) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,21960
	ctx.r3.s64 = ctx.r10.s64 + 21960;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83289694;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-5552
	ctx.r3.s64 = ctx.r9.s64 + -5552;
	// bl 0x82ca3700
	ctx.lr = 0x832896A0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832896B0"))) PPC_WEAK_FUNC(sub_832896B0);
PPC_FUNC_IMPL(__imp__sub_832896B0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,21964
	ctx.r3.s64 = ctx.r10.s64 + 21964;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832896D4;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-5536
	ctx.r3.s64 = ctx.r9.s64 + -5536;
	// bl 0x82ca3700
	ctx.lr = 0x832896E0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832896F0"))) PPC_WEAK_FUNC(sub_832896F0);
PPC_FUNC_IMPL(__imp__sub_832896F0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,21968
	ctx.r3.s64 = ctx.r10.s64 + 21968;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83289714;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-5520
	ctx.r3.s64 = ctx.r9.s64 + -5520;
	// bl 0x82ca3700
	ctx.lr = 0x83289720;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83289730"))) PPC_WEAK_FUNC(sub_83289730);
PPC_FUNC_IMPL(__imp__sub_83289730) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,21972
	ctx.r3.s64 = ctx.r10.s64 + 21972;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83289754;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-5504
	ctx.r3.s64 = ctx.r9.s64 + -5504;
	// bl 0x82ca3700
	ctx.lr = 0x83289760;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83289770"))) PPC_WEAK_FUNC(sub_83289770);
PPC_FUNC_IMPL(__imp__sub_83289770) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,21976
	ctx.r3.s64 = ctx.r10.s64 + 21976;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x83289794;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-5488
	ctx.r3.s64 = ctx.r9.s64 + -5488;
	// bl 0x82ca3700
	ctx.lr = 0x832897A0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832897B0"))) PPC_WEAK_FUNC(sub_832897B0);
PPC_FUNC_IMPL(__imp__sub_832897B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r3,r11,21984
	ctx.r3.s64 = ctx.r11.s64 + 21984;
	// b 0x8223bd98
	sub_8223BD98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832897BC"))) PPC_WEAK_FUNC(sub_832897BC);
PPC_FUNC_IMPL(__imp__sub_832897BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832897C0"))) PPC_WEAK_FUNC(sub_832897C0);
PPC_FUNC_IMPL(__imp__sub_832897C0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r10,22048
	ctx.r3.s64 = ctx.r10.s64 + 22048;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x832897E4;
	sub_8222CF18(ctx, base);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r3,r9,-5472
	ctx.r3.s64 = ctx.r9.s64 + -5472;
	// bl 0x82ca3700
	ctx.lr = 0x832897F0;
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

