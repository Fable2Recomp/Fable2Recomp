#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82DAD768"))) PPC_WEAK_FUNC(sub_82DAD768);
PPC_FUNC_IMPL(__imp__sub_82DAD768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,2736(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2736);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f0,-8(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lfs f0,3084(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f0.f64 = double(temp.f32);
	// li r11,0
	r11.s64 = 0;
	// stfs f0,-4(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// lfs f0,2848(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2848);
	f0.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f0,24(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f13,2676(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2676);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f13,16(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f0,3052(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3052);
	f0.f64 = double(temp.f32);
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// stfs f0,20(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lvx128 v0,r0,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stb r10,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r10.u8);
	// stb r10,29(r3)
	PPC_STORE_U8(ctx.r3.u32 + 29, ctx.r10.u8);
	// stb r10,31(r3)
	PPC_STORE_U8(ctx.r3.u32 + 31, ctx.r10.u8);
	// stb r11,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, r11.u8);
	// stb r11,30(r3)
	PPC_STORE_U8(ctx.r3.u32 + 30, r11.u8);
	// stb r11,33(r3)
	PPC_STORE_U8(ctx.r3.u32 + 33, r11.u8);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAD7E0"))) PPC_WEAK_FUNC(sub_82DAD7E0);
PPC_FUNC_IMPL(__imp__sub_82DAD7E0) {
	PPC_FUNC_PROLOGUE();
	// lvx128 v0,r0,r4
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAD7F0"))) PPC_WEAK_FUNC(sub_82DAD7F0);
PPC_FUNC_IMPL(__imp__sub_82DAD7F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be0
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// add r27,r11,r29
	r27.u64 = r11.u64 + r29.u64;
	// clrlwi r10,r10,2
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// subf r28,r31,r11
	r28.s64 = r11.s64 - r31.s64;
	// cmpw cr6,r10,r27
	cr6.compare<int32_t>(ctx.r10.s32, r27.s32, xer);
	// bge cr6,0x82dad848
	if (!cr6.lt) goto loc_82DAD848;
	// rlwinm r11,r10,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x82dad838
	if (cr6.lt) goto loc_82DAD838;
	// mr r11,r27
	r11.u64 = r27.u64;
loc_82DAD838:
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82d51270
	sub_82D51270(ctx, base);
loc_82DAD848:
	// add r9,r31,r29
	ctx.r9.u64 = r31.u64 + r29.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r7,r31,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r28,-1
	r11.s64 = r28.s64 + -1;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r10,r7
	ctx.r8.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82dad89c
	if (cr6.lt) goto loc_82DAD89C;
	// rlwinm r6,r11,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r9,r10,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r10.s64;
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
loc_82DAD878:
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// bge cr6,0x82dad878
	if (!cr6.lt) goto loc_82DAD878;
loc_82DAD89C:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r11,r29,-1
	r11.s64 = r29.s64 + -1;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82dad8e0
	if (cr6.lt) goto loc_82DAD8E0;
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r9,r10,r26
	ctx.r9.s64 = r26.s64 - ctx.r10.s64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
loc_82DAD8BC:
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// bge cr6,0x82dad8bc
	if (!cr6.lt) goto loc_82DAD8BC;
loc_82DAD8E0:
	// stw r27,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

__attribute__((alias("__imp__sub_82DAD8F0"))) PPC_WEAK_FUNC(sub_82DAD8F0);
PPC_FUNC_IMPL(__imp__sub_82DAD8F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82dad930
	if (!cr6.eq) goto loc_82DAD930;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82DAD930:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82dad95c
	if (!cr6.eq) goto loc_82DAD95C;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82DAD95C:
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

__attribute__((alias("__imp__sub_82DAD970"))) PPC_WEAK_FUNC(sub_82DAD970);
PPC_FUNC_IMPL(__imp__sub_82DAD970) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bd0
	// stfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// bl 0x82e01c68
	sub_82E01C68(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e02590
	sub_82E02590(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lbz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 28);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lfs f31,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f31.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f30,3084(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f30.f64 = double(temp.f32);
	// beq cr6,0x82dad9d8
	if (cr6.eq) goto loc_82DAD9D8;
	// lbz r11,30(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 30);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82dad9dc
	if (!cr6.eq) goto loc_82DAD9DC;
loc_82DAD9D8:
	// stfs f30,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
loc_82DAD9DC:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82e01bc0
	sub_82E01BC0(ctx, base);
	// lbz r11,31(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 31);
	// lbz r10,30(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 30);
	// li r27,0
	r27.s64 = 0;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r30,r11,1
	r30.u64 = r11.u64 ^ 1;
	// beq cr6,0x82dada10
	if (cr6.eq) goto loc_82DADA10;
	// mr r30,r27
	r30.u64 = r27.u64;
loc_82DADA10:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f30,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// li r29,5
	r29.s64 = 5;
	// stfs f31,184(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,2704(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2704);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r29,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r29.u32);
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,180(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lfs f13,2736(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2736);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stb r11,212(r1)
	PPC_STORE_U8(ctx.r1.u32 + 212, r11.u8);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,3056(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3056);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,192
	r11.s64 = ctx.r1.s64 + 192;
	// stfs f13,176(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82dad750
	sub_82DAD750(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f1,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// bl 0x82dad760
	sub_82DAD760(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f1,180(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// bl 0x82dad728
	sub_82DAD728(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f1,184(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// bl 0x82dad730
	sub_82DAD730(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,192
	r11.s64 = ctx.r1.s64 + 192;
	// stb r30,212(r1)
	PPC_STORE_U8(ctx.r1.u32 + 212, r30.u8);
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82e01d28
	sub_82E01D28(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e02528
	sub_82E02528(ctx, base);
	// lbz r11,29(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 29);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82dadad8
	if (cr6.eq) goto loc_82DADAD8;
	// li r11,50
	r11.s64 = 50;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// b 0x82dadae0
	goto loc_82DADAE0;
loc_82DADAD8:
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
loc_82DADAE0:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r29.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stb r30,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, r30.u8);
	// bl 0x82e01b98
	sub_82E01B98(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82e01bf8
	sub_82E01BF8(ctx, base);
	// lwz r24,0(r13)
	r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r25,4
	r25.s64 = 4;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r11,r28,16
	r11.s64 = r28.s64 + 16;
	// lwzx r3,r25,r24
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + r24.u32);
	// rlwinm r4,r11,0,0,27
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF0;
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// add r10,r11,r4
	ctx.r10.u64 = r11.u64 + ctx.r4.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82dadb38
	if (cr6.gt) goto loc_82DADB38;
	// mr r29,r11
	r29.u64 = r11.u64;
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// b 0x82dadb4c
	goto loc_82DADB4C;
loc_82DADB38:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_82DADB4C:
	// li r11,512
	r11.s64 = 512;
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r27.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stw r27,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r27.u32);
	// stw r27,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r27.u32);
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r27.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// lis r11,-32768
	r11.s64 = -2147483648;
	// stw r27,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r27.u32);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r11.u32);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r11.u32);
	// li r11,20
	r11.s64 = 20;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r11.u32);
	// bl 0x82e02148
	sub_82E02148(ctx, base);
	// lbz r11,30(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 30);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82dadbb4
	if (cr6.eq) goto loc_82DADBB4;
	// lbz r11,33(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 33);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82dadbac
	if (cr6.eq) goto loc_82DADBAC;
	// addi r11,r1,224
	r11.s64 = ctx.r1.s64 + 224;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r11.u32);
loc_82DADBAC:
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// stw r11,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, r11.u32);
loc_82DADBB4:
	// lis r31,-31949
	r31.s64 = -2093809664;
	// lis r11,32214
	r11.s64 = 2111176704;
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// ori r30,r11,22933
	r30.u64 = r11.u64 | 22933;
	// lwz r4,29792(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 29792);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,29792(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 29792);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r27.u8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lwz r11,16(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82e01d68
	sub_82E01D68(ctx, base);
	// lwz r11,29792(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 29792);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbz r5,81(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,16(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x82dadc54
	if (cr6.eq) goto loc_82DADC54;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,136(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82dad7f0
	sub_82DAD7F0(ctx, base);
loc_82DADC54:
	// lwzx r3,r25,r24
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + r24.u32);
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r29,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r29.u32);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x82dadc7c
	if (!cr6.eq) goto loc_82DADC7C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82DADC7C:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,312
	r11.s64 = r11.s64 + 312;
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, r11.u32);
	// bl 0x82dad8f0
	sub_82DAD8F0(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82e01b90
	sub_82E01B90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82ca2c20
	return;
}

__attribute__((alias("__imp__sub_82DADCB0"))) PPC_WEAK_FUNC(sub_82DADCB0);
PPC_FUNC_IMPL(__imp__sub_82DADCB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lbz r11,32(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82dadd0c
	if (cr6.eq) goto loc_82DADD0C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e02ee8
	sub_82E02EE8(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dad970
	sub_82DAD970(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e02f60
	sub_82E02F60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	return;
loc_82DADD0C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e02720
	sub_82E02720(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dad970
	sub_82DAD970(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e02650
	sub_82E02650(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_82DADD40"))) PPC_WEAK_FUNC(sub_82DADD40);
PPC_FUNC_IMPL(__imp__sub_82DADD40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,404
	ctx.r4.s64 = r11.s64 + 404;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r11,-32244
	r11.s64 = -2113142784;
	// lwz r6,52(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-5652
	ctx.r4.s64 = r11.s64 + -5652;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,396
	ctx.r4.s64 = r11.s64 + 396;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_82DADDF8"))) PPC_WEAK_FUNC(sub_82DADDF8);
PPC_FUNC_IMPL(__imp__sub_82DADDF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r5,-64
	r30.s64 = ctx.r5.s64 + -64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82dade6c
	if (cr6.lt) goto loc_82DADE6C;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// bgt cr6,0x82dade6c
	if (cr6.gt) goto loc_82DADE6C;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// addi r9,r31,64
	ctx.r9.s64 = r31.s64 + 64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82dade60
	if (!cr6.eq) goto loc_82DADE60;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r11,64
	ctx.r3.s64 = r11.s64 + 64;
	// stw r10,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r10.u32);
	// b 0x82dade70
	goto loc_82DADE70;
loc_82DADE60:
	// li r3,64
	ctx.r3.s64 = 64;
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// b 0x82dade70
	goto loc_82DADE70;
loc_82DADE6C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82DADE70:
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

__attribute__((alias("__imp__sub_82DADE88"))) PPC_WEAK_FUNC(sub_82DADE88);
PPC_FUNC_IMPL(__imp__sub_82DADE88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lwz r4,16(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e03df0
	sub_82E03DF0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DADEC0"))) PPC_WEAK_FUNC(sub_82DADEC0);
PPC_FUNC_IMPL(__imp__sub_82DADEC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lwz r4,16(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lvx128 v13,r0,r11
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lvx128 v12,r11,r9
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r11.u32 + ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaxfp v13,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v13.f32, _mm_max_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// lfs f0,2640(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2640);
	f0.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v11,r0,r11
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// vspltw v11,v11,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0xFF));
	// vaddfp v0,v0,v11
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v11.f32)));
	// stvx128 v13,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// vminfp v0,v0,v12
	_mm_store_ps(ctx.v0.f32, _mm_min_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82e04008
	sub_82E04008(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DADF48"))) PPC_WEAK_FUNC(sub_82DADF48);
PPC_FUNC_IMPL(__imp__sub_82DADF48) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,10420
	r11.s64 = r11.s64 + 10420;
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82dae3b0
	sub_82DAE3B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dae460
	sub_82DAE460(ctx, base);
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

__attribute__((alias("__imp__sub_82DADF90"))) PPC_WEAK_FUNC(sub_82DADF90);
PPC_FUNC_IMPL(__imp__sub_82DADF90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82DADFA8"))) PPC_WEAK_FUNC(sub_82DADFA8);
PPC_FUNC_IMPL(__imp__sub_82DADFA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// addi r11,r11,456
	r11.s64 = r11.s64 + 456;
	// li r9,0
	ctx.r9.s64 = 0;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// lhz r11,4(r5)
	r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82dadfe4
	if (cr6.eq) goto loc_82DADFE4;
	// lhz r11,6(r5)
	r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 6);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,6(r5)
	PPC_STORE_U16(ctx.r5.u32 + 6, r11.u16);
loc_82DADFE4:
	// li r11,16
	r11.s64 = 16;
	// li r10,32
	ctx.r10.s64 = 32;
	// lvx128 v0,r5,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32 + r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r3,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,32(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// lwz r11,36(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAE008"))) PPC_WEAK_FUNC(sub_82DAE008);
PPC_FUNC_IMPL(__imp__sub_82DAE008) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,456
	r11.s64 = r11.s64 + 456;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,11
	ctx.r8.s64 = 11;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// lhz r11,4(r5)
	r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82dae048
	if (cr6.eq) goto loc_82DAE048;
	// lhz r11,6(r5)
	r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 6);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,6(r5)
	PPC_STORE_U16(ctx.r5.u32 + 6, r11.u16);
loc_82DAE048:
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,32
	ctx.r8.s64 = 32;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,10420
	r11.s64 = r11.s64 + 10420;
	// lvx128 v0,r5,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32 + ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,420
	ctx.r10.s64 = ctx.r10.s64 + 420;
	// stvx128 v0,r3,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r9,32(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// lwz r9,36(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// stw r10,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// stw r4,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r4.u32);
	// lhz r11,4(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lhz r11,6(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 6);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,6(r4)
	PPC_STORE_U16(ctx.r4.u32 + 6, r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAE0A0"))) PPC_WEAK_FUNC(sub_82DAE0A0);
PPC_FUNC_IMPL(__imp__sub_82DAE0A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be4
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,0(r13)
	r27.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r28,8
	r28.s64 = 8;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lwzx r11,r28,r27
	r11.u64 = PPC_LOAD_U32(r28.u32 + r27.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82dae0f0
	if (!cr6.lt) goto loc_82DAE0F0;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r9,r9,504
	ctx.r9.s64 = ctx.r9.s64 + 504;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
loc_82DAE0F0:
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// li r9,32
	ctx.r9.s64 = 32;
	// addi r10,r1,207
	ctx.r10.s64 = ctx.r1.s64 + 207;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r6,r10,0,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r30,0
	r30.s64 = 0;
	// stw r11,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r11.u32);
	// lvx128 v0,r4,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,24(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// lwz r9,20(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stvx128 v0,r6,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r10,52(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r30.u32);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r30.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,36(r6)
	PPC_STORE_U32(ctx.r6.u32 + 36, r11.u32);
	// stw r11,40(r6)
	PPC_STORE_U32(ctx.r6.u32 + 40, r11.u32);
	// addi r11,r10,16
	r11.s64 = ctx.r10.s64 + 16;
	// stw r9,32(r6)
	PPC_STORE_U32(ctx.r6.u32 + 32, ctx.r9.u32);
	// bne cr6,0x82dae148
	if (!cr6.eq) goto loc_82DAE148;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82DAE148:
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e052b8
	sub_82E052B8(ctx, base);
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r11.u32);
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82dae180
	if (cr6.eq) goto loc_82DAE180;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r31
	PPC_STORE_U32(r11.u32 + r31.u32, r30.u32);
loc_82DAE180:
	// lwzx r10,r28,r27
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + r27.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82dae1b0
	if (!cr6.lt) goto loc_82DAE1B0;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r9,r9,25692
	ctx.r9.s64 = ctx.r9.s64 + 25692;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r8,r11,12
	ctx.r8.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82DAE1B0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x82ca2c34
	return;
}

__attribute__((alias("__imp__sub_82DAE1C0"))) PPC_WEAK_FUNC(sub_82DAE1C0);
PPC_FUNC_IMPL(__imp__sub_82DAE1C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,8
	r31.s64 = 8;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// lwzx r11,r31,r30
	r11.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82dae210
	if (!cr6.lt) goto loc_82DAE210;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r9,r9,504
	ctx.r9.s64 = ctx.r9.s64 + 504;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r10,12
	ctx.r7.s64 = ctx.r10.s64 + 12;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
loc_82DAE210:
	// lwz r11,52(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bne cr6,0x82dae244
	if (!cr6.eq) goto loc_82DAE244;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82DAE244:
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e053f0
	sub_82E053F0(ctx, base);
	// lwzx r11,r31,r30
	r11.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82dae28c
	if (!cr6.lt) goto loc_82DAE28C;
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
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
loc_82DAE28C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
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

__attribute__((alias("__imp__sub_82DAE2A8"))) PPC_WEAK_FUNC(sub_82DAE2A8);
PPC_FUNC_IMPL(__imp__sub_82DAE2A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// lvx128 v13,r0,r4
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// lwz r30,20(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r1,207
	r11.s64 = ctx.r1.s64 + 207;
	// li r31,16
	r31.s64 = 16;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r11,r11,0,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF0;
	// lfs f13,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// vmaxfp v13,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v13.f32, _mm_max_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// lvx128 v12,r4,r31
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32 + r31.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// oris r8,r7,32768
	ctx.r8.u64 = ctx.r7.u64 | 2147483648;
	// stvx128 v0,r11,r31
	_mm_store_si128((__m128i*)(base + ((r11.u32 + r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// stw r30,32(r11)
	PPC_STORE_U32(r11.u32 + 32, r30.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r9,36(r11)
	PPC_STORE_U32(r11.u32 + 36, ctx.r9.u32);
	// stw r9,40(r11)
	PPC_STORE_U32(r11.u32 + 40, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,2640(r8)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2640);
	f0.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v11,r0,r10
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw v11,v11,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0xFF));
	// stvx128 v13,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// vaddfp v0,v0,v11
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v11.f32)));
	// vminfp v0,v0,v12
	_mm_store_ps(ctx.v0.f32, _mm_min_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82e04008
	sub_82E04008(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r31,4(r9)
	r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// bne cr6,0x82dae390
	if (!cr6.eq) goto loc_82DAE390;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82DAE390:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
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

__attribute__((alias("__imp__sub_82DAE3B0"))) PPC_WEAK_FUNC(sub_82DAE3B0);
PPC_FUNC_IMPL(__imp__sub_82DAE3B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r11,r11,420
	r11.s64 = r11.s64 + 420;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82dae40c
	if (cr6.eq) goto loc_82DAE40C;
	// lhz r11,6(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// extsh r11,r11
	r11.s64 = r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, r11.u16);
	// bne cr6,0x82dae40c
	if (!cr6.eq) goto loc_82DAE40C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82DAE40C:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r11,r11,68
	r11.s64 = r11.s64 + 68;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
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

__attribute__((alias("__imp__sub_82DAE430"))) PPC_WEAK_FUNC(sub_82DAE430);
PPC_FUNC_IMPL(__imp__sub_82DAE430) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82dae3b0
	sub_82DAE3B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_82DAE460"))) PPC_WEAK_FUNC(sub_82DAE460);
PPC_FUNC_IMPL(__imp__sub_82DAE460) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r11,r11,456
	r11.s64 = r11.s64 + 456;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82dae4bc
	if (cr6.eq) goto loc_82DAE4BC;
	// lhz r11,6(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// extsh r11,r11
	r11.s64 = r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, r11.u16);
	// bne cr6,0x82dae4bc
	if (!cr6.eq) goto loc_82DAE4BC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82DAE4BC:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r11,r11,14712
	r11.s64 = r11.s64 + 14712;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
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

__attribute__((alias("__imp__sub_82DAE4E0"))) PPC_WEAK_FUNC(sub_82DAE4E0);
PPC_FUNC_IMPL(__imp__sub_82DAE4E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82dae460
	sub_82DAE460(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82dae528
	if (cr6.eq) goto loc_82DAE528;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,38
	ctx.r6.s64 = 38;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82DAE528:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_82DAE548"))) PPC_WEAK_FUNC(sub_82DAE548);
PPC_FUNC_IMPL(__imp__sub_82DAE548) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,10420
	r11.s64 = r11.s64 + 10420;
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82dae3b0
	sub_82DAE3B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dae460
	sub_82DAE460(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82dae5a8
	if (cr6.eq) goto loc_82DAE5A8;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,38
	ctx.r6.s64 = 38;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82DAE5A8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_82DAE5C8"))) PPC_WEAK_FUNC(sub_82DAE5C8);
PPC_FUNC_IMPL(__imp__sub_82DAE5C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,516
	ctx.r4.s64 = r11.s64 + 516;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_82DAE628"))) PPC_WEAK_FUNC(sub_82DAE628);
PPC_FUNC_IMPL(__imp__sub_82DAE628) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAE630"))) PPC_WEAK_FUNC(sub_82DAE630);
PPC_FUNC_IMPL(__imp__sub_82DAE630) {
	PPC_FUNC_PROLOGUE();
	// lvx128 v0,r0,r5
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vxor v0,v0,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_setzero_si128());
	// stvx128 v0,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAE640"))) PPC_WEAK_FUNC(sub_82DAE640);
PPC_FUNC_IMPL(__imp__sub_82DAE640) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// addi r11,r5,-1
	r11.s64 = ctx.r5.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
loc_82DAE64C:
	// lvx128 v0,r0,r6
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// vxor v0,v0,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_setzero_si128());
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stvx128 v0,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bge cr6,0x82dae64c
	if (!cr6.lt) goto loc_82DAE64C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAE670"))) PPC_WEAK_FUNC(sub_82DAE670);
PPC_FUNC_IMPL(__imp__sub_82DAE670) {
	PPC_FUNC_PROLOGUE();
	// lvx128 v0,r0,r4
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vxor v0,v0,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_setzero_si128());
	// stvx128 v0,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAE680"))) PPC_WEAK_FUNC(sub_82DAE680);
PPC_FUNC_IMPL(__imp__sub_82DAE680) {
	PPC_FUNC_PROLOGUE();
	// lvx128 v0,r0,r4
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vxor v0,v0,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_setzero_si128());
	// stvx128 v0,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAE690"))) PPC_WEAK_FUNC(sub_82DAE690);
PPC_FUNC_IMPL(__imp__sub_82DAE690) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	f0.f64 = double(temp.f32);
	// addi r11,r4,48
	r11.s64 = ctx.r4.s64 + 48;
	// fadds f0,f0,f1
	f0.f64 = double(float(f0.f64 + ctx.f1.f64));
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// li r10,16
	ctx.r10.s64 = 16;
	// lvx128 v13,r0,r11
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// vsubfp v13,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v13.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v13,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r11
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vaddfp v0,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v0,r6,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAE6D0"))) PPC_WEAK_FUNC(sub_82DAE6D0);
PPC_FUNC_IMPL(__imp__sub_82DAE6D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lvx128 v0,r0,r4
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// vxor v0,v0,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_setzero_si128());
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stvx128 v0,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAE6F0"))) PPC_WEAK_FUNC(sub_82DAE6F0);
PPC_FUNC_IMPL(__imp__sub_82DAE6F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f1,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,20572
	r11.s64 = r11.s64 + 20572;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,3
	ctx.r8.s64 = 3;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAE720"))) PPC_WEAK_FUNC(sub_82DAE720);
PPC_FUNC_IMPL(__imp__sub_82DAE720) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,8
	r31.s64 = 8;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwzx r11,r31,r30
	r11.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82dae768
	if (!cr6.lt) goto loc_82DAE768;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r9,r9,528
	ctx.r9.s64 = ctx.r9.s64 + 528;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
loc_82DAE768:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f1,16(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82dab2a8
	sub_82DAB2A8(ctx, base);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82dae7a4
	if (!cr6.lt) goto loc_82DAE7A4;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r9,r9,25692
	ctx.r9.s64 = ctx.r9.s64 + 25692;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r8,r11,12
	ctx.r8.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82DAE7A4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_82DAE7B0"))) PPC_WEAK_FUNC(sub_82DAE7B0);
PPC_FUNC_IMPL(__imp__sub_82DAE7B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82DAE7C8"))) PPC_WEAK_FUNC(sub_82DAE7C8);
PPC_FUNC_IMPL(__imp__sub_82DAE7C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,652
	r11.s64 = r11.s64 + 652;
	// li r9,27
	ctx.r9.s64 = 27;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAE7F0"))) PPC_WEAK_FUNC(sub_82DAE7F0);
PPC_FUNC_IMPL(__imp__sub_82DAE7F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,652
	ctx.r3.s64 = r11.s64 + 652;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAE800"))) PPC_WEAK_FUNC(sub_82DAE800);
PPC_FUNC_IMPL(__imp__sub_82DAE800) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,796
	r11.s64 = r11.s64 + 796;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq cr6,0x82dae834
	if (cr6.eq) goto loc_82DAE834;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82DAE834:
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

__attribute__((alias("__imp__sub_82DAE848"))) PPC_WEAK_FUNC(sub_82DAE848);
PPC_FUNC_IMPL(__imp__sub_82DAE848) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82DAE860"))) PPC_WEAK_FUNC(sub_82DAE860);
PPC_FUNC_IMPL(__imp__sub_82DAE860) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r11,r11,796
	r11.s64 = r11.s64 + 796;
	// addi r10,r10,828
	ctx.r10.s64 = ctx.r10.s64 + 828;
	// addi r9,r9,812
	ctx.r9.s64 = ctx.r9.s64 + 812;
	// sth r8,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r8.u16);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAE898"))) PPC_WEAK_FUNC(sub_82DAE898);
PPC_FUNC_IMPL(__imp__sub_82DAE898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,828
	ctx.r3.s64 = r11.s64 + 828;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAE8A8"))) PPC_WEAK_FUNC(sub_82DAE8A8);
PPC_FUNC_IMPL(__imp__sub_82DAE8A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82dbd050
	sub_82DBD050(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82dae8f0
	if (cr6.eq) goto loc_82DAE8F0;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,39
	ctx.r6.s64 = 39;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82DAE8F0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_82DAE910"))) PPC_WEAK_FUNC(sub_82DAE910);
PPC_FUNC_IMPL(__imp__sub_82DAE910) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82dae8a8
	sub_82DAE8A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DAE918"))) PPC_WEAK_FUNC(sub_82DAE918);
PPC_FUNC_IMPL(__imp__sub_82DAE918) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAE920"))) PPC_WEAK_FUNC(sub_82DAE920);
PPC_FUNC_IMPL(__imp__sub_82DAE920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82DAE938"))) PPC_WEAK_FUNC(sub_82DAE938);
PPC_FUNC_IMPL(__imp__sub_82DAE938) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r11,r11,68
	r11.s64 = r11.s64 + 68;
	// addi r10,r10,9100
	ctx.r10.s64 = ctx.r10.s64 + 9100;
	// addi r9,r9,7924
	ctx.r9.s64 = ctx.r9.s64 + 7924;
	// li r7,20
	ctx.r7.s64 = 20;
	// sth r8,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r8.u16);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAE978"))) PPC_WEAK_FUNC(sub_82DAE978);
PPC_FUNC_IMPL(__imp__sub_82DAE978) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,9100
	ctx.r3.s64 = r11.s64 + 9100;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAE988"))) PPC_WEAK_FUNC(sub_82DAE988);
PPC_FUNC_IMPL(__imp__sub_82DAE988) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82daea68
	sub_82DAEA68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DAE990"))) PPC_WEAK_FUNC(sub_82DAE990);
PPC_FUNC_IMPL(__imp__sub_82DAE990) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82dae9d0
	if (!cr6.eq) goto loc_82DAE9D0;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82DAE9D0:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82dae9fc
	if (!cr6.eq) goto loc_82DAE9FC;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82DAE9FC:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82daea28
	if (!cr6.eq) goto loc_82DAEA28;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82DAEA28:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r9,r31,16
	ctx.r9.s64 = r31.s64 + 16;
	// bne cr6,0x82daea38
	if (!cr6.eq) goto loc_82DAEA38;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82DAEA38:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,68
	r11.s64 = r11.s64 + 68;
	// addi r10,r10,14712
	ctx.r10.s64 = ctx.r10.s64 + 14712;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82DAEA68"))) PPC_WEAK_FUNC(sub_82DAEA68);
PPC_FUNC_IMPL(__imp__sub_82DAEA68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82dae990
	sub_82DAE990(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82daeab0
	if (cr6.eq) goto loc_82DAEAB0;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,38
	ctx.r6.s64 = 38;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82DAEAB0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_82DAEAD0"))) PPC_WEAK_FUNC(sub_82DAEAD0);
PPC_FUNC_IMPL(__imp__sub_82DAEAD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82DAEAE8"))) PPC_WEAK_FUNC(sub_82DAEAE8);
PPC_FUNC_IMPL(__imp__sub_82DAEAE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,19852
	r11.s64 = r11.s64 + 19852;
	// li r9,6
	ctx.r9.s64 = 6;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAEB10"))) PPC_WEAK_FUNC(sub_82DAEB10);
PPC_FUNC_IMPL(__imp__sub_82DAEB10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,19852
	ctx.r3.s64 = r11.s64 + 19852;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAEB20"))) PPC_WEAK_FUNC(sub_82DAEB20);
PPC_FUNC_IMPL(__imp__sub_82DAEB20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82db7a80
	sub_82DB7A80(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82daeb68
	if (cr6.eq) goto loc_82DAEB68;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,38
	ctx.r6.s64 = 38;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82DAEB68:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_82DAEB88"))) PPC_WEAK_FUNC(sub_82DAEB88);
PPC_FUNC_IMPL(__imp__sub_82DAEB88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82DAEBA0"))) PPC_WEAK_FUNC(sub_82DAEBA0);
PPC_FUNC_IMPL(__imp__sub_82DAEBA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r11,r11,420
	r11.s64 = r11.s64 + 420;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAEBB8"))) PPC_WEAK_FUNC(sub_82DAEBB8);
PPC_FUNC_IMPL(__imp__sub_82DAEBB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,420
	ctx.r3.s64 = r11.s64 + 420;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAEBC8"))) PPC_WEAK_FUNC(sub_82DAEBC8);
PPC_FUNC_IMPL(__imp__sub_82DAEBC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82DAEBE0"))) PPC_WEAK_FUNC(sub_82DAEBE0);
PPC_FUNC_IMPL(__imp__sub_82DAEBE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,1312
	r11.s64 = r11.s64 + 1312;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r10,420
	ctx.r10.s64 = ctx.r10.s64 + 420;
	// li r8,26
	ctx.r8.s64 = 26;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// sth r9,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r9.u16);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAEC18"))) PPC_WEAK_FUNC(sub_82DAEC18);
PPC_FUNC_IMPL(__imp__sub_82DAEC18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,1312
	ctx.r3.s64 = r11.s64 + 1312;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAEC28"))) PPC_WEAK_FUNC(sub_82DAEC28);
PPC_FUNC_IMPL(__imp__sub_82DAEC28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82dbd6c8
	sub_82DBD6C8(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82daec70
	if (cr6.eq) goto loc_82DAEC70;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,38
	ctx.r6.s64 = 38;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82DAEC70:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_82DAEC90"))) PPC_WEAK_FUNC(sub_82DAEC90);
PPC_FUNC_IMPL(__imp__sub_82DAEC90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82DAECA8"))) PPC_WEAK_FUNC(sub_82DAECA8);
PPC_FUNC_IMPL(__imp__sub_82DAECA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,20572
	r11.s64 = r11.s64 + 20572;
	// li r9,3
	ctx.r9.s64 = 3;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAECD0"))) PPC_WEAK_FUNC(sub_82DAECD0);
PPC_FUNC_IMPL(__imp__sub_82DAECD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,20572
	ctx.r3.s64 = r11.s64 + 20572;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAECE0"))) PPC_WEAK_FUNC(sub_82DAECE0);
PPC_FUNC_IMPL(__imp__sub_82DAECE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82DAECF8"))) PPC_WEAK_FUNC(sub_82DAECF8);
PPC_FUNC_IMPL(__imp__sub_82DAECF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,19172
	r11.s64 = r11.s64 + 19172;
	// li r9,7
	ctx.r9.s64 = 7;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAED20"))) PPC_WEAK_FUNC(sub_82DAED20);
PPC_FUNC_IMPL(__imp__sub_82DAED20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,19172
	ctx.r3.s64 = r11.s64 + 19172;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAED30"))) PPC_WEAK_FUNC(sub_82DAED30);
PPC_FUNC_IMPL(__imp__sub_82DAED30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x82dbddc0
	sub_82DBDDC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DAED40"))) PPC_WEAK_FUNC(sub_82DAED40);
PPC_FUNC_IMPL(__imp__sub_82DAED40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAED48"))) PPC_WEAK_FUNC(sub_82DAED48);
PPC_FUNC_IMPL(__imp__sub_82DAED48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82DAED60"))) PPC_WEAK_FUNC(sub_82DAED60);
PPC_FUNC_IMPL(__imp__sub_82DAED60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dbddc0
	sub_82DBDDC0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAED90"))) PPC_WEAK_FUNC(sub_82DAED90);
PPC_FUNC_IMPL(__imp__sub_82DAED90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x82dbd9a8
	sub_82DBD9A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DAEDA0"))) PPC_WEAK_FUNC(sub_82DAEDA0);
PPC_FUNC_IMPL(__imp__sub_82DAEDA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAEDA8"))) PPC_WEAK_FUNC(sub_82DAEDA8);
PPC_FUNC_IMPL(__imp__sub_82DAEDA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82DAEDC0"))) PPC_WEAK_FUNC(sub_82DAEDC0);
PPC_FUNC_IMPL(__imp__sub_82DAEDC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dbd9a8
	sub_82DBD9A8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAEDF0"))) PPC_WEAK_FUNC(sub_82DAEDF0);
PPC_FUNC_IMPL(__imp__sub_82DAEDF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x82dbd9c0
	sub_82DBD9C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DAEE00"))) PPC_WEAK_FUNC(sub_82DAEE00);
PPC_FUNC_IMPL(__imp__sub_82DAEE00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAEE08"))) PPC_WEAK_FUNC(sub_82DAEE08);
PPC_FUNC_IMPL(__imp__sub_82DAEE08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82DAEE20"))) PPC_WEAK_FUNC(sub_82DAEE20);
PPC_FUNC_IMPL(__imp__sub_82DAEE20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dbd9c0
	sub_82DBD9C0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAEE50"))) PPC_WEAK_FUNC(sub_82DAEE50);
PPC_FUNC_IMPL(__imp__sub_82DAEE50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82DAEE68"))) PPC_WEAK_FUNC(sub_82DAEE68);
PPC_FUNC_IMPL(__imp__sub_82DAEE68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r11,r11,-31352
	r11.s64 = r11.s64 + -31352;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r10,r10,-31312
	ctx.r10.s64 = ctx.r10.s64 + -31312;
	// sth r6,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r6.u16);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// addi r9,r9,-31292
	ctx.r9.s64 = ctx.r9.s64 + -31292;
	// addi r8,r8,-31324
	ctx.r8.s64 = ctx.r8.s64 + -31324;
	// addi r7,r7,2196
	ctx.r7.s64 = ctx.r7.s64 + 2196;
	// addi r6,r6,2184
	ctx.r6.s64 = ctx.r6.s64 + 2184;
	// addi r5,r5,2164
	ctx.r5.s64 = ctx.r5.s64 + 2164;
	// addi r11,r11,2152
	r11.s64 = r11.s64 + 2152;
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// addi r4,r4,2140
	ctx.r4.s64 = ctx.r4.s64 + 2140;
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAEEF0"))) PPC_WEAK_FUNC(sub_82DAEEF0);
PPC_FUNC_IMPL(__imp__sub_82DAEEF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,2196
	ctx.r3.s64 = r11.s64 + 2196;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAEF00"))) PPC_WEAK_FUNC(sub_82DAEF00);
PPC_FUNC_IMPL(__imp__sub_82DAEF00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82dbfe68
	sub_82DBFE68(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82daef48
	if (cr6.eq) goto loc_82DAEF48;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,38
	ctx.r6.s64 = 38;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82DAEF48:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_82DAEF68"))) PPC_WEAK_FUNC(sub_82DAEF68);
PPC_FUNC_IMPL(__imp__sub_82DAEF68) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82daef00
	sub_82DAEF00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DAEF70"))) PPC_WEAK_FUNC(sub_82DAEF70);
PPC_FUNC_IMPL(__imp__sub_82DAEF70) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
	// b 0x82daef00
	sub_82DAEF00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DAEF78"))) PPC_WEAK_FUNC(sub_82DAEF78);
PPC_FUNC_IMPL(__imp__sub_82DAEF78) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82daef00
	sub_82DAEF00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DAEF80"))) PPC_WEAK_FUNC(sub_82DAEF80);
PPC_FUNC_IMPL(__imp__sub_82DAEF80) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-20
	ctx.r3.s64 = ctx.r3.s64 + -20;
	// b 0x82daef00
	sub_82DAEF00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DAEF88"))) PPC_WEAK_FUNC(sub_82DAEF88);
PPC_FUNC_IMPL(__imp__sub_82DAEF88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82DAEFA0"))) PPC_WEAK_FUNC(sub_82DAEFA0);
PPC_FUNC_IMPL(__imp__sub_82DAEFA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r11,r11,68
	r11.s64 = r11.s64 + 68;
	// addi r10,r10,14164
	ctx.r10.s64 = ctx.r10.s64 + 14164;
	// addi r9,r9,9484
	ctx.r9.s64 = ctx.r9.s64 + 9484;
	// li r7,19
	ctx.r7.s64 = 19;
	// sth r8,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r8.u16);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAEFE0"))) PPC_WEAK_FUNC(sub_82DAEFE0);
PPC_FUNC_IMPL(__imp__sub_82DAEFE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,14164
	ctx.r3.s64 = r11.s64 + 14164;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAEFF0"))) PPC_WEAK_FUNC(sub_82DAEFF0);
PPC_FUNC_IMPL(__imp__sub_82DAEFF0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-20
	ctx.r3.s64 = ctx.r3.s64 + -20;
	// b 0x82daeff8
	sub_82DAEFF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DAEFF8"))) PPC_WEAK_FUNC(sub_82DAEFF8);
PPC_FUNC_IMPL(__imp__sub_82DAEFF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82db4b98
	sub_82DB4B98(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82daf040
	if (cr6.eq) goto loc_82DAF040;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,38
	ctx.r6.s64 = 38;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82DAF040:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_82DAF060"))) PPC_WEAK_FUNC(sub_82DAF060);
PPC_FUNC_IMPL(__imp__sub_82DAF060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82DAF078"))) PPC_WEAK_FUNC(sub_82DAF078);
PPC_FUNC_IMPL(__imp__sub_82DAF078) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r11,r11,68
	r11.s64 = r11.s64 + 68;
	// addi r10,r10,2600
	ctx.r10.s64 = ctx.r10.s64 + 2600;
	// addi r9,r9,2564
	ctx.r9.s64 = ctx.r9.s64 + 2564;
	// li r7,2
	ctx.r7.s64 = 2;
	// sth r8,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r8.u16);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAF0B8"))) PPC_WEAK_FUNC(sub_82DAF0B8);
PPC_FUNC_IMPL(__imp__sub_82DAF0B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,2600
	ctx.r3.s64 = r11.s64 + 2600;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAF0C8"))) PPC_WEAK_FUNC(sub_82DAF0C8);
PPC_FUNC_IMPL(__imp__sub_82DAF0C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82dc01b0
	sub_82DC01B0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82daf110
	if (cr6.eq) goto loc_82DAF110;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,38
	ctx.r6.s64 = 38;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82DAF110:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_82DAF130"))) PPC_WEAK_FUNC(sub_82DAF130);
PPC_FUNC_IMPL(__imp__sub_82DAF130) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82daf0c8
	sub_82DAF0C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DAF138"))) PPC_WEAK_FUNC(sub_82DAF138);
PPC_FUNC_IMPL(__imp__sub_82DAF138) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x82dc0a70
	sub_82DC0A70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DAF148"))) PPC_WEAK_FUNC(sub_82DAF148);
PPC_FUNC_IMPL(__imp__sub_82DAF148) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAF150"))) PPC_WEAK_FUNC(sub_82DAF150);
PPC_FUNC_IMPL(__imp__sub_82DAF150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82DAF168"))) PPC_WEAK_FUNC(sub_82DAF168);
PPC_FUNC_IMPL(__imp__sub_82DAF168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dc0a70
	sub_82DC0A70(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAF198"))) PPC_WEAK_FUNC(sub_82DAF198);
PPC_FUNC_IMPL(__imp__sub_82DAF198) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x82dc0aa0
	sub_82DC0AA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DAF1A8"))) PPC_WEAK_FUNC(sub_82DAF1A8);
PPC_FUNC_IMPL(__imp__sub_82DAF1A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAF1B0"))) PPC_WEAK_FUNC(sub_82DAF1B0);
PPC_FUNC_IMPL(__imp__sub_82DAF1B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82DAF1C8"))) PPC_WEAK_FUNC(sub_82DAF1C8);
PPC_FUNC_IMPL(__imp__sub_82DAF1C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dc0aa0
	sub_82DC0AA0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAF1F8"))) PPC_WEAK_FUNC(sub_82DAF1F8);
PPC_FUNC_IMPL(__imp__sub_82DAF1F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82DAF210"))) PPC_WEAK_FUNC(sub_82DAF210);
PPC_FUNC_IMPL(__imp__sub_82DAF210) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,13452
	r11.s64 = r11.s64 + 13452;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r10,420
	ctx.r10.s64 = ctx.r10.s64 + 420;
	// li r8,14
	ctx.r8.s64 = 14;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// sth r9,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r9.u16);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAF248"))) PPC_WEAK_FUNC(sub_82DAF248);
PPC_FUNC_IMPL(__imp__sub_82DAF248) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,13452
	ctx.r3.s64 = r11.s64 + 13452;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAF258"))) PPC_WEAK_FUNC(sub_82DAF258);
PPC_FUNC_IMPL(__imp__sub_82DAF258) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r5,-96
	r30.s64 = ctx.r5.s64 + -96;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82daf2cc
	if (cr6.lt) goto loc_82DAF2CC;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// bgt cr6,0x82daf2cc
	if (cr6.gt) goto loc_82DAF2CC;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r9,r31,96
	ctx.r9.s64 = r31.s64 + 96;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82daf2c0
	if (!cr6.eq) goto loc_82DAF2C0;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r11,96
	ctx.r3.s64 = r11.s64 + 96;
	// stw r10,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// b 0x82daf2d0
	goto loc_82DAF2D0;
loc_82DAF2C0:
	// li r3,96
	ctx.r3.s64 = 96;
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// b 0x82daf2d0
	goto loc_82DAF2D0;
loc_82DAF2CC:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82DAF2D0:
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

__attribute__((alias("__imp__sub_82DAF2E8"))) PPC_WEAK_FUNC(sub_82DAF2E8);
PPC_FUNC_IMPL(__imp__sub_82DAF2E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82DAF300"))) PPC_WEAK_FUNC(sub_82DAF300);
PPC_FUNC_IMPL(__imp__sub_82DAF300) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,3100
	r11.s64 = r11.s64 + 3100;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r10,420
	ctx.r10.s64 = ctx.r10.s64 + 420;
	// li r8,13
	ctx.r8.s64 = 13;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// sth r9,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r9.u16);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAF338"))) PPC_WEAK_FUNC(sub_82DAF338);
PPC_FUNC_IMPL(__imp__sub_82DAF338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,3100
	ctx.r3.s64 = r11.s64 + 3100;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAF348"))) PPC_WEAK_FUNC(sub_82DAF348);
PPC_FUNC_IMPL(__imp__sub_82DAF348) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x82dae3b0
	sub_82DAE3B0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// clrlwi r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	// addi r11,r11,14712
	r11.s64 = r11.s64 + 14712;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq cr6,0x82daf3a0
	if (cr6.eq) goto loc_82DAF3A0;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,38
	ctx.r6.s64 = 38;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82DAF3A0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_82DAF3C0"))) PPC_WEAK_FUNC(sub_82DAF3C0);
PPC_FUNC_IMPL(__imp__sub_82DAF3C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82DAF3D8"))) PPC_WEAK_FUNC(sub_82DAF3D8);
PPC_FUNC_IMPL(__imp__sub_82DAF3D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,3340
	r11.s64 = r11.s64 + 3340;
	// li r9,24
	ctx.r9.s64 = 24;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAF400"))) PPC_WEAK_FUNC(sub_82DAF400);
PPC_FUNC_IMPL(__imp__sub_82DAF400) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,3340
	ctx.r3.s64 = r11.s64 + 3340;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAF410"))) PPC_WEAK_FUNC(sub_82DAF410);
PPC_FUNC_IMPL(__imp__sub_82DAF410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lbz r11,108(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 108);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAF420"))) PPC_WEAK_FUNC(sub_82DAF420);
PPC_FUNC_IMPL(__imp__sub_82DAF420) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,96(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mullw r11,r11,r5
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r5.s32);
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAF440"))) PPC_WEAK_FUNC(sub_82DAF440);
PPC_FUNC_IMPL(__imp__sub_82DAF440) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bd8
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r29,0(r4)
	r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// addi r25,r11,-1
	r25.s64 = r11.s64 + -1;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// lfs f5,3084(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3084);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,-176(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -176, temp.u32);
	// stfs f5,-168(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -168, temp.u32);
	// lfs f7,3080(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	ctx.f7.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f7,-172(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -172, temp.u32);
	// lfs f0,3164(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3164);
	f0.f64 = double(temp.f32);
	// stfs f0,-164(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -164, temp.u32);
	// blt cr6,0x82daf788
	if (cr6.lt) goto loc_82DAF788;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r26,r3,64
	r26.s64 = ctx.r3.s64 + 64;
	// addi r27,r11,5168
	r27.s64 = r11.s64 + 5168;
	// addi r11,r1,-176
	r11.s64 = ctx.r1.s64 + -176;
	// addi r30,r3,16
	r30.s64 = ctx.r3.s64 + 16;
	// addi r28,r3,48
	r28.s64 = ctx.r3.s64 + 48;
	// li r24,32
	r24.s64 = 32;
	// lvx128 v10,r0,r11
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82DAF4A8:
	// stvx128 v10,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,-144
	r11.s64 = ctx.r1.s64 + -144;
	// lvx128 v0,r0,r29
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lvx128 v11,r0,r26
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r26.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vaddfp v9,v0,v11
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v11.f32)));
	// lvx128 v13,r0,r28
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r28.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v11,v0,v13
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// lvx128 v12,r0,r27
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r27.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r5,-1
	ctx.r8.s64 = ctx.r5.s64 + -1;
	// vmaddfp v0,v9,v13,v12
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v12.f32)));
	// stvx128 v11,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,-128
	r11.s64 = ctx.r1.s64 + -128;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,-128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -128);
	// lwz r9,-120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -120);
	// rlwinm r11,r11,26,16,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0xFFFF;
	// rlwinm r9,r9,26,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0xFFFF;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// bge cr6,0x82daf774
	if (!cr6.lt) goto loc_82DAF774;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// bge cr6,0x82daf774
	if (!cr6.lt) goto loc_82DAF774;
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// lbz r8,108(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 108);
	// extsw r6,r11
	ctx.r6.s64 = r11.s32;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// rotlwi r8,r5,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// std r7,-200(r1)
	PPC_STORE_U64(ctx.r1.u32 + -200, ctx.r7.u64);
	// mullw r4,r8,r9
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// std r6,-192(r1)
	PPC_STORE_U64(ctx.r1.u32 + -192, ctx.r6.u64);
	// lwz r7,96(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// add r4,r4,r11
	ctx.r4.u64 = ctx.r4.u64 + r11.u64;
	// lfd f0,-200(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -200);
	// lfd f13,-192(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -192);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f6,f0
	ctx.f6.f64 = double(float(f0.f64));
	// frsp f0,f13
	f0.f64 = double(float(ctx.f13.f64));
	// lfs f13,-144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -144);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 - f0.f64));
	// lfs f13,-136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -136);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f6
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f6.f64));
	// beq cr6,0x82daf604
	if (cr6.eq) goto loc_82DAF604;
	// mullw r8,r6,r8
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + r11.u64;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mr r31,r11
	r31.u64 = r11.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r4,r7
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmr f8,f12
	ctx.f8.f64 = ctx.f12.f64;
	// lfsx f9,r8,r7
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	ctx.f9.f64 = double(temp.f32);
	// rotlwi r8,r7,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// ble cr6,0x82daf5cc
	if (!cr6.gt) goto loc_82DAF5CC;
	// mullw r9,r5,r9
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f11,r9,r8
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fsubs f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// fmuls f0,f10,f0
	f0.f64 = double(float(ctx.f10.f64 * f0.f64));
	// fneg f10,f10
	ctx.f10.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// stfs f10,0(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fneg f10,f11
	ctx.f10.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f10,8(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fmadds f0,f11,f13,f0
	f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + f0.f64));
	// fadds f0,f0,f12
	f0.f64 = double(float(f0.f64 + ctx.f12.f64));
	// b 0x82daf6ac
	goto loc_82DAF6AC;
loc_82DAF5CC:
	// mullw r9,r6,r5
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f11,r9,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f9,f11
	ctx.f10.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// fsubs f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fmuls f0,f10,f0
	f0.f64 = double(float(ctx.f10.f64 * f0.f64));
	// fneg f10,f10
	ctx.f10.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// stfs f10,0(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fneg f10,f11
	ctx.f10.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f10,8(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fmadds f0,f11,f13,f0
	f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + f0.f64));
	// fadds f0,f0,f12
	f0.f64 = double(float(f0.f64 + ctx.f12.f64));
	// b 0x82daf6ac
	goto loc_82DAF6AC;
loc_82DAF604:
	// fadds f12,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 + f0.f64));
	// mullw r8,r8,r6
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + r11.u64;
	// fcmpu cr6,f12,f7
	cr6.compare(ctx.f12.f64, ctx.f7.f64);
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r11,1
	r31.s64 = r11.s64 + 1;
	// lfsx f12,r4,r7
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f10,r8,r7
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	ctx.f10.f64 = double(temp.f32);
	// lwz r8,96(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// fmr f8,f12
	ctx.f8.f64 = ctx.f12.f64;
	// ble cr6,0x82daf678
	if (!cr6.gt) goto loc_82DAF678;
	// mullw r9,r6,r5
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// fsubs f9,f0,f7
	ctx.f9.f64 = double(float(f0.f64 - ctx.f7.f64));
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r9,r8
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	f0.f64 = double(temp.f32);
	// fsubs f11,f0,f10
	ctx.f11.f64 = double(float(f0.f64 - ctx.f10.f64));
	// fsubs f0,f0,f12
	f0.f64 = double(float(f0.f64 - ctx.f12.f64));
	// fneg f10,f11
	ctx.f10.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f10,0(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 * ctx.f13.f64));
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// stfs f0,8(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fmadds f0,f9,f11,f13
	f0.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fadds f0,f0,f12
	f0.f64 = double(float(f0.f64 + ctx.f12.f64));
	// b 0x82daf6ac
	goto loc_82DAF6AC;
loc_82DAF678:
	// mullw r9,r5,r9
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f11,r9,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fsubs f10,f10,f11
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fmuls f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fneg f12,f10
	ctx.f12.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// stfs f12,8(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fmadds f0,f10,f13,f0
	f0.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + f0.f64));
	// fadds f0,f0,f11
	f0.f64 = double(float(f0.f64 + ctx.f11.f64));
loc_82DAF6AC:
	// lvx128 v13,r0,r10
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r1,-96
	ctx.r9.s64 = ctx.r1.s64 + -96;
	// lvx128 v0,r0,r28
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r28.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r10,8
	r11.s64 = ctx.r10.s64 + 8;
	// vmulfp128 v0,v13,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// vmsum3fp128 v13,v0,v0
	_mm_store_ps(ctx.v13.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vor v12,v0,v0
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// stvx128 v13,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,-96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -96);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fdivs f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 / ctx.f13.f64));
	// stfs f13,-112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -112, temp.u32);
	// addi r9,r1,-112
	ctx.r9.s64 = ctx.r1.s64 + -112;
	// lvx128 v0,r0,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r1,-112
	ctx.r9.s64 = ctx.r1.s64 + -112;
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v0,v12,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lbz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 28);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82daf720
	if (!cr6.eq) goto loc_82DAF720;
	// lfs f13,-140(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -140);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 - f0.f64));
	// lfs f12,12(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f0,f0,f13,f12
	f0.f64 = double(float(f0.f64 * ctx.f13.f64 - ctx.f12.f64));
	// b 0x82daf770
	goto loc_82DAF770;
loc_82DAF720:
	// extsw r9,r31
	ctx.r9.s64 = r31.s32;
	// stfs f5,-148(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -148, temp.u32);
	// stfs f8,-156(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -156, temp.u32);
	// addi r8,r1,-208
	ctx.r8.s64 = ctx.r1.s64 + -208;
	// stfs f6,-152(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + -152, temp.u32);
	// lvx128 v13,r3,r24
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + r24.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// std r9,-176(r1)
	PPC_STORE_U64(ctx.r1.u32 + -176, ctx.r9.u64);
	// lfd f0,-176(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfs f0,-160(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -160, temp.u32);
	// addi r9,r1,-160
	ctx.r9.s64 = ctx.r1.s64 + -160;
	// lvx128 v12,r0,r9
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp v12,v11,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v13,v12,v13
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)));
	// vmsum3fp128 v0,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32), 0xEF));
	// stvewx v0,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,12(r29)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 12);
	f0.f64 = double(temp.f32);
	// lfs f13,-208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -208);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 - f0.f64));
loc_82DAF770:
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
loc_82DAF774:
	// addi r25,r25,-1
	r25.s64 = r25.s64 + -1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// bge cr6,0x82daf4a8
	if (!cr6.lt) goto loc_82DAF4A8;
loc_82DAF788:
	// b 0x82ca2c28
	return;
}

__attribute__((alias("__imp__sub_82DAF790"))) PPC_WEAK_FUNC(sub_82DAF790);
PPC_FUNC_IMPL(__imp__sub_82DAF790) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82daf7d8
	if (!cr6.eq) goto loc_82DAF7D8;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82DAF7D8:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// clrlwi r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	// addi r11,r11,14712
	r11.s64 = r11.s64 + 14712;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq cr6,0x82daf80c
	if (cr6.eq) goto loc_82DAF80C;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,38
	ctx.r6.s64 = 38;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82DAF80C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_82DAF828"))) PPC_WEAK_FUNC(sub_82DAF828);
PPC_FUNC_IMPL(__imp__sub_82DAF828) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAF830"))) PPC_WEAK_FUNC(sub_82DAF830);
PPC_FUNC_IMPL(__imp__sub_82DAF830) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82DAF848"))) PPC_WEAK_FUNC(sub_82DAF848);
PPC_FUNC_IMPL(__imp__sub_82DAF848) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,19988
	r11.s64 = r11.s64 + 19988;
	// li r9,8
	ctx.r9.s64 = 8;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAF870"))) PPC_WEAK_FUNC(sub_82DAF870);
PPC_FUNC_IMPL(__imp__sub_82DAF870) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,19988
	ctx.r3.s64 = r11.s64 + 19988;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAF880"))) PPC_WEAK_FUNC(sub_82DAF880);
PPC_FUNC_IMPL(__imp__sub_82DAF880) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82DAF898"))) PPC_WEAK_FUNC(sub_82DAF898);
PPC_FUNC_IMPL(__imp__sub_82DAF898) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,3812
	r11.s64 = r11.s64 + 3812;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r10,420
	ctx.r10.s64 = ctx.r10.s64 + 420;
	// li r8,28
	ctx.r8.s64 = 28;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// sth r9,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r9.u16);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAF8D0"))) PPC_WEAK_FUNC(sub_82DAF8D0);
PPC_FUNC_IMPL(__imp__sub_82DAF8D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,3812
	ctx.r3.s64 = r11.s64 + 3812;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAF8E0"))) PPC_WEAK_FUNC(sub_82DAF8E0);
PPC_FUNC_IMPL(__imp__sub_82DAF8E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x82dae3b0
	sub_82DAE3B0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// clrlwi r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	// addi r11,r11,14712
	r11.s64 = r11.s64 + 14712;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq cr6,0x82daf938
	if (cr6.eq) goto loc_82DAF938;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,38
	ctx.r6.s64 = 38;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82DAF938:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_82DAF958"))) PPC_WEAK_FUNC(sub_82DAF958);
PPC_FUNC_IMPL(__imp__sub_82DAF958) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82DAF970"))) PPC_WEAK_FUNC(sub_82DAF970);
PPC_FUNC_IMPL(__imp__sub_82DAF970) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,10420
	r11.s64 = r11.s64 + 10420;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r10,420
	ctx.r10.s64 = ctx.r10.s64 + 420;
	// li r8,11
	ctx.r8.s64 = 11;
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// sth r9,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r9.u16);
	// li r9,32
	ctx.r9.s64 = 32;
	// stw r10,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// lvx128 v0,r11,r7
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r11.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r3,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAF9C8"))) PPC_WEAK_FUNC(sub_82DAF9C8);
PPC_FUNC_IMPL(__imp__sub_82DAF9C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,10420
	ctx.r3.s64 = r11.s64 + 10420;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAF9D8"))) PPC_WEAK_FUNC(sub_82DAF9D8);
PPC_FUNC_IMPL(__imp__sub_82DAF9D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82DAF9F0"))) PPC_WEAK_FUNC(sub_82DAF9F0);
PPC_FUNC_IMPL(__imp__sub_82DAF9F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x82db7258
	sub_82DB7258(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DAFA00"))) PPC_WEAK_FUNC(sub_82DAFA00);
PPC_FUNC_IMPL(__imp__sub_82DAFA00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAFA08"))) PPC_WEAK_FUNC(sub_82DAFA08);
PPC_FUNC_IMPL(__imp__sub_82DAFA08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82db7258
	sub_82DB7258(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAFA38"))) PPC_WEAK_FUNC(sub_82DAFA38);
PPC_FUNC_IMPL(__imp__sub_82DAFA38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82DAFA50"))) PPC_WEAK_FUNC(sub_82DAFA50);
PPC_FUNC_IMPL(__imp__sub_82DAFA50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,10236
	r11.s64 = r11.s64 + 10236;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r10,420
	ctx.r10.s64 = ctx.r10.s64 + 420;
	// li r8,21
	ctx.r8.s64 = 21;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// sth r9,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r9.u16);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAFA88"))) PPC_WEAK_FUNC(sub_82DAFA88);
PPC_FUNC_IMPL(__imp__sub_82DAFA88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,10236
	ctx.r3.s64 = r11.s64 + 10236;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAFA98"))) PPC_WEAK_FUNC(sub_82DAFA98);
PPC_FUNC_IMPL(__imp__sub_82DAFA98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82DAFAB0"))) PPC_WEAK_FUNC(sub_82DAFAB0);
PPC_FUNC_IMPL(__imp__sub_82DAFAB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-31128
	r11.s64 = r11.s64 + -31128;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAFAD0"))) PPC_WEAK_FUNC(sub_82DAFAD0);
PPC_FUNC_IMPL(__imp__sub_82DAFAD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-31128
	ctx.r3.s64 = r11.s64 + -31128;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAFAE0"))) PPC_WEAK_FUNC(sub_82DAFAE0);
PPC_FUNC_IMPL(__imp__sub_82DAFAE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82DAFAF8"))) PPC_WEAK_FUNC(sub_82DAFAF8);
PPC_FUNC_IMPL(__imp__sub_82DAFAF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r11,r11,68
	r11.s64 = r11.s64 + 68;
	// addi r10,r10,4892
	ctx.r10.s64 = ctx.r10.s64 + 4892;
	// addi r9,r9,4856
	ctx.r9.s64 = ctx.r9.s64 + 4856;
	// li r7,2
	ctx.r7.s64 = 2;
	// sth r8,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r8.u16);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAFB38"))) PPC_WEAK_FUNC(sub_82DAFB38);
PPC_FUNC_IMPL(__imp__sub_82DAFB38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,4892
	ctx.r3.s64 = r11.s64 + 4892;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAFB48"))) PPC_WEAK_FUNC(sub_82DAFB48);
PPC_FUNC_IMPL(__imp__sub_82DAFB48) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82dafb50
	sub_82DAFB50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DAFB50"))) PPC_WEAK_FUNC(sub_82DAFB50);
PPC_FUNC_IMPL(__imp__sub_82DAFB50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82db2508
	sub_82DB2508(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82dafb98
	if (cr6.eq) goto loc_82DAFB98;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,38
	ctx.r6.s64 = 38;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82DAFB98:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_82DAFBB8"))) PPC_WEAK_FUNC(sub_82DAFBB8);
PPC_FUNC_IMPL(__imp__sub_82DAFBB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAFBC0"))) PPC_WEAK_FUNC(sub_82DAFBC0);
PPC_FUNC_IMPL(__imp__sub_82DAFBC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAFBC8"))) PPC_WEAK_FUNC(sub_82DAFBC8);
PPC_FUNC_IMPL(__imp__sub_82DAFBC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x82dac7b0
	sub_82DAC7B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DAFBD8"))) PPC_WEAK_FUNC(sub_82DAFBD8);
PPC_FUNC_IMPL(__imp__sub_82DAFBD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAFBE0"))) PPC_WEAK_FUNC(sub_82DAFBE0);
PPC_FUNC_IMPL(__imp__sub_82DAFBE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82DAFBF8"))) PPC_WEAK_FUNC(sub_82DAFBF8);
PPC_FUNC_IMPL(__imp__sub_82DAFBF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dac7b0
	sub_82DAC7B0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAFC28"))) PPC_WEAK_FUNC(sub_82DAFC28);
PPC_FUNC_IMPL(__imp__sub_82DAFC28) {
	PPC_FUNC_PROLOGUE();
	// b 0x82dac118
	sub_82DAC118(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DAFC30"))) PPC_WEAK_FUNC(sub_82DAFC30);
PPC_FUNC_IMPL(__imp__sub_82DAFC30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82DAFC48"))) PPC_WEAK_FUNC(sub_82DAFC48);
PPC_FUNC_IMPL(__imp__sub_82DAFC48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,19652
	r11.s64 = r11.s64 + 19652;
	// li r9,5
	ctx.r9.s64 = 5;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAFC70"))) PPC_WEAK_FUNC(sub_82DAFC70);
PPC_FUNC_IMPL(__imp__sub_82DAFC70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,19652
	ctx.r3.s64 = r11.s64 + 19652;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAFC80"))) PPC_WEAK_FUNC(sub_82DAFC80);
PPC_FUNC_IMPL(__imp__sub_82DAFC80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAFC88"))) PPC_WEAK_FUNC(sub_82DAFC88);
PPC_FUNC_IMPL(__imp__sub_82DAFC88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82DAFCA0"))) PPC_WEAK_FUNC(sub_82DAFCA0);
PPC_FUNC_IMPL(__imp__sub_82DAFCA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82dafce4
	if (cr6.eq) goto loc_82DAFCE4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82db62f8
	sub_82DB62F8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,6628
	r11.s64 = r11.s64 + 6628;
	// addi r10,r10,6592
	ctx.r10.s64 = ctx.r10.s64 + 6592;
	// li r9,20
	ctx.r9.s64 = 20;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
loc_82DAFCE4:
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

__attribute__((alias("__imp__sub_82DAFCF8"))) PPC_WEAK_FUNC(sub_82DAFCF8);
PPC_FUNC_IMPL(__imp__sub_82DAFCF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82db62f8
	sub_82DB62F8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,6628
	ctx.r3.s64 = r11.s64 + 6628;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAFD28"))) PPC_WEAK_FUNC(sub_82DAFD28);
PPC_FUNC_IMPL(__imp__sub_82DAFD28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82dafd68
	if (!cr6.eq) goto loc_82DAFD68;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// rlwinm r5,r11,1,1,30
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x7FFFFFFE;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82DAFD68:
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82dafd98
	if (!cr6.eq) goto loc_82DAFD98;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// li r6,22
	ctx.r6.s64 = 22;
	// mulli r5,r11,56
	ctx.r5.s64 = r11.s64 * 56;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82DAFD98:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r9,r31,16
	ctx.r9.s64 = r31.s64 + 16;
	// bne cr6,0x82dafda8
	if (!cr6.eq) goto loc_82DAFDA8;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82DAFDA8:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,68
	r11.s64 = r11.s64 + 68;
	// addi r10,r10,14712
	ctx.r10.s64 = ctx.r10.s64 + 14712;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82DAFDD8"))) PPC_WEAK_FUNC(sub_82DAFDD8);
PPC_FUNC_IMPL(__imp__sub_82DAFDD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAFDE0"))) PPC_WEAK_FUNC(sub_82DAFDE0);
PPC_FUNC_IMPL(__imp__sub_82DAFDE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAFDE8"))) PPC_WEAK_FUNC(sub_82DAFDE8);
PPC_FUNC_IMPL(__imp__sub_82DAFDE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82DAFE00"))) PPC_WEAK_FUNC(sub_82DAFE00);
PPC_FUNC_IMPL(__imp__sub_82DAFE00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r11,r11,-31352
	r11.s64 = r11.s64 + -31352;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r10,r10,-31312
	ctx.r10.s64 = ctx.r10.s64 + -31312;
	// sth r6,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r6.u16);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// addi r9,r9,-31292
	ctx.r9.s64 = ctx.r9.s64 + -31292;
	// addi r8,r8,-31324
	ctx.r8.s64 = ctx.r8.s64 + -31324;
	// addi r7,r7,7780
	ctx.r7.s64 = ctx.r7.s64 + 7780;
	// addi r6,r6,7768
	ctx.r6.s64 = ctx.r6.s64 + 7768;
	// addi r5,r5,7748
	ctx.r5.s64 = ctx.r5.s64 + 7748;
	// addi r11,r11,7736
	r11.s64 = r11.s64 + 7736;
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// addi r4,r4,7724
	ctx.r4.s64 = ctx.r4.s64 + 7724;
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAFE88"))) PPC_WEAK_FUNC(sub_82DAFE88);
PPC_FUNC_IMPL(__imp__sub_82DAFE88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,7780
	ctx.r3.s64 = r11.s64 + 7780;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAFE98"))) PPC_WEAK_FUNC(sub_82DAFE98);
PPC_FUNC_IMPL(__imp__sub_82DAFE98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82db0970
	sub_82DB0970(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82dafee0
	if (cr6.eq) goto loc_82DAFEE0;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,38
	ctx.r6.s64 = 38;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82DAFEE0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_82DAFF00"))) PPC_WEAK_FUNC(sub_82DAFF00);
PPC_FUNC_IMPL(__imp__sub_82DAFF00) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82dafe98
	sub_82DAFE98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DAFF08"))) PPC_WEAK_FUNC(sub_82DAFF08);
PPC_FUNC_IMPL(__imp__sub_82DAFF08) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
	// b 0x82dafe98
	sub_82DAFE98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DAFF10"))) PPC_WEAK_FUNC(sub_82DAFF10);
PPC_FUNC_IMPL(__imp__sub_82DAFF10) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82dafe98
	sub_82DAFE98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DAFF18"))) PPC_WEAK_FUNC(sub_82DAFF18);
PPC_FUNC_IMPL(__imp__sub_82DAFF18) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-20
	ctx.r3.s64 = ctx.r3.s64 + -20;
	// b 0x82dafe98
	sub_82DAFE98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DAFF20"))) PPC_WEAK_FUNC(sub_82DAFF20);
PPC_FUNC_IMPL(__imp__sub_82DAFF20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAFF28"))) PPC_WEAK_FUNC(sub_82DAFF28);
PPC_FUNC_IMPL(__imp__sub_82DAFF28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82DAFF40"))) PPC_WEAK_FUNC(sub_82DAFF40);
PPC_FUNC_IMPL(__imp__sub_82DAFF40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x82dc1fe0
	sub_82DC1FE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DAFF50"))) PPC_WEAK_FUNC(sub_82DAFF50);
PPC_FUNC_IMPL(__imp__sub_82DAFF50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAFF58"))) PPC_WEAK_FUNC(sub_82DAFF58);
PPC_FUNC_IMPL(__imp__sub_82DAFF58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dc1fe0
	sub_82DC1FE0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAFF88"))) PPC_WEAK_FUNC(sub_82DAFF88);
PPC_FUNC_IMPL(__imp__sub_82DAFF88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, r11.u16);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DAFFA8"))) PPC_WEAK_FUNC(sub_82DAFFA8);
PPC_FUNC_IMPL(__imp__sub_82DAFFA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82db000c
	if (cr6.eq) goto loc_82DB000C;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmpwi cr6,r10,10
	cr6.compare<int32_t>(ctx.r10.s32, 10, xer);
	// bne cr6,0x82daffe8
	if (!cr6.eq) goto loc_82DAFFE8;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82DAFFE8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x82db000c
	if (!cr6.eq) goto loc_82DB000C;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82DB000C:
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

__attribute__((alias("__imp__sub_82DB0020"))) PPC_WEAK_FUNC(sub_82DB0020);
PPC_FUNC_IMPL(__imp__sub_82DB0020) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB0028"))) PPC_WEAK_FUNC(sub_82DB0028);
PPC_FUNC_IMPL(__imp__sub_82DB0028) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x82db62f8
	sub_82DB62F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB0038"))) PPC_WEAK_FUNC(sub_82DB0038);
PPC_FUNC_IMPL(__imp__sub_82DB0038) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB0040"))) PPC_WEAK_FUNC(sub_82DB0040);
PPC_FUNC_IMPL(__imp__sub_82DB0040) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82DB0058"))) PPC_WEAK_FUNC(sub_82DB0058);
PPC_FUNC_IMPL(__imp__sub_82DB0058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82db62f8
	sub_82DB62F8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB0088"))) PPC_WEAK_FUNC(sub_82DB0088);
PPC_FUNC_IMPL(__imp__sub_82DB0088) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82DB00A0"))) PPC_WEAK_FUNC(sub_82DB00A0);
PPC_FUNC_IMPL(__imp__sub_82DB00A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x82dc3800
	sub_82DC3800(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB00B0"))) PPC_WEAK_FUNC(sub_82DB00B0);
PPC_FUNC_IMPL(__imp__sub_82DB00B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB00B8"))) PPC_WEAK_FUNC(sub_82DB00B8);
PPC_FUNC_IMPL(__imp__sub_82DB00B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dc3800
	sub_82DC3800(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB00E8"))) PPC_WEAK_FUNC(sub_82DB00E8);
PPC_FUNC_IMPL(__imp__sub_82DB00E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB00F0"))) PPC_WEAK_FUNC(sub_82DB00F0);
PPC_FUNC_IMPL(__imp__sub_82DB00F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82DB0108"))) PPC_WEAK_FUNC(sub_82DB0108);
PPC_FUNC_IMPL(__imp__sub_82DB0108) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,8960
	r11.s64 = r11.s64 + 8960;
	// li r9,22
	ctx.r9.s64 = 22;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB0130"))) PPC_WEAK_FUNC(sub_82DB0130);
PPC_FUNC_IMPL(__imp__sub_82DB0130) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,8960
	ctx.r3.s64 = r11.s64 + 8960;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB0140"))) PPC_WEAK_FUNC(sub_82DB0140);
PPC_FUNC_IMPL(__imp__sub_82DB0140) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82db0188
	if (!cr6.eq) goto loc_82DB0188;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r5,r11,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82DB0188:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// clrlwi r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	// addi r11,r11,14712
	r11.s64 = r11.s64 + 14712;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq cr6,0x82db01bc
	if (cr6.eq) goto loc_82DB01BC;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,38
	ctx.r6.s64 = 38;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82DB01BC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_82DB01D8"))) PPC_WEAK_FUNC(sub_82DB01D8);
PPC_FUNC_IMPL(__imp__sub_82DB01D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82DB01F0"))) PPC_WEAK_FUNC(sub_82DB01F0);
PPC_FUNC_IMPL(__imp__sub_82DB01F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,9476
	r11.s64 = r11.s64 + 9476;
	// li r9,18
	ctx.r9.s64 = 18;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB0218"))) PPC_WEAK_FUNC(sub_82DB0218);
PPC_FUNC_IMPL(__imp__sub_82DB0218) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,9476
	ctx.r3.s64 = r11.s64 + 9476;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB0228"))) PPC_WEAK_FUNC(sub_82DB0228);
PPC_FUNC_IMPL(__imp__sub_82DB0228) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB0230"))) PPC_WEAK_FUNC(sub_82DB0230);
PPC_FUNC_IMPL(__imp__sub_82DB0230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82DB0248"))) PPC_WEAK_FUNC(sub_82DB0248);
PPC_FUNC_IMPL(__imp__sub_82DB0248) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r31{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82db02cc
	if (cr6.eq) goto loc_82DB02CC;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r31,1
	r31.s64 = 1;
	// addi r11,r11,-31352
	r11.s64 = r11.s64 + -31352;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// sth r31,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, r31.u16);
	// addi r10,r10,-31312
	ctx.r10.s64 = ctx.r10.s64 + -31312;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// addi r9,r9,-31292
	ctx.r9.s64 = ctx.r9.s64 + -31292;
	// addi r8,r8,-31324
	ctx.r8.s64 = ctx.r8.s64 + -31324;
	// addi r7,r7,-31144
	ctx.r7.s64 = ctx.r7.s64 + -31144;
	// addi r6,r6,-31156
	ctx.r6.s64 = ctx.r6.s64 + -31156;
	// addi r5,r5,-31176
	ctx.r5.s64 = ctx.r5.s64 + -31176;
	// addi r11,r11,-31188
	r11.s64 = r11.s64 + -31188;
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// addi r4,r4,-31200
	ctx.r4.s64 = ctx.r4.s64 + -31200;
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// stw r31,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r31.u32);
loc_82DB02CC:
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB02D8"))) PPC_WEAK_FUNC(sub_82DB02D8);
PPC_FUNC_IMPL(__imp__sub_82DB02D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,-31144
	ctx.r3.s64 = r11.s64 + -31144;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB02E8"))) PPC_WEAK_FUNC(sub_82DB02E8);
PPC_FUNC_IMPL(__imp__sub_82DB02E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB02F0"))) PPC_WEAK_FUNC(sub_82DB02F0);
PPC_FUNC_IMPL(__imp__sub_82DB02F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB02F8"))) PPC_WEAK_FUNC(sub_82DB02F8);
PPC_FUNC_IMPL(__imp__sub_82DB02F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82DB0310"))) PPC_WEAK_FUNC(sub_82DB0310);
PPC_FUNC_IMPL(__imp__sub_82DB0310) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,10012
	r11.s64 = r11.s64 + 10012;
	// li r9,9
	ctx.r9.s64 = 9;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB0338"))) PPC_WEAK_FUNC(sub_82DB0338);
PPC_FUNC_IMPL(__imp__sub_82DB0338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,10012
	ctx.r3.s64 = r11.s64 + 10012;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB0348"))) PPC_WEAK_FUNC(sub_82DB0348);
PPC_FUNC_IMPL(__imp__sub_82DB0348) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82db0390
	if (!cr6.eq) goto loc_82DB0390;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82DB0390:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// clrlwi r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	// addi r11,r11,14712
	r11.s64 = r11.s64 + 14712;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq cr6,0x82db03c4
	if (cr6.eq) goto loc_82DB03C4;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,38
	ctx.r6.s64 = 38;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82DB03C4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_82DB03E0"))) PPC_WEAK_FUNC(sub_82DB03E0);
PPC_FUNC_IMPL(__imp__sub_82DB03E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB03E8"))) PPC_WEAK_FUNC(sub_82DB03E8);
PPC_FUNC_IMPL(__imp__sub_82DB03E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB03F0"))) PPC_WEAK_FUNC(sub_82DB03F0);
PPC_FUNC_IMPL(__imp__sub_82DB03F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB03F8"))) PPC_WEAK_FUNC(sub_82DB03F8);
PPC_FUNC_IMPL(__imp__sub_82DB03F8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// bl 0x82db9e80
	sub_82DB9E80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dca038
	sub_82DCA038(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dc76d0
	sub_82DC76D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dc69e8
	sub_82DC69E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dc5ea0
	sub_82DC5EA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e05c50
	sub_82E05C50(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// bl 0x82db9e80
	sub_82DB9E80(ctx, base);
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

__attribute__((alias("__imp__sub_82DB0478"))) PPC_WEAK_FUNC(sub_82DB0478);
PPC_FUNC_IMPL(__imp__sub_82DB0478) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82dcdf58
	sub_82DCDF58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dccc10
	sub_82DCCC10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e06808
	sub_82E06808(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dcafe8
	sub_82DCAFE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e06040
	sub_82E06040(ctx, base);
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

__attribute__((alias("__imp__sub_82DB04C8"))) PPC_WEAK_FUNC(sub_82DB04C8);
PPC_FUNC_IMPL(__imp__sub_82DB04C8) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82dd70a8
	sub_82DD70A8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e08e48
	sub_82E08E48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e084b8
	sub_82E084B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dd6f08
	sub_82DD6F08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e075f0
	sub_82E075F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dd6650
	sub_82DD6650(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dd5840
	sub_82DD5840(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dd4780
	sub_82DD4780(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dd3a30
	sub_82DD3A30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dd2a58
	sub_82DD2A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dd17c8
	sub_82DD17C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e07100
	sub_82E07100(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dd00d8
	sub_82DD00D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dcecc8
	sub_82DCECC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dc6ab8
	sub_82DC6AB8(ctx, base);
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

__attribute__((alias("__imp__sub_82DB0570"))) PPC_WEAK_FUNC(sub_82DB0570);
PPC_FUNC_IMPL(__imp__sub_82DB0570) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82ddc0c0
	sub_82DDC0C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ddbc18
	sub_82DDBC18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dda690
	sub_82DDA690(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82db03f8
	sub_82DB03F8(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r29.u8);
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// bl 0x82db9e80
	sub_82DB9E80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dd9a98
	sub_82DD9A98(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r30.u8);
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// bl 0x82db9e80
	sub_82DB9E80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dcdf58
	sub_82DCDF58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dccc10
	sub_82DCCC10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e06808
	sub_82E06808(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dcafe8
	sub_82DCAFE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e06040
	sub_82E06040(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r29.u8);
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// bl 0x82db9e80
	sub_82DB9E80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e0a5e8
	sub_82E0A5E8(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r30.u8);
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// bl 0x82db9e80
	sub_82DB9E80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dd84c0
	sub_82DD84C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dd7a80
	sub_82DD7A80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82db04c8
	sub_82DB04C8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_82DB0650"))) PPC_WEAK_FUNC(sub_82DB0650);
PPC_FUNC_IMPL(__imp__sub_82DB0650) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// xor r11,r5,r6
	r11.u64 = ctx.r5.u64 ^ ctx.r6.u64;
	// rlwinm r11,r11,0,0,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82db06ac
	if (!cr6.eq) goto loc_82DB06AC;
	// rlwinm r11,r5,0,0,15
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFF0000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82db06ac
	if (cr6.eq) goto loc_82DB06AC;
	// rlwinm r11,r6,27,5,31
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x7FFFFFF;
	// xor r11,r11,r5
	r11.u64 = r11.u64 ^ ctx.r5.u64;
	// rlwinm r11,r11,0,22,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x3E0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82db068c
	if (!cr6.eq) goto loc_82DB068C;
loc_82DB0680:
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
loc_82DB068C:
	// rlwinm r11,r5,27,5,31
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x7FFFFFF;
	// xor r11,r11,r6
	r11.u64 = r11.u64 ^ ctx.r6.u64;
	// rlwinm r11,r11,0,22,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x3E0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82db0680
	if (cr6.eq) goto loc_82DB0680;
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
loc_82DB06AC:
	// clrlwi r10,r6,27
	ctx.r10.u64 = ctx.r6.u32 & 0x1F;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrlwi r11,r5,27
	r11.u64 = ctx.r5.u32 & 0x1F;
	// addi r11,r11,13
	r11.s64 = r11.s64 + 13;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r4
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r4.u32);
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// and r11,r10,r11
	r11.u64 = ctx.r10.u64 & r11.u64;
	// addi r11,r11,0
	r11.s64 = r11.s64 + 0;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB06E8"))) PPC_WEAK_FUNC(sub_82DB06E8);
PPC_FUNC_IMPL(__imp__sub_82DB06E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be8
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r4,212(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r29,-12
	ctx.r4.s64 = r29.s64 + -12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82db0650
	sub_82DB0650(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

__attribute__((alias("__imp__sub_82DB0750"))) PPC_WEAK_FUNC(sub_82DB0750);
PPC_FUNC_IMPL(__imp__sub_82DB0750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r30,-16
	ctx.r4.s64 = r30.s64 + -16;
	// lwz r5,32(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82db0650
	sub_82DB0650(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

__attribute__((alias("__imp__sub_82DB07A0"))) PPC_WEAK_FUNC(sub_82DB07A0);
PPC_FUNC_IMPL(__imp__sub_82DB07A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r3,52
	r11.s64 = ctx.r3.s64 + 52;
	// li r8,1
	ctx.r8.s64 = 1;
loc_82DB07AC:
	// slw r10,r8,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// and r7,r10,r4
	ctx.r7.u64 = ctx.r10.u64 & ctx.r4.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82db07c8
	if (cr6.eq) goto loc_82DB07C8;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// or r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 | ctx.r5.u64;
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
loc_82DB07C8:
	// and r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 & ctx.r5.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82db07e0
	if (cr6.eq) goto loc_82DB07E0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// or r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 | ctx.r4.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82DB07E0:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpwi cr6,r9,32
	cr6.compare<int32_t>(ctx.r9.s32, 32, xer);
	// blt cr6,0x82db07ac
	if (cr6.lt) goto loc_82DB07AC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB07F8"))) PPC_WEAK_FUNC(sub_82DB07F8);
PPC_FUNC_IMPL(__imp__sub_82DB07F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r4,13
	r11.s64 = ctx.r4.s64 + 13;
	// addi r9,r5,13
	ctx.r9.s64 = ctx.r5.s64 + 13;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwzx r7,r10,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// slw r8,r9,r5
	ctx.r8.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r5.u8 & 0x3F));
	// slw r9,r9,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r4.u8 & 0x3F));
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stwx r8,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r8.u32);
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stwx r10,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB0830"))) PPC_WEAK_FUNC(sub_82DB0830);
PPC_FUNC_IMPL(__imp__sub_82DB0830) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r4,13
	r11.s64 = ctx.r4.s64 + 13;
	// addi r9,r5,13
	ctx.r9.s64 = ctx.r5.s64 + 13;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwzx r7,r10,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// slw r8,r9,r5
	ctx.r8.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r5.u8 & 0x3F));
	// slw r9,r9,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r4.u8 & 0x3F));
	// andc r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 & ~ctx.r8.u64;
	// stwx r8,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r8.u32);
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// andc r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// stwx r10,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB0868"))) PPC_WEAK_FUNC(sub_82DB0868);
PPC_FUNC_IMPL(__imp__sub_82DB0868) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r3,52
	r11.s64 = ctx.r3.s64 + 52;
	// li r8,1
	ctx.r8.s64 = 1;
loc_82DB0874:
	// slw r10,r8,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// and r7,r10,r4
	ctx.r7.u64 = ctx.r10.u64 & ctx.r4.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82db0890
	if (cr6.eq) goto loc_82DB0890;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// andc r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 & ~ctx.r5.u64;
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
loc_82DB0890:
	// and r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 & ctx.r5.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82db08a8
	if (cr6.eq) goto loc_82DB08A8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// andc r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r4.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82DB08A8:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpwi cr6,r9,32
	cr6.compare<int32_t>(ctx.r9.s32, 32, xer);
	// blt cr6,0x82db0874
	if (cr6.lt) goto loc_82DB0874;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB08C0"))) PPC_WEAK_FUNC(sub_82DB08C0);
PPC_FUNC_IMPL(__imp__sub_82DB08C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r31{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r10,r10,-31352
	ctx.r10.s64 = ctx.r10.s64 + -31352;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r9,r9,-31312
	ctx.r9.s64 = ctx.r9.s64 + -31312;
	// sth r5,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r5.u16);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r8,r8,-31292
	ctx.r8.s64 = ctx.r8.s64 + -31292;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// lis r31,-32253
	r31.s64 = -2113732608;
	// addi r7,r7,-31324
	ctx.r7.s64 = ctx.r7.s64 + -31324;
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// addi r10,r10,7736
	ctx.r10.s64 = ctx.r10.s64 + 7736;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r6,r6,7780
	ctx.r6.s64 = ctx.r6.s64 + 7780;
	// addi r5,r5,7768
	ctx.r5.s64 = ctx.r5.s64 + 7768;
	// addi r4,r4,7748
	ctx.r4.s64 = ctx.r4.s64 + 7748;
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// addi r31,r31,7724
	r31.s64 = r31.s64 + 7724;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r9,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r9.u32);
	// addi r11,r3,52
	r11.s64 = ctx.r3.s64 + 52;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r31.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82DB0950:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x82db0950
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82DB0950;
	// li r11,0
	r11.s64 = 0;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB0970"))) PPC_WEAK_FUNC(sub_82DB0970);
PPC_FUNC_IMPL(__imp__sub_82DB0970) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r11,r11,7780
	r11.s64 = r11.s64 + 7780;
	// addi r10,r10,7768
	ctx.r10.s64 = ctx.r10.s64 + 7768;
	// addi r9,r9,7748
	ctx.r9.s64 = ctx.r9.s64 + 7748;
	// addi r8,r8,7736
	ctx.r8.s64 = ctx.r8.s64 + 7736;
	// addi r7,r7,7724
	ctx.r7.s64 = ctx.r7.s64 + 7724;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// b 0x82689520
	sub_82689520(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB09B0"))) PPC_WEAK_FUNC(sub_82DB09B0);
PPC_FUNC_IMPL(__imp__sub_82DB09B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r6,28(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// addi r4,r4,-8
	ctx.r4.s64 = ctx.r4.s64 + -8;
	// lwz r5,28(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// b 0x82db0650
	sub_82DB0650(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB09C0"))) PPC_WEAK_FUNC(sub_82DB09C0);
PPC_FUNC_IMPL(__imp__sub_82DB09C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r6,28(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// addi r4,r4,-20
	ctx.r4.s64 = ctx.r4.s64 + -20;
	// lwz r5,36(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	// b 0x82db0650
	sub_82DB0650(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB09D0"))) PPC_WEAK_FUNC(sub_82DB09D0);
PPC_FUNC_IMPL(__imp__sub_82DB09D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be4
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82db0a38
	if (!cr6.eq) goto loc_82DB0A38;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82db0a30
	if (cr6.eq) goto loc_82DB0A30;
loc_82DB0A20:
	// mr r31,r11
	r31.u64 = r11.u64;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82db0a20
	if (!cr6.eq) goto loc_82DB0A20;
loc_82DB0A30:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// b 0x82db0a9c
	goto loc_82DB0A9C;
loc_82DB0A38:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// mr r30,r31
	r30.u64 = r31.u64;
loc_82DB0A44:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r11,r11,68
	r11.s64 = r11.s64 + 68;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// rlwinm r9,r11,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82db0ab8
	if (!cr6.eq) goto loc_82DB0AB8;
	// rlwinm r9,r11,0,10,10
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x200000;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82db0ad8
	if (!cr6.eq) goto loc_82DB0AD8;
	// rlwinm r9,r11,0,13,13
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82db0af4
	if (!cr6.eq) goto loc_82DB0AF4;
	// rlwinm r11,r11,0,12,12
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82db0b18
	if (!cr6.eq) goto loc_82DB0B18;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82db0a44
	if (!cr6.eq) goto loc_82DB0A44;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
loc_82DB0A9C:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r4,r28,-12
	ctx.r4.s64 = r28.s64 + -12;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82db0650
	sub_82DB0650(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
loc_82DB0AB8:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82db0a9c
	goto loc_82DB0A9C;
loc_82DB0AD8:
	// bl 0x82e05608
	sub_82E05608(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82db0a9c
	goto loc_82DB0A9C;
loc_82DB0AF4:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82db0b10
	if (cr6.eq) goto loc_82DB0B10;
loc_82DB0B00:
	// mr r31,r11
	r31.u64 = r11.u64;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82db0b00
	if (!cr6.eq) goto loc_82DB0B00;
loc_82DB0B10:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// b 0x82db0a9c
	goto loc_82DB0A9C;
loc_82DB0B18:
	// li r11,1
	r11.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r11,0(r29)
	PPC_STORE_U8(r29.u32 + 0, r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

__attribute__((alias("__imp__sub_82DB0B30"))) PPC_WEAK_FUNC(sub_82DB0B30);
PPC_FUNC_IMPL(__imp__sub_82DB0B30) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB0B38"))) PPC_WEAK_FUNC(sub_82DB0B38);
PPC_FUNC_IMPL(__imp__sub_82DB0B38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82db0b90
	if (cr6.eq) goto loc_82DB0B90;
loc_82DB0B6C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82db0b6c
	if (!cr6.eq) goto loc_82DB0B6C;
loc_82DB0B90:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

__attribute__((alias("__imp__sub_82DB0BB0"))) PPC_WEAK_FUNC(sub_82DB0BB0);
PPC_FUNC_IMPL(__imp__sub_82DB0BB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB0BB8"))) PPC_WEAK_FUNC(sub_82DB0BB8);
PPC_FUNC_IMPL(__imp__sub_82DB0BB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB0BC0"))) PPC_WEAK_FUNC(sub_82DB0BC0);
PPC_FUNC_IMPL(__imp__sub_82DB0BC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bd8
	// addi r12,r1,-72
	r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82ca7504
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lfs f27,3080(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f27.f64 = double(temp.f32);
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// stfs f27,0(r30)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
	// lvx128 v0,r0,r30
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stvx128 v0,r0,r30
	_mm_store_si128((__m128i*)(base + ((r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// beq cr6,0x82db0ce8
	if (cr6.eq) goto loc_82DB0CE8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r25,r28,1
	r25.s64 = r28.s64 + 1;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// addi r24,r29,1
	r24.s64 = r29.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	f28.f64 = ctx.f1.f64;
	// fcmpu cr6,f31,f30
	cr6.compare(f31.f64, f30.f64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// ble cr6,0x82db0cbc
	if (!cr6.gt) goto loc_82DB0CBC;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// fsubs f13,f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f28.f64 - ctx.f1.f64));
	// fsubs f0,f1,f29
	f0.f64 = double(float(ctx.f1.f64 - f29.f64));
	// li r11,1
	r11.s64 = 1;
	// fmuls f12,f13,f30
	ctx.f12.f64 = double(float(ctx.f13.f64 * f30.f64));
	// fneg f11,f0
	ctx.f11.u64 = f0.u64 ^ 0x8000000000000000;
	// fmadds f0,f0,f31,f12
	f0.f64 = double(float(f0.f64 * f31.f64 + ctx.f12.f64));
	// fadds f0,f0,f29
	f0.f64 = double(float(f0.f64 + f29.f64));
	// b 0x82db0da0
	goto loc_82DB0DA0;
loc_82DB0CBC:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// fsubs f13,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 - f29.f64));
	// fsubs f0,f28,f1
	f0.f64 = double(float(f28.f64 - ctx.f1.f64));
	// fmuls f12,f13,f30
	ctx.f12.f64 = double(float(ctx.f13.f64 * f30.f64));
	// fneg f11,f0
	ctx.f11.u64 = f0.u64 ^ 0x8000000000000000;
	// fmadds f0,f0,f31,f12
	f0.f64 = double(float(f0.f64 * f31.f64 + ctx.f12.f64));
	// fadds f0,f0,f29
	f0.f64 = double(float(f0.f64 + f29.f64));
	// b 0x82db0d9c
	goto loc_82DB0D9C;
loc_82DB0CE8:
	// addi r25,r29,1
	r25.s64 = r29.s64 + 1;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r24,r28,1
	r24.s64 = r28.s64 + 1;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// fadds f0,f31,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f31.f64 + f30.f64));
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// fmr f28,f1
	f28.f64 = ctx.f1.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// fcmpu cr6,f0,f27
	cr6.compare(f0.f64, f27.f64);
	// ble cr6,0x82db0d74
	if (!cr6.gt) goto loc_82DB0D74;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// fsubs f13,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 - f29.f64));
	// fsubs f0,f1,f28
	f0.f64 = double(float(ctx.f1.f64 - f28.f64));
	// li r11,1
	r11.s64 = 1;
	// fsubs f12,f31,f27
	ctx.f12.f64 = double(float(f31.f64 - f27.f64));
	// fmuls f11,f13,f30
	ctx.f11.f64 = double(float(ctx.f13.f64 * f30.f64));
	// fneg f10,f0
	ctx.f10.u64 = f0.u64 ^ 0x8000000000000000;
	// fmadds f0,f12,f0,f11
	f0.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f11.f64));
	// fadds f0,f0,f29
	f0.f64 = double(float(f0.f64 + f29.f64));
	// stfs f0,0(r27)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r27.u32 + 0, temp.u32);
	// stfs f10,0(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// b 0x82db0da8
	goto loc_82DB0DA8;
loc_82DB0D74:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// fsubs f13,f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f28.f64 - ctx.f1.f64));
	// fsubs f0,f29,f1
	f0.f64 = double(float(f29.f64 - ctx.f1.f64));
	// fmuls f12,f13,f30
	ctx.f12.f64 = double(float(ctx.f13.f64 * f30.f64));
	// fneg f11,f0
	ctx.f11.u64 = f0.u64 ^ 0x8000000000000000;
	// fmadds f0,f0,f31,f12
	f0.f64 = double(float(f0.f64 * f31.f64 + ctx.f12.f64));
	// fadds f0,f0,f1
	f0.f64 = double(float(f0.f64 + ctx.f1.f64));
loc_82DB0D9C:
	// li r11,0
	r11.s64 = 0;
loc_82DB0DA0:
	// stfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r27.u32 + 0, temp.u32);
	// stfs f11,0(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
loc_82DB0DA8:
	// fneg f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-72
	r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82ca7550
	// b 0x82ca2c28
	return;
}

__attribute__((alias("__imp__sub_82DB0DC8"))) PPC_WEAK_FUNC(sub_82DB0DC8);
PPC_FUNC_IMPL(__imp__sub_82DB0DC8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,3284
	ctx.r10.s64 = r11.s64 + 3284;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,24
	ctx.r7.s64 = 24;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// sth r9,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r9.u16);
	// stw r8,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lfs f31,3084(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f31.f64 = double(temp.f32);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// lbz r10,32(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 32);
	// stb r10,28(r31)
	PPC_STORE_U8(r31.u32 + 28, ctx.r10.u8);
	// lfs f13,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,20(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lfs f0,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	f0.f64 = double(temp.f32);
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// frsp f12,f0
	ctx.f12.f64 = double(float(f0.f64));
	// lfs f0,3080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	f0.f64 = double(temp.f32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - f0.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - f0.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r4
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r11
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v0,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,24(r4)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x82db0ec8
	if (!cr6.gt) goto loc_82DB0EC8;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,3800(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3800);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,24(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// stfs f13,84(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 84, temp.u32);
	// b 0x82db0edc
	goto loc_82DB0EDC;
loc_82DB0EC8:
	// fadds f12,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,3056(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3056);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f13,24(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
loc_82DB0EDC:
	// addi r30,r31,32
	r30.s64 = r31.s64 + 32;
	// lvx128 v0,r0,r4
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f31,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// li r11,48
	r11.s64 = 48;
	// stvx128 v0,r0,r30
	_mm_store_si128((__m128i*)(base + ((r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 / ctx.f13.f64));
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fdivs f12,f0,f12
	ctx.f12.f64 = double(float(f0.f64 / ctx.f12.f64));
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r31,r11
	_mm_store_si128((__m128i*)(base + ((r31.u32 + r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x830c5ff8
	sub_830C5FF8(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvx128 v0,r0,r30
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r10,64
	ctx.r10.s64 = 64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lvlx v13,0,r11
	temp.u32 = r11.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// vspltw v13,v13,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f31,100(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r31,r10
	_mm_store_si128((__m128i*)(base + ((r31.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-32(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB0F78"))) PPC_WEAK_FUNC(sub_82DB0F78);
PPC_FUNC_IMPL(__imp__sub_82DB0F78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be4
	// addi r12,r1,-48
	r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82ca7508
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	f28.f64 = ctx.f1.f64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// lfs f13,84(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3084(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// lfs f29,3056(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3056);
	f29.f64 = double(temp.f32);
	// fmr f30,f31
	f30.f64 = f31.f64;
	// bge cr6,0x82db1074
	if (!cr6.lt) goto loc_82DB1074;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82db1044
	if (!cr6.gt) goto loc_82DB1044;
loc_82DB0FE8:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82db1034
	if (!cr6.gt) goto loc_82DB1034;
loc_82DB0FF8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// fsubs f0,f31,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f31.f64 - ctx.f1.f64));
	// fsubs f13,f30,f1
	ctx.f13.f64 = double(float(f30.f64 - ctx.f1.f64));
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// fsel f31,f0,f1,f31
	f31.f64 = f0.f64 >= 0.0 ? ctx.f1.f64 : f31.f64;
	// fsel f30,f13,f30,f1
	f30.f64 = ctx.f13.f64 >= 0.0 ? f30.f64 : ctx.f1.f64;
	// blt cr6,0x82db0ff8
	if (cr6.lt) goto loc_82DB0FF8;
loc_82DB1034:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82db0fe8
	if (cr6.lt) goto loc_82DB0FE8;
loc_82DB1044:
	// lfs f13,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f31
	f0.f64 = double(float(ctx.f13.f64 * f31.f64));
	// fmuls f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 * f30.f64));
	// fmr f11,f0
	ctx.f11.f64 = f0.f64;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 - ctx.f13.f64));
	// fsel f0,f12,f13,f0
	f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : f0.f64;
	// fsel f13,f12,f11,f13
	ctx.f13.f64 = ctx.f12.f64 >= 0.0 ? ctx.f11.f64 : ctx.f13.f64;
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + f0.f64));
	// fsubs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 - f0.f64));
	// fmuls f13,f12,f29
	ctx.f13.f64 = double(float(ctx.f12.f64 * f29.f64));
	// stfs f13,24(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// stfs f0,84(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 84, temp.u32);
loc_82DB1074:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stfs f29,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r6,80
	ctx.r6.s64 = 80;
	// lfs f0,24(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	f0.f64 = double(temp.f32);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v13,r0,r28
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r28.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f28,112(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// li r7,32
	ctx.r7.s64 = 32;
	// lvlx v10,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// vspltw v10,v10,0
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0xFF));
	// lvx128 v9,r31,r6
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r31.u32 + ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// addi r10,r10,5280
	ctx.r10.s64 = ctx.r10.s64 + 5280;
	// lvx128 v11,r28,r7
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r28.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r8,16
	ctx.r8.s64 = 16;
	// vmulfp128 v10,v9,v10
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v10.f32)));
	// li r5,48
	ctx.r5.s64 = 48;
	// lvx128 v8,r0,r9
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lvx128 v12,r28,r8
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r28.u32 + ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v7,r28,r5
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r28.u32 + ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v10,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// ld r11,8(r11)
	r11.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// stfs f0,100(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lvx128 v10,r0,r7
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, r11.u64);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// vspltw v6,v10,0
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0xFF));
	// vspltw v5,v10,1
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0xAA));
	// vspltw v10,v10,2
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0x55));
	// vmulfp128 v6,v13,v6
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v6.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v6.f32)));
	// lvx128 v9,r0,r11
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw v4,v9,2
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0x55));
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// vspltw v3,v9,1
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0xAA));
	// vspltw v9,v9,0
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0xFF));
	// vmulfp128 v4,v4,v11
	_mm_store_ps(ctx.v4.f32, _mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v3,v3,v12
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v12.f32)));
	// lvx128 v2,r0,r11
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v13,v9,v13
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v13.f32)));
	// vspltw v9,v2,0
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v2.u32), 0xFF));
	// vmaddfp v12,v12,v5,v6
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v5.f32)), _mm_load_ps(ctx.v6.f32)));
	// vand v6,v4,v0
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vand v5,v3,v0
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vand v0,v13,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vaddfp v13,v6,v9
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v9.f32)));
	// vmaddfp v12,v11,v10,v12
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v12.f32)));
	// vaddfp v11,v0,v5
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v5.f32)));
	// vaddfp v0,v12,v7
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v7.f32)));
	// vaddfp v13,v11,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v13.f32)));
	// vxor v12,v13,v8
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v8.u8)));
	// vaddfp v12,v12,v0
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)));
	// vaddfp v0,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v12,r0,r27
	_mm_store_si128((__m128i*)(base + ((r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r27,r8
	_mm_store_si128((__m128i*)(base + ((r27.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-48
	r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82ca7554
	// b 0x82ca2c34
	return;
}

__attribute__((alias("__imp__sub_82DB1180"))) PPC_WEAK_FUNC(sub_82DB1180);
PPC_FUNC_IMPL(__imp__sub_82DB1180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r14{};
	PPCRegister r15{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r18{};
	PPCRegister r19{};
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f19{};
	PPCRegister f20{};
	PPCRegister f21{};
	PPCRegister f22{};
	PPCRegister f23{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bb0
	// addi r12,r1,-152
	r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82ca74e4
	// li r12,-288
	r12.s64 = -288;
	// stvx128 v126,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r12,-272
	r12.s64 = -272;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-752(r1)
	ea = -752 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r22,0(r13)
	r22.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r11,8
	r11.s64 = 8;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// fmr f19,f1
	ctx.fpscr.disableFlushMode();
	f19.f64 = ctx.f1.f64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwzx r11,r11,r22
	r11.u64 = PPC_LOAD_U32(r11.u32 + r22.u32);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// stw r25,812(r1)
	PPC_STORE_U32(ctx.r1.u32 + 812, r25.u32);
	// stw r24,788(r1)
	PPC_STORE_U32(ctx.r1.u32 + 788, r24.u32);
	// stb r23,799(r1)
	PPC_STORE_U8(ctx.r1.u32 + 799, r23.u8);
	// stw r22,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r22.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bge cr6,0x82db1204
	if (!cr6.lt) goto loc_82DB1204;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r8,r8,10936
	ctx.r8.s64 = ctx.r8.s64 + 10936;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// mftb r8
	ctx.r8.u64 = __rdtsc();
	// addi r7,r10,12
	ctx.r7.s64 = ctx.r10.s64 + 12;
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
loc_82DB1204:
	// li r10,64
	ctx.r10.s64 = 64;
	// lvx128 v13,r0,r9
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r26,r29,48
	r26.s64 = r29.s64 + 48;
	// addi r11,r11,5168
	r11.s64 = r11.s64 + 5168;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lvx128 v11,r29,r10
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r29.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// vaddfp v11,v13,v11
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32)));
	// lvx128 v0,r0,r26
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r26.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r26,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, r26.u32);
	// lvx128 v12,r0,r11
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,16
	r11.s64 = 16;
	// vmulfp128 v13,v13,v0
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// lvx128 v10,r9,r11
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32 + r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,176
	r11.s64 = ctx.r1.s64 + 176;
	// lwz r9,48(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// vmaddfp v12,v11,v0,v12
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v0,v10,v0
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v12,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// rlwinm r10,r10,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3FFFFFF;
	// stvx128 v13,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,160
	r11.s64 = ctx.r1.s64 + 160;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,176(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// rlwinm r11,r11,26,6,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x3FFFFFF;
	// extsh r11,r11
	r11.s64 = r11.s16;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// extsh r11,r10
	r11.s64 = ctx.r10.s16;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lfs f20,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	f20.f64 = double(temp.f32);
	// extsb r5,r11
	ctx.r5.s64 = r11.s8;
	// lfs f27,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	f27.f64 = double(temp.f32);
	// lfs f9,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f7.f64 = double(temp.f32);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// lfs f8,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f8.f64 = double(temp.f32);
	// lfs f10,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f10.f64 = double(temp.f32);
	// stfs f20,124(r1)
	temp.f32 = float(f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f27,172(r1)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// bne cr6,0x82db12cc
	if (!cr6.eq) goto loc_82DB12CC;
	// fadds f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f7.f64));
	// fadds f0,f8,f10
	f0.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// b 0x82db12d4
	goto loc_82DB12D4;
loc_82DB12CC:
	// fsubs f6,f7,f9
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// fsubs f0,f10,f8
	f0.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
loc_82DB12D4:
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stfs f0,164(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stfs f6,116(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r16,0
	r16.s64 = 0;
	// lfs f21,3080(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3080);
	f21.f64 = double(temp.f32);
	// li r14,-1
	r14.s64 = -1;
	// lfs f26,3164(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3164);
	f26.f64 = double(temp.f32);
	// mr r11,r16
	r11.u64 = r16.u64;
	// lfs f24,3084(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3084);
	f24.f64 = double(temp.f32);
	// li r20,1
	r20.s64 = 1;
	// lfs f11,3152(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3152);
	ctx.f11.f64 = double(temp.f32);
loc_82DB130C:
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// lfsx f12,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f0,r11,r9
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	f0.f64 = double(temp.f32);
	// fsubs f0,f0,f12
	f0.f64 = double(float(f0.f64 - ctx.f12.f64));
	// fabs f13,f0
	ctx.f13.u64 = f0.u64 & ~0x8000000000000000;
	// stfsx f13,r11,r8
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + ctx.r8.u32, temp.u32);
	// fcmpu cr6,f13,f11
	cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bge cr6,0x82db1350
	if (!cr6.lt) goto loc_82DB1350;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// stfsx f24,r11,r10
	temp.f32 = float(f24.f64);
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, temp.u32);
	// stwx r14,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, r14.u32);
	// stfsx f26,r11,r8
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(r11.u32 + ctx.r8.u32, temp.u32);
	// b 0x82db13c8
	goto loc_82DB13C8;
loc_82DB1350:
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// fdivs f13,f21,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f21.f64 / f0.f64));
	// fcmpu cr6,f0,f24
	cr6.compare(f0.f64, f24.f64);
	// stfsx f13,r11,r10
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, temp.u32);
	// bge cr6,0x82db137c
	if (!cr6.lt) goto loc_82DB137C;
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// fneg f0,f13
	f0.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// stwx r14,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r14.u32);
	// stfsx f0,r11,r9
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, temp.u32);
	// b 0x82db139c
	goto loc_82DB139C;
loc_82DB137C:
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// stwx r20,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, r20.u32);
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// stfsx f13,r11,r8
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + ctx.r8.u32, temp.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r9,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r9.u32);
loc_82DB139C:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fsubs f0,f0,f12
	f0.f64 = double(float(f0.f64 - ctx.f12.f64));
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfsx f0,r11,r9
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, temp.u32);
loc_82DB13C8:
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// blt cr6,0x82db130c
	if (cr6.lt) goto loc_82DB130C;
	// lfs f12,216(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f12,f13
	f0.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f24
	cr6.compare(f0.f64, f24.f64);
	// beq cr6,0x82db1ea8
	if (cr6.eq) goto loc_82DB1EA8;
	// lfs f11,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f11,f13
	f0.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f24
	cr6.compare(f0.f64, f24.f64);
	// beq cr6,0x82db1ea8
	if (cr6.eq) goto loc_82DB1EA8;
	// fadds f0,f11,f12
	f0.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fcmpu cr6,f0,f24
	cr6.compare(f0.f64, f24.f64);
	// beq cr6,0x82db1ea8
	if (cr6.eq) goto loc_82DB1EA8;
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// lwz r18,192(r1)
	r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lfs f22,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	f22.f64 = double(temp.f32);
	// lwz r21,200(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// cmpwi cr6,r18,0
	cr6.compare<int32_t>(r18.s32, 0, xer);
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// ld r11,8(r11)
	r11.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, r11.u64);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r15,r11,16912
	r15.s64 = r11.s64 + 16912;
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// lvx128 v13,r0,r15
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r15.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v127,r0,r11
	_mm_store_si128((__m128i*)v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,160
	r11.s64 = ctx.r1.s64 + 160;
	// lvx128 v126,r0,r11
	_mm_store_si128((__m128i*)v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// ble cr6,0x82db1474
	if (!cr6.gt) goto loc_82DB1474;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bgt cr6,0x82db157c
	if (cr6.gt) goto loc_82DB157C;
	// fcmpu cr6,f10,f24
	cr6.compare(ctx.f10.f64, f24.f64);
	// blt cr6,0x82db21a4
	if (cr6.lt) goto loc_82DB21A4;
	// fmuls f0,f13,f7
	f0.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// b 0x82db14b0
	goto loc_82DB14B0;
loc_82DB1474:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// addi r10,r11,-2
	ctx.r10.s64 = r11.s64 + -2;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// ble cr6,0x82db157c
	if (!cr6.gt) goto loc_82DB157C;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fcmpu cr6,f10,f0
	cr6.compare(ctx.f10.f64, f0.f64);
	// bgt cr6,0x82db21a4
	if (cr6.gt) goto loc_82DB21A4;
	// fsubs f0,f7,f0
	f0.f64 = double(float(ctx.f7.f64 - f0.f64));
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
loc_82DB14B0:
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// fmuls f10,f22,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(f22.f64 * f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// fctiwz f0,f10
	f0.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f10.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mullw r11,r11,r21
	r11.s64 = int64_t(r11.s32) * int64_t(r21.s32);
	// vsubfp v12,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,-2
	r11.s64 = r11.s64 + -2;
	// vmulfp128 v12,v12,v127
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(v127.f32)));
	// extsw r10,r11
	ctx.r10.s64 = r11.s32;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// vmaddfp128 v12,v0,v126,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v126.f32)), _mm_load_ps(ctx.v12.f32)));
	// frsp f13,f0
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f13.f64 = double(float(f0.f64));
	// stvx128 v12,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,248(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x82db1548
	if (cr6.lt) goto loc_82DB1548;
loc_82DB1528:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// extsw r10,r11
	ctx.r10.s64 = r11.s32;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x82db1528
	if (!cr6.lt) goto loc_82DB1528;
loc_82DB1548:
	// srawi r10,r21,1
	xer.ca = (r21.s32 < 0) & ((r21.u32 & 0x1) != 0);
	ctx.r10.s64 = r21.s32 >> 1;
	// lfs f13,280(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	ctx.f13.f64 = double(temp.f32);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	// extsw r11,r8
	r11.s64 = ctx.r8.s32;
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fsubs f0,f0,f9
	f0.f64 = double(float(f0.f64 - ctx.f9.f64));
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f0,136(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// b 0x82db1580
	goto loc_82DB1580;
loc_82DB157C:
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
loc_82DB1580:
	// lfs f23,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	f23.f64 = double(temp.f32);
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// ble cr6,0x82db15ac
	if (!cr6.gt) goto loc_82DB15AC;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bgt cr6,0x82db16ac
	if (cr6.gt) goto loc_82DB16AC;
	// fcmpu cr6,f8,f24
	cr6.compare(ctx.f8.f64, f24.f64);
	// blt cr6,0x82db21a4
	if (cr6.lt) goto loc_82DB21A4;
	// fmuls f0,f12,f9
	f0.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// mr r8,r20
	ctx.r8.u64 = r20.u64;
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// b 0x82db15e8
	goto loc_82DB15E8;
loc_82DB15AC:
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// addi r10,r11,-2
	ctx.r10.s64 = r11.s64 + -2;
	// cmpw cr6,r8,r10
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, xer);
	// ble cr6,0x82db16ac
	if (!cr6.gt) goto loc_82DB16AC;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fcmpu cr6,f8,f0
	cr6.compare(ctx.f8.f64, f0.f64);
	// bgt cr6,0x82db21a4
	if (cr6.gt) goto loc_82DB21A4;
	// fsubs f0,f9,f0
	f0.f64 = double(float(ctx.f9.f64 - f0.f64));
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// fmuls f0,f0,f12
	f0.f64 = double(float(f0.f64 * ctx.f12.f64));
loc_82DB15E8:
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// fmuls f13,f23,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f23.f64 * f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
	// fadds f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 + f0.f64));
	// stfs f0,136(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// fctiwz f0,f13
	f0.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mullw r11,r11,r18
	r11.s64 = int64_t(r11.s32) * int64_t(r18.s32);
	// vsubfp v12,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// add r11,r11,r7
	r11.u64 = r11.u64 + ctx.r7.u64;
	// addi r11,r11,-2
	r11.s64 = r11.s64 + -2;
	// vmulfp128 v12,v12,v127
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(v127.f32)));
	// extsw r10,r11
	ctx.r10.s64 = r11.s32;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// vmaddfp128 v12,v0,v126,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v126.f32)), _mm_load_ps(ctx.v12.f32)));
	// frsp f13,f0
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f13.f64 = double(float(f0.f64));
	// stvx128 v12,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,240(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x82db167c
	if (cr6.lt) goto loc_82DB167C;
loc_82DB165C:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// extsw r10,r11
	ctx.r10.s64 = r11.s32;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x82db165c
	if (!cr6.lt) goto loc_82DB165C;
loc_82DB167C:
	// srawi r10,r18,1
	xer.ca = (r18.s32 < 0) & ((r18.u32 & 0x1) != 0);
	ctx.r10.s64 = r18.s32 >> 1;
	// lfs f13,272(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	ctx.f13.f64 = double(temp.f32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// extsw r11,r9
	r11.s64 = ctx.r9.s32;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fsubs f0,f0,f7
	f0.f64 = double(float(f0.f64 - ctx.f7.f64));
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
loc_82DB16AC:
	// lwz r6,16(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, xer);
	// bge cr6,0x82db21a4
	if (!cr6.lt) goto loc_82DB21A4;
	// subf r11,r18,r9
	r11.s64 = ctx.r9.s64 - r18.s64;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(r11.u32, ctx.r6.u32, xer);
	// bge cr6,0x82db21a4
	if (!cr6.lt) goto loc_82DB21A4;
	// xor r11,r21,r18
	r11.u64 = r21.u64 ^ r18.u64;
	// fcmpu cr6,f11,f24
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f11.f64, f24.f64);
	// cntlzw r10,r5
	ctx.r10.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// xor r10,r11,r10
	ctx.r10.u64 = r11.u64 ^ ctx.r10.u64;
	// bne cr6,0x82db16f4
	if (!cr6.eq) goto loc_82DB16F4;
	// mr r10,r16
	ctx.r10.u64 = r16.u64;
loc_82DB16F4:
	// li r17,2
	r17.s64 = 2;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// add r11,r8,r9
	r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// beq cr6,0x82db1708
	if (cr6.eq) goto loc_82DB1708;
	// subf r11,r8,r9
	r11.s64 = ctx.r9.s64 - ctx.r8.s64;
loc_82DB1708:
	// extsw r9,r11
	ctx.r9.s64 = r11.s32;
	// lfs f13,244(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f13.f64 = double(temp.f32);
	// extsb r19,r10
	r19.s64 = ctx.r10.s8;
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(r19.s32, 0, xer);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fsubs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 - f0.f64));
	// beq cr6,0x82db1754
	if (cr6.eq) goto loc_82DB1754;
	// fabs f0,f0
	f0.u64 = f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f21
	cr6.compare(f0.f64, f21.f64);
	// ble cr6,0x82db174c
	if (!cr6.gt) goto loc_82DB174C;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// b 0x82db177c
	goto loc_82DB177C;
loc_82DB174C:
	// mr r17,r16
	r17.u64 = r16.u64;
	// b 0x82db1780
	goto loc_82DB1780;
loc_82DB1754:
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fcmpu cr6,f0,f24
	cr6.compare(f0.f64, f24.f64);
	// ble cr6,0x82db1780
	if (!cr6.gt) goto loc_82DB1780;
	// mr r17,r16
	r17.u64 = r16.u64;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
loc_82DB177C:
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
loc_82DB1780:
	// fcmpu cr6,f11,f24
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f11.f64, f24.f64);
	// beq cr6,0x82db17c4
	if (cr6.eq) goto loc_82DB17C4;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r10,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r10.u64);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fsubs f0,f0,f6
	f0.f64 = double(float(f0.f64 - ctx.f6.f64));
	// lfd f13,232(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 232);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// fmuls f0,f0,f11
	f0.f64 = double(float(f0.f64 * ctx.f11.f64));
	// stfs f0,132(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// b 0x82db17c8
	goto loc_82DB17C8;
loc_82DB17C4:
	// stfs f26,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
loc_82DB17C8:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r11,r16
	r11.u64 = r16.u64;
	// lfs f13,3036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3036);
	ctx.f13.f64 = double(temp.f32);
loc_82DB17D4:
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f24
	cr6.compare(f0.f64, f24.f64);
	// bne cr6,0x82db17f0
	if (!cr6.eq) goto loc_82DB17F0;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stfsx f13,r11,r10
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, temp.u32);
	// b 0x82db1804
	goto loc_82DB1804;
loc_82DB17F0:
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lfsx f12,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 - f0.f64));
	// stfsx f0,r11,r9
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, temp.u32);
loc_82DB1804:
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// blt cr6,0x82db17d4
	if (cr6.lt) goto loc_82DB17D4;
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(r19.s32, 0, xer);
	// beq cr6,0x82db1840
	if (cr6.eq) goto loc_82DB1840;
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(r17.s32, 0, xer);
	// bne cr6,0x82db1828
	if (!cr6.eq) goto loc_82DB1828;
loc_82DB1820:
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// b 0x82db1890
	goto loc_82DB1890;
loc_82DB1828:
	// lfs f0,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	f0.f64 = double(temp.f32);
	// lfs f13,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x82db188c
	if (!cr6.gt) goto loc_82DB188C;
	// mr r10,r16
	ctx.r10.u64 = r16.u64;
	// b 0x82db1890
	goto loc_82DB1890;
loc_82DB1840:
	// fcmpu cr6,f23,f22
	ctx.fpscr.disableFlushMode();
	cr6.compare(f23.f64, f22.f64);
	// bge cr6,0x82db1868
	if (!cr6.lt) goto loc_82DB1868;
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(r17.s32, 0, xer);
	// bne cr6,0x82db188c
	if (!cr6.eq) goto loc_82DB188C;
	// lfs f0,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	f0.f64 = double(temp.f32);
	// lfs f13,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x82db1820
	if (!cr6.gt) goto loc_82DB1820;
	// mr r10,r16
	ctx.r10.u64 = r16.u64;
	// b 0x82db1890
	goto loc_82DB1890;
loc_82DB1868:
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(r17.s32, 0, xer);
	// beq cr6,0x82db1878
	if (cr6.eq) goto loc_82DB1878;
	// mr r10,r16
	ctx.r10.u64 = r16.u64;
	// b 0x82db1890
	goto loc_82DB1890;
loc_82DB1878:
	// lfs f0,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	f0.f64 = double(temp.f32);
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgt cr6,0x82db1890
	if (cr6.gt) goto loc_82DB1890;
loc_82DB188C:
	// li r10,2
	ctx.r10.s64 = 2;
loc_82DB1890:
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f25,f24
	ctx.fpscr.disableFlushMode();
	f25.f64 = f24.f64;
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lfs f28,3800(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3800);
	f28.f64 = double(temp.f32);
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// lfsx f13,r11,r9
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// lwzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r7.u32);
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + ctx.r8.u32);
	// lfsx f0,r11,r5
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r5.u32);
	f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 - f0.f64));
	// stfsx f0,r11,r9
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, temp.u32);
	// subf r10,r10,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r10.s64;
	// stwx r10,r11,r8
	PPC_STORE_U32(r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// lwz r28,96(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplw cr6,r28,r6
	cr6.compare<uint32_t>(r28.u32, ctx.r6.u32, xer);
	// bge cr6,0x82db1e98
	if (!cr6.lt) goto loc_82DB1E98;
	// lis r11,0
	r11.s64 = 0;
	// li r20,-1
	r20.s64 = -1;
	// ori r22,r11,32769
	r22.u64 = r11.u64 | 32769;
	// b 0x82db18f4
	goto loc_82DB18F4;
loc_82DB18F0:
	// lvx128 v13,r0,r15
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r15.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82DB18F4:
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// lwz r31,104(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x82db1e98
	if (!cr6.lt) goto loc_82DB1E98;
	// lwz r11,812(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 812);
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f28,f0
	cr6.compare(f28.f64, f0.f64);
	// bgt cr6,0x82db1e98
	if (cr6.gt) goto loc_82DB1E98;
	// rlwinm r24,r27,2,0,29
	r24.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r23,r1,128
	r23.s64 = ctx.r1.s64 + 128;
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
	// subf r26,r18,r28
	r26.s64 = r28.s64 - r18.s64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// lfsx f31,r24,r23
	temp.u32 = PPC_LOAD_U32(r24.u32 + r23.u32);
	f31.f64 = double(temp.f32);
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lvlx v0,0,r11
	temp.u32 = r11.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,176
	r11.s64 = ctx.r1.s64 + 176;
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// vsubfp v13,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v13.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v13,v13,v127
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v127.f32)));
	// vmaddfp128 v13,v0,v126,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v126.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v13,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bne cr6,0x82db19c0
	if (!cr6.eq) goto loc_82DB19C0;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// subf r5,r21,r31
	ctx.r5.s64 = r31.s64 - r21.s64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsw r11,r31
	r11.s64 = r31.s32;
	// lfs f12,184(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f30,f1
	f0.f64 = double(float(f30.f64 - ctx.f1.f64));
	// std r11,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, r11.u64);
	// lfd f13,232(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 232);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fmadds f0,f13,f0,f1
	f0.f64 = double(float(ctx.f13.f64 * f0.f64 + ctx.f1.f64));
	// b 0x82db1aa8
	goto loc_82DB1AA8;
loc_82DB19C0:
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(r27.s32, 2, xer);
	// bne cr6,0x82db1a30
	if (!cr6.eq) goto loc_82DB1A30;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsw r11,r28
	r11.s64 = r28.s32;
	// lfs f12,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f30,f1
	f0.f64 = double(float(f30.f64 - ctx.f1.f64));
	// std r11,272(r1)
	PPC_STORE_U64(ctx.r1.u32 + 272, r11.u64);
	// lfd f13,272(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 272);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fmadds f0,f13,f0,f1
	f0.f64 = double(float(ctx.f13.f64 * f0.f64 + ctx.f1.f64));
	// b 0x82db1aa8
	goto loc_82DB1AA8;
loc_82DB1A30:
	// extsw r11,r28
	r11.s64 = r28.s32;
	// lfs f13,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// mr r30,r31
	r30.u64 = r31.u64;
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(r19.s32, 0, xer);
	// std r11,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, r11.u64);
	// lfd f0,240(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fsubs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 - f0.f64));
	// fabs f29,f0
	f29.u64 = f0.u64 & ~0x8000000000000000;
	// beq cr6,0x82db1a64
	if (cr6.eq) goto loc_82DB1A64;
	// subf r30,r21,r31
	r30.s64 = r31.s64 - r21.s64;
	// b 0x82db1a68
	goto loc_82DB1A68;
loc_82DB1A64:
	// subf r5,r21,r31
	ctx.r5.s64 = r31.s64 - r21.s64;
loc_82DB1A68:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// fsubs f0,f30,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f30.f64 - ctx.f1.f64));
	// fmadds f0,f0,f29,f1
	f0.f64 = double(float(f0.f64 * f29.f64 + ctx.f1.f64));
loc_82DB1AA8:
	// lbz r11,799(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 799);
	// lfs f11,188(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f11.f64 = double(temp.f32);
	// extsb r25,r11
	r25.s64 = r11.s8;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// beq cr6,0x82db1af0
	if (cr6.eq) goto loc_82DB1AF0;
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, f0.f64);
	// bge cr6,0x82db1dd0
	if (!cr6.lt) goto loc_82DB1DD0;
	// fsubs f13,f25,f26
	ctx.f13.f64 = double(float(f25.f64 - f26.f64));
	// fsubs f12,f31,f28
	ctx.f12.f64 = double(float(f31.f64 - f28.f64));
	// fsubs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 - f0.f64));
	// fnmsubs f12,f12,f19,f13
	ctx.f12.f64 = double(float(-(ctx.f12.f64 * f19.f64 - ctx.f13.f64)));
	// fcmpu cr6,f10,f12
	cr6.compare(ctx.f10.f64, ctx.f12.f64);
	// bge cr6,0x82db1dd0
	if (!cr6.lt) goto loc_82DB1DD0;
	// fcmpu cr6,f13,f24
	cr6.compare(ctx.f13.f64, f24.f64);
	// bgt cr6,0x82db1b00
	if (cr6.gt) goto loc_82DB1B00;
	// fneg f13,f28
	ctx.f13.u64 = f28.u64 ^ 0x8000000000000000;
	// fsel f27,f13,f24,f28
	f27.f64 = ctx.f13.f64 >= 0.0 ? f24.f64 : f28.f64;
	// b 0x82db1b5c
	goto loc_82DB1B5C;
loc_82DB1AF0:
	// fcmpu cr6,f11,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f11.f64, f0.f64);
	// bge cr6,0x82db1dd0
	if (!cr6.lt) goto loc_82DB1DD0;
	// fcmpu cr6,f25,f26
	cr6.compare(f25.f64, f26.f64);
	// blt cr6,0x82db1dd0
	if (cr6.lt) goto loc_82DB1DD0;
loc_82DB1B00:
	// fsubs f12,f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f11.f64 - f0.f64));
	// fcmpu cr6,f28,f24
	cr6.compare(f28.f64, f24.f64);
	// blt cr6,0x82db1b24
	if (cr6.lt) goto loc_82DB1B24;
	// fsubs f13,f25,f26
	ctx.f13.f64 = double(float(f25.f64 - f26.f64));
	// fsubs f10,f31,f28
	ctx.f10.f64 = double(float(f31.f64 - f28.f64));
	// fsubs f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fdivs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fmadds f27,f13,f10,f28
	f27.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 + f28.f64));
	// b 0x82db1b5c
	goto loc_82DB1B5C;
loc_82DB1B24:
	// fsubs f13,f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f31.f64 - f28.f64));
	// fdivs f13,f31,f13
	ctx.f13.f64 = double(float(f31.f64 / ctx.f13.f64));
	// fsubs f10,f21,f13
	ctx.f10.f64 = double(float(f21.f64 - ctx.f13.f64));
	// fmuls f13,f13,f26
	ctx.f13.f64 = double(float(ctx.f13.f64 * f26.f64));
	// fmadds f13,f10,f0,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * f0.f64 + ctx.f13.f64));
	// fsubs f13,f20,f13
	ctx.f13.f64 = double(float(f20.f64 - ctx.f13.f64));
	// fcmpu cr6,f13,f24
	cr6.compare(ctx.f13.f64, f24.f64);
	// bge cr6,0x82db1b50
	if (!cr6.lt) goto loc_82DB1B50;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// beq cr6,0x82db1dd0
	if (cr6.eq) goto loc_82DB1DD0;
	// fmr f13,f24
	ctx.f13.f64 = f24.f64;
loc_82DB1B50:
	// fsubs f12,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fdivs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fmuls f27,f13,f31
	f27.f64 = double(float(ctx.f13.f64 * f31.f64));
loc_82DB1B5C:
	// lwz r11,812(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 812);
	// fmr f26,f0
	ctx.fpscr.disableFlushMode();
	f26.f64 = f0.f64;
	// fmr f25,f11
	f25.f64 = ctx.f11.f64;
	// fmr f28,f31
	f28.f64 = f31.f64;
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f27,f13
	cr6.compare(f27.f64, ctx.f13.f64);
	// bgt cr6,0x82db1e98
	if (cr6.gt) goto loc_82DB1E98;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// subf r30,r21,r31
	r30.s64 = r31.s64 - r21.s64;
	// stfs f21,400(r1)
	temp.f32 = float(f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 400, temp.u32);
	// stw r14,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, r14.u32);
	// stfs f24,396(r1)
	temp.f32 = float(f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 396, temp.u32);
	// stw r16,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, r16.u32);
	// stfs f21,388(r1)
	temp.f32 = float(f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 388, temp.u32);
	// stw r20,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, r20.u32);
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(r19.s32, 0, xer);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// beq cr6,0x82db1c28
	if (cr6.eq) goto loc_82DB1C28;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(r27.s32, 1, xer);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// bne cr6,0x82db1c08
	if (!cr6.eq) goto loc_82DB1C08;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// fsubs f0,f1,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64 - f30.f64));
	// b 0x82db1cbc
	goto loc_82DB1CBC;
loc_82DB1C08:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(r31.s32, r30.s32, xer);
	// fsubs f0,f29,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f29.f64 - ctx.f1.f64));
	// fsubs f13,f30,f1
	ctx.f13.f64 = double(float(f30.f64 - ctx.f1.f64));
	// b 0x82db1cc4
	goto loc_82DB1CC4;
loc_82DB1C28:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// beq cr6,0x82db1c9c
	if (cr6.eq) goto loc_82DB1C9C;
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(r27.s32, 1, xer);
	// bne cr6,0x82db1c70
	if (!cr6.eq) goto loc_82DB1C70;
	// fcmpu cr6,f23,f22
	cr6.compare(f23.f64, f22.f64);
	// blt cr6,0x82db1c9c
	if (cr6.lt) goto loc_82DB1C9C;
loc_82DB1C70:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(r31.s32, r30.s32, xer);
	// fsubs f0,f1,f29
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64 - f29.f64));
	// fsubs f13,f30,f1
	ctx.f13.f64 = double(float(f30.f64 - ctx.f1.f64));
	// b 0x82db1cc4
	goto loc_82DB1CC4;
loc_82DB1C9C:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// fsubs f0,f30,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f30.f64 - ctx.f1.f64));
loc_82DB1CBC:
	// fsubs f13,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 - f29.f64));
	// cmpw cr6,r30,r31
	cr6.compare<int32_t>(r30.s32, r31.s32, xer);
loc_82DB1CC4:
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x82db1cd0
	if (cr6.gt) goto loc_82DB1CD0;
	// mr r11,r16
	r11.u64 = r16.u64;
loc_82DB1CD0:
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// srawi r7,r21,1
	xer.ca = (r21.s32 < 0) & ((r21.u32 & 0x1) != 0);
	ctx.r7.s64 = r21.s32 >> 1;
	// lwz r9,224(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// stfs f27,400(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 400, temp.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lwz r3,812(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 812);
	// lwz r4,788(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 788);
	// addi r5,r1,384
	ctx.r5.s64 = ctx.r1.s64 + 384;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lvx128 v0,r0,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// extsw r9,r21
	ctx.r9.s64 = r21.s32;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ r11.u64;
	// extsw r11,r18
	r11.s64 = r18.s32;
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// lfd f11,112(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// subf r9,r7,r31
	ctx.r9.s64 = r31.s64 - ctx.r7.s64;
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r9,r9,15,0,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 15) & 0xFFFF8000;
	// std r11,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, r11.u64);
	// lfd f12,160(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// srawi r11,r18,1
	xer.ca = (r18.s32 < 0) & ((r18.u32 & 0x1) != 0);
	r11.s64 = r18.s32 >> 1;
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// subf r11,r22,r11
	r11.s64 = r11.s64 - r22.s64;
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, r11.u32);
	// fmuls f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f0,384(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 384, temp.u32);
	// fmuls f0,f11,f13
	f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f0,392(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 392, temp.u32);
	// addi r11,r1,384
	r11.s64 = ctx.r1.s64 + 384;
	// lvx128 v13,r0,r11
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,384
	r11.s64 = ctx.r1.s64 + 384;
	// vmulfp128 v0,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// vmsum3fp128 v13,v0,v0
	_mm_store_ps(ctx.v13.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,256
	r11.s64 = ctx.r1.s64 + 256;
	// stvx128 v13,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,256(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	f0.f64 = double(temp.f32);
	// fsqrts f0,f0
	f0.f64 = double(float(sqrt(f0.f64)));
	// fdivs f0,f21,f0
	f0.f64 = double(float(f21.f64 / f0.f64));
	// stfs f0,368(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 368, temp.u32);
	// addi r11,r1,368
	r11.s64 = ctx.r1.s64 + 368;
	// lvx128 v13,r0,r11
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,368
	r11.s64 = ctx.r1.s64 + 368;
	// vspltw v13,v13,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v13,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,384
	r11.s64 = ctx.r1.s64 + 384;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// beq cr6,0x82db1ddc
	if (cr6.eq) goto loc_82DB1DDC;
	// stb r16,799(r1)
	PPC_STORE_U8(ctx.r1.u32 + 799, r16.u8);
	// b 0x82db1ddc
	goto loc_82DB1DDC;
loc_82DB1DD0:
	// fmr f26,f0
	ctx.fpscr.disableFlushMode();
	f26.f64 = f0.f64;
	// fmr f25,f11
	f25.f64 = ctx.f11.f64;
	// fmr f28,f31
	f28.f64 = f31.f64;
loc_82DB1DDC:
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// xori r17,r17,2
	r17.u64 = r17.u64 ^ 2;
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(r19.s32, 0, xer);
	// lfsx f0,r24,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r24.u32 + ctx.r9.u32);
	f0.f64 = double(temp.f32);
	// lwzx r9,r24,r11
	ctx.r9.u64 = PPC_LOAD_U32(r24.u32 + r11.u32);
	// fadds f0,f0,f31
	f0.f64 = double(float(f0.f64 + f31.f64));
	// lwzx r10,r24,r10
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + ctx.r10.u32);
	// stfsx f0,r24,r23
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r24.u32 + r23.u32, temp.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwx r10,r24,r11
	PPC_STORE_U32(r24.u32 + r11.u32, ctx.r10.u32);
	// beq cr6,0x82db1e38
	if (cr6.eq) goto loc_82DB1E38;
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(r17.s32, 0, xer);
	// bne cr6,0x82db1e20
	if (!cr6.eq) goto loc_82DB1E20;
loc_82DB1E18:
	// li r27,1
	r27.s64 = 1;
	// b 0x82db1e88
	goto loc_82DB1E88;
loc_82DB1E20:
	// lfs f0,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	f0.f64 = double(temp.f32);
	// lfs f13,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82db1e84
	if (!cr6.lt) goto loc_82DB1E84;
	// mr r27,r16
	r27.u64 = r16.u64;
	// b 0x82db1e88
	goto loc_82DB1E88;
loc_82DB1E38:
	// fcmpu cr6,f23,f22
	ctx.fpscr.disableFlushMode();
	cr6.compare(f23.f64, f22.f64);
	// bge cr6,0x82db1e60
	if (!cr6.lt) goto loc_82DB1E60;
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(r17.s32, 0, xer);
	// bne cr6,0x82db1e84
	if (!cr6.eq) goto loc_82DB1E84;
	// lfs f0,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	f0.f64 = double(temp.f32);
	// lfs f13,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82db1e18
	if (!cr6.lt) goto loc_82DB1E18;
	// mr r27,r16
	r27.u64 = r16.u64;
	// b 0x82db1e88
	goto loc_82DB1E88;
loc_82DB1E60:
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(r17.s32, 0, xer);
	// beq cr6,0x82db1e70
	if (cr6.eq) goto loc_82DB1E70;
	// mr r27,r16
	r27.u64 = r16.u64;
	// b 0x82db1e88
	goto loc_82DB1E88;
loc_82DB1E70:
	// lfs f0,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	f0.f64 = double(temp.f32);
	// li r27,1
	r27.s64 = 1;
	// lfs f13,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x82db1e88
	if (cr6.lt) goto loc_82DB1E88;
loc_82DB1E84:
	// li r27,2
	r27.s64 = 2;
loc_82DB1E88:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// lwz r28,96(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x82db18f0
	if (cr6.lt) goto loc_82DB18F0;
loc_82DB1E98:
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r11,8
	r11.s64 = 8;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// b 0x82db21ac
	goto loc_82DB21AC;
loc_82DB1EA8:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// lwz r30,96(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x82db21a4
	if (!cr6.lt) goto loc_82DB21A4;
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// lwz r31,104(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x82db21a4
	if (!cr6.lt) goto loc_82DB21A4;
	// extsw r11,r31
	r11.s64 = r31.s32;
	// stfs f21,288(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// extsw r10,r30
	ctx.r10.s64 = r30.s32;
	// addi r9,r1,288
	ctx.r9.s64 = ctx.r1.s64 + 288;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, r11.u64);
	// lfd f0,112(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r10,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r10.u64);
	// lfd f13,160(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lvx128 v0,r0,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// li r11,-1
	r11.s64 = -1;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r10,r1,288
	ctx.r10.s64 = ctx.r1.s64 + 288;
	// stfs f21,304(r1)
	temp.f32 = float(f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// stw r14,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, r14.u32);
	// stw r16,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, r16.u32);
	// stw r11,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, r11.u32);
	// lwz r11,48(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fsubs f31,f9,f0
	f31.f64 = double(float(ctx.f9.f64 - f0.f64));
	// fsubs f30,f7,f13
	f30.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// beq cr6,0x82db2008
	if (cr6.eq) goto loc_82DB2008;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r28,r31,1
	r28.s64 = r31.s64 + 1;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// addi r27,r30,1
	r27.s64 = r30.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	f28.f64 = ctx.f1.f64;
	// fcmpu cr6,f30,f31
	cr6.compare(f30.f64, f31.f64);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// ble cr6,0x82db1fdc
	if (!cr6.gt) goto loc_82DB1FDC;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// fsubs f13,f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f28.f64 - ctx.f1.f64));
	// fsubs f0,f1,f29
	f0.f64 = double(float(ctx.f1.f64 - f29.f64));
	// mr r11,r20
	r11.u64 = r20.u64;
	// fmuls f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 * f31.f64));
	// fneg f11,f0
	ctx.f11.u64 = f0.u64 ^ 0x8000000000000000;
	// fmadds f0,f0,f30,f12
	f0.f64 = double(float(f0.f64 * f30.f64 + ctx.f12.f64));
	// fadds f0,f0,f29
	f0.f64 = double(float(f0.f64 + f29.f64));
	// b 0x82db20bc
	goto loc_82DB20BC;
loc_82DB1FDC:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// fsubs f13,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 - f29.f64));
	// fsubs f0,f28,f1
	f0.f64 = double(float(f28.f64 - ctx.f1.f64));
	// fmuls f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 * f31.f64));
	// fneg f11,f0
	ctx.f11.u64 = f0.u64 ^ 0x8000000000000000;
	// fmadds f0,f0,f30,f12
	f0.f64 = double(float(f0.f64 * f30.f64 + ctx.f12.f64));
	// fadds f0,f0,f29
	f0.f64 = double(float(f0.f64 + f29.f64));
	// b 0x82db20b8
	goto loc_82DB20B8;
loc_82DB2008:
	// addi r28,r30,1
	r28.s64 = r30.s64 + 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r27,r31,1
	r27.s64 = r31.s64 + 1;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// fadds f0,f30,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f30.f64 + f31.f64));
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// fmr f28,f1
	f28.f64 = ctx.f1.f64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// fcmpu cr6,f0,f21
	cr6.compare(f0.f64, f21.f64);
	// ble cr6,0x82db2090
	if (!cr6.gt) goto loc_82DB2090;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// fsubs f13,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 - f29.f64));
	// fsubs f0,f1,f28
	f0.f64 = double(float(ctx.f1.f64 - f28.f64));
	// mr r11,r20
	r11.u64 = r20.u64;
	// fsubs f12,f30,f21
	ctx.f12.f64 = double(float(f30.f64 - f21.f64));
	// fmuls f11,f13,f31
	ctx.f11.f64 = double(float(ctx.f13.f64 * f31.f64));
	// fneg f10,f0
	ctx.f10.u64 = f0.u64 ^ 0x8000000000000000;
	// stfs f10,288(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// fmadds f0,f12,f0,f11
	f0.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f11.f64));
	// fadds f0,f0,f29
	f0.f64 = double(float(f0.f64 + f29.f64));
	// b 0x82db20c0
	goto loc_82DB20C0;
loc_82DB2090:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// fsubs f13,f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f28.f64 - ctx.f1.f64));
	// fsubs f0,f29,f1
	f0.f64 = double(float(f29.f64 - ctx.f1.f64));
	// fmuls f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 * f31.f64));
	// fneg f11,f0
	ctx.f11.u64 = f0.u64 ^ 0x8000000000000000;
	// fmadds f0,f0,f30,f12
	f0.f64 = double(float(f0.f64 * f30.f64 + ctx.f12.f64));
	// fadds f0,f0,f1
	f0.f64 = double(float(f0.f64 + ctx.f1.f64));
loc_82DB20B8:
	// mr r11,r16
	r11.u64 = r16.u64;
loc_82DB20BC:
	// stfs f11,288(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
loc_82DB20C0:
	// fneg f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f13,296(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// fsubs f13,f20,f0
	ctx.f13.f64 = double(float(f20.f64 - f0.f64));
	// fsubs f0,f27,f0
	f0.f64 = double(float(f27.f64 - f0.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x82db21a4
	if (cr6.gt) goto loc_82DB21A4;
	// extsb r10,r23
	ctx.r10.s64 = r23.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82db2100
	if (cr6.eq) goto loc_82DB2100;
	// fcmpu cr6,f13,f24
	cr6.compare(ctx.f13.f64, f24.f64);
	// bge cr6,0x82db2108
	if (!cr6.lt) goto loc_82DB2108;
	// fsubs f13,f13,f19
	ctx.f13.f64 = double(float(ctx.f13.f64 - f19.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x82db21a4
	if (cr6.gt) goto loc_82DB21A4;
	// fmr f0,f24
	f0.f64 = f24.f64;
	// b 0x82db2118
	goto loc_82DB2118;
loc_82DB2100:
	// fcmpu cr6,f13,f24
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, f24.f64);
	// blt cr6,0x82db21a4
	if (cr6.lt) goto loc_82DB21A4;
loc_82DB2108:
	// fcmpu cr6,f0,f24
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, f24.f64);
	// bge cr6,0x82db21a4
	if (!cr6.lt) goto loc_82DB21A4;
	// fsubs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 - f0.f64));
	// fdivs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 / f0.f64));
loc_82DB2118:
	// lfs f13,4(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r25.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x82db21a4
	if (!cr6.lt) goto loc_82DB21A4;
	// addi r10,r1,288
	ctx.r10.s64 = ctx.r1.s64 + 288;
	// lvx128 v13,r0,r26
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r26.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r1,288
	ctx.r8.s64 = ctx.r1.s64 + 288;
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// rlwinm r10,r31,15,0,16
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 15) & 0xFFFF8000;
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// stfs f0,304(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// vmsum3fp128 v13,v0,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v13.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r11,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, r11.u32);
	// addi r11,r1,256
	r11.s64 = ctx.r1.s64 + 256;
	// stvx128 v13,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,256(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	f0.f64 = double(temp.f32);
	// fsqrts f0,f0
	f0.f64 = double(float(sqrt(f0.f64)));
	// fdivs f0,f21,f0
	f0.f64 = double(float(f21.f64 / f0.f64));
	// stfs f0,256(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// addi r11,r1,256
	r11.s64 = ctx.r1.s64 + 256;
	// lvx128 v13,r0,r11
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,288
	r11.s64 = ctx.r1.s64 + 288;
	// vspltw v13,v13,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82DB21A4:
	// li r11,8
	r11.s64 = 8;
	// lwzx r10,r11,r22
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r22.u32);
loc_82DB21AC:
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82db21d8
	if (!cr6.lt) goto loc_82DB21D8;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r9,r9,25692
	ctx.r9.s64 = ctx.r9.s64 + 25692;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r8,r11,12
	ctx.r8.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82DB21D8:
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// li r0,-288
	r0.s64 = -288;
	// lvx128 v126,r1,r0
	_mm_store_si128((__m128i*)v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r0,-272
	r0.s64 = -272;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r12,r1,-152
	r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82ca7530
	// b 0x82ca2c00
	return;
}

__attribute__((alias("__imp__sub_82DB21F8"))) PPC_WEAK_FUNC(sub_82DB21F8);
PPC_FUNC_IMPL(__imp__sub_82DB21F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,16(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	f0.f64 = double(temp.f32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r10,r10,10928
	ctx.r10.s64 = ctx.r10.s64 + 10928;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f1,3084(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3084);
	ctx.f1.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r9,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r9.u8);
	// bl 0x82db1180
	sub_82DB1180(ctx, base);
	// lbz r11,104(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 104);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB2278"))) PPC_WEAK_FUNC(sub_82DB2278);
PPC_FUNC_IMPL(__imp__sub_82DB2278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r10,r10,3880
	ctx.r10.s64 = ctx.r10.s64 + 3880;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// lfs f1,3084(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3084);
	ctx.f1.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// bl 0x82db1180
	sub_82DB1180(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB22D0"))) PPC_WEAK_FUNC(sub_82DB22D0);
PPC_FUNC_IMPL(__imp__sub_82DB22D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// li r9,6
	ctx.r9.s64 = 6;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82DB22F0:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82db22f0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82DB22F0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f12,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	f0.f64 = double(temp.f32);
	// lfs f13,3084(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x82db2320
	if (!cr6.gt) goto loc_82DB2320;
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
loc_82DB2320:
	// lfs f13,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + f0.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lfs f1,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stfs f0,116(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x82db1180
	sub_82DB1180(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB2368"))) PPC_WEAK_FUNC(sub_82DB2368);
PPC_FUNC_IMPL(__imp__sub_82DB2368) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,16(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgelr cr6
	if (!cr6.lt) return;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lvx128 v0,r0,r5
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,1
	ctx.r8.s64 = 1;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f0,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,20(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r9.u32);
	// stb r8,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB23C8"))) PPC_WEAK_FUNC(sub_82DB23C8);
PPC_FUNC_IMPL(__imp__sub_82DB23C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,10916
	r11.s64 = r11.s64 + 10916;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq cr6,0x82db23fc
	if (cr6.eq) goto loc_82DB23FC;
	// bl 0x824fe010
	sub_824FE010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82DB23FC:
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

__attribute__((alias("__imp__sub_82DB2410"))) PPC_WEAK_FUNC(sub_82DB2410);
PPC_FUNC_IMPL(__imp__sub_82DB2410) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB2418"))) PPC_WEAK_FUNC(sub_82DB2418);
PPC_FUNC_IMPL(__imp__sub_82DB2418) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// clrlwi r11,r4,31
	r11.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82db242c
	if (!cr6.eq) goto loc_82DB242C;
	// ori r3,r4,1
	ctx.r3.u64 = ctx.r4.u64 | 1;
	// blr 
	return;
loc_82DB242C:
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r4,31,17,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFF;
	// rlwinm r11,r4,16,16,31
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// bne cr6,0x82db246c
	if (!cr6.eq) goto loc_82DB246C;
	// lwz r9,20(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bne cr6,0x82db246c
	if (!cr6.eq) goto loc_82DB246C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82DB246C:
	// rlwinm r11,r11,15,0,16
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 15) & 0xFFFF8000;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB2480"))) PPC_WEAK_FUNC(sub_82DB2480);
PPC_FUNC_IMPL(__imp__sub_82DB2480) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82db28a0
	sub_82DB28A0(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stfs f31,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// addi r11,r11,4892
	r11.s64 = r11.s64 + 4892;
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// addi r10,r10,4856
	ctx.r10.s64 = ctx.r10.s64 + 4856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// lhz r11,4(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82db24e8
	if (cr6.eq) goto loc_82DB24E8;
	// lhz r11,6(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 6);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,6(r30)
	PPC_STORE_U16(r30.u32 + 6, r11.u16);
loc_82DB24E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB2508"))) PPC_WEAK_FUNC(sub_82DB2508);
PPC_FUNC_IMPL(__imp__sub_82DB2508) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,4892
	r11.s64 = r11.s64 + 4892;
	// addi r10,r10,4856
	ctx.r10.s64 = ctx.r10.s64 + 4856;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82db2570
	if (cr6.eq) goto loc_82DB2570;
	// lhz r11,6(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// extsh r11,r11
	r11.s64 = r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, r11.u16);
	// bne cr6,0x82db2570
	if (!cr6.eq) goto loc_82DB2570;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82DB2570:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,68
	r11.s64 = r11.s64 + 68;
	// addi r10,r10,14712
	ctx.r10.s64 = ctx.r10.s64 + 14712;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82DB25A0"))) PPC_WEAK_FUNC(sub_82DB25A0);
PPC_FUNC_IMPL(__imp__sub_82DB25A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// lfs f0,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 28);
	f0.f64 = double(temp.f32);
	// fadds f1,f0,f1
	ctx.f1.f64 = double(float(f0.f64 + ctx.f1.f64));
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82DB25C0"))) PPC_WEAK_FUNC(sub_82DB25C0);
PPC_FUNC_IMPL(__imp__sub_82DB25C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bdc
	// addi r12,r1,-64
	r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82ca7508
	// addi r12,r1,-96
	r12.s64 = ctx.r1.s64 + -96;
	// bl 0x82ffff44
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r29,r25,31,17,31
	r29.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 31) & 0x7FFF;
	// rlwinm r28,r25,16,16,31
	r28.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82db2648
	if (cr6.eq) goto loc_82DB2648;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	f0.f64 = double(temp.f32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stfs f0,16(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// addi r9,r10,19652
	ctx.r9.s64 = ctx.r10.s64 + 19652;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,5
	ctx.r7.s64 = 5;
	// li r6,6
	ctx.r6.s64 = 6;
	// addi r11,r5,80
	r11.s64 = ctx.r5.s64 + 80;
	// sth r8,6(r5)
	PPC_STORE_U16(ctx.r5.u32 + 6, ctx.r8.u16);
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// stw r10,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r10.u32);
	// stw r7,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r7.u32);
	// sth r10,20(r5)
	PPC_STORE_U16(ctx.r5.u32 + 20, ctx.r10.u16);
	// stb r6,22(r5)
	PPC_STORE_U8(ctx.r5.u32 + 22, ctx.r6.u8);
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vxor v0,v0,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_setzero_si128());
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stb r10,23(r5)
	PPC_STORE_U8(ctx.r5.u32 + 23, ctx.r10.u8);
	// b 0x82db264c
	goto loc_82DB264C;
loc_82DB2648:
	// li r26,0
	r26.s64 = 0;
loc_82DB264C:
	// extsw r11,r29
	r11.s64 = r29.s32;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r30,r3,32
	r30.s64 = ctx.r3.s64 + 32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f30,f0
	f30.f64 = double(float(f0.f64));
	// stfs f30,96(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsw r10,r28
	ctx.r10.s64 = r28.s32;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f1,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r27,r28,1
	r27.s64 = r28.s64 + 1;
	// lvx128 v0,r0,r30
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f30,112(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfs f31,3084(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f31.f64 = double(temp.f32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// lfd f0,88(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f29,f0
	f29.f64 = double(float(f0.f64));
	// stfs f29,104(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lvx128 v13,r0,r10
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v127,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(v127.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stfs f1,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lvx128 v0,r0,r30
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lfs f0,3080(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f0.f64 = double(temp.f32);
	// fadds f28,f29,f0
	f28.f64 = double(float(f29.f64 + f0.f64));
	// stfs f28,120(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fadds f30,f30,f0
	f30.f64 = double(float(f30.f64 + f0.f64));
	// stfs f30,96(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lvx128 v13,r0,r10
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// vmulfp128 v126,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(v126.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stfs f1,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// stfs f29,104(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lvx128 v0,r0,r30
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stfs f30,112(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lvx128 v13,r0,r10
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v125,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(v125.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stfs f1,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f28,120(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// lvx128 v0,r0,r30
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r30.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r11
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// vmulfp128 v124,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(v124.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r10,48
	ctx.r10.s64 = 48;
	// li r9,64
	ctx.r9.s64 = 64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// clrlwi r11,r25,31
	r11.u64 = r25.u32 & 0x1;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// beq cr6,0x82db27e4
	if (cr6.eq) goto loc_82DB27E4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,32
	r11.s64 = 32;
	// stvx128 v127,r26,r11
	_mm_store_si128((__m128i*)(base + ((r26.u32 + r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bne cr6,0x82db27d8
	if (!cr6.eq) goto loc_82DB27D8;
	// stvx128 v126,r26,r10
	_mm_store_si128((__m128i*)(base + ((r26.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v124,r26,r9
	_mm_store_si128((__m128i*)(base + ((r26.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v124.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82db280c
	goto loc_82DB280C;
loc_82DB27D8:
	// stvx128 v124,r26,r10
	_mm_store_si128((__m128i*)(base + ((r26.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v124.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v125,r26,r9
	_mm_store_si128((__m128i*)(base + ((r26.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82db280c
	goto loc_82DB280C;
loc_82DB27E4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,32
	r11.s64 = 32;
	// bne cr6,0x82db2800
	if (!cr6.eq) goto loc_82DB2800;
	// stvx128 v127,r26,r11
	_mm_store_si128((__m128i*)(base + ((r26.u32 + r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v126,r26,r10
	_mm_store_si128((__m128i*)(base + ((r26.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v125,r26,r9
	_mm_store_si128((__m128i*)(base + ((r26.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82db280c
	goto loc_82DB280C;
loc_82DB2800:
	// stvx128 v124,r26,r11
	_mm_store_si128((__m128i*)(base + ((r26.u32 + r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v124.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v125,r26,r10
	_mm_store_si128((__m128i*)(base + ((r26.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v126,r26,r9
	_mm_store_si128((__m128i*)(base + ((r26.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82DB280C:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-96
	r12.s64 = ctx.r1.s64 + -96;
	// bl 0x830001dc
	// addi r12,r1,-64
	r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82ca7554
	// b 0x82ca2c2c
	return;
}

__attribute__((alias("__imp__sub_82DB2828"))) PPC_WEAK_FUNC(sub_82DB2828);
PPC_FUNC_IMPL(__imp__sub_82DB2828) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bnelr cr6
	if (!cr6.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB2840"))) PPC_WEAK_FUNC(sub_82DB2840);
PPC_FUNC_IMPL(__imp__sub_82DB2840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,10976
	ctx.r4.s64 = r11.s64 + 10976;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_82DB28A0"))) PPC_WEAK_FUNC(sub_82DB28A0);
PPC_FUNC_IMPL(__imp__sub_82DB28A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r11,r11,68
	r11.s64 = r11.s64 + 68;
	// addi r10,r10,188
	ctx.r10.s64 = ctx.r10.s64 + 188;
	// addi r9,r9,152
	ctx.r9.s64 = ctx.r9.s64 + 152;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// sth r7,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r7.u16);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// stb r8,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB28E0"))) PPC_WEAK_FUNC(sub_82DB28E0);
PPC_FUNC_IMPL(__imp__sub_82DB28E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bd0
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r24,0(r13)
	r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r25,8
	r25.s64 = 8;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwzx r11,r25,r24
	r11.u64 = PPC_LOAD_U32(r25.u32 + r24.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82db2934
	if (!cr6.lt) goto loc_82DB2934;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r9,r9,10988
	ctx.r9.s64 = ctx.r9.s64 + 10988;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
loc_82DB2934:
	// lwz r11,64(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 64);
	// li r23,-1
	r23.s64 = -1;
	// addi r30,r27,16
	r30.s64 = r27.s64 + 16;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mr r26,r23
	r26.u64 = r23.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,64(r28)
	PPC_STORE_U32(r28.u32 + 64, r11.u32);
	// lwz r11,36(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,16(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bne cr6,0x82db29ec
	if (!cr6.eq) goto loc_82DB29EC;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(r31.s32, -1, xer);
	// beq cr6,0x82db2aa0
	if (cr6.eq) goto loc_82DB2AA0;
loc_82DB2978:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,81(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82db29c4
	if (cr6.eq) goto loc_82DB29C4;
	// mr r26,r31
	r26.u64 = r31.u64;
loc_82DB29C4:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(r31.s32, -1, xer);
	// bne cr6,0x82db2978
	if (!cr6.eq) goto loc_82DB2978;
	// b 0x82db2aa0
	goto loc_82DB2AA0;
loc_82DB29EC:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(r31.s32, -1, xer);
	// beq cr6,0x82db2aa0
	if (cr6.eq) goto loc_82DB2AA0;
loc_82DB29FC:
	// lwz r4,36(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82db2a7c
	if (cr6.eq) goto loc_82DB2A7C;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82db2a7c
	if (cr6.eq) goto loc_82DB2A7C;
	// mr r26,r31
	r26.u64 = r31.u64;
loc_82DB2A7C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(r31.s32, -1, xer);
	// bne cr6,0x82db29fc
	if (!cr6.eq) goto loc_82DB29FC;
loc_82DB2AA0:
	// lwz r11,64(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 64);
	// cmpwi cr6,r26,-1
	cr6.compare<int32_t>(r26.s32, -1, xer);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,64(r28)
	PPC_STORE_U32(r28.u32 + 64, r11.u32);
	// beq cr6,0x82db2ac0
	if (cr6.eq) goto loc_82DB2AC0;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r26,r11,r28
	PPC_STORE_U32(r11.u32 + r28.u32, r26.u32);
loc_82DB2AC0:
	// lwzx r10,r25,r24
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + r24.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82db2af0
	if (!cr6.lt) goto loc_82DB2AF0;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r9,r9,25692
	ctx.r9.s64 = ctx.r9.s64 + 25692;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r8,r11,12
	ctx.r8.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82DB2AF0:
	// subf r11,r26,r23
	r11.s64 = r23.s64 - r26.s64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// stb r11,0(r22)
	PPC_STORE_U8(r22.u32 + 0, r11.u8);
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x82ca2c20
	return;
}

__attribute__((alias("__imp__sub_82DB2B10"))) PPC_WEAK_FUNC(sub_82DB2B10);
PPC_FUNC_IMPL(__imp__sub_82DB2B10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bdc
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r25,0(r13)
	r25.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r26,8
	r26.s64 = 8;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwzx r10,r26,r25
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + r25.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82db2b68
	if (!cr6.lt) goto loc_82DB2B68;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r8,r8,11004
	ctx.r8.s64 = ctx.r8.s64 + 11004;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r8
	ctx.r8.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82DB2B68:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r28,r29,16
	r28.s64 = r29.s64 + 16;
	// addi r30,r9,16
	r30.s64 = ctx.r9.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f0,3164(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3164);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f0,0(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 0, temp.u32);
	// lvx128 v0,r0,r29
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// lfs f0,3036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3036);
	f0.f64 = double(temp.f32);
	// stvx128 v0,r0,r29
	_mm_store_si128((__m128i*)(base + ((r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,0(r28)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r28.u32 + 0, temp.u32);
	// lvx128 v0,r0,r28
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r28.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// stvx128 v0,r0,r28
	_mm_store_si128((__m128i*)(base + ((r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,16(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(r31.s32, -1, xer);
	// beq cr6,0x82db2c44
	if (cr6.eq) goto loc_82DB2C44;
loc_82DB2BC0:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v12,r0,r29
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r29.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lvx128 v11,r0,r28
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r28.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// vminfp v0,v12,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_min_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)));
	// lvx128 v13,r0,r11
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaxfp v13,v11,v13
	_mm_store_ps(ctx.v13.f32, _mm_max_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r0,r29
	_mm_store_si128((__m128i*)(base + ((r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r28
	_mm_store_si128((__m128i*)(base + ((r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(r31.s32, -1, xer);
	// bne cr6,0x82db2bc0
	if (!cr6.eq) goto loc_82DB2BC0;
loc_82DB2C44:
	// lwzx r10,r26,r25
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + r25.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82db2c74
	if (!cr6.lt) goto loc_82DB2C74;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r9,r9,25692
	ctx.r9.s64 = ctx.r9.s64 + 25692;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r8,r11,12
	ctx.r8.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82DB2C74:
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82ca2c2c
	return;
}

__attribute__((alias("__imp__sub_82DB2C80"))) PPC_WEAK_FUNC(sub_82DB2C80);
PPC_FUNC_IMPL(__imp__sub_82DB2C80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be4
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,0(r13)
	r27.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r28,8
	r28.s64 = 8;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwzx r10,r28,r27
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + r27.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82db2ccc
	if (!cr6.lt) goto loc_82DB2CCC;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r9,r9,11036
	ctx.r9.s64 = ctx.r9.s64 + 11036;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r8,r11,12
	ctx.r8.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82DB2CCC:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r30,r3,16
	r30.s64 = ctx.r3.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f31,3036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3036);
	f31.f64 = double(temp.f32);
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(r31.s32, -1, xer);
	// beq cr6,0x82db2d54
	if (cr6.eq) goto loc_82DB2D54;
loc_82DB2CF8:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// fsubs f0,f31,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f31.f64 - ctx.f1.f64));
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// fsel f31,f0,f31,f1
	f31.f64 = f0.f64 >= 0.0 ? f31.f64 : ctx.f1.f64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(r31.s32, -1, xer);
	// bne cr6,0x82db2cf8
	if (!cr6.eq) goto loc_82DB2CF8;
loc_82DB2D54:
	// lwzx r10,r28,r27
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + r27.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82db2d84
	if (!cr6.lt) goto loc_82DB2D84;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r9,r9,25692
	ctx.r9.s64 = ctx.r9.s64 + 25692;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r8,r11,12
	ctx.r8.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82DB2D84:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// lfd f31,-56(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82ca2c34
	return;
}

__attribute__((alias("__imp__sub_82DB2D98"))) PPC_WEAK_FUNC(sub_82DB2D98);
PPC_FUNC_IMPL(__imp__sub_82DB2D98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bd8
	// stwu r1,-720(r1)
	ea = -720 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r24,0(r13)
	r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r25,8
	r25.s64 = 8;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// lwzx r11,r25,r24
	r11.u64 = PPC_LOAD_U32(r25.u32 + r24.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82db2dec
	if (!cr6.lt) goto loc_82DB2DEC;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r9,r9,10988
	ctx.r9.s64 = ctx.r9.s64 + 10988;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
loc_82DB2DEC:
	// lwz r11,36(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// addi r30,r27,16
	r30.s64 = r27.s64 + 16;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,16(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bne cr6,0x82db2e90
	if (!cr6.eq) goto loc_82DB2E90;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(r31.s32, -1, xer);
	// beq cr6,0x82db2f44
	if (cr6.eq) goto loc_82DB2F44;
loc_82DB2E1C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r28.u32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(r31.s32, -1, xer);
	// bne cr6,0x82db2e1c
	if (!cr6.eq) goto loc_82DB2E1C;
	// b 0x82db2f44
	goto loc_82DB2F44;
loc_82DB2E90:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(r31.s32, -1, xer);
	// beq cr6,0x82db2f44
	if (cr6.eq) goto loc_82DB2F44;
loc_82DB2EA0:
	// lwz r4,36(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82db2f20
	if (cr6.eq) goto loc_82DB2F20;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r28.u32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82DB2F20:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(r31.s32, -1, xer);
	// bne cr6,0x82db2ea0
	if (!cr6.eq) goto loc_82DB2EA0;
loc_82DB2F44:
	// lwzx r10,r25,r24
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + r24.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82db2f74
	if (!cr6.lt) goto loc_82DB2F74;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r9,r9,25692
	ctx.r9.s64 = ctx.r9.s64 + 25692;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r8,r11,12
	ctx.r8.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82DB2F74:
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x82ca2c28
	return;
}

__attribute__((alias("__imp__sub_82DB2F80"))) PPC_WEAK_FUNC(sub_82DB2F80);
PPC_FUNC_IMPL(__imp__sub_82DB2F80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82DB2F98"))) PPC_WEAK_FUNC(sub_82DB2F98);
PPC_FUNC_IMPL(__imp__sub_82DB2F98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82DB2FB0"))) PPC_WEAK_FUNC(sub_82DB2FB0);
PPC_FUNC_IMPL(__imp__sub_82DB2FB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,20(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_82DB2FF8"))) PPC_WEAK_FUNC(sub_82DB2FF8);
PPC_FUNC_IMPL(__imp__sub_82DB2FF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// lvx128 v10,r0,r4
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r9,32
	ctx.r9.s64 = 32;
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,48
	ctx.r10.s64 = 48;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// vspltw v6,v0,2
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x55));
	// lvx128 v9,r4,r9
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw v5,v0,1
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xAA));
	// lvx128 v8,r4,r8
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// lvx128 v12,r4,r10
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,5280
	r11.s64 = r11.s64 + 5280;
	// vmulfp128 v9,v6,v9
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v9.f32)));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// vmulfp128 v8,v5,v8
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v8.f32)));
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// vmulfp128 v0,v0,v10
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)));
	// lvx128 v13,r0,r11
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lvx128 v7,r0,r10
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// vspltw v7,v7,0
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v7.u32), 0xFF));
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lvx128 v11,r0,r11
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,44(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 44);
	// vand v10,v9,v13
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vand v9,v8,v13
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vand v0,v0,v13
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vaddfp v13,v10,v7
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v7.f32)));
	// vaddfp v0,v0,v9
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v9.f32)));
	// vaddfp v0,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// vxor v13,v0,v11
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v11.u8)));
	// vaddfp v0,v0,v12
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)));
	// vaddfp v13,v13,v12
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stvx128 v13,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB30C8"))) PPC_WEAK_FUNC(sub_82DB30C8);
PPC_FUNC_IMPL(__imp__sub_82DB30C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,10236
	r11.s64 = r11.s64 + 10236;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,21
	ctx.r7.s64 = 21;
	// addi r10,r10,420
	ctx.r10.s64 = ctx.r10.s64 + 420;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// sth r9,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r9.u16);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// lhz r11,4(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82db3114
	if (cr6.eq) goto loc_82DB3114;
	// lhz r11,6(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 6);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,6(r4)
	PPC_STORE_U16(ctx.r4.u32 + 6, r11.u16);
loc_82DB3114:
	// stb r5,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB3120"))) PPC_WEAK_FUNC(sub_82DB3120);
PPC_FUNC_IMPL(__imp__sub_82DB3120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r17{};
	PPCRegister r18{};
	PPCRegister r19{};
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bbc
	// stfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -144, f30.u64);
	// stfd f31,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lvx128 v0,r0,r4
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// addi r10,r10,5168
	ctx.r10.s64 = ctx.r10.s64 + 5168;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r27,24(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// li r9,64
	ctx.r9.s64 = 64;
	// li r7,48
	ctx.r7.s64 = 48;
	// lvx128 v13,r0,r10
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lfs f0,28(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	f0.f64 = double(temp.f32);
	// mr r18,r5
	r18.u64 = ctx.r5.u64;
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// lvx128 v12,r4,r6
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r8,16(r27)
	ctx.r8.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lfs f0,28(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 28);
	f0.f64 = double(temp.f32);
	// lvx128 v11,r0,r10
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// vspltw v11,v11,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0xFF));
	// stvx128 v12,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stvx128 v11,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// vaddfp v11,v11,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32)));
	// lvx128 v10,r0,r11
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// vspltw v0,v10,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0xFF));
	// vaddfp v10,v0,v12
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)));
	// lvx128 v0,r27,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r27.u32 + ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,r27,r7
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r27.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// stvx128 v11,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vaddfp v11,v11,v0
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32)));
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// vaddfp v0,v10,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v10,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// vmaddfp v11,v11,v12,v13
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v0,v12,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v11,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r24,r10,26,16,31
	r24.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0xFFFF;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r25,r11,26,16,31
	r25.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0xFFFF;
	// rlwinm r17,r7,26,16,31
	r17.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 26) & 0xFFFF;
	// cmplw cr6,r25,r9
	cr6.compare<uint32_t>(r25.u32, ctx.r9.u32, xer);
	// rlwinm r20,r6,26,16,31
	r20.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 26) & 0xFFFF;
	// blt cr6,0x82db3224
	if (cr6.lt) goto loc_82DB3224;
	// cmplw cr6,r17,r9
	cr6.compare<uint32_t>(r17.u32, ctx.r9.u32, xer);
	// bge cr6,0x82db343c
	if (!cr6.lt) goto loc_82DB343C;
loc_82DB3224:
	// lwz r10,20(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 20);
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(r24.u32, r11.u32, xer);
	// blt cr6,0x82db323c
	if (cr6.lt) goto loc_82DB323C;
	// cmplw cr6,r20,r11
	cr6.compare<uint32_t>(r20.u32, r11.u32, xer);
	// bge cr6,0x82db343c
	if (!cr6.lt) goto loc_82DB343C;
loc_82DB323C:
	// cmplw cr6,r25,r9
	cr6.compare<uint32_t>(r25.u32, ctx.r9.u32, xer);
	// blt cr6,0x82db3248
	if (cr6.lt) goto loc_82DB3248;
	// li r25,0
	r25.s64 = 0;
loc_82DB3248:
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(r24.u32, r11.u32, xer);
	// blt cr6,0x82db3254
	if (cr6.lt) goto loc_82DB3254;
	// li r24,0
	r24.s64 = 0;
loc_82DB3254:
	// cmplw cr6,r17,r9
	cr6.compare<uint32_t>(r17.u32, ctx.r9.u32, xer);
	// blt cr6,0x82db3260
	if (cr6.lt) goto loc_82DB3260;
	// addi r17,r8,-2
	r17.s64 = ctx.r8.s64 + -2;
loc_82DB3260:
	// cmplw cr6,r20,r11
	cr6.compare<uint32_t>(r20.u32, r11.u32, xer);
	// blt cr6,0x82db326c
	if (cr6.lt) goto loc_82DB326C;
	// addi r20,r10,-2
	r20.s64 = ctx.r10.s64 + -2;
loc_82DB326C:
	// lbz r11,24(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82db3450
	if (cr6.eq) goto loc_82DB3450;
	// lfs f31,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	f31.f64 = double(temp.f32);
	// li r23,1
	r23.s64 = 1;
	// lfs f30,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	f30.f64 = double(temp.f32);
	// li r22,1
	r22.s64 = 1;
	// mr r26,r25
	r26.u64 = r25.u64;
	// cmplw cr6,r25,r17
	cr6.compare<uint32_t>(r25.u32, r17.u32, xer);
	// bgt cr6,0x82db3358
	if (cr6.gt) goto loc_82DB3358;
	// lis r19,1
	r19.s64 = 65536;
loc_82DB329C:
	// mr r28,r24
	r28.u64 = r24.u64;
	// cmplw cr6,r24,r20
	cr6.compare<uint32_t>(r24.u32, r20.u32, xer);
	// bgt cr6,0x82db334c
	if (cr6.gt) goto loc_82DB334C;
	// rlwinm r10,r24,15,0,16
	ctx.r10.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 15) & 0xFFFF8000;
	// rlwinm r11,r31,2,0,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + r26.u64;
	// add r30,r11,r18
	r30.u64 = r11.u64 + r18.u64;
	// rlwinm r29,r10,1,0,30
	r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_82DB32BC:
	// cmpw cr6,r31,r21
	cr6.compare<int32_t>(r31.s32, r21.s32, xer);
	// bge cr6,0x82db32e8
	if (!cr6.lt) goto loc_82DB32E8;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r31,r21
	cr6.compare<int32_t>(r31.s32, r21.s32, xer);
	// bge cr6,0x82db32e8
	if (!cr6.lt) goto loc_82DB32E8;
	// ori r11,r29,1
	r11.u64 = r29.u64 | 1;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
loc_82DB32E8:
	// extsb r11,r23
	r11.s64 = r23.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82db3300
	if (!cr6.eq) goto loc_82DB3300;
	// extsb r11,r22
	r11.s64 = r22.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82db333c
	if (cr6.eq) goto loc_82DB333C;
loc_82DB3300:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,36(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 36);
	f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 * f0.f64));
	// fcmpu cr6,f30,f0
	cr6.compare(f30.f64, f0.f64);
	// bge cr6,0x82db3330
	if (!cr6.lt) goto loc_82DB3330;
	// li r23,0
	r23.s64 = 0;
loc_82DB3330:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, f0.f64);
	// ble cr6,0x82db333c
	if (!cr6.gt) goto loc_82DB333C;
	// li r22,0
	r22.s64 = 0;
loc_82DB333C:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// add r29,r29,r19
	r29.u64 = r29.u64 + r19.u64;
	// cmplw cr6,r28,r20
	cr6.compare<uint32_t>(r28.u32, r20.u32, xer);
	// ble cr6,0x82db32bc
	if (!cr6.gt) goto loc_82DB32BC;
loc_82DB334C:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmplw cr6,r26,r17
	cr6.compare<uint32_t>(r26.u32, r17.u32, xer);
	// ble cr6,0x82db329c
	if (!cr6.gt) goto loc_82DB329C;
loc_82DB3358:
	// extsb r11,r23
	r11.s64 = r23.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82db3370
	if (!cr6.eq) goto loc_82DB3370;
	// extsb r11,r22
	r11.s64 = r22.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82db3424
	if (cr6.eq) goto loc_82DB3424;
loc_82DB3370:
	// addi r28,r17,1
	r28.s64 = r17.s64 + 1;
	// mr r30,r25
	r30.u64 = r25.u64;
	// cmplw cr6,r25,r28
	cr6.compare<uint32_t>(r25.u32, r28.u32, xer);
	// bgt cr6,0x82db33cc
	if (cr6.gt) goto loc_82DB33CC;
	// addi r29,r20,1
	r29.s64 = r20.s64 + 1;
loc_82DB3384:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,36(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 36);
	f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 * f0.f64));
	// fcmpu cr6,f30,f0
	cr6.compare(f30.f64, f0.f64);
	// bge cr6,0x82db33b4
	if (!cr6.lt) goto loc_82DB33B4;
	// li r23,0
	r23.s64 = 0;
loc_82DB33B4:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, f0.f64);
	// ble cr6,0x82db33c0
	if (!cr6.gt) goto loc_82DB33C0;
	// li r22,0
	r22.s64 = 0;
loc_82DB33C0:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// ble cr6,0x82db3384
	if (!cr6.gt) goto loc_82DB3384;
loc_82DB33CC:
	// addi r29,r20,1
	r29.s64 = r20.s64 + 1;
	// mr r30,r24
	r30.u64 = r24.u64;
	// cmplw cr6,r24,r29
	cr6.compare<uint32_t>(r24.u32, r29.u32, xer);
	// bgt cr6,0x82db3424
	if (cr6.gt) goto loc_82DB3424;
loc_82DB33DC:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,36(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 36);
	f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 * f0.f64));
	// fcmpu cr6,f30,f0
	cr6.compare(f30.f64, f0.f64);
	// bge cr6,0x82db340c
	if (!cr6.lt) goto loc_82DB340C;
	// li r23,0
	r23.s64 = 0;
loc_82DB340C:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, f0.f64);
	// ble cr6,0x82db3418
	if (!cr6.gt) goto loc_82DB3418;
	// li r22,0
	r22.s64 = 0;
loc_82DB3418:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// ble cr6,0x82db33dc
	if (!cr6.gt) goto loc_82DB33DC;
loc_82DB3424:
	// extsb r11,r23
	r11.s64 = r23.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82db343c
	if (!cr6.eq) goto loc_82DB343C;
	// extsb r11,r22
	r11.s64 = r22.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82db34cc
	if (cr6.eq) goto loc_82DB34CC;
loc_82DB343C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x82ca2c0c
	return;
loc_82DB3450:
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// cmplw cr6,r25,r17
	cr6.compare<uint32_t>(r25.u32, r17.u32, xer);
	// bgt cr6,0x82db34cc
	if (cr6.gt) goto loc_82DB34CC;
	// lis r19,1
	r19.s64 = 65536;
loc_82DB3460:
	// cmplw cr6,r24,r20
	cr6.compare<uint32_t>(r24.u32, r20.u32, xer);
	// bgt cr6,0x82db34c0
	if (cr6.gt) goto loc_82DB34C0;
	// rlwinm r10,r24,15,0,16
	ctx.r10.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 15) & 0xFFFF8000;
	// rlwinm r11,r31,2,0,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// subf r9,r24,r20
	ctx.r9.s64 = r20.s64 - r24.s64;
	// add r11,r11,r18
	r11.u64 = r11.u64 + r18.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_82DB3484:
	// cmpw cr6,r31,r21
	cr6.compare<int32_t>(r31.s32, r21.s32, xer);
	// bge cr6,0x82db34b0
	if (!cr6.lt) goto loc_82DB34B0;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpw cr6,r31,r21
	cr6.compare<int32_t>(r31.s32, r21.s32, xer);
	// bge cr6,0x82db34b0
	if (!cr6.lt) goto loc_82DB34B0;
	// ori r7,r10,1
	ctx.r7.u64 = ctx.r10.u64 | 1;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82DB34B0:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// add r10,r10,r19
	ctx.r10.u64 = ctx.r10.u64 + r19.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82db3484
	if (!cr6.eq) goto loc_82DB3484;
loc_82DB34C0:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplw cr6,r8,r17
	cr6.compare<uint32_t>(ctx.r8.u32, r17.u32, xer);
	// ble cr6,0x82db3460
	if (!cr6.gt) goto loc_82DB3460;
loc_82DB34CC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x82ca2c0c
	return;
}

__attribute__((alias("__imp__sub_82DB34E0"))) PPC_WEAK_FUNC(sub_82DB34E0);
PPC_FUNC_IMPL(__imp__sub_82DB34E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r18{};
	PPCRegister r19{};
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bc0
	// stfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -136, f30.u64);
	// stfd f31,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lvx128 v0,r0,r4
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r10,r10,5168
	ctx.r10.s64 = ctx.r10.s64 + 5168;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// li r9,64
	ctx.r9.s64 = 64;
	// lwz r27,24(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// li r7,48
	ctx.r7.s64 = 48;
	// lvx128 v12,r4,r6
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lvx128 v13,r0,r10
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lfs f0,28(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	f0.f64 = double(temp.f32);
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// lwz r8,16(r27)
	ctx.r8.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lfs f0,28(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 28);
	f0.f64 = double(temp.f32);
	// lvx128 v11,r0,r10
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// vspltw v11,v11,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0xFF));
	// stvx128 v12,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stvx128 v11,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// vaddfp v11,v11,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32)));
	// lvx128 v10,r0,r11
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// vspltw v0,v10,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0xFF));
	// vaddfp v10,v0,v12
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)));
	// lvx128 v0,r27,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r27.u32 + ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,r27,r7
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r27.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// stvx128 v11,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vaddfp v11,v11,v0
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32)));
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// vaddfp v0,v10,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v10,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// vmaddfp v11,v11,v12,v13
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v0,v12,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v11,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r21,r10,26,16,31
	r21.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0xFFFF;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r25,r11,26,16,31
	r25.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0xFFFF;
	// rlwinm r18,r7,26,16,31
	r18.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 26) & 0xFFFF;
	// cmplw cr6,r25,r9
	cr6.compare<uint32_t>(r25.u32, ctx.r9.u32, xer);
	// rlwinm r20,r6,26,16,31
	r20.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 26) & 0xFFFF;
	// blt cr6,0x82db35e0
	if (cr6.lt) goto loc_82DB35E0;
	// cmplw cr6,r18,r9
	cr6.compare<uint32_t>(r18.u32, ctx.r9.u32, xer);
	// bge cr6,0x82db3940
	if (!cr6.lt) goto loc_82DB3940;
loc_82DB35E0:
	// lwz r10,20(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 20);
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r21,r11
	cr6.compare<uint32_t>(r21.u32, r11.u32, xer);
	// blt cr6,0x82db35f8
	if (cr6.lt) goto loc_82DB35F8;
	// cmplw cr6,r20,r11
	cr6.compare<uint32_t>(r20.u32, r11.u32, xer);
	// bge cr6,0x82db3940
	if (!cr6.lt) goto loc_82DB3940;
loc_82DB35F8:
	// cmplw cr6,r25,r9
	cr6.compare<uint32_t>(r25.u32, ctx.r9.u32, xer);
	// blt cr6,0x82db3604
	if (cr6.lt) goto loc_82DB3604;
	// li r25,0
	r25.s64 = 0;
loc_82DB3604:
	// cmplw cr6,r21,r11
	cr6.compare<uint32_t>(r21.u32, r11.u32, xer);
	// blt cr6,0x82db3610
	if (cr6.lt) goto loc_82DB3610;
	// li r21,0
	r21.s64 = 0;
loc_82DB3610:
	// cmplw cr6,r18,r9
	cr6.compare<uint32_t>(r18.u32, ctx.r9.u32, xer);
	// blt cr6,0x82db361c
	if (cr6.lt) goto loc_82DB361C;
	// addi r18,r8,-2
	r18.s64 = ctx.r8.s64 + -2;
loc_82DB361C:
	// cmplw cr6,r20,r11
	cr6.compare<uint32_t>(r20.u32, r11.u32, xer);
	// blt cr6,0x82db3628
	if (cr6.lt) goto loc_82DB3628;
	// addi r20,r10,-2
	r20.s64 = ctx.r10.s64 + -2;
loc_82DB3628:
	// lbz r11,24(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// lwz r19,4(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82db3880
	if (cr6.eq) goto loc_82DB3880;
	// lfs f31,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	f31.f64 = double(temp.f32);
	// li r24,1
	r24.s64 = 1;
	// lfs f30,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	f30.f64 = double(temp.f32);
	// li r22,1
	r22.s64 = 1;
	// mr r26,r25
	r26.u64 = r25.u64;
	// cmplw cr6,r25,r18
	cr6.compare<uint32_t>(r25.u32, r18.u32, xer);
	// bgt cr6,0x82db3758
	if (cr6.gt) goto loc_82DB3758;
	// lis r23,1
	r23.s64 = 65536;
loc_82DB3658:
	// mr r28,r21
	r28.u64 = r21.u64;
	// cmplw cr6,r21,r20
	cr6.compare<uint32_t>(r21.u32, r20.u32, xer);
	// bgt cr6,0x82db374c
	if (cr6.gt) goto loc_82DB374C;
	// rlwinm r11,r21,15,0,16
	r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 15) & 0xFFFF8000;
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// rlwinm r29,r11,1,0,30
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_82DB3670:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bne cr6,0x82db3690
	if (!cr6.eq) goto loc_82DB3690;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d512f8
	sub_82D512F8(ctx, base);
loc_82DB3690:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// ori r30,r29,1
	r30.u64 = r29.u64 | 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r29.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi r10,r10,2
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x82db36cc
	if (!cr6.eq) goto loc_82DB36CC;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d512f8
	sub_82D512F8(ctx, base);
loc_82DB36CC:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// extsb r9,r24
	ctx.r9.s64 = r24.s8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stwx r30,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x82db3700
	if (!cr6.eq) goto loc_82DB3700;
	// extsb r11,r22
	r11.s64 = r22.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82db373c
	if (cr6.eq) goto loc_82DB373C;
loc_82DB3700:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,36(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 36);
	f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 * f0.f64));
	// fcmpu cr6,f30,f0
	cr6.compare(f30.f64, f0.f64);
	// bge cr6,0x82db3730
	if (!cr6.lt) goto loc_82DB3730;
	// li r24,0
	r24.s64 = 0;
loc_82DB3730:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, f0.f64);
	// ble cr6,0x82db373c
	if (!cr6.gt) goto loc_82DB373C;
	// li r22,0
	r22.s64 = 0;
loc_82DB373C:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// add r29,r29,r23
	r29.u64 = r29.u64 + r23.u64;
	// cmplw cr6,r28,r20
	cr6.compare<uint32_t>(r28.u32, r20.u32, xer);
	// ble cr6,0x82db3670
	if (!cr6.gt) goto loc_82DB3670;
loc_82DB374C:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmplw cr6,r26,r18
	cr6.compare<uint32_t>(r26.u32, r18.u32, xer);
	// ble cr6,0x82db3658
	if (!cr6.gt) goto loc_82DB3658;
loc_82DB3758:
	// extsb r11,r24
	r11.s64 = r24.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82db3770
	if (!cr6.eq) goto loc_82DB3770;
	// extsb r11,r22
	r11.s64 = r22.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82db3824
	if (cr6.eq) goto loc_82DB3824;
loc_82DB3770:
	// addi r28,r18,1
	r28.s64 = r18.s64 + 1;
	// mr r30,r25
	r30.u64 = r25.u64;
	// cmplw cr6,r25,r28
	cr6.compare<uint32_t>(r25.u32, r28.u32, xer);
	// bgt cr6,0x82db37cc
	if (cr6.gt) goto loc_82DB37CC;
	// addi r29,r20,1
	r29.s64 = r20.s64 + 1;
loc_82DB3784:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,36(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 36);
	f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 * f0.f64));
	// fcmpu cr6,f30,f0
	cr6.compare(f30.f64, f0.f64);
	// bge cr6,0x82db37b4
	if (!cr6.lt) goto loc_82DB37B4;
	// li r24,0
	r24.s64 = 0;
loc_82DB37B4:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, f0.f64);
	// ble cr6,0x82db37c0
	if (!cr6.gt) goto loc_82DB37C0;
	// li r22,0
	r22.s64 = 0;
loc_82DB37C0:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// ble cr6,0x82db3784
	if (!cr6.gt) goto loc_82DB3784;
loc_82DB37CC:
	// addi r29,r20,1
	r29.s64 = r20.s64 + 1;
	// mr r30,r21
	r30.u64 = r21.u64;
	// cmplw cr6,r21,r29
	cr6.compare<uint32_t>(r21.u32, r29.u32, xer);
	// bgt cr6,0x82db3824
	if (cr6.gt) goto loc_82DB3824;
loc_82DB37DC:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,36(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 36);
	f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 * f0.f64));
	// fcmpu cr6,f30,f0
	cr6.compare(f30.f64, f0.f64);
	// bge cr6,0x82db380c
	if (!cr6.lt) goto loc_82DB380C;
	// li r24,0
	r24.s64 = 0;
loc_82DB380C:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, f0.f64);
	// ble cr6,0x82db3818
	if (!cr6.gt) goto loc_82DB3818;
	// li r22,0
	r22.s64 = 0;
loc_82DB3818:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// ble cr6,0x82db37dc
	if (!cr6.gt) goto loc_82DB37DC;
loc_82DB3824:
	// extsb r11,r24
	r11.s64 = r24.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82db383c
	if (!cr6.eq) goto loc_82DB383C;
	// extsb r11,r22
	r11.s64 = r22.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82db3940
	if (cr6.eq) goto loc_82DB3940;
loc_82DB383C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r19
	cr6.compare<int32_t>(r11.s32, r19.s32, xer);
	// bge cr6,0x82db386c
	if (!cr6.lt) goto loc_82DB386C;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r19,r11
	cr6.compare<int32_t>(r19.s32, r11.s32, xer);
	// blt cr6,0x82db385c
	if (cr6.lt) goto loc_82DB385C;
	// mr r11,r19
	r11.u64 = r19.u64;
loc_82DB385C:
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d51270
	sub_82D51270(ctx, base);
loc_82DB386C:
	// stw r19,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r19.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f31,-128(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x82ca2c10
	return;
loc_82DB3880:
	// mr r27,r25
	r27.u64 = r25.u64;
	// cmplw cr6,r25,r18
	cr6.compare<uint32_t>(r25.u32, r18.u32, xer);
	// bgt cr6,0x82db3940
	if (cr6.gt) goto loc_82DB3940;
	// lis r23,1
	r23.s64 = 65536;
loc_82DB3890:
	// cmplw cr6,r21,r20
	cr6.compare<uint32_t>(r21.u32, r20.u32, xer);
	// bgt cr6,0x82db3934
	if (cr6.gt) goto loc_82DB3934;
	// rlwinm r10,r21,15,0,16
	ctx.r10.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 15) & 0xFFFF8000;
	// subf r11,r21,r20
	r11.s64 = r20.s64 - r21.s64;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// addi r29,r11,1
	r29.s64 = r11.s64 + 1;
	// rlwinm r30,r10,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_82DB38AC:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bne cr6,0x82db38cc
	if (!cr6.eq) goto loc_82DB38CC;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d512f8
	sub_82D512F8(ctx, base);
loc_82DB38CC:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// ori r28,r30,1
	r28.u64 = r30.u64 | 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi r10,r10,2
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x82db3908
	if (!cr6.eq) goto loc_82DB3908;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d512f8
	sub_82D512F8(ctx, base);
loc_82DB3908:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r30,r30,r23
	r30.u64 = r30.u64 + r23.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stwx r28,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r28.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x82db38ac
	if (!cr6.eq) goto loc_82DB38AC;
loc_82DB3934:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmplw cr6,r27,r18
	cr6.compare<uint32_t>(r27.u32, r18.u32, xer);
	// ble cr6,0x82db3890
	if (!cr6.gt) goto loc_82DB3890;
loc_82DB3940:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f31,-128(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x82ca2c10
	return;
}

__attribute__((alias("__imp__sub_82DB3950"))) PPC_WEAK_FUNC(sub_82DB3950);
PPC_FUNC_IMPL(__imp__sub_82DB3950) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,8
	r31.s64 = ctx.r3.s64 + 8;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bne cr6,0x82db3988
	if (!cr6.eq) goto loc_82DB3988;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d512f8
	sub_82D512F8(ctx, base);
loc_82DB3988:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r11,r9
	ctx.r9.u64 = r11.u64 + ctx.r9.u64;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82db39c0
	if (cr6.eq) goto loc_82DB39C0;
loc_82DB39B0:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82db39b0
	if (!cr6.eq) goto loc_82DB39B0;
loc_82DB39C0:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// mr r11,r29
	r11.u64 = r29.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82db39ec
	if (cr6.eq) goto loc_82DB39EC;
loc_82DB39DC:
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82db39dc
	if (!cr6.eq) goto loc_82DB39DC;
loc_82DB39EC:
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r11.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

