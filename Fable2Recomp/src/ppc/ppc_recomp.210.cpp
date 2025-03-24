#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83259960"))) PPC_WEAK_FUNC(sub_83259960);
PPC_FUNC_IMPL(__imp__sub_83259960) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6400
	ctx.r4.s64 = r11.s64 + 6400;
	// addi r3,r10,-21952
	ctx.r3.s64 = ctx.r10.s64 + -21952;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,19016
	ctx.r3.s64 = ctx.r9.s64 + 19016;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832599A0"))) PPC_WEAK_FUNC(sub_832599A0);
PPC_FUNC_IMPL(__imp__sub_832599A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6408
	ctx.r4.s64 = r11.s64 + 6408;
	// addi r3,r10,-21948
	ctx.r3.s64 = ctx.r10.s64 + -21948;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,19032
	ctx.r3.s64 = ctx.r9.s64 + 19032;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832599E0"))) PPC_WEAK_FUNC(sub_832599E0);
PPC_FUNC_IMPL(__imp__sub_832599E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6428
	ctx.r4.s64 = r11.s64 + 6428;
	// addi r3,r10,-21944
	ctx.r3.s64 = ctx.r10.s64 + -21944;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,19048
	ctx.r3.s64 = ctx.r9.s64 + 19048;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83259A20"))) PPC_WEAK_FUNC(sub_83259A20);
PPC_FUNC_IMPL(__imp__sub_83259A20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6400
	ctx.r4.s64 = r11.s64 + 6400;
	// addi r3,r10,-21940
	ctx.r3.s64 = ctx.r10.s64 + -21940;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,19064
	ctx.r3.s64 = ctx.r9.s64 + 19064;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83259A60"))) PPC_WEAK_FUNC(sub_83259A60);
PPC_FUNC_IMPL(__imp__sub_83259A60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6408
	ctx.r4.s64 = r11.s64 + 6408;
	// addi r3,r10,-21936
	ctx.r3.s64 = ctx.r10.s64 + -21936;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,19080
	ctx.r3.s64 = ctx.r9.s64 + 19080;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83259AA0"))) PPC_WEAK_FUNC(sub_83259AA0);
PPC_FUNC_IMPL(__imp__sub_83259AA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6428
	ctx.r4.s64 = r11.s64 + 6428;
	// addi r3,r10,-21932
	ctx.r3.s64 = ctx.r10.s64 + -21932;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,19096
	ctx.r3.s64 = ctx.r9.s64 + 19096;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83259AE0"))) PPC_WEAK_FUNC(sub_83259AE0);
PPC_FUNC_IMPL(__imp__sub_83259AE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	r11.s64 = -2092302336;
	// li r31,3
	r31.s64 = 3;
	// addi r30,r11,-21928
	r30.s64 = r11.s64 + -21928;
loc_83259B00:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8266d970
	sub_8266D970(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,176
	r30.s64 = r30.s64 + 176;
	// bge 0x83259b00
	if (!cr0.lt) goto loc_83259B00;
	// lis r11,-31958
	r11.s64 = -2094399488;
	// addi r3,r11,19112
	ctx.r3.s64 = r11.s64 + 19112;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83259B38"))) PPC_WEAK_FUNC(sub_83259B38);
PPC_FUNC_IMPL(__imp__sub_83259B38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31958
	r11.s64 = -2094399488;
	// addi r3,r11,19192
	ctx.r3.s64 = r11.s64 + 19192;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83259B48"))) PPC_WEAK_FUNC(sub_83259B48);
PPC_FUNC_IMPL(__imp__sub_83259B48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// addi r10,r11,-21200
	ctx.r10.s64 = r11.s64 + -21200;
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83259B60"))) PPC_WEAK_FUNC(sub_83259B60);
PPC_FUNC_IMPL(__imp__sub_83259B60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31958
	r11.s64 = -2094399488;
	// addi r3,r11,19208
	ctx.r3.s64 = r11.s64 + 19208;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83259B70"))) PPC_WEAK_FUNC(sub_83259B70);
PPC_FUNC_IMPL(__imp__sub_83259B70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83259b94
	if (cr6.eq) goto loc_83259B94;
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
loc_83259B94:
	// addic. r10,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r10.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x83259ba0
	if (cr0.eq) goto loc_83259BA0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
loc_83259BA0:
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-21168
	ctx.r8.s64 = ctx.r9.s64 + -21168;
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// addi r3,r7,19296
	ctx.r3.s64 = ctx.r7.s64 + 19296;
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83259BD0"))) PPC_WEAK_FUNC(sub_83259BD0);
PPC_FUNC_IMPL(__imp__sub_83259BD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-25864
	ctx.r4.s64 = r11.s64 + -25864;
	// addi r3,r10,-21204
	ctx.r3.s64 = ctx.r10.s64 + -21204;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,19368
	ctx.r3.s64 = ctx.r9.s64 + 19368;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83259C10"))) PPC_WEAK_FUNC(sub_83259C10);
PPC_FUNC_IMPL(__imp__sub_83259C10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r8,r1,-12
	ctx.r8.s64 = ctx.r1.s64 + -12;
	// addi r7,r1,-12
	ctx.r7.s64 = ctx.r1.s64 + -12;
	// lfs f0,-27468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27468);
	f0.f64 = double(temp.f32);
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lis r5,-31926
	ctx.r5.s64 = -2092302336;
	// lvlx v0,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lfs f13,-12728(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12728);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r5,-21152
	ctx.r4.s64 = ctx.r5.s64 + -21152;
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lvlx v13,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f0,-12(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
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

__attribute__((alias("__imp__sub_83259C70"))) PPC_WEAK_FUNC(sub_83259C70);
PPC_FUNC_IMPL(__imp__sub_83259C70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// addi r10,r11,-21136
	ctx.r10.s64 = r11.s64 + -21136;
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83259C88"))) PPC_WEAK_FUNC(sub_83259C88);
PPC_FUNC_IMPL(__imp__sub_83259C88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-25032
	ctx.r4.s64 = r11.s64 + -25032;
	// addi r3,r10,-21156
	ctx.r3.s64 = ctx.r10.s64 + -21156;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,19400
	ctx.r3.s64 = ctx.r9.s64 + 19400;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83259CC8"))) PPC_WEAK_FUNC(sub_83259CC8);
PPC_FUNC_IMPL(__imp__sub_83259CC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-25020
	ctx.r4.s64 = r11.s64 + -25020;
	// addi r3,r10,-21120
	ctx.r3.s64 = ctx.r10.s64 + -21120;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,19416
	ctx.r3.s64 = ctx.r9.s64 + 19416;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83259D08"))) PPC_WEAK_FUNC(sub_83259D08);
PPC_FUNC_IMPL(__imp__sub_83259D08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-25012
	ctx.r4.s64 = r11.s64 + -25012;
	// addi r3,r10,-21116
	ctx.r3.s64 = ctx.r10.s64 + -21116;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,19432
	ctx.r3.s64 = ctx.r9.s64 + 19432;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83259D48"))) PPC_WEAK_FUNC(sub_83259D48);
PPC_FUNC_IMPL(__imp__sub_83259D48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-25004
	ctx.r4.s64 = r11.s64 + -25004;
	// addi r3,r10,-21112
	ctx.r3.s64 = ctx.r10.s64 + -21112;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,19448
	ctx.r3.s64 = ctx.r9.s64 + 19448;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83259D88"))) PPC_WEAK_FUNC(sub_83259D88);
PPC_FUNC_IMPL(__imp__sub_83259D88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-24988
	ctx.r4.s64 = r11.s64 + -24988;
	// addi r3,r10,-21108
	ctx.r3.s64 = ctx.r10.s64 + -21108;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,19464
	ctx.r3.s64 = ctx.r9.s64 + 19464;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83259DC8"))) PPC_WEAK_FUNC(sub_83259DC8);
PPC_FUNC_IMPL(__imp__sub_83259DC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-24968
	ctx.r4.s64 = r11.s64 + -24968;
	// addi r3,r10,-21104
	ctx.r3.s64 = ctx.r10.s64 + -21104;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,19480
	ctx.r3.s64 = ctx.r9.s64 + 19480;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83259E08"))) PPC_WEAK_FUNC(sub_83259E08);
PPC_FUNC_IMPL(__imp__sub_83259E08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-24948
	ctx.r4.s64 = r11.s64 + -24948;
	// addi r3,r10,-21100
	ctx.r3.s64 = ctx.r10.s64 + -21100;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,19496
	ctx.r3.s64 = ctx.r9.s64 + 19496;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83259E48"))) PPC_WEAK_FUNC(sub_83259E48);
PPC_FUNC_IMPL(__imp__sub_83259E48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-24928
	ctx.r4.s64 = r11.s64 + -24928;
	// addi r3,r10,-21096
	ctx.r3.s64 = ctx.r10.s64 + -21096;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,19512
	ctx.r3.s64 = ctx.r9.s64 + 19512;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83259E88"))) PPC_WEAK_FUNC(sub_83259E88);
PPC_FUNC_IMPL(__imp__sub_83259E88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83259eac
	if (cr6.eq) goto loc_83259EAC;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_83259EAC:
	// addic. r11,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r11.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83259eb8
	if (cr0.eq) goto loc_83259EB8;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_83259EB8:
	// addic. r11,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	r11.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83259ec4
	if (cr0.eq) goto loc_83259EC4;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_83259EC4:
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// stb r10,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r10.u8);
	// li r11,1
	r11.s64 = 1;
	// addi r8,r9,-21092
	ctx.r8.s64 = ctx.r9.s64 + -21092;
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, r11.u8);
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// stw r3,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r3.u32);
	// stb r11,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, r11.u8);
	// addi r3,r7,19528
	ctx.r3.s64 = ctx.r7.s64 + 19528;
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83259F18"))) PPC_WEAK_FUNC(sub_83259F18);
PPC_FUNC_IMPL(__imp__sub_83259F18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83259f3c
	if (cr6.eq) goto loc_83259F3C;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_83259F3C:
	// addic. r11,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r11.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83259f48
	if (cr0.eq) goto loc_83259F48;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_83259F48:
	// addic. r11,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	r11.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83259f54
	if (cr0.eq) goto loc_83259F54;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_83259F54:
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// stb r10,33(r3)
	PPC_STORE_U8(ctx.r3.u32 + 33, ctx.r10.u8);
	// li r11,1
	r11.s64 = 1;
	// addi r8,r9,-21080
	ctx.r8.s64 = ctx.r9.s64 + -21080;
	// stb r11,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, r11.u8);
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// stw r3,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r3.u32);
	// stb r11,33(r3)
	PPC_STORE_U8(ctx.r3.u32 + 33, r11.u8);
	// addi r3,r7,19544
	ctx.r3.s64 = ctx.r7.s64 + 19544;
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83259FA8"))) PPC_WEAK_FUNC(sub_83259FA8);
PPC_FUNC_IMPL(__imp__sub_83259FA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83259fcc
	if (cr6.eq) goto loc_83259FCC;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_83259FCC:
	// addic. r11,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r11.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83259fd8
	if (cr0.eq) goto loc_83259FD8;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_83259FD8:
	// addic. r11,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	r11.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83259fe4
	if (cr0.eq) goto loc_83259FE4;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_83259FE4:
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// stb r10,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r10.u8);
	// li r11,1
	r11.s64 = 1;
	// addi r8,r9,-21068
	ctx.r8.s64 = ctx.r9.s64 + -21068;
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, r11.u8);
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// stw r3,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r3.u32);
	// stb r11,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, r11.u8);
	// addi r3,r7,19560
	ctx.r3.s64 = ctx.r7.s64 + 19560;
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A038"))) PPC_WEAK_FUNC(sub_8325A038);
PPC_FUNC_IMPL(__imp__sub_8325A038) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8325a05c
	if (cr6.eq) goto loc_8325A05C;
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
loc_8325A05C:
	// addic. r10,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r10.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8325a068
	if (cr0.eq) goto loc_8325A068;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
loc_8325A068:
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-21056
	ctx.r8.s64 = ctx.r9.s64 + -21056;
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// addi r3,r7,19576
	ctx.r3.s64 = ctx.r7.s64 + 19576;
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A098"))) PPC_WEAK_FUNC(sub_8325A098);
PPC_FUNC_IMPL(__imp__sub_8325A098) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31958
	r11.s64 = -2094399488;
	// addi r3,r11,19648
	ctx.r3.s64 = r11.s64 + 19648;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325A0A8"))) PPC_WEAK_FUNC(sub_8325A0A8);
PPC_FUNC_IMPL(__imp__sub_8325A0A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31926
	r11.s64 = -2092302336;
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// addi r10,r11,-21024
	ctx.r10.s64 = r11.s64 + -21024;
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A0C0"))) PPC_WEAK_FUNC(sub_8325A0C0);
PPC_FUNC_IMPL(__imp__sub_8325A0C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8325a0e4
	if (cr6.eq) goto loc_8325A0E4;
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
loc_8325A0E4:
	// addic. r10,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r10.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8325a0f0
	if (cr0.eq) goto loc_8325A0F0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
loc_8325A0F0:
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-21008
	ctx.r8.s64 = ctx.r9.s64 + -21008;
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// addi r3,r7,19736
	ctx.r3.s64 = ctx.r7.s64 + 19736;
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A120"))) PPC_WEAK_FUNC(sub_8325A120);
PPC_FUNC_IMPL(__imp__sub_8325A120) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x8221f388
	sub_8221F388(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8325a144
	if (cr6.eq) goto loc_8325A144;
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
loc_8325A144:
	// addic. r10,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r10.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8325a150
	if (cr0.eq) goto loc_8325A150;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
loc_8325A150:
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,-20996
	ctx.r8.s64 = ctx.r9.s64 + -20996;
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// addi r3,r7,19808
	ctx.r3.s64 = ctx.r7.s64 + 19808;
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A180"))) PPC_WEAK_FUNC(sub_8325A180);
PPC_FUNC_IMPL(__imp__sub_8325A180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-25864
	ctx.r4.s64 = r11.s64 + -25864;
	// addi r3,r10,-21028
	ctx.r3.s64 = ctx.r10.s64 + -21028;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,19880
	ctx.r3.s64 = ctx.r9.s64 + 19880;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A1C0"))) PPC_WEAK_FUNC(sub_8325A1C0);
PPC_FUNC_IMPL(__imp__sub_8325A1C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31958
	r11.s64 = -2094399488;
	// addi r3,r11,19896
	ctx.r3.s64 = r11.s64 + 19896;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325A1D0"))) PPC_WEAK_FUNC(sub_8325A1D0);
PPC_FUNC_IMPL(__imp__sub_8325A1D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,22264
	ctx.r4.s64 = r11.s64 + 22264;
	// addi r3,r10,-20968
	ctx.r3.s64 = ctx.r10.s64 + -20968;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,19912
	ctx.r3.s64 = ctx.r9.s64 + 19912;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A210"))) PPC_WEAK_FUNC(sub_8325A210);
PPC_FUNC_IMPL(__imp__sub_8325A210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31958
	r11.s64 = -2094399488;
	// addi r3,r11,19928
	ctx.r3.s64 = r11.s64 + 19928;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325A220"))) PPC_WEAK_FUNC(sub_8325A220);
PPC_FUNC_IMPL(__imp__sub_8325A220) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31958
	r11.s64 = -2094399488;
	// addi r3,r11,20032
	ctx.r3.s64 = r11.s64 + 20032;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325A230"))) PPC_WEAK_FUNC(sub_8325A230);
PPC_FUNC_IMPL(__imp__sub_8325A230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-22584
	ctx.r4.s64 = r11.s64 + -22584;
	// addi r3,r10,-20932
	ctx.r3.s64 = ctx.r10.s64 + -20932;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,20136
	ctx.r3.s64 = ctx.r9.s64 + 20136;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A270"))) PPC_WEAK_FUNC(sub_8325A270);
PPC_FUNC_IMPL(__imp__sub_8325A270) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-21668
	ctx.r4.s64 = r11.s64 + -21668;
	// addi r3,r10,-20928
	ctx.r3.s64 = ctx.r10.s64 + -20928;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,20152
	ctx.r3.s64 = ctx.r9.s64 + 20152;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A2B0"))) PPC_WEAK_FUNC(sub_8325A2B0);
PPC_FUNC_IMPL(__imp__sub_8325A2B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-32620
	ctx.r4.s64 = r11.s64 + -32620;
	// addi r3,r10,-20924
	ctx.r3.s64 = ctx.r10.s64 + -20924;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,20168
	ctx.r3.s64 = ctx.r9.s64 + 20168;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A2F0"))) PPC_WEAK_FUNC(sub_8325A2F0);
PPC_FUNC_IMPL(__imp__sub_8325A2F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6400
	ctx.r4.s64 = r11.s64 + 6400;
	// addi r3,r10,-20920
	ctx.r3.s64 = ctx.r10.s64 + -20920;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,20184
	ctx.r3.s64 = ctx.r9.s64 + 20184;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A330"))) PPC_WEAK_FUNC(sub_8325A330);
PPC_FUNC_IMPL(__imp__sub_8325A330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6408
	ctx.r4.s64 = r11.s64 + 6408;
	// addi r3,r10,-20916
	ctx.r3.s64 = ctx.r10.s64 + -20916;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,20200
	ctx.r3.s64 = ctx.r9.s64 + 20200;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A370"))) PPC_WEAK_FUNC(sub_8325A370);
PPC_FUNC_IMPL(__imp__sub_8325A370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6428
	ctx.r4.s64 = r11.s64 + 6428;
	// addi r3,r10,-20912
	ctx.r3.s64 = ctx.r10.s64 + -20912;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,20216
	ctx.r3.s64 = ctx.r9.s64 + 20216;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A3B0"))) PPC_WEAK_FUNC(sub_8325A3B0);
PPC_FUNC_IMPL(__imp__sub_8325A3B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31958
	r11.s64 = -2094399488;
	// addi r3,r11,20232
	ctx.r3.s64 = r11.s64 + 20232;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325A3C0"))) PPC_WEAK_FUNC(sub_8325A3C0);
PPC_FUNC_IMPL(__imp__sub_8325A3C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-18164
	ctx.r4.s64 = r11.s64 + -18164;
	// addi r3,r10,-20888
	ctx.r3.s64 = ctx.r10.s64 + -20888;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,20336
	ctx.r3.s64 = ctx.r9.s64 + 20336;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A400"))) PPC_WEAK_FUNC(sub_8325A400);
PPC_FUNC_IMPL(__imp__sub_8325A400) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,3608
	ctx.r4.s64 = r11.s64 + 3608;
	// addi r3,r10,-20884
	ctx.r3.s64 = ctx.r10.s64 + -20884;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,20352
	ctx.r3.s64 = ctx.r9.s64 + 20352;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A440"))) PPC_WEAK_FUNC(sub_8325A440);
PPC_FUNC_IMPL(__imp__sub_8325A440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-18144
	ctx.r4.s64 = r11.s64 + -18144;
	// addi r3,r10,-20880
	ctx.r3.s64 = ctx.r10.s64 + -20880;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,20368
	ctx.r3.s64 = ctx.r9.s64 + 20368;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A480"))) PPC_WEAK_FUNC(sub_8325A480);
PPC_FUNC_IMPL(__imp__sub_8325A480) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-18108
	ctx.r4.s64 = r11.s64 + -18108;
	// addi r3,r10,-20876
	ctx.r3.s64 = ctx.r10.s64 + -20876;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,20384
	ctx.r3.s64 = ctx.r9.s64 + 20384;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A4C0"))) PPC_WEAK_FUNC(sub_8325A4C0);
PPC_FUNC_IMPL(__imp__sub_8325A4C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-18076
	ctx.r4.s64 = r11.s64 + -18076;
	// addi r3,r10,-20872
	ctx.r3.s64 = ctx.r10.s64 + -20872;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,20400
	ctx.r3.s64 = ctx.r9.s64 + 20400;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A500"))) PPC_WEAK_FUNC(sub_8325A500);
PPC_FUNC_IMPL(__imp__sub_8325A500) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-18020
	ctx.r4.s64 = r11.s64 + -18020;
	// addi r3,r10,-20868
	ctx.r3.s64 = ctx.r10.s64 + -20868;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,20416
	ctx.r3.s64 = ctx.r9.s64 + 20416;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A540"))) PPC_WEAK_FUNC(sub_8325A540);
PPC_FUNC_IMPL(__imp__sub_8325A540) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-17984
	ctx.r4.s64 = r11.s64 + -17984;
	// addi r3,r10,-20864
	ctx.r3.s64 = ctx.r10.s64 + -20864;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,20432
	ctx.r3.s64 = ctx.r9.s64 + 20432;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A580"))) PPC_WEAK_FUNC(sub_8325A580);
PPC_FUNC_IMPL(__imp__sub_8325A580) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-17936
	ctx.r4.s64 = r11.s64 + -17936;
	// addi r3,r10,-20860
	ctx.r3.s64 = ctx.r10.s64 + -20860;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,20448
	ctx.r3.s64 = ctx.r9.s64 + 20448;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A5C0"))) PPC_WEAK_FUNC(sub_8325A5C0);
PPC_FUNC_IMPL(__imp__sub_8325A5C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-17888
	ctx.r4.s64 = r11.s64 + -17888;
	// addi r3,r10,-20856
	ctx.r3.s64 = ctx.r10.s64 + -20856;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,20464
	ctx.r3.s64 = ctx.r9.s64 + 20464;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A600"))) PPC_WEAK_FUNC(sub_8325A600);
PPC_FUNC_IMPL(__imp__sub_8325A600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-17852
	ctx.r4.s64 = r11.s64 + -17852;
	// addi r3,r10,-20852
	ctx.r3.s64 = ctx.r10.s64 + -20852;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,20480
	ctx.r3.s64 = ctx.r9.s64 + 20480;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A640"))) PPC_WEAK_FUNC(sub_8325A640);
PPC_FUNC_IMPL(__imp__sub_8325A640) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-17808
	ctx.r4.s64 = r11.s64 + -17808;
	// addi r3,r10,-20848
	ctx.r3.s64 = ctx.r10.s64 + -20848;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,20496
	ctx.r3.s64 = ctx.r9.s64 + 20496;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A680"))) PPC_WEAK_FUNC(sub_8325A680);
PPC_FUNC_IMPL(__imp__sub_8325A680) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-17744
	ctx.r4.s64 = r11.s64 + -17744;
	// addi r3,r10,-20844
	ctx.r3.s64 = ctx.r10.s64 + -20844;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,20512
	ctx.r3.s64 = ctx.r9.s64 + 20512;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A6C0"))) PPC_WEAK_FUNC(sub_8325A6C0);
PPC_FUNC_IMPL(__imp__sub_8325A6C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-29220
	ctx.r4.s64 = r11.s64 + -29220;
	// addi r3,r10,-20840
	ctx.r3.s64 = ctx.r10.s64 + -20840;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,20528
	ctx.r3.s64 = ctx.r9.s64 + 20528;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A700"))) PPC_WEAK_FUNC(sub_8325A700);
PPC_FUNC_IMPL(__imp__sub_8325A700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-29208
	ctx.r4.s64 = r11.s64 + -29208;
	// addi r3,r10,-20836
	ctx.r3.s64 = ctx.r10.s64 + -20836;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,20544
	ctx.r3.s64 = ctx.r9.s64 + 20544;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A740"))) PPC_WEAK_FUNC(sub_8325A740);
PPC_FUNC_IMPL(__imp__sub_8325A740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-16424
	ctx.r4.s64 = r11.s64 + -16424;
	// addi r3,r10,-20832
	ctx.r3.s64 = ctx.r10.s64 + -20832;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,20560
	ctx.r3.s64 = ctx.r9.s64 + 20560;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A780"))) PPC_WEAK_FUNC(sub_8325A780);
PPC_FUNC_IMPL(__imp__sub_8325A780) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-16464
	ctx.r4.s64 = r11.s64 + -16464;
	// addi r3,r10,-20828
	ctx.r3.s64 = ctx.r10.s64 + -20828;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,20576
	ctx.r3.s64 = ctx.r9.s64 + 20576;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A7C0"))) PPC_WEAK_FUNC(sub_8325A7C0);
PPC_FUNC_IMPL(__imp__sub_8325A7C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-16440
	ctx.r4.s64 = r11.s64 + -16440;
	// addi r3,r10,-20824
	ctx.r3.s64 = ctx.r10.s64 + -20824;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,20592
	ctx.r3.s64 = ctx.r9.s64 + 20592;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A800"))) PPC_WEAK_FUNC(sub_8325A800);
PPC_FUNC_IMPL(__imp__sub_8325A800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-17684
	ctx.r4.s64 = r11.s64 + -17684;
	// addi r3,r10,-20820
	ctx.r3.s64 = ctx.r10.s64 + -20820;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,20608
	ctx.r3.s64 = ctx.r9.s64 + 20608;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A840"))) PPC_WEAK_FUNC(sub_8325A840);
PPC_FUNC_IMPL(__imp__sub_8325A840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-17672
	ctx.r4.s64 = r11.s64 + -17672;
	// addi r3,r10,-20816
	ctx.r3.s64 = ctx.r10.s64 + -20816;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,20624
	ctx.r3.s64 = ctx.r9.s64 + 20624;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A880"))) PPC_WEAK_FUNC(sub_8325A880);
PPC_FUNC_IMPL(__imp__sub_8325A880) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-17660
	ctx.r4.s64 = r11.s64 + -17660;
	// addi r3,r10,-20812
	ctx.r3.s64 = ctx.r10.s64 + -20812;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,20640
	ctx.r3.s64 = ctx.r9.s64 + 20640;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A8C0"))) PPC_WEAK_FUNC(sub_8325A8C0);
PPC_FUNC_IMPL(__imp__sub_8325A8C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-17648
	ctx.r4.s64 = r11.s64 + -17648;
	// addi r3,r10,-20808
	ctx.r3.s64 = ctx.r10.s64 + -20808;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,20656
	ctx.r3.s64 = ctx.r9.s64 + 20656;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A900"))) PPC_WEAK_FUNC(sub_8325A900);
PPC_FUNC_IMPL(__imp__sub_8325A900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-17636
	ctx.r4.s64 = r11.s64 + -17636;
	// addi r3,r10,-20804
	ctx.r3.s64 = ctx.r10.s64 + -20804;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,20672
	ctx.r3.s64 = ctx.r9.s64 + 20672;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A940"))) PPC_WEAK_FUNC(sub_8325A940);
PPC_FUNC_IMPL(__imp__sub_8325A940) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-17612
	ctx.r4.s64 = r11.s64 + -17612;
	// addi r3,r10,-20800
	ctx.r3.s64 = ctx.r10.s64 + -20800;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,20688
	ctx.r3.s64 = ctx.r9.s64 + 20688;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A980"))) PPC_WEAK_FUNC(sub_8325A980);
PPC_FUNC_IMPL(__imp__sub_8325A980) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r31,r11,-20796
	r31.s64 = r11.s64 + -20796;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82344e68
	sub_82344E68(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r9,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r9.u8);
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// addi r3,r8,20704
	ctx.r3.s64 = ctx.r8.s64 + 20704;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325A9F0"))) PPC_WEAK_FUNC(sub_8325A9F0);
PPC_FUNC_IMPL(__imp__sub_8325A9F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6400
	ctx.r4.s64 = r11.s64 + 6400;
	// addi r3,r10,-20784
	ctx.r3.s64 = ctx.r10.s64 + -20784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,20720
	ctx.r3.s64 = ctx.r9.s64 + 20720;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325AA30"))) PPC_WEAK_FUNC(sub_8325AA30);
PPC_FUNC_IMPL(__imp__sub_8325AA30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6408
	ctx.r4.s64 = r11.s64 + 6408;
	// addi r3,r10,-20780
	ctx.r3.s64 = ctx.r10.s64 + -20780;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,20736
	ctx.r3.s64 = ctx.r9.s64 + 20736;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325AA70"))) PPC_WEAK_FUNC(sub_8325AA70);
PPC_FUNC_IMPL(__imp__sub_8325AA70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6428
	ctx.r4.s64 = r11.s64 + 6428;
	// addi r3,r10,-20776
	ctx.r3.s64 = ctx.r10.s64 + -20776;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,20752
	ctx.r3.s64 = ctx.r9.s64 + 20752;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325AAB0"))) PPC_WEAK_FUNC(sub_8325AAB0);
PPC_FUNC_IMPL(__imp__sub_8325AAB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-20772
	ctx.r3.s64 = r11.s64 + -20772;
	// bl 0x82a12b08
	sub_82A12B08(ctx, base);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r3,r10,20768
	ctx.r3.s64 = ctx.r10.s64 + 20768;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325AAE8"))) PPC_WEAK_FUNC(sub_8325AAE8);
PPC_FUNC_IMPL(__imp__sub_8325AAE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	r11.s64 = -2092302336;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r31,r11,-20760
	r31.s64 = r11.s64 + -20760;
	// addi r4,r10,-14784
	ctx.r4.s64 = ctx.r10.s64 + -14784;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,-14812
	ctx.r4.s64 = ctx.r9.s64 + -14812;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,-14840
	ctx.r4.s64 = ctx.r8.s64 + -14840;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,-14868
	ctx.r4.s64 = ctx.r7.s64 + -14868;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,-14896
	ctx.r4.s64 = ctx.r6.s64 + -14896;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,-14924
	ctx.r4.s64 = ctx.r4.s64 + -14924;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,-14952
	ctx.r4.s64 = ctx.r3.s64 + -14952;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-14980
	ctx.r4.s64 = r11.s64 + -14980;
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-15008
	ctx.r4.s64 = ctx.r10.s64 + -15008;
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,20784
	ctx.r3.s64 = ctx.r9.s64 + 20784;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325ABD8"))) PPC_WEAK_FUNC(sub_8325ABD8);
PPC_FUNC_IMPL(__imp__sub_8325ABD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	r11.s64 = -2092302336;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r31,r11,-20720
	r31.s64 = r11.s64 + -20720;
	// addi r4,r10,-12972
	ctx.r4.s64 = ctx.r10.s64 + -12972;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,-12992
	ctx.r4.s64 = ctx.r9.s64 + -12992;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,2
	r11.s64 = 2;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,-13016
	ctx.r4.s64 = ctx.r8.s64 + -13016;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,8
	r11.s64 = 8;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,-13040
	ctx.r4.s64 = ctx.r7.s64 + -13040;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,-13056
	ctx.r4.s64 = ctx.r6.s64 + -13056;
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,-13076
	ctx.r4.s64 = ctx.r4.s64 + -13076;
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,2
	r11.s64 = 2;
	// lis r3,-32244
	ctx.r3.s64 = -2113142784;
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,-15700
	ctx.r4.s64 = ctx.r3.s64 + -15700;
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,8
	r11.s64 = 8;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-13088
	ctx.r4.s64 = ctx.r10.s64 + -13088;
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,-13120
	ctx.r4.s64 = ctx.r9.s64 + -13120;
	// addi r3,r31,64
	ctx.r3.s64 = r31.s64 + 64;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,40
	r11.s64 = 40;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,-13152
	ctx.r4.s64 = ctx.r8.s64 + -13152;
	// addi r3,r31,72
	ctx.r3.s64 = r31.s64 + 72;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,41
	r11.s64 = 41;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,-31956
	ctx.r4.s64 = ctx.r7.s64 + -31956;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,34
	r11.s64 = 34;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,-13172
	ctx.r4.s64 = ctx.r6.s64 + -13172;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,8
	r11.s64 = 8;
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,-13192
	ctx.r4.s64 = ctx.r4.s64 + -13192;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,31
	r11.s64 = 31;
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,-13212
	ctx.r4.s64 = ctx.r3.s64 + -13212;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,2
	r11.s64 = 2;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-13236
	ctx.r4.s64 = ctx.r10.s64 + -13236;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,5
	r11.s64 = 5;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,-13260
	ctx.r4.s64 = ctx.r9.s64 + -13260;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,6
	r11.s64 = 6;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,-13284
	ctx.r4.s64 = ctx.r8.s64 + -13284;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// li r11,42
	r11.s64 = 42;
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// addi r3,r7,20920
	ctx.r3.s64 = ctx.r7.s64 + 20920;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325ADF0"))) PPC_WEAK_FUNC(sub_8325ADF0);
PPC_FUNC_IMPL(__imp__sub_8325ADF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,1148
	ctx.r4.s64 = r11.s64 + 1148;
	// addi r3,r10,-20584
	ctx.r3.s64 = ctx.r10.s64 + -20584;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,21024
	ctx.r3.s64 = ctx.r9.s64 + 21024;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325AE30"))) PPC_WEAK_FUNC(sub_8325AE30);
PPC_FUNC_IMPL(__imp__sub_8325AE30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-12160
	ctx.r4.s64 = r11.s64 + -12160;
	// addi r3,r10,-20580
	ctx.r3.s64 = ctx.r10.s64 + -20580;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,21040
	ctx.r3.s64 = ctx.r9.s64 + 21040;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325AE70"))) PPC_WEAK_FUNC(sub_8325AE70);
PPC_FUNC_IMPL(__imp__sub_8325AE70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r11,-12120
	ctx.r3.s64 = r11.s64 + -12120;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-20576(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20576, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325AEA8"))) PPC_WEAK_FUNC(sub_8325AEA8);
PPC_FUNC_IMPL(__imp__sub_8325AEA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r11,-12108
	ctx.r3.s64 = r11.s64 + -12108;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-20572(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20572, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325AEE0"))) PPC_WEAK_FUNC(sub_8325AEE0);
PPC_FUNC_IMPL(__imp__sub_8325AEE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r11,-12096
	ctx.r3.s64 = r11.s64 + -12096;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-20568(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20568, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325AF18"))) PPC_WEAK_FUNC(sub_8325AF18);
PPC_FUNC_IMPL(__imp__sub_8325AF18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-12084
	ctx.r4.s64 = r11.s64 + -12084;
	// addi r3,r10,-20564
	ctx.r3.s64 = ctx.r10.s64 + -20564;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,21056
	ctx.r3.s64 = ctx.r9.s64 + 21056;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325AF58"))) PPC_WEAK_FUNC(sub_8325AF58);
PPC_FUNC_IMPL(__imp__sub_8325AF58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-12052
	ctx.r4.s64 = r11.s64 + -12052;
	// addi r3,r10,-20560
	ctx.r3.s64 = ctx.r10.s64 + -20560;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,21072
	ctx.r3.s64 = ctx.r9.s64 + 21072;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325AF98"))) PPC_WEAK_FUNC(sub_8325AF98);
PPC_FUNC_IMPL(__imp__sub_8325AF98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,17736
	ctx.r4.s64 = r11.s64 + 17736;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821eea00
	sub_821EEA00(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bfd780
	sub_82BFD780(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,-20556(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20556, r11.u32);
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// addi r31,r9,28344
	r31.s64 = ctx.r9.s64 + 28344;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
loc_8325AFF0:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r8,0,r6
	reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r8.u64 = __builtin_bswap32(reserved.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stwcx. r8,0,r6
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x8325aff0
	if (!cr0.eq) goto loc_8325AFF0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
loc_8325B01C:
	// mfmsr r3
	// mtmsrd r13,1
	// lwarx r4,0,r31
	reserved.u32 = *(uint32_t*)(base + r31.u32);
	ctx.r4.u64 = __builtin_bswap32(reserved.u32);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// stwcx. r4,0,r31
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r31.u32), reserved.s32, __builtin_bswap32(ctx.r4.s32));
	cr0.so = xer.so;
	// mtmsrd r3,1
	// bne 0x8325b01c
	if (!cr0.eq) goto loc_8325B01C;
	// lis r11,-31958
	r11.s64 = -2094399488;
	// addi r3,r11,21088
	ctx.r3.s64 = r11.s64 + 21088;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B058"))) PPC_WEAK_FUNC(sub_8325B058);
PPC_FUNC_IMPL(__imp__sub_8325B058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r11,-12044
	ctx.r3.s64 = r11.s64 + -12044;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-20552(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20552, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B090"))) PPC_WEAK_FUNC(sub_8325B090);
PPC_FUNC_IMPL(__imp__sub_8325B090) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r11,-12028
	ctx.r3.s64 = r11.s64 + -12028;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-20548(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20548, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B0C8"))) PPC_WEAK_FUNC(sub_8325B0C8);
PPC_FUNC_IMPL(__imp__sub_8325B0C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11220
	ctx.r3.s64 = r11.s64 + 11220;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-20544(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20544, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B100"))) PPC_WEAK_FUNC(sub_8325B100);
PPC_FUNC_IMPL(__imp__sub_8325B100) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11240
	ctx.r3.s64 = r11.s64 + 11240;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-20540(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20540, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B138"))) PPC_WEAK_FUNC(sub_8325B138);
PPC_FUNC_IMPL(__imp__sub_8325B138) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11252
	ctx.r3.s64 = r11.s64 + 11252;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-20536(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20536, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B170"))) PPC_WEAK_FUNC(sub_8325B170);
PPC_FUNC_IMPL(__imp__sub_8325B170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11276
	ctx.r3.s64 = r11.s64 + 11276;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-20532(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20532, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B1A8"))) PPC_WEAK_FUNC(sub_8325B1A8);
PPC_FUNC_IMPL(__imp__sub_8325B1A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11292
	ctx.r3.s64 = r11.s64 + 11292;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-20528(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20528, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B1E0"))) PPC_WEAK_FUNC(sub_8325B1E0);
PPC_FUNC_IMPL(__imp__sub_8325B1E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11316
	ctx.r3.s64 = r11.s64 + 11316;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-20524(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20524, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B218"))) PPC_WEAK_FUNC(sub_8325B218);
PPC_FUNC_IMPL(__imp__sub_8325B218) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11332
	ctx.r3.s64 = r11.s64 + 11332;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-20520(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20520, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B250"))) PPC_WEAK_FUNC(sub_8325B250);
PPC_FUNC_IMPL(__imp__sub_8325B250) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11356
	ctx.r3.s64 = r11.s64 + 11356;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-20516(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20516, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B288"))) PPC_WEAK_FUNC(sub_8325B288);
PPC_FUNC_IMPL(__imp__sub_8325B288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11380
	ctx.r3.s64 = r11.s64 + 11380;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-20512(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20512, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B2C0"))) PPC_WEAK_FUNC(sub_8325B2C0);
PPC_FUNC_IMPL(__imp__sub_8325B2C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11404
	ctx.r3.s64 = r11.s64 + 11404;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-20508(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20508, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B2F8"))) PPC_WEAK_FUNC(sub_8325B2F8);
PPC_FUNC_IMPL(__imp__sub_8325B2F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11424
	ctx.r3.s64 = r11.s64 + 11424;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-20504(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20504, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B330"))) PPC_WEAK_FUNC(sub_8325B330);
PPC_FUNC_IMPL(__imp__sub_8325B330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11456
	ctx.r3.s64 = r11.s64 + 11456;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-20500(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20500, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B368"))) PPC_WEAK_FUNC(sub_8325B368);
PPC_FUNC_IMPL(__imp__sub_8325B368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11476
	ctx.r3.s64 = r11.s64 + 11476;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-20496(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20496, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B3A0"))) PPC_WEAK_FUNC(sub_8325B3A0);
PPC_FUNC_IMPL(__imp__sub_8325B3A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11488
	ctx.r3.s64 = r11.s64 + 11488;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-20492(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20492, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B3D8"))) PPC_WEAK_FUNC(sub_8325B3D8);
PPC_FUNC_IMPL(__imp__sub_8325B3D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11500
	ctx.r3.s64 = r11.s64 + 11500;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-20488(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20488, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B410"))) PPC_WEAK_FUNC(sub_8325B410);
PPC_FUNC_IMPL(__imp__sub_8325B410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11516
	ctx.r3.s64 = r11.s64 + 11516;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-20484(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20484, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B448"))) PPC_WEAK_FUNC(sub_8325B448);
PPC_FUNC_IMPL(__imp__sub_8325B448) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11532
	ctx.r3.s64 = r11.s64 + 11532;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-20480(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20480, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B480"))) PPC_WEAK_FUNC(sub_8325B480);
PPC_FUNC_IMPL(__imp__sub_8325B480) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11556
	ctx.r3.s64 = r11.s64 + 11556;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-20476(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20476, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B4B8"))) PPC_WEAK_FUNC(sub_8325B4B8);
PPC_FUNC_IMPL(__imp__sub_8325B4B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11568
	ctx.r3.s64 = r11.s64 + 11568;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-20472(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20472, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B4F0"))) PPC_WEAK_FUNC(sub_8325B4F0);
PPC_FUNC_IMPL(__imp__sub_8325B4F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11580
	ctx.r3.s64 = r11.s64 + 11580;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-20468(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20468, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B528"))) PPC_WEAK_FUNC(sub_8325B528);
PPC_FUNC_IMPL(__imp__sub_8325B528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11596
	ctx.r3.s64 = r11.s64 + 11596;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-20464(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20464, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B560"))) PPC_WEAK_FUNC(sub_8325B560);
PPC_FUNC_IMPL(__imp__sub_8325B560) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r11,-11980
	ctx.r3.s64 = r11.s64 + -11980;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-20460(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20460, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B598"))) PPC_WEAK_FUNC(sub_8325B598);
PPC_FUNC_IMPL(__imp__sub_8325B598) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r11,-11964
	ctx.r3.s64 = r11.s64 + -11964;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-20456(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20456, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B5D0"))) PPC_WEAK_FUNC(sub_8325B5D0);
PPC_FUNC_IMPL(__imp__sub_8325B5D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r11,-11952
	ctx.r3.s64 = r11.s64 + -11952;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-20452(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20452, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B608"))) PPC_WEAK_FUNC(sub_8325B608);
PPC_FUNC_IMPL(__imp__sub_8325B608) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r11,-11940
	ctx.r3.s64 = r11.s64 + -11940;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-20448(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20448, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B640"))) PPC_WEAK_FUNC(sub_8325B640);
PPC_FUNC_IMPL(__imp__sub_8325B640) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r11,-11924
	ctx.r3.s64 = r11.s64 + -11924;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-20444(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20444, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B678"))) PPC_WEAK_FUNC(sub_8325B678);
PPC_FUNC_IMPL(__imp__sub_8325B678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r11,-11908
	ctx.r3.s64 = r11.s64 + -11908;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-20440(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20440, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B6B0"))) PPC_WEAK_FUNC(sub_8325B6B0);
PPC_FUNC_IMPL(__imp__sub_8325B6B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r11,-11888
	ctx.r3.s64 = r11.s64 + -11888;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-20436(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20436, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B6E8"))) PPC_WEAK_FUNC(sub_8325B6E8);
PPC_FUNC_IMPL(__imp__sub_8325B6E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r11,-12028
	ctx.r3.s64 = r11.s64 + -12028;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-20432(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20432, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B720"))) PPC_WEAK_FUNC(sub_8325B720);
PPC_FUNC_IMPL(__imp__sub_8325B720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r11,-12044
	ctx.r3.s64 = r11.s64 + -12044;
	// bl 0x82188cf0
	sub_82188CF0(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// clrlwi r11,r3,1
	r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// stw r11,-20428(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20428, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B758"))) PPC_WEAK_FUNC(sub_8325B758);
PPC_FUNC_IMPL(__imp__sub_8325B758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-11868
	ctx.r4.s64 = r11.s64 + -11868;
	// addi r3,r10,-20424
	ctx.r3.s64 = ctx.r10.s64 + -20424;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,21096
	ctx.r3.s64 = ctx.r9.s64 + 21096;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B798"))) PPC_WEAK_FUNC(sub_8325B798);
PPC_FUNC_IMPL(__imp__sub_8325B798) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,17852
	ctx.r4.s64 = r11.s64 + 17852;
	// addi r3,r10,-20420
	ctx.r3.s64 = ctx.r10.s64 + -20420;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,21112
	ctx.r3.s64 = ctx.r9.s64 + 21112;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B7D8"))) PPC_WEAK_FUNC(sub_8325B7D8);
PPC_FUNC_IMPL(__imp__sub_8325B7D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,17864
	ctx.r4.s64 = r11.s64 + 17864;
	// addi r3,r10,-20416
	ctx.r3.s64 = ctx.r10.s64 + -20416;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,21128
	ctx.r3.s64 = ctx.r9.s64 + 21128;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B818"))) PPC_WEAK_FUNC(sub_8325B818);
PPC_FUNC_IMPL(__imp__sub_8325B818) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-12052
	ctx.r4.s64 = r11.s64 + -12052;
	// addi r3,r10,-20412
	ctx.r3.s64 = ctx.r10.s64 + -20412;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,21144
	ctx.r3.s64 = ctx.r9.s64 + 21144;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B858"))) PPC_WEAK_FUNC(sub_8325B858);
PPC_FUNC_IMPL(__imp__sub_8325B858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	r11.s64 = -2092302336;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r31,r11,-20408
	r31.s64 = r11.s64 + -20408;
	// addi r4,r10,3224
	ctx.r4.s64 = ctx.r10.s64 + 3224;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,18096
	ctx.r4.s64 = ctx.r9.s64 + 18096;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,18056
	ctx.r4.s64 = ctx.r8.s64 + 18056;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,18016
	ctx.r4.s64 = ctx.r7.s64 + 18016;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,17976
	ctx.r4.s64 = ctx.r6.s64 + 17976;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,17936
	ctx.r4.s64 = ctx.r4.s64 + 17936;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r3,-32245
	ctx.r3.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,17896
	ctx.r4.s64 = ctx.r3.s64 + 17896;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r11,-31958
	r11.s64 = -2094399488;
	// addi r3,r11,21160
	ctx.r3.s64 = r11.s64 + 21160;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B920"))) PPC_WEAK_FUNC(sub_8325B920);
PPC_FUNC_IMPL(__imp__sub_8325B920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	r11.s64 = -2092302336;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r31,r11,-20380
	r31.s64 = r11.s64 + -20380;
	// addi r4,r10,3224
	ctx.r4.s64 = ctx.r10.s64 + 3224;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,18256
	ctx.r4.s64 = ctx.r9.s64 + 18256;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,18232
	ctx.r4.s64 = ctx.r8.s64 + 18232;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,18208
	ctx.r4.s64 = ctx.r7.s64 + 18208;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,18184
	ctx.r4.s64 = ctx.r6.s64 + 18184;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,18160
	ctx.r4.s64 = ctx.r4.s64 + 18160;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r3,-32245
	ctx.r3.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,18136
	ctx.r4.s64 = ctx.r3.s64 + 18136;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r11,-31958
	r11.s64 = -2094399488;
	// addi r3,r11,21264
	ctx.r3.s64 = r11.s64 + 21264;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325B9E8"))) PPC_WEAK_FUNC(sub_8325B9E8);
PPC_FUNC_IMPL(__imp__sub_8325B9E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,17736
	ctx.r4.s64 = r11.s64 + 17736;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821eea00
	sub_821EEA00(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bfd780
	sub_82BFD780(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,-20352(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20352, r11.u32);
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// addi r31,r9,28344
	r31.s64 = ctx.r9.s64 + 28344;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
loc_8325BA40:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r8,0,r6
	reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r8.u64 = __builtin_bswap32(reserved.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stwcx. r8,0,r6
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x8325ba40
	if (!cr0.eq) goto loc_8325BA40;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
loc_8325BA6C:
	// mfmsr r3
	// mtmsrd r13,1
	// lwarx r4,0,r31
	reserved.u32 = *(uint32_t*)(base + r31.u32);
	ctx.r4.u64 = __builtin_bswap32(reserved.u32);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// stwcx. r4,0,r31
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r31.u32), reserved.s32, __builtin_bswap32(ctx.r4.s32));
	cr0.so = xer.so;
	// mtmsrd r3,1
	// bne 0x8325ba6c
	if (!cr0.eq) goto loc_8325BA6C;
	// lis r11,-31958
	r11.s64 = -2094399488;
	// addi r3,r11,21368
	ctx.r3.s64 = r11.s64 + 21368;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325BAA8"))) PPC_WEAK_FUNC(sub_8325BAA8);
PPC_FUNC_IMPL(__imp__sub_8325BAA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-11856
	ctx.r4.s64 = r11.s64 + -11856;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821eea00
	sub_821EEA00(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bfd780
	sub_82BFD780(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,-20348(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20348, r11.u32);
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// addi r31,r9,28344
	r31.s64 = ctx.r9.s64 + 28344;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
loc_8325BB00:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r8,0,r6
	reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r8.u64 = __builtin_bswap32(reserved.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stwcx. r8,0,r6
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x8325bb00
	if (!cr0.eq) goto loc_8325BB00;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
loc_8325BB2C:
	// mfmsr r3
	// mtmsrd r13,1
	// lwarx r4,0,r31
	reserved.u32 = *(uint32_t*)(base + r31.u32);
	ctx.r4.u64 = __builtin_bswap32(reserved.u32);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// stwcx. r4,0,r31
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r31.u32), reserved.s32, __builtin_bswap32(ctx.r4.s32));
	cr0.so = xer.so;
	// mtmsrd r3,1
	// bne 0x8325bb2c
	if (!cr0.eq) goto loc_8325BB2C;
	// lis r11,-31958
	r11.s64 = -2094399488;
	// addi r3,r11,21376
	ctx.r3.s64 = r11.s64 + 21376;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325BB68"))) PPC_WEAK_FUNC(sub_8325BB68);
PPC_FUNC_IMPL(__imp__sub_8325BB68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-308
	ctx.r4.s64 = r11.s64 + -308;
	// addi r3,r10,-20344
	ctx.r3.s64 = ctx.r10.s64 + -20344;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,21384
	ctx.r3.s64 = ctx.r9.s64 + 21384;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325BBA8"))) PPC_WEAK_FUNC(sub_8325BBA8);
PPC_FUNC_IMPL(__imp__sub_8325BBA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-11828
	ctx.r4.s64 = r11.s64 + -11828;
	// addi r3,r10,-20340
	ctx.r3.s64 = ctx.r10.s64 + -20340;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,21400
	ctx.r3.s64 = ctx.r9.s64 + 21400;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325BBE8"))) PPC_WEAK_FUNC(sub_8325BBE8);
PPC_FUNC_IMPL(__imp__sub_8325BBE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-11796
	ctx.r4.s64 = r11.s64 + -11796;
	// addi r3,r10,-20336
	ctx.r3.s64 = ctx.r10.s64 + -20336;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,21416
	ctx.r3.s64 = ctx.r9.s64 + 21416;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325BC28"))) PPC_WEAK_FUNC(sub_8325BC28);
PPC_FUNC_IMPL(__imp__sub_8325BC28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-11760
	ctx.r4.s64 = r11.s64 + -11760;
	// addi r3,r10,-20332
	ctx.r3.s64 = ctx.r10.s64 + -20332;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,21432
	ctx.r3.s64 = ctx.r9.s64 + 21432;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325BC68"))) PPC_WEAK_FUNC(sub_8325BC68);
PPC_FUNC_IMPL(__imp__sub_8325BC68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-32420
	ctx.r4.s64 = r11.s64 + -32420;
	// addi r3,r10,-20328
	ctx.r3.s64 = ctx.r10.s64 + -20328;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,21448
	ctx.r3.s64 = ctx.r9.s64 + 21448;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325BCA8"))) PPC_WEAK_FUNC(sub_8325BCA8);
PPC_FUNC_IMPL(__imp__sub_8325BCA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-11724
	ctx.r4.s64 = r11.s64 + -11724;
	// addi r3,r10,-20324
	ctx.r3.s64 = ctx.r10.s64 + -20324;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,21464
	ctx.r3.s64 = ctx.r9.s64 + 21464;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325BCE8"))) PPC_WEAK_FUNC(sub_8325BCE8);
PPC_FUNC_IMPL(__imp__sub_8325BCE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-11692
	ctx.r4.s64 = r11.s64 + -11692;
	// addi r3,r10,-20320
	ctx.r3.s64 = ctx.r10.s64 + -20320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,21480
	ctx.r3.s64 = ctx.r9.s64 + 21480;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325BD28"))) PPC_WEAK_FUNC(sub_8325BD28);
PPC_FUNC_IMPL(__imp__sub_8325BD28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-11660
	ctx.r4.s64 = r11.s64 + -11660;
	// addi r3,r10,-20316
	ctx.r3.s64 = ctx.r10.s64 + -20316;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,21496
	ctx.r3.s64 = ctx.r9.s64 + 21496;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325BD68"))) PPC_WEAK_FUNC(sub_8325BD68);
PPC_FUNC_IMPL(__imp__sub_8325BD68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-11624
	ctx.r4.s64 = r11.s64 + -11624;
	// addi r3,r10,-20312
	ctx.r3.s64 = ctx.r10.s64 + -20312;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,21512
	ctx.r3.s64 = ctx.r9.s64 + 21512;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325BDA8"))) PPC_WEAK_FUNC(sub_8325BDA8);
PPC_FUNC_IMPL(__imp__sub_8325BDA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,19820
	ctx.r4.s64 = r11.s64 + 19820;
	// addi r3,r10,-20308
	ctx.r3.s64 = ctx.r10.s64 + -20308;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,21528
	ctx.r3.s64 = ctx.r9.s64 + 21528;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325BDE8"))) PPC_WEAK_FUNC(sub_8325BDE8);
PPC_FUNC_IMPL(__imp__sub_8325BDE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,19580
	ctx.r4.s64 = r11.s64 + 19580;
	// addi r3,r10,-20304
	ctx.r3.s64 = ctx.r10.s64 + -20304;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,21544
	ctx.r3.s64 = ctx.r9.s64 + 21544;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325BE28"))) PPC_WEAK_FUNC(sub_8325BE28);
PPC_FUNC_IMPL(__imp__sub_8325BE28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-11592
	ctx.r4.s64 = r11.s64 + -11592;
	// addi r3,r10,-20300
	ctx.r3.s64 = ctx.r10.s64 + -20300;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,21560
	ctx.r3.s64 = ctx.r9.s64 + 21560;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325BE68"))) PPC_WEAK_FUNC(sub_8325BE68);
PPC_FUNC_IMPL(__imp__sub_8325BE68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-11552
	ctx.r4.s64 = r11.s64 + -11552;
	// addi r3,r10,-20296
	ctx.r3.s64 = ctx.r10.s64 + -20296;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,21576
	ctx.r3.s64 = ctx.r9.s64 + 21576;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325BEA8"))) PPC_WEAK_FUNC(sub_8325BEA8);
PPC_FUNC_IMPL(__imp__sub_8325BEA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-11536
	ctx.r4.s64 = r11.s64 + -11536;
	// addi r3,r10,-20292
	ctx.r3.s64 = ctx.r10.s64 + -20292;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,21592
	ctx.r3.s64 = ctx.r9.s64 + 21592;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325BEE8"))) PPC_WEAK_FUNC(sub_8325BEE8);
PPC_FUNC_IMPL(__imp__sub_8325BEE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6400
	ctx.r4.s64 = r11.s64 + 6400;
	// addi r3,r10,-20288
	ctx.r3.s64 = ctx.r10.s64 + -20288;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,21608
	ctx.r3.s64 = ctx.r9.s64 + 21608;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325BF28"))) PPC_WEAK_FUNC(sub_8325BF28);
PPC_FUNC_IMPL(__imp__sub_8325BF28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6408
	ctx.r4.s64 = r11.s64 + 6408;
	// addi r3,r10,-20284
	ctx.r3.s64 = ctx.r10.s64 + -20284;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,21624
	ctx.r3.s64 = ctx.r9.s64 + 21624;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325BF68"))) PPC_WEAK_FUNC(sub_8325BF68);
PPC_FUNC_IMPL(__imp__sub_8325BF68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6428
	ctx.r4.s64 = r11.s64 + 6428;
	// addi r3,r10,-20280
	ctx.r3.s64 = ctx.r10.s64 + -20280;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,21640
	ctx.r3.s64 = ctx.r9.s64 + 21640;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325BFA8"))) PPC_WEAK_FUNC(sub_8325BFA8);
PPC_FUNC_IMPL(__imp__sub_8325BFA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-10936
	ctx.r4.s64 = r11.s64 + -10936;
	// addi r3,r10,-20276
	ctx.r3.s64 = ctx.r10.s64 + -20276;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,21656
	ctx.r3.s64 = ctx.r9.s64 + 21656;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325BFE8"))) PPC_WEAK_FUNC(sub_8325BFE8);
PPC_FUNC_IMPL(__imp__sub_8325BFE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-10920
	ctx.r4.s64 = r11.s64 + -10920;
	// addi r3,r10,-20272
	ctx.r3.s64 = ctx.r10.s64 + -20272;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,21672
	ctx.r3.s64 = ctx.r9.s64 + 21672;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325C028"))) PPC_WEAK_FUNC(sub_8325C028);
PPC_FUNC_IMPL(__imp__sub_8325C028) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-12052
	ctx.r4.s64 = r11.s64 + -12052;
	// addi r3,r10,-20268
	ctx.r3.s64 = ctx.r10.s64 + -20268;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,21688
	ctx.r3.s64 = ctx.r9.s64 + 21688;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325C068"))) PPC_WEAK_FUNC(sub_8325C068);
PPC_FUNC_IMPL(__imp__sub_8325C068) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-10904
	ctx.r4.s64 = r11.s64 + -10904;
	// addi r3,r10,-20264
	ctx.r3.s64 = ctx.r10.s64 + -20264;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,21704
	ctx.r3.s64 = ctx.r9.s64 + 21704;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325C0A8"))) PPC_WEAK_FUNC(sub_8325C0A8);
PPC_FUNC_IMPL(__imp__sub_8325C0A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-10888
	ctx.r4.s64 = r11.s64 + -10888;
	// addi r3,r10,-20260
	ctx.r3.s64 = ctx.r10.s64 + -20260;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,21720
	ctx.r3.s64 = ctx.r9.s64 + 21720;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325C0E8"))) PPC_WEAK_FUNC(sub_8325C0E8);
PPC_FUNC_IMPL(__imp__sub_8325C0E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-10864
	ctx.r4.s64 = r11.s64 + -10864;
	// addi r3,r10,-20256
	ctx.r3.s64 = ctx.r10.s64 + -20256;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,21736
	ctx.r3.s64 = ctx.r9.s64 + 21736;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325C128"))) PPC_WEAK_FUNC(sub_8325C128);
PPC_FUNC_IMPL(__imp__sub_8325C128) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-10844
	ctx.r4.s64 = r11.s64 + -10844;
	// addi r3,r10,-20252
	ctx.r3.s64 = ctx.r10.s64 + -20252;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,21752
	ctx.r3.s64 = ctx.r9.s64 + 21752;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325C168"))) PPC_WEAK_FUNC(sub_8325C168);
PPC_FUNC_IMPL(__imp__sub_8325C168) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,17736
	ctx.r4.s64 = r11.s64 + 17736;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821eea00
	sub_821EEA00(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bfd780
	sub_82BFD780(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,-20248(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20248, r11.u32);
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// addi r31,r9,28344
	r31.s64 = ctx.r9.s64 + 28344;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
loc_8325C1C0:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r8,0,r6
	reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r8.u64 = __builtin_bswap32(reserved.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stwcx. r8,0,r6
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x8325c1c0
	if (!cr0.eq) goto loc_8325C1C0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
loc_8325C1EC:
	// mfmsr r3
	// mtmsrd r13,1
	// lwarx r4,0,r31
	reserved.u32 = *(uint32_t*)(base + r31.u32);
	ctx.r4.u64 = __builtin_bswap32(reserved.u32);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// stwcx. r4,0,r31
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r31.u32), reserved.s32, __builtin_bswap32(ctx.r4.s32));
	cr0.so = xer.so;
	// mtmsrd r3,1
	// bne 0x8325c1ec
	if (!cr0.eq) goto loc_8325C1EC;
	// lis r11,-31958
	r11.s64 = -2094399488;
	// addi r3,r11,21768
	ctx.r3.s64 = r11.s64 + 21768;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325C228"))) PPC_WEAK_FUNC(sub_8325C228);
PPC_FUNC_IMPL(__imp__sub_8325C228) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-11856
	ctx.r4.s64 = r11.s64 + -11856;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821eea00
	sub_821EEA00(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bfd780
	sub_82BFD780(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,-20244(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20244, r11.u32);
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// addi r31,r9,28344
	r31.s64 = ctx.r9.s64 + 28344;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
loc_8325C280:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r8,0,r6
	reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r8.u64 = __builtin_bswap32(reserved.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stwcx. r8,0,r6
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x8325c280
	if (!cr0.eq) goto loc_8325C280;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
loc_8325C2AC:
	// mfmsr r3
	// mtmsrd r13,1
	// lwarx r4,0,r31
	reserved.u32 = *(uint32_t*)(base + r31.u32);
	ctx.r4.u64 = __builtin_bswap32(reserved.u32);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// stwcx. r4,0,r31
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r31.u32), reserved.s32, __builtin_bswap32(ctx.r4.s32));
	cr0.so = xer.so;
	// mtmsrd r3,1
	// bne 0x8325c2ac
	if (!cr0.eq) goto loc_8325C2AC;
	// lis r11,-31958
	r11.s64 = -2094399488;
	// addi r3,r11,21776
	ctx.r3.s64 = r11.s64 + 21776;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325C2E8"))) PPC_WEAK_FUNC(sub_8325C2E8);
PPC_FUNC_IMPL(__imp__sub_8325C2E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6400
	ctx.r4.s64 = r11.s64 + 6400;
	// addi r3,r10,-20240
	ctx.r3.s64 = ctx.r10.s64 + -20240;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,21784
	ctx.r3.s64 = ctx.r9.s64 + 21784;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325C328"))) PPC_WEAK_FUNC(sub_8325C328);
PPC_FUNC_IMPL(__imp__sub_8325C328) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6408
	ctx.r4.s64 = r11.s64 + 6408;
	// addi r3,r10,-20236
	ctx.r3.s64 = ctx.r10.s64 + -20236;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,21800
	ctx.r3.s64 = ctx.r9.s64 + 21800;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325C368"))) PPC_WEAK_FUNC(sub_8325C368);
PPC_FUNC_IMPL(__imp__sub_8325C368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6428
	ctx.r4.s64 = r11.s64 + 6428;
	// addi r3,r10,-20232
	ctx.r3.s64 = ctx.r10.s64 + -20232;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,21816
	ctx.r3.s64 = ctx.r9.s64 + 21816;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325C3A8"))) PPC_WEAK_FUNC(sub_8325C3A8);
PPC_FUNC_IMPL(__imp__sub_8325C3A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-10016
	ctx.r4.s64 = r11.s64 + -10016;
	// addi r3,r10,-20228
	ctx.r3.s64 = ctx.r10.s64 + -20228;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,21832
	ctx.r3.s64 = ctx.r9.s64 + 21832;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325C3E8"))) PPC_WEAK_FUNC(sub_8325C3E8);
PPC_FUNC_IMPL(__imp__sub_8325C3E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6400
	ctx.r4.s64 = r11.s64 + 6400;
	// addi r3,r10,-20224
	ctx.r3.s64 = ctx.r10.s64 + -20224;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,21848
	ctx.r3.s64 = ctx.r9.s64 + 21848;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325C428"))) PPC_WEAK_FUNC(sub_8325C428);
PPC_FUNC_IMPL(__imp__sub_8325C428) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6408
	ctx.r4.s64 = r11.s64 + 6408;
	// addi r3,r10,-20220
	ctx.r3.s64 = ctx.r10.s64 + -20220;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,21864
	ctx.r3.s64 = ctx.r9.s64 + 21864;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325C468"))) PPC_WEAK_FUNC(sub_8325C468);
PPC_FUNC_IMPL(__imp__sub_8325C468) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6428
	ctx.r4.s64 = r11.s64 + 6428;
	// addi r3,r10,-20216
	ctx.r3.s64 = ctx.r10.s64 + -20216;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,21880
	ctx.r3.s64 = ctx.r9.s64 + 21880;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325C4A8"))) PPC_WEAK_FUNC(sub_8325C4A8);
PPC_FUNC_IMPL(__imp__sub_8325C4A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-8476
	ctx.r4.s64 = r11.s64 + -8476;
	// addi r3,r10,-20212
	ctx.r3.s64 = ctx.r10.s64 + -20212;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,21896
	ctx.r3.s64 = ctx.r9.s64 + 21896;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325C4E8"))) PPC_WEAK_FUNC(sub_8325C4E8);
PPC_FUNC_IMPL(__imp__sub_8325C4E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-8448
	ctx.r4.s64 = r11.s64 + -8448;
	// addi r3,r10,-20208
	ctx.r3.s64 = ctx.r10.s64 + -20208;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,21912
	ctx.r3.s64 = ctx.r9.s64 + 21912;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325C528"))) PPC_WEAK_FUNC(sub_8325C528);
PPC_FUNC_IMPL(__imp__sub_8325C528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-8420
	ctx.r4.s64 = r11.s64 + -8420;
	// addi r3,r10,-20204
	ctx.r3.s64 = ctx.r10.s64 + -20204;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,21928
	ctx.r3.s64 = ctx.r9.s64 + 21928;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325C568"))) PPC_WEAK_FUNC(sub_8325C568);
PPC_FUNC_IMPL(__imp__sub_8325C568) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-8388
	ctx.r4.s64 = r11.s64 + -8388;
	// addi r3,r10,-20200
	ctx.r3.s64 = ctx.r10.s64 + -20200;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,21944
	ctx.r3.s64 = ctx.r9.s64 + 21944;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325C5A8"))) PPC_WEAK_FUNC(sub_8325C5A8);
PPC_FUNC_IMPL(__imp__sub_8325C5A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-8356
	ctx.r4.s64 = r11.s64 + -8356;
	// addi r3,r10,-20196
	ctx.r3.s64 = ctx.r10.s64 + -20196;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,21960
	ctx.r3.s64 = ctx.r9.s64 + 21960;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325C5E8"))) PPC_WEAK_FUNC(sub_8325C5E8);
PPC_FUNC_IMPL(__imp__sub_8325C5E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-8328
	ctx.r4.s64 = r11.s64 + -8328;
	// addi r3,r10,-20192
	ctx.r3.s64 = ctx.r10.s64 + -20192;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,21976
	ctx.r3.s64 = ctx.r9.s64 + 21976;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325C628"))) PPC_WEAK_FUNC(sub_8325C628);
PPC_FUNC_IMPL(__imp__sub_8325C628) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-8300
	ctx.r4.s64 = r11.s64 + -8300;
	// addi r3,r10,-20188
	ctx.r3.s64 = ctx.r10.s64 + -20188;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,21992
	ctx.r3.s64 = ctx.r9.s64 + 21992;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325C668"))) PPC_WEAK_FUNC(sub_8325C668);
PPC_FUNC_IMPL(__imp__sub_8325C668) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31958
	r11.s64 = -2094399488;
	// addi r3,r11,22008
	ctx.r3.s64 = r11.s64 + 22008;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325C678"))) PPC_WEAK_FUNC(sub_8325C678);
PPC_FUNC_IMPL(__imp__sub_8325C678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6400
	ctx.r4.s64 = r11.s64 + 6400;
	// addi r3,r10,-20176
	ctx.r3.s64 = ctx.r10.s64 + -20176;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,22168
	ctx.r3.s64 = ctx.r9.s64 + 22168;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325C6B8"))) PPC_WEAK_FUNC(sub_8325C6B8);
PPC_FUNC_IMPL(__imp__sub_8325C6B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6408
	ctx.r4.s64 = r11.s64 + 6408;
	// addi r3,r10,-20172
	ctx.r3.s64 = ctx.r10.s64 + -20172;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,22184
	ctx.r3.s64 = ctx.r9.s64 + 22184;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325C6F8"))) PPC_WEAK_FUNC(sub_8325C6F8);
PPC_FUNC_IMPL(__imp__sub_8325C6F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6428
	ctx.r4.s64 = r11.s64 + 6428;
	// addi r3,r10,-20168
	ctx.r3.s64 = ctx.r10.s64 + -20168;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,22200
	ctx.r3.s64 = ctx.r9.s64 + 22200;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325C738"))) PPC_WEAK_FUNC(sub_8325C738);
PPC_FUNC_IMPL(__imp__sub_8325C738) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6400
	ctx.r4.s64 = r11.s64 + 6400;
	// addi r3,r10,-20164
	ctx.r3.s64 = ctx.r10.s64 + -20164;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,22216
	ctx.r3.s64 = ctx.r9.s64 + 22216;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325C778"))) PPC_WEAK_FUNC(sub_8325C778);
PPC_FUNC_IMPL(__imp__sub_8325C778) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6408
	ctx.r4.s64 = r11.s64 + 6408;
	// addi r3,r10,-20160
	ctx.r3.s64 = ctx.r10.s64 + -20160;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,22232
	ctx.r3.s64 = ctx.r9.s64 + 22232;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325C7B8"))) PPC_WEAK_FUNC(sub_8325C7B8);
PPC_FUNC_IMPL(__imp__sub_8325C7B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6428
	ctx.r4.s64 = r11.s64 + 6428;
	// addi r3,r10,-20156
	ctx.r3.s64 = ctx.r10.s64 + -20156;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,22248
	ctx.r3.s64 = ctx.r9.s64 + 22248;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325C7F8"))) PPC_WEAK_FUNC(sub_8325C7F8);
PPC_FUNC_IMPL(__imp__sub_8325C7F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-6584
	ctx.r4.s64 = r11.s64 + -6584;
	// addi r3,r10,-20152
	ctx.r3.s64 = ctx.r10.s64 + -20152;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,22264
	ctx.r3.s64 = ctx.r9.s64 + 22264;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325C838"))) PPC_WEAK_FUNC(sub_8325C838);
PPC_FUNC_IMPL(__imp__sub_8325C838) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-6576
	ctx.r4.s64 = r11.s64 + -6576;
	// addi r3,r10,-20148
	ctx.r3.s64 = ctx.r10.s64 + -20148;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,22280
	ctx.r3.s64 = ctx.r9.s64 + 22280;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325C878"))) PPC_WEAK_FUNC(sub_8325C878);
PPC_FUNC_IMPL(__imp__sub_8325C878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-6572
	ctx.r4.s64 = r11.s64 + -6572;
	// addi r3,r10,-20144
	ctx.r3.s64 = ctx.r10.s64 + -20144;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,22296
	ctx.r3.s64 = ctx.r9.s64 + 22296;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325C8B8"))) PPC_WEAK_FUNC(sub_8325C8B8);
PPC_FUNC_IMPL(__imp__sub_8325C8B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-6560
	ctx.r4.s64 = r11.s64 + -6560;
	// addi r3,r10,-20140
	ctx.r3.s64 = ctx.r10.s64 + -20140;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,22312
	ctx.r3.s64 = ctx.r9.s64 + 22312;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325C8F8"))) PPC_WEAK_FUNC(sub_8325C8F8);
PPC_FUNC_IMPL(__imp__sub_8325C8F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-6552
	ctx.r4.s64 = r11.s64 + -6552;
	// addi r3,r10,-20136
	ctx.r3.s64 = ctx.r10.s64 + -20136;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,22328
	ctx.r3.s64 = ctx.r9.s64 + 22328;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325C938"))) PPC_WEAK_FUNC(sub_8325C938);
PPC_FUNC_IMPL(__imp__sub_8325C938) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-6544
	ctx.r4.s64 = r11.s64 + -6544;
	// addi r3,r10,-20132
	ctx.r3.s64 = ctx.r10.s64 + -20132;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,22344
	ctx.r3.s64 = ctx.r9.s64 + 22344;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325C978"))) PPC_WEAK_FUNC(sub_8325C978);
PPC_FUNC_IMPL(__imp__sub_8325C978) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-6532
	ctx.r4.s64 = r11.s64 + -6532;
	// addi r3,r10,-20128
	ctx.r3.s64 = ctx.r10.s64 + -20128;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,22360
	ctx.r3.s64 = ctx.r9.s64 + 22360;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325C9B8"))) PPC_WEAK_FUNC(sub_8325C9B8);
PPC_FUNC_IMPL(__imp__sub_8325C9B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6400
	ctx.r4.s64 = r11.s64 + 6400;
	// addi r3,r10,-20124
	ctx.r3.s64 = ctx.r10.s64 + -20124;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,22384
	ctx.r3.s64 = ctx.r9.s64 + 22384;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325C9F8"))) PPC_WEAK_FUNC(sub_8325C9F8);
PPC_FUNC_IMPL(__imp__sub_8325C9F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6408
	ctx.r4.s64 = r11.s64 + 6408;
	// addi r3,r10,-20120
	ctx.r3.s64 = ctx.r10.s64 + -20120;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,22400
	ctx.r3.s64 = ctx.r9.s64 + 22400;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325CA38"))) PPC_WEAK_FUNC(sub_8325CA38);
PPC_FUNC_IMPL(__imp__sub_8325CA38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6428
	ctx.r4.s64 = r11.s64 + 6428;
	// addi r3,r10,-20116
	ctx.r3.s64 = ctx.r10.s64 + -20116;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,22416
	ctx.r3.s64 = ctx.r9.s64 + 22416;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325CA78"))) PPC_WEAK_FUNC(sub_8325CA78);
PPC_FUNC_IMPL(__imp__sub_8325CA78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6400
	ctx.r4.s64 = r11.s64 + 6400;
	// addi r3,r10,-20112
	ctx.r3.s64 = ctx.r10.s64 + -20112;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,22432
	ctx.r3.s64 = ctx.r9.s64 + 22432;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325CAB8"))) PPC_WEAK_FUNC(sub_8325CAB8);
PPC_FUNC_IMPL(__imp__sub_8325CAB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6408
	ctx.r4.s64 = r11.s64 + 6408;
	// addi r3,r10,-20108
	ctx.r3.s64 = ctx.r10.s64 + -20108;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,22448
	ctx.r3.s64 = ctx.r9.s64 + 22448;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325CAF8"))) PPC_WEAK_FUNC(sub_8325CAF8);
PPC_FUNC_IMPL(__imp__sub_8325CAF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6428
	ctx.r4.s64 = r11.s64 + 6428;
	// addi r3,r10,-20104
	ctx.r3.s64 = ctx.r10.s64 + -20104;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,22464
	ctx.r3.s64 = ctx.r9.s64 + 22464;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325CB38"))) PPC_WEAK_FUNC(sub_8325CB38);
PPC_FUNC_IMPL(__imp__sub_8325CB38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-5344
	ctx.r4.s64 = r11.s64 + -5344;
	// addi r3,r10,-20100
	ctx.r3.s64 = ctx.r10.s64 + -20100;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,22480
	ctx.r3.s64 = ctx.r9.s64 + 22480;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325CB78"))) PPC_WEAK_FUNC(sub_8325CB78);
PPC_FUNC_IMPL(__imp__sub_8325CB78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	r11.s64 = -2092302336;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r31,r11,-20096
	r31.s64 = r11.s64 + -20096;
	// addi r4,r10,-20100
	ctx.r4.s64 = ctx.r10.s64 + -20100;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r9,-5328
	ctx.r4.s64 = ctx.r9.s64 + -5328;
	// bl 0x821da550
	sub_821DA550(ctx, base);
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// addi r3,r8,22496
	ctx.r3.s64 = ctx.r8.s64 + 22496;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325CBD0"))) PPC_WEAK_FUNC(sub_8325CBD0);
PPC_FUNC_IMPL(__imp__sub_8325CBD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	r11.s64 = -2092302336;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r31,r11,-20092
	r31.s64 = r11.s64 + -20092;
	// addi r4,r10,-20100
	ctx.r4.s64 = ctx.r10.s64 + -20100;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r9,-5316
	ctx.r4.s64 = ctx.r9.s64 + -5316;
	// bl 0x821da550
	sub_821DA550(ctx, base);
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// addi r3,r8,22512
	ctx.r3.s64 = ctx.r8.s64 + 22512;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325CC28"))) PPC_WEAK_FUNC(sub_8325CC28);
PPC_FUNC_IMPL(__imp__sub_8325CC28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	r11.s64 = -2092302336;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r31,r11,-20088
	r31.s64 = r11.s64 + -20088;
	// addi r4,r10,-20100
	ctx.r4.s64 = ctx.r10.s64 + -20100;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r9,-5304
	ctx.r4.s64 = ctx.r9.s64 + -5304;
	// bl 0x821da550
	sub_821DA550(ctx, base);
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// addi r3,r8,22528
	ctx.r3.s64 = ctx.r8.s64 + 22528;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325CC80"))) PPC_WEAK_FUNC(sub_8325CC80);
PPC_FUNC_IMPL(__imp__sub_8325CC80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	r11.s64 = -2092302336;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r31,r11,-20084
	r31.s64 = r11.s64 + -20084;
	// addi r4,r10,-20100
	ctx.r4.s64 = ctx.r10.s64 + -20100;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r9,-5284
	ctx.r4.s64 = ctx.r9.s64 + -5284;
	// bl 0x821da550
	sub_821DA550(ctx, base);
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// addi r3,r8,22544
	ctx.r3.s64 = ctx.r8.s64 + 22544;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325CCD8"))) PPC_WEAK_FUNC(sub_8325CCD8);
PPC_FUNC_IMPL(__imp__sub_8325CCD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	r11.s64 = -2092302336;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r31,r11,-20080
	r31.s64 = r11.s64 + -20080;
	// addi r4,r10,-20100
	ctx.r4.s64 = ctx.r10.s64 + -20100;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r9,-5260
	ctx.r4.s64 = ctx.r9.s64 + -5260;
	// bl 0x821da550
	sub_821DA550(ctx, base);
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// addi r3,r8,22560
	ctx.r3.s64 = ctx.r8.s64 + 22560;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325CD30"))) PPC_WEAK_FUNC(sub_8325CD30);
PPC_FUNC_IMPL(__imp__sub_8325CD30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	r11.s64 = -2092302336;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r31,r11,-20076
	r31.s64 = r11.s64 + -20076;
	// addi r4,r10,-20100
	ctx.r4.s64 = ctx.r10.s64 + -20100;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r9,-5240
	ctx.r4.s64 = ctx.r9.s64 + -5240;
	// bl 0x821da550
	sub_821DA550(ctx, base);
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// addi r3,r8,22576
	ctx.r3.s64 = ctx.r8.s64 + 22576;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325CD88"))) PPC_WEAK_FUNC(sub_8325CD88);
PPC_FUNC_IMPL(__imp__sub_8325CD88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	r11.s64 = -2092302336;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r31,r11,-20072
	r31.s64 = r11.s64 + -20072;
	// addi r4,r10,-20100
	ctx.r4.s64 = ctx.r10.s64 + -20100;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r9,-5220
	ctx.r4.s64 = ctx.r9.s64 + -5220;
	// bl 0x821da550
	sub_821DA550(ctx, base);
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// addi r3,r8,22592
	ctx.r3.s64 = ctx.r8.s64 + 22592;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325CDE0"))) PPC_WEAK_FUNC(sub_8325CDE0);
PPC_FUNC_IMPL(__imp__sub_8325CDE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-20096
	ctx.r3.s64 = r11.s64 + -20096;
	// bl 0x823db930
	sub_823DB930(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-20068(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20068, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325CE10"))) PPC_WEAK_FUNC(sub_8325CE10);
PPC_FUNC_IMPL(__imp__sub_8325CE10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-20092
	ctx.r3.s64 = r11.s64 + -20092;
	// bl 0x823db930
	sub_823DB930(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-20064(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20064, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325CE40"))) PPC_WEAK_FUNC(sub_8325CE40);
PPC_FUNC_IMPL(__imp__sub_8325CE40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-5212
	ctx.r4.s64 = r11.s64 + -5212;
	// addi r3,r10,-20060
	ctx.r3.s64 = ctx.r10.s64 + -20060;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,22608
	ctx.r3.s64 = ctx.r9.s64 + 22608;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325CE80"))) PPC_WEAK_FUNC(sub_8325CE80);
PPC_FUNC_IMPL(__imp__sub_8325CE80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	r11.s64 = -2092302336;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r31,r11,-20056
	r31.s64 = r11.s64 + -20056;
	// addi r4,r10,-20060
	ctx.r4.s64 = ctx.r10.s64 + -20060;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r9,-5220
	ctx.r4.s64 = ctx.r9.s64 + -5220;
	// bl 0x821da550
	sub_821DA550(ctx, base);
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// addi r3,r8,22624
	ctx.r3.s64 = ctx.r8.s64 + 22624;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325CED8"))) PPC_WEAK_FUNC(sub_8325CED8);
PPC_FUNC_IMPL(__imp__sub_8325CED8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-5188
	ctx.r4.s64 = r11.s64 + -5188;
	// addi r3,r10,-20052
	ctx.r3.s64 = ctx.r10.s64 + -20052;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,22640
	ctx.r3.s64 = ctx.r9.s64 + 22640;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325CF18"))) PPC_WEAK_FUNC(sub_8325CF18);
PPC_FUNC_IMPL(__imp__sub_8325CF18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	r11.s64 = -2092302336;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r31,r11,-20048
	r31.s64 = r11.s64 + -20048;
	// addi r4,r10,-20052
	ctx.r4.s64 = ctx.r10.s64 + -20052;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r9,-5220
	ctx.r4.s64 = ctx.r9.s64 + -5220;
	// bl 0x821da550
	sub_821DA550(ctx, base);
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// addi r3,r8,22656
	ctx.r3.s64 = ctx.r8.s64 + 22656;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325CF70"))) PPC_WEAK_FUNC(sub_8325CF70);
PPC_FUNC_IMPL(__imp__sub_8325CF70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	r11.s64 = -2092302336;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r31,r11,-20044
	r31.s64 = r11.s64 + -20044;
	// addi r4,r10,-20052
	ctx.r4.s64 = ctx.r10.s64 + -20052;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r9,-5172
	ctx.r4.s64 = ctx.r9.s64 + -5172;
	// bl 0x821da550
	sub_821DA550(ctx, base);
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// addi r3,r8,22672
	ctx.r3.s64 = ctx.r8.s64 + 22672;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325CFC8"))) PPC_WEAK_FUNC(sub_8325CFC8);
PPC_FUNC_IMPL(__imp__sub_8325CFC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	r11.s64 = -2092302336;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r31,r11,-20040
	r31.s64 = r11.s64 + -20040;
	// addi r4,r10,-20052
	ctx.r4.s64 = ctx.r10.s64 + -20052;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r9,-5160
	ctx.r4.s64 = ctx.r9.s64 + -5160;
	// bl 0x821da550
	sub_821DA550(ctx, base);
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// addi r3,r8,22688
	ctx.r3.s64 = ctx.r8.s64 + 22688;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325D020"))) PPC_WEAK_FUNC(sub_8325D020);
PPC_FUNC_IMPL(__imp__sub_8325D020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	r11.s64 = -2092302336;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r31,r11,-20036
	r31.s64 = r11.s64 + -20036;
	// addi r4,r10,-20052
	ctx.r4.s64 = ctx.r10.s64 + -20052;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r9,-5148
	ctx.r4.s64 = ctx.r9.s64 + -5148;
	// bl 0x821da550
	sub_821DA550(ctx, base);
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// addi r3,r8,22704
	ctx.r3.s64 = ctx.r8.s64 + 22704;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325D078"))) PPC_WEAK_FUNC(sub_8325D078);
PPC_FUNC_IMPL(__imp__sub_8325D078) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	r11.s64 = -2092302336;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r31,r11,-20032
	r31.s64 = r11.s64 + -20032;
	// addi r4,r10,-20052
	ctx.r4.s64 = ctx.r10.s64 + -20052;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r9,-5140
	ctx.r4.s64 = ctx.r9.s64 + -5140;
	// bl 0x821da550
	sub_821DA550(ctx, base);
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// addi r3,r8,22720
	ctx.r3.s64 = ctx.r8.s64 + 22720;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325D0D0"))) PPC_WEAK_FUNC(sub_8325D0D0);
PPC_FUNC_IMPL(__imp__sub_8325D0D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r11,-20048
	ctx.r3.s64 = r11.s64 + -20048;
	// bl 0x823db930
	sub_823DB930(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-20028(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20028, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325D100"))) PPC_WEAK_FUNC(sub_8325D100);
PPC_FUNC_IMPL(__imp__sub_8325D100) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-5132
	ctx.r4.s64 = r11.s64 + -5132;
	// addi r3,r10,-20024
	ctx.r3.s64 = ctx.r10.s64 + -20024;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,22736
	ctx.r3.s64 = ctx.r9.s64 + 22736;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325D140"))) PPC_WEAK_FUNC(sub_8325D140);
PPC_FUNC_IMPL(__imp__sub_8325D140) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-5116
	ctx.r4.s64 = r11.s64 + -5116;
	// addi r3,r10,-20020
	ctx.r3.s64 = ctx.r10.s64 + -20020;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,22752
	ctx.r3.s64 = ctx.r9.s64 + 22752;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325D180"))) PPC_WEAK_FUNC(sub_8325D180);
PPC_FUNC_IMPL(__imp__sub_8325D180) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	r11.s64 = -2092302336;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-20024
	ctx.r4.s64 = r11.s64 + -20024;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-6348
	ctx.r4.s64 = ctx.r10.s64 + -6348;
	// bl 0x821da550
	sub_821DA550(ctx, base);
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// lis r8,-31926
	ctx.r8.s64 = -2092302336;
	// addi r5,r9,-20020
	ctx.r5.s64 = ctx.r9.s64 + -20020;
	// addi r3,r8,-20016
	ctx.r3.s64 = ctx.r8.s64 + -20016;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x821e2cc8
	sub_821E2CC8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c67d8
	sub_821C67D8(ctx, base);
	// lis r7,-31927
	ctx.r7.s64 = -2092367872;
	// addi r4,r7,28344
	ctx.r4.s64 = ctx.r7.s64 + 28344;
loc_8325D1D4:
	// mfmsr r5
	// mtmsrd r13,1
	// lwarx r6,0,r4
	reserved.u32 = *(uint32_t*)(base + ctx.r4.u32);
	ctx.r6.u64 = __builtin_bswap32(reserved.u32);
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// stwcx. r6,0,r4
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r4.u32), reserved.s32, __builtin_bswap32(ctx.r6.s32));
	cr0.so = xer.so;
	// mtmsrd r5,1
	// bne 0x8325d1d4
	if (!cr0.eq) goto loc_8325D1D4;
	// lis r3,-31958
	ctx.r3.s64 = -2094399488;
	// addi r3,r3,22768
	ctx.r3.s64 = ctx.r3.s64 + 22768;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325D210"))) PPC_WEAK_FUNC(sub_8325D210);
PPC_FUNC_IMPL(__imp__sub_8325D210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	r11.s64 = -2092302336;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r31,r11,-20012
	r31.s64 = r11.s64 + -20012;
	// addi r4,r10,-20024
	ctx.r4.s64 = ctx.r10.s64 + -20024;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r9,-5108
	ctx.r4.s64 = ctx.r9.s64 + -5108;
	// bl 0x821da550
	sub_821DA550(ctx, base);
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// addi r3,r8,22784
	ctx.r3.s64 = ctx.r8.s64 + 22784;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325D268"))) PPC_WEAK_FUNC(sub_8325D268);
PPC_FUNC_IMPL(__imp__sub_8325D268) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	r11.s64 = -2092302336;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r31,r11,-20008
	r31.s64 = r11.s64 + -20008;
	// addi r4,r10,-20024
	ctx.r4.s64 = ctx.r10.s64 + -20024;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r9,-5100
	ctx.r4.s64 = ctx.r9.s64 + -5100;
	// bl 0x821da550
	sub_821DA550(ctx, base);
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// addi r3,r8,22800
	ctx.r3.s64 = ctx.r8.s64 + 22800;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325D2C0"))) PPC_WEAK_FUNC(sub_8325D2C0);
PPC_FUNC_IMPL(__imp__sub_8325D2C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	r11.s64 = -2092302336;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r31,r11,-20004
	r31.s64 = r11.s64 + -20004;
	// addi r4,r10,-20024
	ctx.r4.s64 = ctx.r10.s64 + -20024;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r9,-5080
	ctx.r4.s64 = ctx.r9.s64 + -5080;
	// bl 0x821da550
	sub_821DA550(ctx, base);
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// addi r3,r8,22816
	ctx.r3.s64 = ctx.r8.s64 + 22816;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325D318"))) PPC_WEAK_FUNC(sub_8325D318);
PPC_FUNC_IMPL(__imp__sub_8325D318) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	r11.s64 = -2092302336;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r31,r11,-20000
	r31.s64 = r11.s64 + -20000;
	// addi r4,r10,-20024
	ctx.r4.s64 = ctx.r10.s64 + -20024;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r9,-5072
	ctx.r4.s64 = ctx.r9.s64 + -5072;
	// bl 0x821da550
	sub_821DA550(ctx, base);
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// addi r3,r8,22832
	ctx.r3.s64 = ctx.r8.s64 + 22832;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325D370"))) PPC_WEAK_FUNC(sub_8325D370);
PPC_FUNC_IMPL(__imp__sub_8325D370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-5052
	ctx.r4.s64 = r11.s64 + -5052;
	// addi r3,r10,-19996
	ctx.r3.s64 = ctx.r10.s64 + -19996;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,22848
	ctx.r3.s64 = ctx.r9.s64 + 22848;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325D3B0"))) PPC_WEAK_FUNC(sub_8325D3B0);
PPC_FUNC_IMPL(__imp__sub_8325D3B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	r11.s64 = -2092302336;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r31,r11,-19992
	r31.s64 = r11.s64 + -19992;
	// addi r4,r10,-19996
	ctx.r4.s64 = ctx.r10.s64 + -19996;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r9,-5040
	ctx.r4.s64 = ctx.r9.s64 + -5040;
	// bl 0x821da550
	sub_821DA550(ctx, base);
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// addi r3,r8,22864
	ctx.r3.s64 = ctx.r8.s64 + 22864;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325D408"))) PPC_WEAK_FUNC(sub_8325D408);
PPC_FUNC_IMPL(__imp__sub_8325D408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	r11.s64 = -2092302336;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r31,r11,-19988
	r31.s64 = r11.s64 + -19988;
	// addi r4,r10,-19996
	ctx.r4.s64 = ctx.r10.s64 + -19996;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r9,-5024
	ctx.r4.s64 = ctx.r9.s64 + -5024;
	// bl 0x821da550
	sub_821DA550(ctx, base);
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// addi r3,r8,22880
	ctx.r3.s64 = ctx.r8.s64 + 22880;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325D460"))) PPC_WEAK_FUNC(sub_8325D460);
PPC_FUNC_IMPL(__imp__sub_8325D460) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	r11.s64 = -2092302336;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r31,r11,-19984
	r31.s64 = r11.s64 + -19984;
	// addi r4,r10,-19996
	ctx.r4.s64 = ctx.r10.s64 + -19996;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r9,-5220
	ctx.r4.s64 = ctx.r9.s64 + -5220;
	// bl 0x821da550
	sub_821DA550(ctx, base);
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// addi r3,r8,22896
	ctx.r3.s64 = ctx.r8.s64 + 22896;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325D4B8"))) PPC_WEAK_FUNC(sub_8325D4B8);
PPC_FUNC_IMPL(__imp__sub_8325D4B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-5012
	ctx.r4.s64 = r11.s64 + -5012;
	// addi r3,r10,-19980
	ctx.r3.s64 = ctx.r10.s64 + -19980;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,22912
	ctx.r3.s64 = ctx.r9.s64 + 22912;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325D4F8"))) PPC_WEAK_FUNC(sub_8325D4F8);
PPC_FUNC_IMPL(__imp__sub_8325D4F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-4996
	ctx.r4.s64 = r11.s64 + -4996;
	// addi r3,r10,-19976
	ctx.r3.s64 = ctx.r10.s64 + -19976;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,22928
	ctx.r3.s64 = ctx.r9.s64 + 22928;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325D538"))) PPC_WEAK_FUNC(sub_8325D538);
PPC_FUNC_IMPL(__imp__sub_8325D538) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-4976
	ctx.r4.s64 = r11.s64 + -4976;
	// addi r3,r10,-19972
	ctx.r3.s64 = ctx.r10.s64 + -19972;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,22944
	ctx.r3.s64 = ctx.r9.s64 + 22944;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325D578"))) PPC_WEAK_FUNC(sub_8325D578);
PPC_FUNC_IMPL(__imp__sub_8325D578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	r11.s64 = -2092302336;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r31,r11,-19968
	r31.s64 = r11.s64 + -19968;
	// addi r4,r10,-19972
	ctx.r4.s64 = ctx.r10.s64 + -19972;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r9,-4964
	ctx.r4.s64 = ctx.r9.s64 + -4964;
	// bl 0x821da550
	sub_821DA550(ctx, base);
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// addi r3,r8,22960
	ctx.r3.s64 = ctx.r8.s64 + 22960;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325D5D0"))) PPC_WEAK_FUNC(sub_8325D5D0);
PPC_FUNC_IMPL(__imp__sub_8325D5D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	r11.s64 = -2092302336;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r31,r11,-19964
	r31.s64 = r11.s64 + -19964;
	// addi r4,r10,-19972
	ctx.r4.s64 = ctx.r10.s64 + -19972;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f0108
	sub_821F0108(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r9,-4952
	ctx.r4.s64 = ctx.r9.s64 + -4952;
	// bl 0x821da550
	sub_821DA550(ctx, base);
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// addi r3,r8,22976
	ctx.r3.s64 = ctx.r8.s64 + 22976;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325D628"))) PPC_WEAK_FUNC(sub_8325D628);
PPC_FUNC_IMPL(__imp__sub_8325D628) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-4944
	ctx.r4.s64 = r11.s64 + -4944;
	// addi r3,r10,-19960
	ctx.r3.s64 = ctx.r10.s64 + -19960;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,22992
	ctx.r3.s64 = ctx.r9.s64 + 22992;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325D668"))) PPC_WEAK_FUNC(sub_8325D668);
PPC_FUNC_IMPL(__imp__sub_8325D668) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	r11.s64 = -2113142784;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-15700
	ctx.r4.s64 = r11.s64 + -15700;
	// addi r3,r10,-19956
	ctx.r3.s64 = ctx.r10.s64 + -19956;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,23008
	ctx.r3.s64 = ctx.r9.s64 + 23008;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325D6A8"))) PPC_WEAK_FUNC(sub_8325D6A8);
PPC_FUNC_IMPL(__imp__sub_8325D6A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-4924
	ctx.r4.s64 = r11.s64 + -4924;
	// addi r3,r10,-19952
	ctx.r3.s64 = ctx.r10.s64 + -19952;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,23024
	ctx.r3.s64 = ctx.r9.s64 + 23024;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325D6E8"))) PPC_WEAK_FUNC(sub_8325D6E8);
PPC_FUNC_IMPL(__imp__sub_8325D6E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,-4892
	ctx.r4.s64 = r11.s64 + -4892;
	// addi r3,r10,-19948
	ctx.r3.s64 = ctx.r10.s64 + -19948;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,23040
	ctx.r3.s64 = ctx.r9.s64 + 23040;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325D728"))) PPC_WEAK_FUNC(sub_8325D728);
PPC_FUNC_IMPL(__imp__sub_8325D728) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6400
	ctx.r4.s64 = r11.s64 + 6400;
	// addi r3,r10,-19944
	ctx.r3.s64 = ctx.r10.s64 + -19944;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,23056
	ctx.r3.s64 = ctx.r9.s64 + 23056;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325D768"))) PPC_WEAK_FUNC(sub_8325D768);
PPC_FUNC_IMPL(__imp__sub_8325D768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6408
	ctx.r4.s64 = r11.s64 + 6408;
	// addi r3,r10,-19940
	ctx.r3.s64 = ctx.r10.s64 + -19940;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,23072
	ctx.r3.s64 = ctx.r9.s64 + 23072;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325D7A8"))) PPC_WEAK_FUNC(sub_8325D7A8);
PPC_FUNC_IMPL(__imp__sub_8325D7A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6428
	ctx.r4.s64 = r11.s64 + 6428;
	// addi r3,r10,-19936
	ctx.r3.s64 = ctx.r10.s64 + -19936;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,23088
	ctx.r3.s64 = ctx.r9.s64 + 23088;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325D7E8"))) PPC_WEAK_FUNC(sub_8325D7E8);
PPC_FUNC_IMPL(__imp__sub_8325D7E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31958
	r11.s64 = -2094399488;
	// addi r3,r11,23104
	ctx.r3.s64 = r11.s64 + 23104;
	// b 0x82ca3700
	sub_82CA3700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325D7F8"))) PPC_WEAK_FUNC(sub_8325D7F8);
PPC_FUNC_IMPL(__imp__sub_8325D7F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6400
	ctx.r4.s64 = r11.s64 + 6400;
	// addi r3,r10,-19916
	ctx.r3.s64 = ctx.r10.s64 + -19916;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,23216
	ctx.r3.s64 = ctx.r9.s64 + 23216;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325D838"))) PPC_WEAK_FUNC(sub_8325D838);
PPC_FUNC_IMPL(__imp__sub_8325D838) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6408
	ctx.r4.s64 = r11.s64 + 6408;
	// addi r3,r10,-19912
	ctx.r3.s64 = ctx.r10.s64 + -19912;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,23232
	ctx.r3.s64 = ctx.r9.s64 + 23232;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325D878"))) PPC_WEAK_FUNC(sub_8325D878);
PPC_FUNC_IMPL(__imp__sub_8325D878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6428
	ctx.r4.s64 = r11.s64 + 6428;
	// addi r3,r10,-19908
	ctx.r3.s64 = ctx.r10.s64 + -19908;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,23248
	ctx.r3.s64 = ctx.r9.s64 + 23248;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325D8B8"))) PPC_WEAK_FUNC(sub_8325D8B8);
PPC_FUNC_IMPL(__imp__sub_8325D8B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6400
	ctx.r4.s64 = r11.s64 + 6400;
	// addi r3,r10,-19904
	ctx.r3.s64 = ctx.r10.s64 + -19904;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,23264
	ctx.r3.s64 = ctx.r9.s64 + 23264;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325D8F8"))) PPC_WEAK_FUNC(sub_8325D8F8);
PPC_FUNC_IMPL(__imp__sub_8325D8F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6408
	ctx.r4.s64 = r11.s64 + 6408;
	// addi r3,r10,-19900
	ctx.r3.s64 = ctx.r10.s64 + -19900;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,23280
	ctx.r3.s64 = ctx.r9.s64 + 23280;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325D938"))) PPC_WEAK_FUNC(sub_8325D938);
PPC_FUNC_IMPL(__imp__sub_8325D938) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6428
	ctx.r4.s64 = r11.s64 + 6428;
	// addi r3,r10,-19896
	ctx.r3.s64 = ctx.r10.s64 + -19896;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,23296
	ctx.r3.s64 = ctx.r9.s64 + 23296;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325D978"))) PPC_WEAK_FUNC(sub_8325D978);
PPC_FUNC_IMPL(__imp__sub_8325D978) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6400
	ctx.r4.s64 = r11.s64 + 6400;
	// addi r3,r10,-19892
	ctx.r3.s64 = ctx.r10.s64 + -19892;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,23312
	ctx.r3.s64 = ctx.r9.s64 + 23312;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325D9B8"))) PPC_WEAK_FUNC(sub_8325D9B8);
PPC_FUNC_IMPL(__imp__sub_8325D9B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6408
	ctx.r4.s64 = r11.s64 + 6408;
	// addi r3,r10,-19888
	ctx.r3.s64 = ctx.r10.s64 + -19888;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,23328
	ctx.r3.s64 = ctx.r9.s64 + 23328;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325D9F8"))) PPC_WEAK_FUNC(sub_8325D9F8);
PPC_FUNC_IMPL(__imp__sub_8325D9F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6428
	ctx.r4.s64 = r11.s64 + 6428;
	// addi r3,r10,-19884
	ctx.r3.s64 = ctx.r10.s64 + -19884;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,23344
	ctx.r3.s64 = ctx.r9.s64 + 23344;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325DA38"))) PPC_WEAK_FUNC(sub_8325DA38);
PPC_FUNC_IMPL(__imp__sub_8325DA38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6400
	ctx.r4.s64 = r11.s64 + 6400;
	// addi r3,r10,-19880
	ctx.r3.s64 = ctx.r10.s64 + -19880;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,23360
	ctx.r3.s64 = ctx.r9.s64 + 23360;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325DA78"))) PPC_WEAK_FUNC(sub_8325DA78);
PPC_FUNC_IMPL(__imp__sub_8325DA78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6408
	ctx.r4.s64 = r11.s64 + 6408;
	// addi r3,r10,-19876
	ctx.r3.s64 = ctx.r10.s64 + -19876;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,23376
	ctx.r3.s64 = ctx.r9.s64 + 23376;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325DAB8"))) PPC_WEAK_FUNC(sub_8325DAB8);
PPC_FUNC_IMPL(__imp__sub_8325DAB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6428
	ctx.r4.s64 = r11.s64 + 6428;
	// addi r3,r10,-19872
	ctx.r3.s64 = ctx.r10.s64 + -19872;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,23392
	ctx.r3.s64 = ctx.r9.s64 + 23392;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325DAF8"))) PPC_WEAK_FUNC(sub_8325DAF8);
PPC_FUNC_IMPL(__imp__sub_8325DAF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6400
	ctx.r4.s64 = r11.s64 + 6400;
	// addi r3,r10,-19868
	ctx.r3.s64 = ctx.r10.s64 + -19868;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,23408
	ctx.r3.s64 = ctx.r9.s64 + 23408;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325DB38"))) PPC_WEAK_FUNC(sub_8325DB38);
PPC_FUNC_IMPL(__imp__sub_8325DB38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6408
	ctx.r4.s64 = r11.s64 + 6408;
	// addi r3,r10,-19864
	ctx.r3.s64 = ctx.r10.s64 + -19864;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,23424
	ctx.r3.s64 = ctx.r9.s64 + 23424;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325DB78"))) PPC_WEAK_FUNC(sub_8325DB78);
PPC_FUNC_IMPL(__imp__sub_8325DB78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6428
	ctx.r4.s64 = r11.s64 + 6428;
	// addi r3,r10,-19860
	ctx.r3.s64 = ctx.r10.s64 + -19860;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,23440
	ctx.r3.s64 = ctx.r9.s64 + 23440;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325DBB8"))) PPC_WEAK_FUNC(sub_8325DBB8);
PPC_FUNC_IMPL(__imp__sub_8325DBB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11220
	ctx.r3.s64 = r11.s64 + 11220;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-19856(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19856, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325DBF0"))) PPC_WEAK_FUNC(sub_8325DBF0);
PPC_FUNC_IMPL(__imp__sub_8325DBF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11240
	ctx.r3.s64 = r11.s64 + 11240;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-19852(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19852, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325DC28"))) PPC_WEAK_FUNC(sub_8325DC28);
PPC_FUNC_IMPL(__imp__sub_8325DC28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,-648
	ctx.r3.s64 = r11.s64 + -648;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-19848(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19848, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325DC60"))) PPC_WEAK_FUNC(sub_8325DC60);
PPC_FUNC_IMPL(__imp__sub_8325DC60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,-624
	ctx.r3.s64 = r11.s64 + -624;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-19844(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19844, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325DC98"))) PPC_WEAK_FUNC(sub_8325DC98);
PPC_FUNC_IMPL(__imp__sub_8325DC98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,-608
	ctx.r3.s64 = r11.s64 + -608;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-19840(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19840, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325DCD0"))) PPC_WEAK_FUNC(sub_8325DCD0);
PPC_FUNC_IMPL(__imp__sub_8325DCD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,-588
	ctx.r3.s64 = r11.s64 + -588;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-19836(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19836, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325DD08"))) PPC_WEAK_FUNC(sub_8325DD08);
PPC_FUNC_IMPL(__imp__sub_8325DD08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11252
	ctx.r3.s64 = r11.s64 + 11252;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-19832(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19832, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325DD40"))) PPC_WEAK_FUNC(sub_8325DD40);
PPC_FUNC_IMPL(__imp__sub_8325DD40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,-564
	ctx.r3.s64 = r11.s64 + -564;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-19828(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19828, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325DD78"))) PPC_WEAK_FUNC(sub_8325DD78);
PPC_FUNC_IMPL(__imp__sub_8325DD78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6400
	ctx.r4.s64 = r11.s64 + 6400;
	// addi r3,r10,-19824
	ctx.r3.s64 = ctx.r10.s64 + -19824;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,23456
	ctx.r3.s64 = ctx.r9.s64 + 23456;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325DDB8"))) PPC_WEAK_FUNC(sub_8325DDB8);
PPC_FUNC_IMPL(__imp__sub_8325DDB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6408
	ctx.r4.s64 = r11.s64 + 6408;
	// addi r3,r10,-19820
	ctx.r3.s64 = ctx.r10.s64 + -19820;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,23472
	ctx.r3.s64 = ctx.r9.s64 + 23472;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325DDF8"))) PPC_WEAK_FUNC(sub_8325DDF8);
PPC_FUNC_IMPL(__imp__sub_8325DDF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6428
	ctx.r4.s64 = r11.s64 + 6428;
	// addi r3,r10,-19816
	ctx.r3.s64 = ctx.r10.s64 + -19816;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,23488
	ctx.r3.s64 = ctx.r9.s64 + 23488;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325DE38"))) PPC_WEAK_FUNC(sub_8325DE38);
PPC_FUNC_IMPL(__imp__sub_8325DE38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,-464
	ctx.r3.s64 = r11.s64 + -464;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-19812(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19812, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325DE70"))) PPC_WEAK_FUNC(sub_8325DE70);
PPC_FUNC_IMPL(__imp__sub_8325DE70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11276
	ctx.r3.s64 = r11.s64 + 11276;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-19808(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19808, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325DEA8"))) PPC_WEAK_FUNC(sub_8325DEA8);
PPC_FUNC_IMPL(__imp__sub_8325DEA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,-444
	ctx.r3.s64 = r11.s64 + -444;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-19804(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19804, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325DEE0"))) PPC_WEAK_FUNC(sub_8325DEE0);
PPC_FUNC_IMPL(__imp__sub_8325DEE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11252
	ctx.r3.s64 = r11.s64 + 11252;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-19800(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19800, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325DF18"))) PPC_WEAK_FUNC(sub_8325DF18);
PPC_FUNC_IMPL(__imp__sub_8325DF18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,11292
	ctx.r3.s64 = r11.s64 + 11292;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-19796(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19796, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325DF50"))) PPC_WEAK_FUNC(sub_8325DF50);
PPC_FUNC_IMPL(__imp__sub_8325DF50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r4,-32484
	ctx.r4.s64 = -2128871424;
	// addi r3,r11,3224
	ctx.r3.s64 = r11.s64 + 3224;
	// ori r4,r4,40389
	ctx.r4.u64 = ctx.r4.u64 | 40389;
	// bl 0x821f3c28
	sub_821F3C28(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// stw r3,-19792(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19792, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325DF88"))) PPC_WEAK_FUNC(sub_8325DF88);
PPC_FUNC_IMPL(__imp__sub_8325DF88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// addi r4,r11,6400
	ctx.r4.s64 = r11.s64 + 6400;
	// addi r3,r10,-19788
	ctx.r3.s64 = ctx.r10.s64 + -19788;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	sub_8222CF18(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r3,r9,23504
	ctx.r3.s64 = ctx.r9.s64 + 23504;
	// bl 0x82ca3700
	sub_82CA3700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

