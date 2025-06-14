#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_82E66AC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = rotl64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(32) );
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82e66b28
	if (cr6.lt) goto loc_82E66B28;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e66b28
	if (cr6.eq) goto loc_82E66B28;
	// addi r4,r11,224
	ctx.r4.s64 = r11.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d549e8
	sub_82D549E8(ctx, base);
	// lwz r3,44(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(44) );
	// addi r6,r31,32
	ctx.r6.s64 = r31.s64 + 32;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,20(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// bl 0x82d5e650
	sub_82D5E650(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c3c
	return;
loc_82E66B28:
	// lwz r11,44(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(44) );
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = rotl64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lhzx r11,r11,r10
	r11.u64 = PPC_LOAD_U16(r11.u32 + ctx.r10.u32);
	// extsh r4,r11
	ctx.r4.s64 = r11.s16;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82e66b5c
	if (cr6.lt) goto loc_82E66B5C;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e66ac0
	sub_82E66AC0(ctx, base);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// b 0x82e66ba4
	goto loc_82E66BA4;
loc_82E66B5C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f0.f64 = double(temp.f32);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// vxor v13,v13,v13
	simd::store_u8(ctx.v13.u8, simd::zero_i128());
	// lvx128 v12,r0,r11
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r11,r11,16976
	r11.s64 = r11.s64 + 16976;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// stvx128 v13,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// vspltw v13,v12,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v12.u32), 3));
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// stvx128 v13,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
loc_82E66BA4:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r9,44(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + int32_t(44) );
	// vspltw v13,v0,3
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 0));
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,17024
	r11.s64 = r11.s64 + 17024;
	// vpermwi128 v11,v0,135
	simd::store_i32(ctx.v11.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// vpermwi128 v10,v0,99
	simd::store_i32(ctx.v10.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r10,r31,16
	ctx.r10.s64 = r31.s64 + 16;
	// vor v8,v13,v13
	simd::store_i8(ctx.v8.u8, simd::load_i8(ctx.v13.u8));
	// lvx128 v9,r0,r11
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lwz r11,20(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(20) );
	// rlwinm r9,r30,1,0,30
	ctx.r9.u64 = rotl64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// vmaddfp v9,v13,v13,v9
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v9.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v13.f32)), simd::load_f32_aligned(ctx.v9.f32)));
	// add r9,r30,r9
	ctx.r9.u64 = r30.u64 + ctx.r9.u64;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// addi r9,r11,16
	ctx.r9.s64 = r11.s64 + 16;
	// lvx128 v12,r0,r11
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v7,v0,v12
	simd::store_f32_aligned(ctx.v7.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v12.f32), 0xEF));
	// vpermwi128 v6,v12,99
	simd::store_i32(ctx.v6.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v12.u32), 0x9C));
	// vpermwi128 v5,v12,135
	simd::store_i32(ctx.v5.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v12.u32), 0x78));
	// vmulfp128 v12,v12,v9
	simd::store_f32_aligned(ctx.v12.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v9.f32)));
	// vmulfp128 v9,v11,v6
	simd::store_f32_aligned(ctx.v9.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v6.f32)));
	// vmulfp128 v6,v10,v5
	simd::store_f32_aligned(ctx.v6.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v5.f32)));
	// vspltw v7,v7,0
	simd::store_i32(ctx.v7.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v7.u32), 3));
	// vsubfp v9,v6,v9
	simd::store_f32_aligned(ctx.v9.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v6.f32), simd::load_f32_aligned(ctx.v9.f32)));
	// vmaddfp v12,v7,v0,v12
	simd::store_f32_aligned(ctx.v12.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v7.f32), simd::load_f32_aligned(ctx.v0.f32)), simd::load_f32_aligned(ctx.v12.f32)));
	// vmaddfp v13,v9,v13,v12
	simd::store_f32_aligned(ctx.v13.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v9.f32), simd::load_f32_aligned(ctx.v13.f32)), simd::load_f32_aligned(ctx.v12.f32)));
	// lvx128 v12,r0,r7
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vaddfp v13,v13,v13
	simd::store_f32_aligned(ctx.v13.f32, simd::add_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// vaddfp v13,v12,v13
	simd::store_f32_aligned(ctx.v13.f32, simd::add_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v13,r0,r31
	ea = (r31.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v13,r0,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v12,v13,99
	simd::store_i32(ctx.v12.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x9C));
	// vor v9,v13,v13
	simd::store_i8(ctx.v9.u8, simd::load_i8(ctx.v13.u8));
	// vpermwi128 v7,v13,135
	simd::store_i32(ctx.v7.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x78));
	// vmsum3fp128 v6,v0,v13
	simd::store_f32_aligned(ctx.v6.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32), 0xEF));
	// vspltw v13,v13,3
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 0));
	// lfs f0,12(r9)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	f0.f64 = double(temp.f32);
	// vmulfp128 v12,v11,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v12.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// vmulfp128 v11,v10,v7
	simd::store_f32_aligned(ctx.v11.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v7.f32)));
	// stvewx v6,r0,r8
	PPC_STORE_U32((ctx.r8.u32) & ~0x3, simd::extract_u32(*reinterpret_cast<const simd::vec128i*>(&ctx.v6.u32), 3 - ((ctx.r8.u32) & 0xF) >> 2));
	// lfs f13,124(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// vsubfp v12,v11,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v12.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// lfs f12,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fmsubs f0,f13,f0,f12
	f0.f64 = double(std::fma(float(ctx.f13.f64), float(f0.f64), -float(ctx.f12.f64)));
	// vmaddfp v12,v9,v8,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v12.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v9.f32), simd::load_f32_aligned(ctx.v8.f32)), simd::load_f32_aligned(ctx.v12.f32)));
	// vmaddfp v0,v0,v13,v12
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)), simd::load_f32_aligned(ctx.v12.f32)));
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stfs f0,12(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// li r10,32
	ctx.r10.s64 = 32;
	// lvx128 v0,r11,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v0,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// stvx128 v0,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E66AC0) {
	__imp__sub_82E66AC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E66C90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = rotl64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(32) );
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82e66d04
	if (cr6.lt) goto loc_82E66D04;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e66d04
	if (cr6.eq) goto loc_82E66D04;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r3,r11,208
	ctx.r3.s64 = r11.s64 + 208;
	// bl 0x82d84680
	sub_82D84680(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d549e8
	sub_82D549E8(ctx, base);
	// lwz r3,44(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(44) );
	// addi r6,r31,32
	ctx.r6.s64 = r31.s64 + 32;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,20(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// bl 0x82d5e650
	sub_82D5E650(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c3c
	return;
loc_82E66D04:
	// lwz r11,44(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(44) );
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = rotl64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// lhzx r11,r11,r10
	r11.u64 = PPC_LOAD_U16(r11.u32 + ctx.r10.u32);
	// extsh r4,r11
	ctx.r4.s64 = r11.s16;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82e66d38
	if (cr6.lt) goto loc_82E66D38;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e66c90
	sub_82E66C90(ctx, base);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// b 0x82e66d80
	goto loc_82E66D80;
loc_82E66D38:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f0.f64 = double(temp.f32);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// vxor v13,v13,v13
	simd::store_u8(ctx.v13.u8, simd::zero_i128());
	// lvx128 v12,r0,r11
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r11,r11,16976
	r11.s64 = r11.s64 + 16976;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// stvx128 v13,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// vspltw v13,v12,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v12.u32), 3));
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// stvx128 v13,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
loc_82E66D80:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r9,44(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + int32_t(44) );
	// vspltw v13,v0,3
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 0));
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,17024
	r11.s64 = r11.s64 + 17024;
	// vpermwi128 v11,v0,135
	simd::store_i32(ctx.v11.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// vpermwi128 v10,v0,99
	simd::store_i32(ctx.v10.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r10,r31,16
	ctx.r10.s64 = r31.s64 + 16;
	// vor v8,v13,v13
	simd::store_i8(ctx.v8.u8, simd::load_i8(ctx.v13.u8));
	// lvx128 v9,r0,r11
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lwz r11,20(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(20) );
	// rlwinm r9,r30,1,0,30
	ctx.r9.u64 = rotl64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// vmaddfp v9,v13,v13,v9
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v9.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v13.f32)), simd::load_f32_aligned(ctx.v9.f32)));
	// add r9,r30,r9
	ctx.r9.u64 = r30.u64 + ctx.r9.u64;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// addi r9,r11,16
	ctx.r9.s64 = r11.s64 + 16;
	// lvx128 v12,r0,r11
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v7,v0,v12
	simd::store_f32_aligned(ctx.v7.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v12.f32), 0xEF));
	// vpermwi128 v6,v12,99
	simd::store_i32(ctx.v6.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v12.u32), 0x9C));
	// vpermwi128 v5,v12,135
	simd::store_i32(ctx.v5.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v12.u32), 0x78));
	// vmulfp128 v12,v12,v9
	simd::store_f32_aligned(ctx.v12.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v9.f32)));
	// vmulfp128 v9,v11,v6
	simd::store_f32_aligned(ctx.v9.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v6.f32)));
	// vmulfp128 v6,v10,v5
	simd::store_f32_aligned(ctx.v6.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v5.f32)));
	// vspltw v7,v7,0
	simd::store_i32(ctx.v7.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v7.u32), 3));
	// vsubfp v9,v6,v9
	simd::store_f32_aligned(ctx.v9.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v6.f32), simd::load_f32_aligned(ctx.v9.f32)));
	// vmaddfp v12,v7,v0,v12
	simd::store_f32_aligned(ctx.v12.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v7.f32), simd::load_f32_aligned(ctx.v0.f32)), simd::load_f32_aligned(ctx.v12.f32)));
	// vmaddfp v13,v9,v13,v12
	simd::store_f32_aligned(ctx.v13.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v9.f32), simd::load_f32_aligned(ctx.v13.f32)), simd::load_f32_aligned(ctx.v12.f32)));
	// lvx128 v12,r0,r7
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vaddfp v13,v13,v13
	simd::store_f32_aligned(ctx.v13.f32, simd::add_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// vaddfp v13,v12,v13
	simd::store_f32_aligned(ctx.v13.f32, simd::add_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v13,r0,r31
	ea = (r31.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v13,r0,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v12,v13,99
	simd::store_i32(ctx.v12.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x9C));
	// vor v9,v13,v13
	simd::store_i8(ctx.v9.u8, simd::load_i8(ctx.v13.u8));
	// vpermwi128 v7,v13,135
	simd::store_i32(ctx.v7.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x78));
	// vmsum3fp128 v6,v0,v13
	simd::store_f32_aligned(ctx.v6.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32), 0xEF));
	// vspltw v13,v13,3
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 0));
	// lfs f0,12(r9)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	f0.f64 = double(temp.f32);
	// vmulfp128 v12,v11,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v12.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// vmulfp128 v11,v10,v7
	simd::store_f32_aligned(ctx.v11.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v7.f32)));
	// stvewx v6,r0,r8
	PPC_STORE_U32((ctx.r8.u32) & ~0x3, simd::extract_u32(*reinterpret_cast<const simd::vec128i*>(&ctx.v6.u32), 3 - ((ctx.r8.u32) & 0xF) >> 2));
	// lfs f13,124(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// vsubfp v12,v11,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v12.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// lfs f12,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fmsubs f0,f13,f0,f12
	f0.f64 = double(std::fma(float(ctx.f13.f64), float(f0.f64), -float(ctx.f12.f64)));
	// vmaddfp v12,v9,v8,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v12.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v9.f32), simd::load_f32_aligned(ctx.v8.f32)), simd::load_f32_aligned(ctx.v12.f32)));
	// vmaddfp v0,v0,v13,v12
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)), simd::load_f32_aligned(ctx.v12.f32)));
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stfs f0,12(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// li r10,32
	ctx.r10.s64 = 32;
	// lvx128 v0,r11,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v0,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// stvx128 v0,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E66C90) {
	__imp__sub_82E66C90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E66E70) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r29,r27,8
	r29.s64 = r27.s64 + 8;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stw r6,44(r27)
	PPC_STORE_U32(r27.u32 + 44, ctx.r6.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// clrlwi r10,r11,2
	ctx.r10.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bge cr6,0x82e66f00
	if (!cr6.lt) goto loc_82E66F00;
	// rlwinm r11,r11,0,0,0
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82e66ecc
	if (!cr6.eq) goto loc_82E66ECC;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E66ECC:
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// li r5,22
	ctx.r5.s64 = 22;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// stw r3,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// rlwinm r11,r11,0,1,1
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
loc_82E66F00:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// ble cr6,0x82e66f34
	if (!cr6.gt) goto loc_82E66F34;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
loc_82E66F1C:
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne cr6,0x82e66f1c
	if (!cr6.eq) goto loc_82E66F1C;
loc_82E66F34:
	// addi r28,r27,20
	r28.s64 = r27.s64 + 20;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// clrlwi r10,r11,2
	ctx.r10.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bge cr6,0x82e66fa8
	if (!cr6.lt) goto loc_82E66FA8;
	// rlwinm r11,r11,0,0,0
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82e66f74
	if (!cr6.eq) goto loc_82E66F74;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E66F74:
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// li r5,22
	ctx.r5.s64 = 22;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(8) );
	// stw r3,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r3.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// rlwinm r11,r11,0,1,1
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r11.u32);
loc_82E66FA8:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// ble cr6,0x82e66fdc
	if (!cr6.gt) goto loc_82E66FDC;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
loc_82E66FC4:
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne cr6,0x82e66fc4
	if (!cr6.eq) goto loc_82E66FC4;
loc_82E66FDC:
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(12) );
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e6701c
	if (!cr6.gt) goto loc_82E6701C;
	// li r31,0
	r31.s64 = 0;
loc_82E66FF0:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e67008
	if (cr6.eq) goto loc_82E67008;
	// rotlwi r3,r10,0
	ctx.r3.u64 = rotl32(ctx.r10.u32, 0);
	// bl 0x82d79ff8
	sub_82D79FF8(ctx, base);
loc_82E67008:
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(12) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82e66ff0
	if (cr6.lt) goto loc_82E66FF0;
loc_82E6701C:
	// lwz r11,24(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(24) );
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e67070
	if (!cr6.gt) goto loc_82E67070;
	// li r11,0
	r11.s64 = 0;
loc_82E67030:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + int32_t(0) );
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e6705c
	if (cr6.eq) goto loc_82E6705C;
	// rotlwi r10,r9,0
	ctx.r10.u64 = rotl32(ctx.r9.u32, 0);
	// lhz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e6705c
	if (cr6.eq) goto loc_82E6705C;
	// lhz r9,6(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// sth r9,6(r10)
	PPC_STORE_U16(ctx.r10.u32 + 6, ctx.r9.u16);
loc_82E6705C:
	// lwz r10,24(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + int32_t(24) );
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpw cr6,r8,r10
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, xer);
	// blt cr6,0x82e67030
	if (cr6.lt) goto loc_82E67030;
loc_82E67070:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82E66E70) {
	__imp__sub_82E66E70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E67078) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,-32112
	ctx.r10.s64 = r11.s64 + -32112;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r29,0
	r29.s64 = 0;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// addi r30,r31,32
	r30.s64 = r31.s64 + 32;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// sth r9,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r9.u16);
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r29.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r29,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r29.u32);
	// stw r29,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r29.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// bl 0x82e66e70
	sub_82E66E70(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// lwz r27,16(r28)
	r27.u64 = PPC_LOAD_U32(r28.u32 + int32_t(16) );
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(r11.s32, r27.s32, xer);
	// bge cr6,0x82e67108
	if (!cr6.lt) goto loc_82E67108;
	// rlwinm r11,r11,1,0,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x82e670f8
	if (cr6.lt) goto loc_82E670F8;
	// mr r11,r27
	r11.u64 = r27.u64;
loc_82E670F8:
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82d51270
	sub_82D51270(ctx, base);
loc_82E67108:
	// stw r27,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r27.u32);
	// mr r11,r29
	r11.u64 = r29.u64;
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + int32_t(16) );
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82e6713c
	if (!cr6.gt) goto loc_82E6713C;
loc_82E6711C:
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwx r10,r9,r29
	PPC_STORE_U32(ctx.r9.u32 + r29.u32, ctx.r10.u32);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + int32_t(16) );
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x82e6711c
	if (cr6.lt) goto loc_82E6711C;
loc_82E6713C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82E67078) {
	__imp__sub_82E67078(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E67148) {
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
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r9,r11,-32112
	ctx.r9.s64 = r11.s64 + -32112;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// addi r30,r31,32
	r30.s64 = r31.s64 + 32;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// sth r8,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r8.u16);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// bl 0x82e66e70
	sub_82E66E70(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// clrlwi r10,r11,2
	ctx.r10.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bge cr6,0x82e67214
	if (!cr6.lt) goto loc_82E67214;
	// rlwinm r11,r11,0,0,0
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82e671e0
	if (!cr6.eq) goto loc_82E671E0;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E671E0:
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// li r5,22
	ctx.r5.s64 = 22;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = rotl64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// rlwinm r11,r11,0,1,1
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
loc_82E67214:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// ble cr6,0x82e67248
	if (!cr6.gt) goto loc_82E67248;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
loc_82E67230:
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne cr6,0x82e67230
	if (!cr6.eq) goto loc_82E67230;
loc_82E67248:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E67148) {
	__imp__sub_82E67148(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E67258) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,-32112
	r11.s64 = r11.s64 + -32112;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// ble cr6,0x82e672a8
	if (!cr6.gt) goto loc_82E672A8;
	// li r29,0
	r29.s64 = 0;
loc_82E67288:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// bl 0x82d7a018
	sub_82D7A018(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82e67288
	if (cr6.lt) goto loc_82E67288;
loc_82E672A8:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e67310
	if (!cr6.gt) goto loc_82E67310;
	// li r30,0
	r30.s64 = 0;
loc_82E672BC:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e672fc
	if (cr6.eq) goto loc_82E672FC;
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
	// bne cr6,0x82e672fc
	if (!cr6.eq) goto loc_82E672FC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E672FC:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82e672bc
	if (cr6.lt) goto loc_82E672BC;
loc_82E67310:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82e6733c
	if (!cr6.eq) goto loc_82E6733C;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E6733C:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82e67368
	if (!cr6.eq) goto loc_82E67368;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E67368:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82e67394
	if (!cr6.eq) goto loc_82E67394;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E67394:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r11,r11,14712
	r11.s64 = r11.s64 + 14712;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E67258) {
	__imp__sub_82E67258(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E673A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	PPCRegister f31{};
	PPCVRegister v127{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bc0
	// stfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -128, f31.u64);
	// li r12,-144
	r12.s64 = -144;
	// stvx128 v127,r1,r12
	ea = (ctx.r1.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v127), &VectorMaskL[(ea & 0xF) * 16]);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// addi r22,r21,44
	r22.s64 = r21.s64 + 44;
	// lwz r9,44(r21)
	ctx.r9.u64 = PPC_LOAD_U32(r21.u32 + int32_t(44) );
	// lwz r11,16(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(16) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e675c0
	if (!cr6.gt) goto loc_82E675C0;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r28,r11,17024
	r28.s64 = r11.s64 + 17024;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r18,r21,32
	r18.s64 = r21.s64 + 32;
	// addi r19,r11,16976
	r19.s64 = r11.s64 + 16976;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lfs f31,3080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	f31.f64 = double(temp.f32);
	// li r26,0
	r26.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// addi r31,r23,32
	r31.s64 = r23.s64 + 32;
	// subfic r25,r23,-32
	xer.ca = r23.u32 <= 4294967264;
	r25.s64 = -32 - r23.s64;
	// lvx128 v127,r0,r11
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// li r20,16
	r20.s64 = 16;
	// li r30,32
	r30.s64 = 32;
	// li r24,-32
	r24.s64 = -32;
loc_82E67420:
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + int32_t(0) );
	// lwzx r11,r27,r11
	r11.u64 = PPC_LOAD_U32(r27.u32 + r11.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82e67468
	if (cr6.lt) goto loc_82E67468;
	// lwz r10,8(r21)
	ctx.r10.u64 = PPC_LOAD_U32(r21.u32 + int32_t(8) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e67468
	if (cr6.eq) goto loc_82E67468;
	// addi r4,r11,224
	ctx.r4.s64 = r11.s64 + 224;
	// addi r3,r31,-32
	ctx.r3.s64 = r31.s64 + -32;
	// bl 0x82d549e8
	sub_82D549E8(ctx, base);
	// lwz r3,0(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + int32_t(0) );
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,20(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// bl 0x82d5e650
	sub_82D5E650(ctx, base);
	// b 0x82e675a0
	goto loc_82E675A0;
loc_82E67468:
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// lhzx r11,r11,r26
	r11.u64 = PPC_LOAD_U16(r11.u32 + r26.u32);
	// extsh r11,r11
	r11.s64 = r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82e674b4
	if (cr6.lt) goto loc_82E674B4;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r11,4,0,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r23
	r11.u64 = r11.u64 + r23.u64;
	// lvx128 v127,r0,r11
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v127,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v127), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lvx128 v0,r11,r20
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32 + r20.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r11,r30
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((r11.u32 + r30.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// stvx128 v7,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v7), &VectorMaskL[(ea & 0xF) * 16]);
	// b 0x82e674e4
	goto loc_82E674E4;
loc_82E674B4:
	// stfs f31,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// lvx128 v0,r0,r19
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r19.u32) & ~0xF), VectorMaskL));
	// vxor128 v127,v127,v127
	simd::store_u8(v127.u8, simd::zero_i128());
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// vspltw v7,v13,0
	simd::store_i32(ctx.v7.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// stvx128 v7,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v7), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// stvx128 v127,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v127), &VectorMaskL[(ea & 0xF) * 16]);
loc_82E674E4:
	// lwz r11,20(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(20) );
	// vspltw v13,v0,3
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 0));
	// lvx128 v9,r0,r28
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v11,v0,135
	simd::store_i32(ctx.v11.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	// vpermwi128 v10,v0,99
	simd::store_i32(ctx.v10.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// vmaddfp v9,v13,v13,v9
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v9.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v13.f32)), simd::load_f32_aligned(ctx.v9.f32)));
	// vor v8,v13,v13
	simd::store_i8(ctx.v8.u8, simd::load_i8(ctx.v13.u8));
	// addi r9,r31,-16
	ctx.r9.s64 = r31.s64 + -16;
	// addi r10,r11,16
	ctx.r10.s64 = r11.s64 + 16;
	// lvx128 v12,r0,r11
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v6,v0,v12
	simd::store_f32_aligned(ctx.v6.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v12.f32), 0xEF));
	// vpermwi128 v5,v12,99
	simd::store_i32(ctx.v5.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v12.u32), 0x9C));
	// vpermwi128 v4,v12,135
	simd::store_i32(ctx.v4.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v12.u32), 0x78));
	// vmulfp128 v5,v11,v5
	simd::store_f32_aligned(ctx.v5.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v5.f32)));
	// vmulfp128 v4,v10,v4
	simd::store_f32_aligned(ctx.v4.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v4.f32)));
	// vmulfp128 v12,v12,v9
	simd::store_f32_aligned(ctx.v12.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v9.f32)));
	// vspltw v9,v6,0
	simd::store_i32(ctx.v9.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v6.u32), 3));
	// vsubfp v6,v4,v5
	simd::store_f32_aligned(ctx.v6.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v4.f32), simd::load_f32_aligned(ctx.v5.f32)));
	// vmaddfp v12,v9,v0,v12
	simd::store_f32_aligned(ctx.v12.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v9.f32), simd::load_f32_aligned(ctx.v0.f32)), simd::load_f32_aligned(ctx.v12.f32)));
	// vmaddfp v13,v6,v13,v12
	simd::store_f32_aligned(ctx.v13.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v6.f32), simd::load_f32_aligned(ctx.v13.f32)), simd::load_f32_aligned(ctx.v12.f32)));
	// vaddfp v13,v13,v13
	simd::store_f32_aligned(ctx.v13.f32, simd::add_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// vaddfp128 v13,v127,v13
	simd::store_f32_aligned(ctx.v13.f32, simd::add_f32(simd::load_f32_aligned(v127.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v13,r31,r24
	ea = (r31.u32 + r24.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v12,v13,99
	simd::store_i32(ctx.v12.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x9C));
	// vor v9,v13,v13
	simd::store_i8(ctx.v9.u8, simd::load_i8(ctx.v13.u8));
	// vpermwi128 v6,v13,135
	simd::store_i32(ctx.v6.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x78));
	// vmsum3fp128 v5,v0,v13
	simd::store_f32_aligned(ctx.v5.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32), 0xEF));
	// vspltw v13,v13,3
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 0));
	// lfs f0,12(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	f0.f64 = double(temp.f32);
	// vmulfp128 v12,v11,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v12.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// vmulfp128 v11,v10,v6
	simd::store_f32_aligned(ctx.v11.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v6.f32)));
	// stvewx v5,r0,r8
	PPC_STORE_U32((ctx.r8.u32) & ~0x3, simd::extract_u32(*reinterpret_cast<const simd::vec128i*>(&ctx.v5.u32), 3 - ((ctx.r8.u32) & 0xF) >> 2));
	// lfs f13,124(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// vsubfp v12,v11,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v12.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// lfs f12,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fmsubs f0,f13,f0,f12
	f0.f64 = double(std::fma(float(ctx.f13.f64), float(f0.f64), -float(ctx.f12.f64)));
	// vmaddfp v12,v9,v8,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v12.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v9.f32), simd::load_f32_aligned(ctx.v8.f32)), simd::load_f32_aligned(ctx.v12.f32)));
	// vmaddfp v0,v0,v13,v12
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)), simd::load_f32_aligned(ctx.v12.f32)));
	// stvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stfs f0,-4(r31)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + -4, temp.u32);
	// lvx128 v0,r11,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32 + r30.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v0,v7,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v7.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// stvx128 v0,r0,r31
	ea = (r31.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
loc_82E675A0:
	// lwz r9,0(r22)
	ctx.r9.u64 = PPC_LOAD_U32(r22.u32 + int32_t(0) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// addi r26,r26,2
	r26.s64 = r26.s64 + 2;
	// addi r31,r31,48
	r31.s64 = r31.s64 + 48;
	// lwz r11,16(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(16) );
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82e67420
	if (cr6.lt) goto loc_82E67420;
loc_82E675C0:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// li r0,-144
	r0.s64 = -144;
	// lvx128 v127,r1,r0
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + r0.u32) & ~0xF), VectorMaskL));
	// lfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x82ca2c10
	return;
}

PPC_WEAK_FUNC(sub_82E673A8) {
	__imp__sub_82E673A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E675D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82e673a8
	sub_82E673A8(ctx, base);
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(44) );
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r31,16(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// bl 0x82d54c38
	sub_82D54C38(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x82e676f8
	if (!cr6.gt) goto loc_82E676F8;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lfs f13,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// addi r6,r9,17024
	ctx.r6.s64 = ctx.r9.s64 + 17024;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r30,16
	r11.s64 = r30.s64 + 16;
	// vspltw v12,v13,3
	simd::store_i32(ctx.v12.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 0));
	// lvx128 v8,r0,r9
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// vpermwi128 v11,v13,135
	simd::store_i32(ctx.v11.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x78));
	// vpermwi128 v10,v13,99
	simd::store_i32(ctx.v10.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x9C));
	// lvx128 v7,r0,r9
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
loc_82E67648:
	// lvx128 v9,r0,r6
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// addi r9,r11,-16
	ctx.r9.s64 = r11.s64 + -16;
	// vmaddfp v9,v12,v12,v9
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v9.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v12.f32)), simd::load_f32_aligned(ctx.v9.f32)));
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// addi r8,r11,16
	ctx.r8.s64 = r11.s64 + 16;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v6,v13,v0
	simd::store_f32_aligned(ctx.v6.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// vpermwi128 v5,v0,99
	simd::store_i32(ctx.v5.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// vpermwi128 v4,v0,135
	simd::store_i32(ctx.v4.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// vmulfp128 v0,v0,v9
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v9.f32)));
	// vmulfp128 v9,v11,v5
	simd::store_f32_aligned(ctx.v9.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v5.f32)));
	// vmulfp128 v5,v10,v4
	simd::store_f32_aligned(ctx.v5.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v4.f32)));
	// vspltw v6,v6,0
	simd::store_i32(ctx.v6.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v6.u32), 3));
	// vmaddfp v0,v6,v13,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v6.f32), simd::load_f32_aligned(ctx.v13.f32)), simd::load_f32_aligned(ctx.v0.f32)));
	// vsubfp v9,v5,v9
	simd::store_f32_aligned(ctx.v9.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v5.f32), simd::load_f32_aligned(ctx.v9.f32)));
	// vmaddfp v0,v9,v12,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v9.f32), simd::load_f32_aligned(ctx.v12.f32)), simd::load_f32_aligned(ctx.v0.f32)));
	// vaddfp v0,v0,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vaddfp v0,v7,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::load_f32_aligned(ctx.v7.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// stvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v9,v0,99
	simd::store_i32(ctx.v9.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// vor v6,v0,v0
	simd::store_i8(ctx.v6.u8, simd::load_i8(ctx.v0.u8));
	// vpermwi128 v5,v0,135
	simd::store_i32(ctx.v5.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// vmsum3fp128 v4,v13,v0
	simd::store_f32_aligned(ctx.v4.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// vspltw v0,v0,3
	simd::store_i32(ctx.v0.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 0));
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// vmulfp128 v9,v11,v9
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v9.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v9.f32)));
	// vmulfp128 v5,v10,v5
	simd::store_f32_aligned(ctx.v5.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v5.f32)));
	// stvewx v4,r0,r5
	PPC_STORE_U32((ctx.r5.u32) & ~0x3, simd::extract_u32(*reinterpret_cast<const simd::vec128i*>(&ctx.v4.u32), 3 - ((ctx.r5.u32) & 0xF) >> 2));
	// lfs f12,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// vsubfp v9,v5,v9
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v9.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v5.f32), simd::load_f32_aligned(ctx.v9.f32)));
	// fmsubs f0,f13,f0,f12
	ctx.fpscr.disableFlushModeUnconditional();
	f0.f64 = double(std::fma(float(ctx.f13.f64), float(f0.f64), -float(ctx.f12.f64)));
	// vmaddfp v9,v6,v12,v9
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v9.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v6.f32), simd::load_f32_aligned(ctx.v12.f32)), simd::load_f32_aligned(ctx.v9.f32)));
	// vmaddfp v0,v13,v0,v9
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)), simd::load_f32_aligned(ctx.v9.f32)));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// stfs f0,0(r7)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v0,v8,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v8.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// stvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// bne cr6,0x82e67648
	if (!cr6.eq) goto loc_82E67648;
loc_82E676F8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E675D8) {
	__imp__sub_82E675D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E67700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	PPCRegister f31{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bc4
	// stfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,44(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + int32_t(44) );
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e67904
	if (!cr6.gt) goto loc_82E67904;
	// mr r21,r11
	r21.u64 = r11.u64;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r27,r11,16896
	r27.s64 = r11.s64 + 16896;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r19,r20,32
	r19.s64 = r20.s64 + 32;
	// li r22,0
	r22.s64 = 0;
	// lfs f31,3080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	f31.f64 = double(temp.f32);
	// addi r30,r4,16
	r30.s64 = ctx.r4.s64 + 16;
	// addi r26,r11,17024
	r26.s64 = r11.s64 + 17024;
	// li r23,-16
	r23.s64 = -16;
	// li r24,16
	r24.s64 = 16;
	// li r25,32
	r25.s64 = 32;
loc_82E6775C:
	// lwz r11,0(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + int32_t(0) );
	// lwzx r11,r22,r11
	r11.u64 = PPC_LOAD_U32(r22.u32 + r11.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82e678f0
	if (cr6.lt) goto loc_82E678F0;
	// lwz r10,8(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + int32_t(8) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	r31.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82e678f0
	if (cr6.eq) goto loc_82E678F0;
	// addi r11,r28,16
	r11.s64 = r28.s64 + 16;
	// lvx128 v11,r30,r23
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r30.u32 + r23.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v3,v11,99
	simd::store_i32(ctx.v3.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v11.u32), 0x9C));
	// lvx128 v0,r0,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v2,v11,135
	simd::store_i32(ctx.v2.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v11.u32), 0x78));
	// vor v4,v0,v0
	simd::store_i8(ctx.v4.u8, simd::load_i8(ctx.v0.u8));
	// vpermwi128 v6,v0,99
	simd::store_i32(ctx.v6.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// lvx128 v9,r0,r26
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((r26.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v5,v0,135
	simd::store_i32(ctx.v5.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// lvx128 v7,r0,r28
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vspltw v8,v0,3
	simd::store_i32(ctx.v8.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 0));
	// vpermwi128 v31,v13,135
	simd::store_i32(v31.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x78));
	// lvx128 v12,r0,r11
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v30,v13,99
	simd::store_i32(v30.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x9C));
	// vmsum3fp128 v1,v13,v11
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v1.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v11.f32), 0xEF));
	// vpermwi128 v29,v12,135
	simd::store_i32(v29.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v12.u32), 0x78));
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// vspltw v10,v13,3
	simd::store_i32(ctx.v10.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 0));
	// vor v28,v12,v12
	simd::store_i8(v28.u8, simd::load_i8(ctx.v12.u8));
	// vmulfp128 v3,v31,v3
	simd::store_f32_aligned(ctx.v3.f32, simd::mul_f32(simd::load_f32_aligned(v31.f32), simd::load_f32_aligned(ctx.v3.f32)));
	// vpermwi128 v31,v12,99
	simd::store_i32(v31.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v12.u32), 0x9C));
	// vmulfp128 v2,v30,v2
	simd::store_f32_aligned(ctx.v2.f32, simd::mul_f32(simd::load_f32_aligned(v30.f32), simd::load_f32_aligned(ctx.v2.f32)));
	// vmsum3fp128 v30,v12,v0
	simd::store_f32_aligned(v30.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// vmulfp128 v0,v29,v6
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(v29.f32), simd::load_f32_aligned(ctx.v6.f32)));
	// vspltw v12,v12,3
	simd::store_i32(ctx.v12.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v12.u32), 0));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// vmulfp128 v6,v31,v5
	simd::store_f32_aligned(ctx.v6.f32, simd::mul_f32(simd::load_f32_aligned(v31.f32), simd::load_f32_aligned(ctx.v5.f32)));
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// vspltw v5,v1,0
	simd::store_i32(ctx.v5.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v1.u32), 3));
	// vsubfp v3,v2,v3
	simd::store_f32_aligned(ctx.v3.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v2.f32), simd::load_f32_aligned(ctx.v3.f32)));
	// vsubfp v6,v6,v0
	simd::store_f32_aligned(ctx.v6.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v6.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vmaddfp v0,v10,v10,v9
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v10.f32)), simd::load_f32_aligned(ctx.v9.f32)));
	// vmulfp128 v0,v11,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vmaddfp v0,v5,v13,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v5.f32), simd::load_f32_aligned(ctx.v13.f32)), simd::load_f32_aligned(ctx.v0.f32)));
	// vmaddfp v0,v3,v10,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v3.f32), simd::load_f32_aligned(ctx.v10.f32)), simd::load_f32_aligned(ctx.v0.f32)));
	// vaddfp v0,v0,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vaddfp v0,v7,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::load_f32_aligned(ctx.v7.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// stvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// vmaddfp v0,v4,v12,v6
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v4.f32), simd::load_f32_aligned(ctx.v12.f32)), simd::load_f32_aligned(ctx.v6.f32)));
	// stvewx v30,r0,r10
	PPC_STORE_U32((ctx.r10.u32) & ~0x3, simd::extract_u32(*reinterpret_cast<const simd::vec128i*>(&v30.u32), 3 - ((ctx.r10.u32) & 0xF) >> 2));
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// lfs f0,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	f0.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fmsubs f0,f0,f13,f12
	f0.f64 = double(std::fma(float(f0.f64), float(ctx.f13.f64), -float(ctx.f12.f64)));
	// lvx128 v13,r30,r24
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r30.u32 + r24.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r28,r25
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r28.u32 + r25.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v13,v11,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v13.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// vmaddfp v0,v28,v8,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(v28.f32), simd::load_f32_aligned(ctx.v8.f32)), simd::load_f32_aligned(ctx.v0.f32)));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stfs f0,156(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,160
	r11.s64 = ctx.r1.s64 + 160;
	// vor v12,v0,v0
	simd::store_i8(ctx.v12.u8, simd::load_i8(ctx.v0.u8));
	// vmsum4fp128 v0,v0,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xFF));
	// stvx128 v13,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	f0.f64 = double(temp.f32);
	// fsqrts f0,f0
	f0.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// fdivs f0,f31,f0
	f0.f64 = double(float(f31.f64 / f0.f64));
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// vspltw v0,v0,0
	simd::store_i32(ctx.v0.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 3));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// vmulfp128 v0,v12,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// bl 0x82d7b860
	sub_82D7B860(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d7c3a8
	sub_82D7C3A8(ctx, base);
	// lwz r11,208(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(208) );
	// addi r29,r31,208
	r29.s64 = r31.s64 + 208;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(64) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d7c3a8
	sub_82D7C3A8(ctx, base);
	// lwz r11,208(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(208) );
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(68) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E678F0:
	// addi r21,r21,-1
	r21.s64 = r21.s64 + -1;
	// addi r22,r22,4
	r22.s64 = r22.s64 + 4;
	// addi r30,r30,48
	r30.s64 = r30.s64 + 48;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// bne cr6,0x82e6775c
	if (!cr6.eq) goto loc_82E6775C;
loc_82E67904:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x82ca2c14
	return;
}

PPC_WEAK_FUNC(sub_82E67700) {
	__imp__sub_82E67700(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E67910) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bcc
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r21,0(r13)
	r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r22,4
	r22.s64 = 4;
	// li r23,0
	r23.s64 = 0;
	// lis r31,-32768
	r31.s64 = -2147483648;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// lwz r26,12(r27)
	r26.u64 = PPC_LOAD_U32(r27.u32 + int32_t(12) );
	// lwzx r11,r22,r21
	r11.u64 = PPC_LOAD_U32(r22.u32 + r21.u32);
	// addi r10,r26,4
	ctx.r10.s64 = r26.s64 + 4;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r23.u32);
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r23.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// rlwinm r4,r10,2,0,27
	ctx.r4.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFF0;
	// lwz r25,24(r27)
	r25.u64 = PPC_LOAD_U32(r27.u32 + int32_t(24) );
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// lwz r8,44(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(44) );
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bgt cr6,0x82e67970
	if (cr6.gt) goto loc_82E67970;
	// stw r9,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r9.u32);
	// b 0x82e67988
	goto loc_82E67988;
loc_82E67970:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r11,20(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_82E67988:
	// or r11,r26,r31
	r11.u64 = r26.u64 | r31.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r26
	cr6.compare<int32_t>(r11.s32, r26.s32, xer);
	// bge cr6,0x82e679c4
	if (!cr6.lt) goto loc_82E679C4;
	// rlwinm r11,r11,1,0,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(r26.s32, r11.s32, xer);
	// blt cr6,0x82e679b4
	if (cr6.lt) goto loc_82E679B4;
	// mr r11,r26
	r11.u64 = r26.u64;
loc_82E679B4:
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d51270
	sub_82D51270(ctx, base);
loc_82E679C4:
	// lwzx r11,r22,r21
	r11.u64 = PPC_LOAD_U32(r22.u32 + r21.u32);
	// addi r10,r25,4
	ctx.r10.s64 = r25.s64 + 4;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r23.u32);
	// rlwinm r4,r10,2,0,27
	ctx.r4.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFF0;
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r23.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// lwz r8,44(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(44) );
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bgt cr6,0x82e679fc
	if (cr6.gt) goto loc_82E679FC;
	// stw r9,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r9.u32);
	// b 0x82e67a14
	goto loc_82E67A14;
loc_82E679FC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r11,20(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_82E67A14:
	// or r11,r25,r31
	r11.u64 = r25.u64 | r31.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r25
	cr6.compare<int32_t>(r11.s32, r25.s32, xer);
	// bge cr6,0x82e67a50
	if (!cr6.lt) goto loc_82E67A50;
	// rlwinm r11,r11,1,0,30
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(r25.s32, r11.s32, xer);
	// blt cr6,0x82e67a40
	if (cr6.lt) goto loc_82E67A40;
	// mr r11,r25
	r11.u64 = r25.u64;
loc_82E67A40:
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d51270
	sub_82D51270(ctx, base);
loc_82E67A50:
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// ble cr6,0x82e67a98
	if (!cr6.gt) goto loc_82E67A98;
	// mr r31,r23
	r31.u64 = r23.u64;
	// mr r30,r26
	r30.u64 = r26.u64;
loc_82E67A64:
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + int32_t(8) );
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// add r29,r31,r11
	r29.u64 = r31.u64 + r11.u64;
	// lwzx r3,r31,r10
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + ctx.r10.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// stw r3,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82e67a64
	if (!cr6.eq) goto loc_82E67A64;
loc_82E67A98:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// ble cr6,0x82e67b04
	if (!cr6.gt) goto loc_82E67B04;
	// mr r31,r23
	r31.u64 = r23.u64;
	// mr r29,r23
	r29.u64 = r23.u64;
	// mr r30,r25
	r30.u64 = r25.u64;
loc_82E67AAC:
	// lwz r10,44(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + int32_t(44) );
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwz r9,20(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + int32_t(20) );
	// add r8,r31,r11
	ctx.r8.u64 = r31.u64 + r11.u64;
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// add r28,r31,r7
	r28.u64 = r31.u64 + ctx.r7.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// lwzx r3,r9,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + r31.u32);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(4) );
	// lhz r10,2(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d80e80
	sub_82D80E80(ctx, base);
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// stw r3,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r3.u32);
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82e67aac
	if (!cr6.eq) goto loc_82E67AAC;
loc_82E67B04:
	// li r5,14
	ctx.r5.s64 = 14;
	// lwzx r3,r22,r21
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + r21.u32);
	// li r4,48
	ctx.r4.s64 = 48;
	// bl 0x82d4ec28
	sub_82D4EC28(ctx, base);
	// li r11,48
	r11.s64 = 48;
	// addi r7,r27,32
	ctx.r7.s64 = r27.s64 + 32;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r11.u16);
	// lwz r6,44(r27)
	ctx.r6.u64 = PPC_LOAD_U32(r27.u32 + int32_t(44) );
	// bl 0x82e67148
	sub_82E67148(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// ble cr6,0x82e67b60
	if (!cr6.gt) goto loc_82E67B60;
	// mr r30,r23
	r30.u64 = r23.u64;
	// mr r31,r26
	r31.u64 = r26.u64;
loc_82E67B44:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// bl 0x82d7a018
	sub_82D7A018(ctx, base);
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82e67b44
	if (!cr6.eq) goto loc_82E67B44;
loc_82E67B60:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// ble cr6,0x82e67bc0
	if (!cr6.gt) goto loc_82E67BC0;
	// mr r31,r23
	r31.u64 = r23.u64;
	// mr r30,r25
	r30.u64 = r25.u64;
loc_82E67B70:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e67bb0
	if (cr6.eq) goto loc_82E67BB0;
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
	// bne cr6,0x82e67bb0
	if (!cr6.eq) goto loc_82E67BB0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E67BB0:
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82e67b70
	if (!cr6.eq) goto loc_82E67B70;
loc_82E67BC0:
	// lwzx r3,r22,r21
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + r21.u32);
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(108) );
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(40) );
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bne cr6,0x82e67be8
	if (!cr6.eq) goto loc_82E67BE8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E67BE8:
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(104) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82e67c0c
	if (!cr6.eq) goto loc_82E67C0C;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwzx r3,r22,r21
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + r21.u32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E67C0C:
	// lwzx r3,r22,r21
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + r21.u32);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(40) );
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bne cr6,0x82e67c34
	if (!cr6.eq) goto loc_82E67C34;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E67C34:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82e67c58
	if (!cr6.eq) goto loc_82E67C58;
	// li r6,22
	ctx.r6.s64 = 22;
	// lwzx r3,r22,r21
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + r21.u32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E67C58:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c1c
	return;
}

PPC_WEAK_FUNC(sub_82E67910) {
	__imp__sub_82E67910(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E67C68) {
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
	// bl 0x82e67258
	sub_82E67258(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e67cb0
	if (cr6.eq) goto loc_82E67CB0;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// li r6,14
	ctx.r6.s64 = 14;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82d4eca8
	sub_82D4ECA8(ctx, base);
loc_82E67CB0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E67C68) {
	__imp__sub_82E67C68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E67CD0) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bdc
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r11,44(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(44) );
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e67dbc
	if (!cr6.gt) goto loc_82E67DBC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r25,r11
	r25.u64 = r11.u64;
	// lis r11,-31953
	r11.s64 = -2094071808;
	// li r28,0
	r28.s64 = 0;
	// addi r26,r11,27936
	r26.s64 = r11.s64 + 27936;
	// lfs f31,3084(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	f31.f64 = double(temp.f32);
	// li r29,1
	r29.s64 = 1;
loc_82E67D10:
	// lwz r11,32(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(32) );
	// lwzx r11,r28,r11
	r11.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82e67dac
	if (cr6.lt) goto loc_82E67DAC;
	// lwz r10,20(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + int32_t(20) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r10
	r30.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82e67dac
	if (cr6.eq) goto loc_82E67DAC;
	// lwz r31,12(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82e67dac
	if (cr6.eq) goto loc_82E67DAC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x82e67d90
	if (cr6.eq) goto loc_82E67D90;
	// cmpwi cr6,r3,7
	cr6.compare<int32_t>(ctx.r3.s32, 7, xer);
	// bne cr6,0x82e67dac
	if (!cr6.eq) goto loc_82E67DAC;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r29.u8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// bl 0x82d7df08
	sub_82D7DF08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82d7dab8
	sub_82D7DAB8(ctx, base);
	// b 0x82e67dac
	goto loc_82E67DAC;
loc_82E67D90:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r29.u8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// bl 0x82d850c8
	sub_82D850C8(ctx, base);
	// stfs f31,172(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 172, temp.u32);
loc_82E67DAC:
	// addi r25,r25,-1
	r25.s64 = r25.s64 + -1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// bne cr6,0x82e67d10
	if (!cr6.eq) goto loc_82E67D10;
loc_82E67DBC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82E67CD0) {
	__imp__sub_82E67CD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E67DC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r11,44(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(44) );
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e67e90
	if (!cr6.gt) goto loc_82E67E90;
	// li r28,0
	r28.s64 = 0;
	// mr r26,r11
	r26.u64 = r11.u64;
	// mr r29,r28
	r29.u64 = r28.u64;
loc_82E67DF4:
	// lwz r11,32(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(32) );
	// lwzx r11,r29,r11
	r11.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82e67e80
	if (cr6.lt) goto loc_82E67E80;
	// lwz r10,20(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + int32_t(20) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r10
	r30.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82e67e80
	if (cr6.eq) goto loc_82E67E80;
	// lwz r31,12(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82e67e80
	if (cr6.eq) goto loc_82E67E80;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x82e67e68
	if (cr6.eq) goto loc_82E67E68;
	// cmpwi cr6,r3,7
	cr6.compare<int32_t>(ctx.r3.s32, 7, xer);
	// bne cr6,0x82e67e80
	if (!cr6.eq) goto loc_82E67E80;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r28.u8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// bl 0x82d7df08
	sub_82D7DF08(ctx, base);
	// b 0x82e67e80
	goto loc_82E67E80;
loc_82E67E68:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r28.u8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// bl 0x82d850c8
	sub_82D850C8(ctx, base);
loc_82E67E80:
	// addi r26,r26,-1
	r26.s64 = r26.s64 + -1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// bne cr6,0x82e67df4
	if (!cr6.eq) goto loc_82E67DF4;
loc_82E67E90:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82E67DC8) {
	__imp__sub_82E67DC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E67E98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x82ca2be0
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r11,44(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(44) );
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e68074
	if (!cr6.gt) goto loc_82E68074;
	// mr r28,r11
	r28.u64 = r11.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r26,r27,32
	r26.s64 = r27.s64 + 32;
	// li r29,0
	r29.s64 = 0;
	// addi r30,r4,16
	r30.s64 = ctx.r4.s64 + 16;
	// lfs f31,3084(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	f31.f64 = double(temp.f32);
	// lfs f30,3080(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f30.f64 = double(temp.f32);
loc_82E67EE0:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// lwzx r11,r29,r11
	r11.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82e68060
	if (cr6.lt) goto loc_82E68060;
	// lwz r10,20(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + int32_t(20) );
	// rlwinm r11,r11,2,0,29
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e68060
	if (cr6.eq) goto loc_82E68060;
	// lwz r31,12(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x82e67f4c
	if (cr6.eq) goto loc_82E67F4C;
	// cmpwi cr6,r3,7
	cr6.compare<int32_t>(ctx.r3.s32, 7, xer);
	// bne cr6,0x82e68060
	if (!cr6.eq) goto loc_82E68060;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82d51008
	sub_82D51008(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82d7dab8
	sub_82D7DAB8(ctx, base);
	// b 0x82e68060
	goto loc_82E68060;
loc_82E67F4C:
	// addi r4,r31,32
	ctx.r4.s64 = r31.s64 + 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d50a00
	sub_82D50A00(ctx, base);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82d50a00
	sub_82D50A00(ctx, base);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lvx128 v0,r0,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// vpermwi128 v8,v0,135
	simd::store_i32(ctx.v8.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// vor v9,v0,v0
	simd::store_i8(ctx.v9.u8, simd::load_i8(ctx.v0.u8));
	// vpermwi128 v7,v0,99
	simd::store_i32(ctx.v7.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// vspltw v11,v0,3
	simd::store_i32(ctx.v11.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 0));
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// vmsum3fp128 v10,v0,v13
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v10.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32), 0xEF));
	// vpermwi128 v6,v13,135
	simd::store_i32(ctx.v6.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x78));
	// vspltw v12,v13,3
	simd::store_i32(ctx.v12.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 0));
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// vmulfp128 v7,v7,v6
	simd::store_f32_aligned(ctx.v7.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v7.f32), simd::load_f32_aligned(ctx.v6.f32)));
	// stvewx v10,r0,r11
	PPC_STORE_U32((r11.u32) & ~0x3, simd::extract_u32(*reinterpret_cast<const simd::vec128i*>(&ctx.v10.u32), 3 - ((r11.u32) & 0xF) >> 2));
	// vpermwi128 v10,v13,99
	simd::store_i32(ctx.v10.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x9C));
	// addi r11,r1,160
	r11.s64 = ctx.r1.s64 + 160;
	// lfs f0,140(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	f0.f64 = double(temp.f32);
	// lfs f13,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// vmulfp128 v8,v8,v10
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v8.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v8.f32), simd::load_f32_aligned(ctx.v10.f32)));
	// fmsubs f0,f13,f0,f12
	ctx.fpscr.disableFlushModeUnconditional();
	f0.f64 = double(std::fma(float(ctx.f13.f64), float(f0.f64), -float(ctx.f12.f64)));
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// vpermwi128 v6,v0,99
	simd::store_i32(ctx.v6.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// vor v4,v0,v0
	simd::store_i8(ctx.v4.u8, simd::load_i8(ctx.v0.u8));
	// vpermwi128 v5,v0,135
	simd::store_i32(ctx.v5.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// vspltw v10,v0,3
	simd::store_i32(ctx.v10.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 0));
	// vsubfp v8,v7,v8
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v8.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v7.f32), simd::load_f32_aligned(ctx.v8.f32)));
	// vmaddfp v13,v13,v11,v8
	simd::store_f32_aligned(ctx.v13.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v11.f32)), simd::load_f32_aligned(ctx.v8.f32)));
	// vmaddfp v13,v9,v12,v13
	simd::store_f32_aligned(ctx.v13.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v9.f32), simd::load_f32_aligned(ctx.v12.f32)), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v13,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// stfs f0,124(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// vpermwi128 v11,v13,135
	simd::store_i32(ctx.v11.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x78));
	// vmsum4fp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32), 0xFF));
	// vpermwi128 v9,v13,99
	simd::store_i32(ctx.v9.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x9C));
	// vspltw v12,v13,3
	simd::store_i32(ctx.v12.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 0));
	// vmulfp128 v11,v11,v6
	simd::store_f32_aligned(ctx.v11.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v6.f32)));
	// vmulfp128 v9,v9,v5
	simd::store_f32_aligned(ctx.v9.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v9.f32), simd::load_f32_aligned(ctx.v5.f32)));
	// vsubfp v11,v9,v11
	simd::store_f32_aligned(ctx.v11.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v9.f32), simd::load_f32_aligned(ctx.v11.f32)));
	// vmaddfp v13,v13,v10,v11
	simd::store_f32_aligned(ctx.v13.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v10.f32)), simd::load_f32_aligned(ctx.v11.f32)));
	// vnmsubfp v13,v4,v12,v13
	simd::store_f32_aligned(ctx.v13.f32, simd::xor_f32(simd::sub_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v4.f32), simd::load_f32_aligned(ctx.v12.f32)), simd::load_f32_aligned(ctx.v13.f32)), simd::bitcast_f32(simd::set1_i32(0x80000000))));
	// stvx128 v13,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// stvewx v0,r0,r10
	PPC_STORE_U32((ctx.r10.u32) & ~0x3, simd::extract_u32(*reinterpret_cast<const simd::vec128i*>(&ctx.v0.u32), 3 - ((ctx.r10.u32) & 0xF) >> 2));
	// addi r11,r1,176
	r11.s64 = ctx.r1.s64 + 176;
	// stfs f30,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// stfs f0,156(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// bl 0x82d50e88
	sub_82D50E88(ctx, base);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	f0.f64 = double(temp.f32);
	// stfs f0,172(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 172, temp.u32);
loc_82E68060:
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r30,r30,48
	r30.s64 = r30.s64 + 48;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x82e67ee0
	if (!cr6.eq) goto loc_82E67EE0;
loc_82E68074:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82ca2c30
	return;
}

PPC_WEAK_FUNC(sub_82E67E98) {
	__imp__sub_82E67E98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E68088) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E68088) {
	__imp__sub_82E68088(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E68090) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E68090) {
	__imp__sub_82E68090(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E68098) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E68098) {
	__imp__sub_82E68098(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E680A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82E680A0) {
	__imp__sub_82E680A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E680B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-32112
	r11.s64 = r11.s64 + -32112;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E680B8) {
	__imp__sub_82E680B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E680D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r11,-32112
	ctx.r3.s64 = r11.s64 + -32112;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E680D8) {
	__imp__sub_82E680D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E680E8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// lvx128 v13,r0,r3
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v12,v0,99
	simd::store_i32(ctx.v12.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// vpermwi128 v11,v13,135
	simd::store_i32(ctx.v11.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x78));
	// vpermwi128 v0,v0,135
	simd::store_i32(ctx.v0.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// vpermwi128 v13,v13,99
	simd::store_i32(ctx.v13.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x9C));
	// vmulfp128 v12,v11,v12
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v12.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// vmulfp128 v0,v13,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vsubfp v0,v0,v12
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// stvx128 v0,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vspltw v0,v0,3
	simd::store_i32(ctx.v0.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 0));
	// lvx128 v13,r0,r5
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r0,r3
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// vnmsubfp v0,v12,v0,v13
	simd::store_f32_aligned(ctx.v0.f32, simd::xor_f32(simd::sub_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v0.f32)), simd::load_f32_aligned(ctx.v13.f32)), simd::bitcast_f32(simd::set1_i32(0x80000000))));
	// stvx128 v0,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r0,r3
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// vspltw v0,v0,3
	simd::store_i32(ctx.v0.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 0));
	// lvx128 v13,r0,r5
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r0,r4
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vmaddfp v0,v12,v0,v13
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v0.f32)), simd::load_f32_aligned(ctx.v13.f32)));
	// vaddfp v0,v0,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// stvx128 v0,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r0,r3
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r4
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vmsum4fp128 v0,v13,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32), 0xFF));
	// stvewx v0,r0,r11
	PPC_STORE_U32((r11.u32) & ~0x3, simd::extract_u32(*reinterpret_cast<const simd::vec128i*>(&ctx.v0.u32), 3 - ((r11.u32) & 0xF) >> 2));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3084(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgelr cr6
	if (!cr6.lt) return;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lvx128 v13,r0,r5
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vxor v0,v13,v0
	simd::store_u8(ctx.v0.u8, simd::xor_i8(simd::load_u8(ctx.v13.u8), simd::load_u8(ctx.v0.u8)));
	// stvx128 v0,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E680E8) {
	__imp__sub_82E680E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E68188) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// li r11,1
	r11.s64 = 1;
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,3084(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// lfs f12,3080(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	ctx.f12.f64 = double(temp.f32);
	// blt cr6,0x82e681b8
	if (cr6.lt) goto loc_82E681B8;
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// li r11,1
	r11.s64 = 1;
	// ble cr6,0x82e681bc
	if (!cr6.gt) goto loc_82E681BC;
loc_82E681B8:
	// li r11,0
	r11.s64 = 0;
loc_82E681BC:
	// extsb r10,r11
	ctx.r10.s64 = r11.s8;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82e681e4
	if (cr6.eq) goto loc_82E681E4;
	// lfs f13,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x82e681e4
	if (cr6.lt) goto loc_82E681E4;
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// li r11,1
	r11.s64 = 1;
	// ble cr6,0x82e681e8
	if (!cr6.gt) goto loc_82E681E8;
loc_82E681E4:
	// li r11,0
	r11.s64 = 0;
loc_82E681E8:
	// extsb r10,r11
	ctx.r10.s64 = r11.s8;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82e68210
	if (cr6.eq) goto loc_82E68210;
	// lfs f13,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x82e68210
	if (cr6.lt) goto loc_82E68210;
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// li r11,1
	r11.s64 = 1;
	// ble cr6,0x82e68214
	if (!cr6.gt) goto loc_82E68214;
loc_82E68210:
	// li r11,0
	r11.s64 = 0;
loc_82E68214:
	// extsb r10,r11
	ctx.r10.s64 = r11.s8;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82e6823c
	if (cr6.eq) goto loc_82E6823C;
	// lfs f13,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x82e6823c
	if (cr6.lt) goto loc_82E6823C;
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// li r11,1
	r11.s64 = 1;
	// ble cr6,0x82e68240
	if (!cr6.gt) goto loc_82E68240;
loc_82E6823C:
	// li r11,0
	r11.s64 = 0;
loc_82E68240:
	// extsb r10,r11
	ctx.r10.s64 = r11.s8;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82e68268
	if (cr6.eq) goto loc_82E68268;
	// lfs f13,16(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x82e68268
	if (cr6.lt) goto loc_82E68268;
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// li r11,1
	r11.s64 = 1;
	// ble cr6,0x82e6826c
	if (!cr6.gt) goto loc_82E6826C;
loc_82E68268:
	// li r11,0
	r11.s64 = 0;
loc_82E6826C:
	// extsb r10,r11
	ctx.r10.s64 = r11.s8;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82e6828c
	if (cr6.eq) goto loc_82E6828C;
	// lfs f13,20(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82e68290
	if (!cr6.lt) goto loc_82E68290;
loc_82E6828C:
	// li r11,0
	r11.s64 = 0;
loc_82E68290:
	// extsb r10,r11
	ctx.r10.s64 = r11.s8;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82e682b0
	if (cr6.eq) goto loc_82E682B0;
	// lfs f13,24(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82e682b4
	if (!cr6.lt) goto loc_82E682B4;
loc_82E682B0:
	// li r11,0
	r11.s64 = 0;
loc_82E682B4:
	// extsb r10,r11
	ctx.r10.s64 = r11.s8;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82e682d4
	if (cr6.eq) goto loc_82E682D4;
	// lfs f13,28(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82e682d8
	if (!cr6.lt) goto loc_82E682D8;
loc_82E682D4:
	// li r11,0
	r11.s64 = 0;
loc_82E682D8:
	// extsb r10,r11
	ctx.r10.s64 = r11.s8;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82e682f8
	if (cr6.eq) goto loc_82E682F8;
	// lfs f13,32(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82e682fc
	if (!cr6.lt) goto loc_82E682FC;
loc_82E682F8:
	// li r11,0
	r11.s64 = 0;
loc_82E682FC:
	// extsb r10,r11
	ctx.r10.s64 = r11.s8;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82e6831c
	if (cr6.eq) goto loc_82E6831C;
	// lfs f13,36(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82e68320
	if (!cr6.lt) goto loc_82E68320;
loc_82E6831C:
	// li r11,0
	r11.s64 = 0;
loc_82E68320:
	// extsb r10,r11
	ctx.r10.s64 = r11.s8;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82e68340
	if (cr6.eq) goto loc_82E68340;
	// lfs f13,40(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82e68344
	if (!cr6.lt) goto loc_82E68344;
loc_82E68340:
	// li r11,0
	r11.s64 = 0;
loc_82E68344:
	// extsb r10,r11
	ctx.r10.s64 = r11.s8;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82e68364
	if (cr6.eq) goto loc_82E68364;
	// lfs f13,44(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82e68368
	if (!cr6.lt) goto loc_82E68368;
loc_82E68364:
	// li r11,0
	r11.s64 = 0;
loc_82E68368:
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E68188) {
	__imp__sub_82E68188(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E68370) {
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e683ec
	if (!cr6.gt) goto loc_82E683EC;
	// addi r11,r4,48
	r11.s64 = ctx.r4.s64 + 48;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r29,416
	r29.s64 = 416;
	// li r30,-16
	r30.s64 = -16;
	// li r31,432
	r31.s64 = 432;
	// li r4,304
	ctx.r4.s64 = 304;
	// li r5,-48
	ctx.r5.s64 = -48;
	// li r6,336
	ctx.r6.s64 = 336;
	// li r7,-32
	ctx.r7.s64 = -32;
loc_82E683AC:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lvx128 v0,r10,r29
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32 + r29.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r11,r30
	ea = (r11.u32 + r30.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r10,r31
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32 + r31.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r10,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r11,r5
	ea = (r11.u32 + ctx.r5.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r10,r6
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r11,r7
	ea = (r11.u32 + ctx.r7.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// addi r11,r11,64
	r11.s64 = r11.s64 + 64;
	// cmpw cr6,r8,r10
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, xer);
	// blt cr6,0x82e683ac
	if (cr6.lt) goto loc_82E683AC;
loc_82E683EC:
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E68370) {
	__imp__sub_82E68370(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E683F0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// fmuls f13,f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// vmsum3fp128 v13,v0,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v13.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// stvewx v13,r0,r11
	PPC_STORE_U32((r11.u32) & ~0x3, simd::extract_u32(*reinterpret_cast<const simd::vec128i*>(&ctx.v13.u32), 3 - ((r11.u32) & 0xF) >> 2));
	// lfs f0,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blelr cr6
	if (!cr6.gt) return;
	// fsqrts f13,f0
	ctx.f13.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,3080(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f0.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// fmuls f0,f0,f1
	f0.f64 = double(float(f0.f64 * ctx.f1.f64));
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lvlx v13,0,r11
	temp.u32 = r0.u32 + r11.u32;
	simd::store_shuffled(ctx.v13,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v0,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E683F0) {
	__imp__sub_82E683F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E68440) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// fmr f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f1.f64;
	// lvx128 v0,r0,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v13,v0,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v13.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// fmuls f12,f13,f13
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// stvewx v13,r0,r11
	PPC_STORE_U32((r11.u32) & ~0x3, simd::extract_u32(*reinterpret_cast<const simd::vec128i*>(&ctx.v13.u32), 3 - ((r11.u32) & 0xF) >> 2));
	// lfs f0,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	f0.f64 = double(temp.f32);
	// fdivs f1,f0,f12
	ctx.f1.f64 = double(float(f0.f64 / ctx.f12.f64));
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// blelr cr6
	if (!cr6.gt) return;
	// fmuls f11,f2,f2
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// fcmpu cr6,f0,f11
	cr6.compare(f0.f64, ctx.f11.f64);
	// bge cr6,0x82e68484
	if (!cr6.lt) goto loc_82E68484;
	// fdivs f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 / f0.f64));
	// fsqrts f0,f0
	f0.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// b 0x82e6848c
	goto loc_82E6848C;
loc_82E68484:
	// fmuls f13,f13,f2
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f2.f64));
	// fdivs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 / f0.f64));
loc_82E6848C:
	// stfs f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lvlx v13,0,r11
	temp.u32 = r0.u32 + r11.u32;
	simd::store_shuffled(ctx.v13,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v0,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E68440) {
	__imp__sub_82E68440(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E684A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bb0
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -168, f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// stw r5,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r5.u32);
	// stw r6,444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 444, ctx.r6.u32);
	// mr r16,r7
	r16.u64 = ctx.r7.u64;
	// li r26,0
	r26.s64 = 0;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + int32_t(0) );
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e68898
	if (!cr6.gt) goto loc_82E68898;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r23,r11,16896
	r23.s64 = r11.s64 + 16896;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r22,r11,16912
	r22.s64 = r11.s64 + 16912;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfs f30,3080(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3080);
	f30.f64 = double(temp.f32);
	// addi r20,r24,12
	r20.s64 = r24.s64 + 12;
	// addi r27,r24,4
	r27.s64 = r24.s64 + 4;
	// lfs f31,3084(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	f31.f64 = double(temp.f32);
	// li r28,0
	r28.s64 = 0;
	// li r25,0
	r25.s64 = 0;
	// addi r30,r3,16
	r30.s64 = ctx.r3.s64 + 16;
	// addi r31,r16,64
	r31.s64 = r16.s64 + 64;
	// addi r29,r11,17024
	r29.s64 = r11.s64 + 17024;
	// li r21,32
	r21.s64 = 32;
	// li r17,-64
	r17.s64 = -64;
	// li r18,-48
	r18.s64 = -48;
	// li r19,-32
	r19.s64 = -32;
loc_82E6852C:
	// addi r11,r24,8
	r11.s64 = r24.s64 + 8;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lhzx r11,r11,r25
	r11.u64 = PPC_LOAD_U16(r11.u32 + r25.u32);
	// extsh r3,r11
	ctx.r3.s64 = r11.s16;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82e6855c
	if (cr6.lt) goto loc_82E6855C;
	// rlwinm r11,r3,1,0,30
	r11.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r3,r11
	r11.u64 = ctx.r3.u64 + r11.u64;
	// rlwinm r11,r11,5,0,26
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r16
	r11.u64 = r11.u64 + r16.u64;
	// addi r9,r11,48
	ctx.r9.s64 = r11.s64 + 48;
	// b 0x82e68560
	goto loc_82E68560;
loc_82E6855C:
	// lwz r9,444(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(444) );
loc_82E68560:
	// addi r11,r9,16
	r11.s64 = ctx.r9.s64 + 16;
	// lvx128 v11,r0,r29
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// addi r7,r30,-16
	ctx.r7.s64 = r30.s64 + -16;
	// lvx128 v10,r0,r9
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r10,r31,-16
	ctx.r10.s64 = r31.s64 + -16;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r6,r30,16
	ctx.r6.s64 = r30.s64 + 16;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r5,r31,16
	ctx.r5.s64 = r31.s64 + 16;
	// vspltw v12,v0,3
	simd::store_i32(ctx.v12.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 0));
	// lvx128 v13,r0,r7
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v7,v0,v13
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v7.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32), 0xEF));
	// vpermwi128 v6,v0,135
	simd::store_i32(ctx.v6.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// vpermwi128 v5,v0,99
	simd::store_i32(ctx.v5.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// addi r4,r30,12
	ctx.r4.s64 = r30.s64 + 12;
	// vpermwi128 v9,v13,99
	simd::store_i32(ctx.v9.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x9C));
	// vmaddfp v11,v12,v12,v11
	simd::store_f32_aligned(ctx.v11.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v12.f32)), simd::load_f32_aligned(ctx.v11.f32)));
	// vpermwi128 v8,v13,135
	simd::store_i32(ctx.v8.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x78));
	// vmulfp128 v9,v6,v9
	simd::store_f32_aligned(ctx.v9.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v6.f32), simd::load_f32_aligned(ctx.v9.f32)));
	// vmulfp128 v8,v5,v8
	simd::store_f32_aligned(ctx.v8.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v5.f32), simd::load_f32_aligned(ctx.v8.f32)));
	// vmulfp128 v13,v13,v11
	simd::store_f32_aligned(ctx.v13.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v11.f32)));
	// vspltw v7,v7,0
	simd::store_i32(ctx.v7.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v7.u32), 3));
	// vsubfp v9,v8,v9
	simd::store_f32_aligned(ctx.v9.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v8.f32), simd::load_f32_aligned(ctx.v9.f32)));
	// vmaddfp v0,v7,v0,v13
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v7.f32), simd::load_f32_aligned(ctx.v0.f32)), simd::load_f32_aligned(ctx.v13.f32)));
	// vmaddfp v0,v9,v12,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v9.f32), simd::load_f32_aligned(ctx.v12.f32)), simd::load_f32_aligned(ctx.v0.f32)));
	// vaddfp v0,v0,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vaddfp v0,v10,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r30
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v12,v0,135
	simd::store_i32(ctx.v12.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// vpermwi128 v9,v0,99
	simd::store_i32(ctx.v9.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// vmsum3fp128 v8,v0,v13
	simd::store_f32_aligned(ctx.v8.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32), 0xEF));
	// vpermwi128 v11,v13,99
	simd::store_i32(ctx.v11.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x9C));
	// vor v7,v0,v0
	simd::store_i8(ctx.v7.u8, simd::load_i8(ctx.v0.u8));
	// vpermwi128 v10,v13,135
	simd::store_i32(ctx.v10.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x78));
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// lfs f13,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// vmulfp128 v11,v12,v11
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v11.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v11.f32)));
	// vspltw v12,v0,3
	simd::store_i32(ctx.v12.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 0));
	// vmulfp128 v10,v9,v10
	simd::store_f32_aligned(ctx.v10.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v9.f32), simd::load_f32_aligned(ctx.v10.f32)));
	// vspltw v0,v13,3
	simd::store_i32(ctx.v0.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 0));
	// stvewx v8,r0,r8
	PPC_STORE_U32((ctx.r8.u32) & ~0x3, simd::extract_u32(*reinterpret_cast<const simd::vec128i*>(&ctx.v8.u32), 3 - ((ctx.r8.u32) & 0xF) >> 2));
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lfs f12,84(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fmsubs f0,f0,f13,f12
	f0.f64 = double(std::fma(float(f0.f64), float(ctx.f13.f64), -float(ctx.f12.f64)));
	// vsubfp v11,v10,v11
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v11.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v11.f32)));
	// vmaddfp v13,v13,v12,v11
	simd::store_f32_aligned(ctx.v13.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v12.f32)), simd::load_f32_aligned(ctx.v11.f32)));
	// vmaddfp v0,v7,v0,v13
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v7.f32), simd::load_f32_aligned(ctx.v0.f32)), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v0,r0,r31
	ea = (r31.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stfs f0,12(r31)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// ld r14,8(r31)
	r14.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// lvx128 v0,r9,r21
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32 + r21.u32) & ~0xF), VectorMaskL));
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// lvx128 v13,r0,r6
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// ld r15,0(r10)
	r15.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r9,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r9.u64);
	// std r14,8(r11)
	PPC_STORE_U64(r11.u32 + 8, r14.u64);
	// std r15,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, r15.u64);
	// std r10,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r10.u64);
	// stvx128 v0,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lwz r11,0(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e68688
	if (cr6.eq) goto loc_82E68688;
	// lwzx r11,r11,r28
	r11.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,436(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(436) );
	// rlwinm r11,r11,4,0,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x82e6868c
	goto loc_82E6868C;
loc_82E68688:
	// lwz r11,436(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(436) );
loc_82E6868C:
	// lfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,88(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, f31.f64);
	// ble cr6,0x82e68804
	if (!cr6.gt) goto loc_82E68804;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82e68804
	if (cr6.lt) goto loc_82E68804;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// lvx128 v12,r0,r7
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lvx128 v13,r0,r30
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v5,v12,99
	simd::store_i32(ctx.v5.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v12.u32), 0x9C));
	// lvx128 v8,r0,r29
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v4,v12,135
	simd::store_i32(ctx.v4.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v12.u32), 0x78));
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// vpermwi128 v3,v13,99
	simd::store_i32(ctx.v3.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x9C));
	// vpermwi128 v2,v13,135
	simd::store_i32(ctx.v2.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x78));
	// addi r8,r9,272
	ctx.r8.s64 = ctx.r9.s64 + 272;
	// vspltw v7,v13,3
	simd::store_i32(ctx.v7.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 0));
	// addi r5,r9,336
	ctx.r5.s64 = ctx.r9.s64 + 336;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// ld r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// ld r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r5,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r5.u64);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// std r9,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r9.u64);
	// std r3,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r3.u64);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// vpermwi128 v10,v0,135
	simd::store_i32(ctx.v10.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// vmsum3fp128 v31,v0,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(v31.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v12.f32), 0xEF));
	// vpermwi128 v9,v0,99
	simd::store_i32(ctx.v9.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// stfs f30,160(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// vspltw v11,v0,3
	simd::store_i32(ctx.v11.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 0));
	// vmsum3fp128 v30,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(v30.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32), 0xEF));
	// vmulfp128 v5,v10,v5
	simd::store_f32_aligned(ctx.v5.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v5.f32)));
	// lvx128 v1,r0,r11
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v4,v9,v4
	simd::store_f32_aligned(ctx.v4.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v9.f32), simd::load_f32_aligned(ctx.v4.f32)));
	// addi r11,r1,160
	r11.s64 = ctx.r1.s64 + 160;
	// vmulfp128 v9,v9,v2
	simd::store_f32_aligned(ctx.v9.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v9.f32), simd::load_f32_aligned(ctx.v2.f32)));
	// vmulfp128 v10,v10,v3
	simd::store_f32_aligned(ctx.v10.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v3.f32)));
	// lvx128 v6,r0,r11
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,160
	r11.s64 = ctx.r1.s64 + 160;
	// vspltw v6,v6,0
	simd::store_i32(ctx.v6.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v6.u32), 3));
	// vspltw v31,v31,0
	simd::store_i32(v31.u32, simd::broadcast_lane_i32(simd::load_i32(v31.u32), 3));
	// vsubfp v5,v4,v5
	simd::store_f32_aligned(ctx.v5.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v4.f32), simd::load_f32_aligned(ctx.v5.f32)));
	// stvx128 v6,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v6), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,176
	r11.s64 = ctx.r1.s64 + 176;
	// vsubfp v10,v9,v10
	simd::store_f32_aligned(ctx.v10.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v9.f32), simd::load_f32_aligned(ctx.v10.f32)));
	// vmaddfp v9,v11,v11,v8
	simd::store_f32_aligned(ctx.v9.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v11.f32)), simd::load_f32_aligned(ctx.v8.f32)));
	// vmaddfp v13,v13,v11,v10
	simd::store_f32_aligned(ctx.v13.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v11.f32)), simd::load_f32_aligned(ctx.v10.f32)));
	// vmulfp128 v12,v12,v9
	simd::store_f32_aligned(ctx.v12.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v9.f32)));
	// vmaddfp v12,v31,v0,v12
	simd::store_f32_aligned(ctx.v12.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(v31.f32), simd::load_f32_aligned(ctx.v0.f32)), simd::load_f32_aligned(ctx.v12.f32)));
	// vmaddfp v0,v0,v7,v13
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v7.f32)), simd::load_f32_aligned(ctx.v13.f32)));
	// vmaddfp v12,v5,v11,v12
	simd::store_f32_aligned(ctx.v12.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v5.f32), simd::load_f32_aligned(ctx.v11.f32)), simd::load_f32_aligned(ctx.v12.f32)));
	// vaddfp v12,v12,v12
	simd::store_f32_aligned(ctx.v12.f32, simd::add_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// vaddfp v12,v1,v12
	simd::store_f32_aligned(ctx.v12.f32, simd::add_f32(simd::load_f32_aligned(ctx.v1.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// stvx128 v12,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v12), &VectorMaskL[(ea & 0xF) * 16]);
	// stvewx v30,r0,r7
	PPC_STORE_U32((ctx.r7.u32) & ~0x3, simd::extract_u32(*reinterpret_cast<const simd::vec128i*>(&v30.u32), 3 - ((ctx.r7.u32) & 0xF) >> 2));
	// addi r11,r1,208
	r11.s64 = ctx.r1.s64 + 208;
	// lvx128 v12,r0,r6
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v12,v6,v12
	simd::store_f32_aligned(ctx.v12.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v6.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f0,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	f0.f64 = double(temp.f32);
	// fmsubs f0,f13,f0,f12
	f0.f64 = double(std::fma(float(ctx.f13.f64), float(f0.f64), -float(ctx.f12.f64)));
	// stvx128 v12,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v12), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,192
	r11.s64 = ctx.r1.s64 + 192;
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stfs f0,204(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// bl 0x82d50a68
	sub_82D50A68(ctx, base);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lvx128 v13,r0,r22
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r22.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
	// lvx128 v12,r0,r10
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// lvlx v0,0,r11
	temp.u32 = r0.u32 + r11.u32;
	simd::store_shuffled(ctx.v0,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// lvx128 v11,r0,r10
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vspltw v0,v0,0
	simd::store_i32(ctx.v0.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 3));
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// vspltw v0,v0,0
	simd::store_i32(ctx.v0.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 3));
	// vsubfp v13,v13,v0
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v13.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vmulfp128 v13,v13,v12
	simd::store_f32_aligned(ctx.v13.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// vmaddfp v0,v0,v11,v13
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v11.f32)), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
loc_82E68804:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(0) );
	// lvx128 v11,r0,r29
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r25,r25,2
	r25.s64 = r25.s64 + 2;
	// addi r30,r30,48
	r30.s64 = r30.s64 + 48;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lwzx r11,r11,r28
	r11.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// vspltw v12,v0,3
	simd::store_i32(ctx.v12.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 0));
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// addi r11,r11,352
	r11.s64 = r11.s64 + 352;
	// vpermwi128 v10,v0,135
	simd::store_i32(ctx.v10.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// vpermwi128 v9,v0,99
	simd::store_i32(ctx.v9.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// vmaddfp v11,v12,v12,v11
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v11.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v12.f32)), simd::load_f32_aligned(ctx.v11.f32)));
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// vmsum3fp128 v8,v0,v13
	simd::store_f32_aligned(ctx.v8.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32), 0xEF));
	// vpermwi128 v7,v13,99
	simd::store_i32(ctx.v7.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x9C));
	// vpermwi128 v6,v13,135
	simd::store_i32(ctx.v6.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x78));
	// stvx128 v0,r31,r18
	ea = (r31.u32 + r18.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// vmulfp128 v13,v13,v11
	simd::store_f32_aligned(ctx.v13.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v11.f32)));
	// vmulfp128 v11,v10,v7
	simd::store_f32_aligned(ctx.v11.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v7.f32)));
	// vmulfp128 v10,v9,v6
	simd::store_f32_aligned(ctx.v10.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v9.f32), simd::load_f32_aligned(ctx.v6.f32)));
	// vspltw v9,v8,0
	simd::store_i32(ctx.v9.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v8.u32), 3));
	// vmaddfp v0,v9,v0,v13
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v9.f32), simd::load_f32_aligned(ctx.v0.f32)), simd::load_f32_aligned(ctx.v13.f32)));
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vsubfp v11,v10,v11
	simd::store_f32_aligned(ctx.v11.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v11.f32)));
	// vmaddfp v0,v11,v12,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v12.f32)), simd::load_f32_aligned(ctx.v0.f32)));
	// vaddfp v0,v0,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vaddfp v0,v13,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// stvx128 v0,r31,r17
	ea = (r31.u32 + r17.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lvx128 v0,r0,r23
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r23.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r31,r19
	ea = (r31.u32 + r19.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + int32_t(0) );
	// addi r31,r31,96
	r31.s64 = r31.s64 + 96;
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(r26.s32, r11.s32, xer);
	// blt cr6,0x82e6852c
	if (cr6.lt) goto loc_82E6852C;
loc_82E68898:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82ca2c00
	return;
}

PPC_WEAK_FUNC(sub_82E684A8) {
	__imp__sub_82E684A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E688A8) {
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bb0
	// stfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -176, f29.u64);
	// stfd f30,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// li r12,-208
	r12.s64 = -208;
	// stvx128 v126,r1,r12
	ea = (ctx.r1.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v126), &VectorMaskL[(ea & 0xF) * 16]);
	// li r12,-192
	r12.s64 = -192;
	// stvx128 v127,r1,r12
	ea = (ctx.r1.u32 + r12.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(v127), &VectorMaskL[(ea & 0xF) * 16]);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r17,r5
	r17.u64 = ctx.r5.u64;
	// lwz r9,0(r13)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r13.u32 + int32_t(0) );
	// li r10,4
	ctx.r10.s64 = 4;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// add r29,r10,r9
	r29.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r11,0(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + int32_t(0) );
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r28,492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 492, r28.u32);
	// stw r26,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, r26.u32);
	// rlwinm r11,r11,5,0,26
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r29.u32);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(44) );
	// rlwinm r4,r11,0,0,27
	ctx.r4.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF0;
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(32) );
	// add r10,r11,r4
	ctx.r10.u64 = r11.u64 + ctx.r4.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82e6893c
	if (cr6.gt) goto loc_82E6893C;
	// mr r30,r11
	r30.u64 = r11.u64;
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// b 0x82e68954
	goto loc_82E68954;
loc_82E6893C:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// rotlwi r30,r3,0
	r30.u64 = rotl32(ctx.r3.u32, 0);
loc_82E68954:
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x82e684a8
	sub_82E684A8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// li r18,0
	r18.s64 = 0;
	// lfs f30,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f30.f64 = double(temp.f32);
	// lwz r11,0(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + int32_t(0) );
	// fdivs f31,f30,f31
	f31.f64 = double(float(f30.f64 / f31.f64));
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvlx v0,0,r10
	temp.u32 = r0.u32 + ctx.r10.u32;
	simd::store_shuffled(ctx.v0,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// stw r18,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r18.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// vspltw128 v127,v0,0
	simd::store_i32(v127.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 3));
	// ble cr6,0x82e68e88
	if (!cr6.gt) goto loc_82E68E88;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,17024
	r11.s64 = r11.s64 + 17024;
	// addi r16,r17,4
	r16.s64 = r17.s64 + 4;
	// addi r15,r31,52
	r15.s64 = r31.s64 + 52;
	// mr r20,r18
	r20.u64 = r18.u64;
	// lfs f29,3084(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	f29.f64 = double(temp.f32);
	// addi r27,r30,64
	r27.s64 = r30.s64 + 64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r14,-64
	r14.s64 = -64;
	// b 0x82e689d0
	goto loc_82E689D0;
loc_82E689C8:
	// lwz r28,492(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(492) );
	// lwz r26,500(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(500) );
loc_82E689D0:
	// addi r11,r17,12
	r11.s64 = r17.s64 + 12;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e689f8
	if (cr6.eq) goto loc_82E689F8;
	// lwzx r11,r11,r20
	r11.u64 = PPC_LOAD_U32(r11.u32 + r20.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = rotl64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r11,r28
	r31.u64 = r11.u64 + r28.u64;
	// b 0x82e689fc
	goto loc_82E689FC;
loc_82E689F8:
	// mr r31,r28
	r31.u64 = r28.u64;
loc_82E689FC:
	// lwz r10,0(r16)
	ctx.r10.u64 = PPC_LOAD_U32(r16.u32 + int32_t(0) );
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + int32_t(0) );
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f0.f64 = double(temp.f32);
	// fsubs f0,f30,f0
	f0.f64 = static_cast<float>(f30.f64 - f0.f64);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// add r29,r18,r11
	r29.u64 = r18.u64 + r11.u64;
	// lvx128 v0,r27,r14
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r27.u32 + r14.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,208
	r11.s64 = ctx.r1.s64 + 208;
	// lwzx r30,r10,r20
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + r20.u32);
	// lvlx v13,0,r9
	temp.u32 = r0.u32 + ctx.r9.u32;
	simd::store_shuffled(ctx.v13,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vspltw128 v126,v13,0
	simd::store_i32(v126.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// addi r10,r29,32
	ctx.r10.s64 = r29.s64 + 32;
	// addi r8,r30,304
	ctx.r8.s64 = r30.s64 + 304;
	// lvx128 v13,r0,r29
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// addi r9,r30,416
	ctx.r9.s64 = r30.s64 + 416;
	// vsubfp v13,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v13.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// addi r25,r31,8
	r25.s64 = r31.s64 + 8;
	// addi r24,r31,12
	r24.s64 = r31.s64 + 12;
	// lvx128 v11,r0,r10
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r23,r31,16
	r23.s64 = r31.s64 + 16;
	// lvx128 v12,r0,r8
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// stvx128 v0,r0,r29
	ea = (r29.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// vsubfp v0,v0,v12
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// vmulfp128 v12,v0,v127
	simd::store_f32_aligned(ctx.v12.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(v127.f32)));
	// vmulfp128 v0,v13,v127
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(v127.f32)));
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// ld r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// vsubfp v13,v0,v11
	simd::store_f32_aligned(ctx.v13.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v11.f32)));
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r9.u64);
	// addi r11,r1,208
	r11.s64 = ctx.r1.s64 + 208;
	// lvx128 v11,r0,r11
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// vmulfp128 v11,v11,v126
	simd::store_f32_aligned(ctx.v11.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(v126.f32)));
	// stvx128 v11,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v11), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// lvlx v10,0,r25
	temp.u32 = r0.u32 + r25.u32;
	simd::store_shuffled(ctx.v10,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vspltw v10,v10,0
	simd::store_i32(ctx.v10.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v10.u32), 3));
	// vmaddfp v13,v13,v10,v11
	simd::store_f32_aligned(ctx.v13.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v10.f32)), simd::load_f32_aligned(ctx.v11.f32)));
	// vsubfp v0,v0,v13
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v13,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lvlx v11,0,r24
	temp.u32 = r0.u32 + r24.u32;
	simd::store_shuffled(ctx.v11,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// vspltw v11,v11,0
	simd::store_i32(ctx.v11.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v11.u32), 3));
	// vmaddfp v13,v0,v11,v13
	simd::store_f32_aligned(ctx.v13.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v11.f32)), simd::load_f32_aligned(ctx.v13.f32)));
	// vsubfp v12,v12,v13
	simd::store_f32_aligned(ctx.v12.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v13,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lvlx v0,0,r23
	temp.u32 = r0.u32 + r23.u32;
	simd::store_shuffled(ctx.v0,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vspltw v0,v0,0
	simd::store_i32(ctx.v0.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 3));
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	f0.f64 = double(temp.f32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(f0.f64 * f0.f64));
	// vmulfp128 v0,v12,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vmsum3fp128 v12,v0,v0
	simd::store_f32_aligned(ctx.v12.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// stvewx v12,r0,r7
	PPC_STORE_U32((ctx.r7.u32) & ~0x3, simd::extract_u32(*reinterpret_cast<const simd::vec128i*>(&ctx.v12.u32), 3 - ((ctx.r7.u32) & 0xF) >> 2));
	// lfs f13,104(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x82e68b0c
	if (!cr6.gt) goto loc_82E68B0C;
	// fsqrts f13,f13
	ctx.f13.f64 = double(simd::sqrt_f32(float(ctx.f13.f64)));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// fdivs f13,f30,f13
	ctx.f13.f64 = double(float(f30.f64 / ctx.f13.f64));
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v12,0,r11
	temp.u32 = r0.u32 + r11.u32;
	simd::store_shuffled(ctx.v12,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vspltw v12,v12,0
	simd::store_i32(ctx.v12.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v12.u32), 3));
	// vmulfp128 v0,v0,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v12.f32)));
loc_82E68B0C:
	// vaddfp v10,v13,v0
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v10.f32, simd::add_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// addi r19,r31,28
	r19.s64 = r31.s64 + 28;
	// stvx128 v10,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v10), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f13,28(r31)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f29
	cr6.compare(ctx.f13.f64, f29.f64);
	// beq cr6,0x82e68c1c
	if (cr6.eq) goto loc_82E68C1C;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(108) );
	// lvx128 v0,r0,r27
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r27.u32) & ~0xF), VectorMaskL));
	// vspltw v12,v0,3
	simd::store_i32(ctx.v12.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 0));
	// addi r11,r30,352
	r11.s64 = r30.s64 + 352;
	// lvlx v13,0,r19
	temp.u32 = r0.u32 + r19.u32;
	simd::store_shuffled(ctx.v13,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vpermwi128 v6,v0,135
	simd::store_i32(ctx.v6.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x78));
	// vspltw v7,v13,0
	simd::store_i32(ctx.v7.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// li r9,-16
	ctx.r9.s64 = -16;
	// vpermwi128 v5,v0,99
	simd::store_i32(ctx.v5.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v0.u32), 0x9C));
	// lvx128 v9,r0,r8
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r0,r10
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// vmaddfp v11,v12,v12,v11
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v11.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(ctx.v12.f32)), simd::load_f32_aligned(ctx.v11.f32)));
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v4,v0,v13
	simd::store_f32_aligned(ctx.v4.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32), 0xEF));
	// vpermwi128 v3,v13,99
	simd::store_i32(ctx.v3.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x9C));
	// vpermwi128 v2,v13,135
	simd::store_i32(ctx.v2.u32, simd::permute_i32_dispatch(simd::load_i32(ctx.v13.u32), 0x78));
	// lvx128 v8,r27,r9
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((r27.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// lfs f12,40(r31)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f0,32(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 32);
	f0.f64 = double(temp.f32);
	// vmulfp128 v6,v6,v3
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v6.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v6.f32), simd::load_f32_aligned(ctx.v3.f32)));
	// vmulfp128 v5,v5,v2
	simd::store_f32_aligned(ctx.v5.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v5.f32), simd::load_f32_aligned(ctx.v2.f32)));
	// vmulfp128 v13,v13,v11
	simd::store_f32_aligned(ctx.v13.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v11.f32)));
	// fmuls f11,f13,f31
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f11.f64 = double(float(ctx.f13.f64 * f31.f64));
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(f0.f64 * f0.f64));
	// vspltw v4,v4,0
	simd::store_i32(ctx.v4.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v4.u32), 3));
	// vsubfp v6,v5,v6
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v6.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v5.f32), simd::load_f32_aligned(ctx.v6.f32)));
	// vmaddfp v0,v4,v0,v13
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v4.f32), simd::load_f32_aligned(ctx.v0.f32)), simd::load_f32_aligned(ctx.v13.f32)));
	// vmaddfp v0,v6,v12,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v6.f32), simd::load_f32_aligned(ctx.v12.f32)), simd::load_f32_aligned(ctx.v0.f32)));
	// vaddfp v0,v0,v0
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// vaddfp v0,v0,v8
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v8.f32)));
	// vsubfp v0,v0,v9
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v9.f32)));
	// vmulfp128 v0,v0,v127
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(v127.f32)));
	// vsubfp v0,v0,v10
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v10.f32)));
	// vmulfp128 v0,v0,v7
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v7.f32)));
	// vmsum3fp128 v13,v0,v0
	simd::store_f32_aligned(ctx.v13.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// stvewx v13,r0,r10
	PPC_STORE_U32((ctx.r10.u32) & ~0x3, simd::extract_u32(*reinterpret_cast<const simd::vec128i*>(&ctx.v13.u32), 3 - ((ctx.r10.u32) & 0xF) >> 2));
	// lfs f12,100(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x82e68c04
	if (!cr6.gt) goto loc_82E68C04;
	// fmuls f9,f11,f11
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// fcmpu cr6,f12,f9
	cr6.compare(ctx.f12.f64, ctx.f9.f64);
	// bge cr6,0x82e68bec
	if (!cr6.lt) goto loc_82E68BEC;
	// fdivs f0,f13,f12
	f0.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fsqrts f0,f0
	f0.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// b 0x82e68bf4
	goto loc_82E68BF4;
loc_82E68BEC:
	// fmuls f0,f0,f11
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f0.f64 * ctx.f11.f64));
	// fdivs f0,f0,f12
	f0.f64 = double(float(f0.f64 / ctx.f12.f64));
loc_82E68BF4:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v13,0,r11
	temp.u32 = r0.u32 + r11.u32;
	simd::store_shuffled(ctx.v13,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vspltw v13,v13,0
	simd::store_i32(ctx.v13.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v13.u32), 3));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
loc_82E68C04:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82e68c10
	if (cr6.eq) goto loc_82E68C10;
	// stfsx f10,r20,r26
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r20.u32 + r26.u32, temp.u32);
loc_82E68C10:
	// vaddfp v0,v10,v0
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::load_f32_aligned(ctx.v10.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
loc_82E68C1C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82d7c3a8
	sub_82D7C3A8(ctx, base);
	// lwz r11,208(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(208) );
	// addi r22,r30,208
	r22.s64 = r30.s64 + 208;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(64) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r28,r27,-48
	r28.s64 = r27.s64 + -48;
	// addi r21,r30,336
	r21.s64 = r30.s64 + 336;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82e680e8
	sub_82E680E8(ctx, base);
	// addi r26,r29,16
	r26.s64 = r29.s64 + 16;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82e680e8
	sub_82E680E8(ctx, base);
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// lvx128 v13,r0,r28
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// addi r11,r29,48
	r11.s64 = r29.s64 + 48;
	// stvx128 v13,r0,r26
	ea = (r26.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r9,r30,432
	ctx.r9.s64 = r30.s64 + 432;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// vmulfp128 v0,v0,v127
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(v127.f32)));
	// lvx128 v13,r0,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v11,v13,v127
	simd::store_f32_aligned(ctx.v11.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(v127.f32)));
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// ld r11,0(r9)
	r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// ld r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// vsubfp v13,v0,v13
	simd::store_f32_aligned(ctx.v13.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// addi r11,r1,224
	r11.s64 = ctx.r1.s64 + 224;
	// lvx128 v12,r0,r11
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// vmulfp128 v12,v12,v126
	simd::store_f32_aligned(ctx.v12.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v12.f32), simd::load_f32_aligned(v126.f32)));
	// stvx128 v12,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v12), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// lvlx v10,0,r25
	temp.u32 = r0.u32 + r25.u32;
	simd::store_shuffled(ctx.v10,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vspltw v10,v10,0
	simd::store_i32(ctx.v10.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v10.u32), 3));
	// vmaddfp v13,v13,v10,v12
	simd::store_f32_aligned(ctx.v13.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v10.f32)), simd::load_f32_aligned(ctx.v12.f32)));
	// vsubfp v0,v0,v13
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v13,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// lvlx v12,0,r24
	temp.u32 = r0.u32 + r24.u32;
	simd::store_shuffled(ctx.v12,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// addi r11,r1,192
	r11.s64 = ctx.r1.s64 + 192;
	// vspltw v12,v12,0
	simd::store_i32(ctx.v12.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v12.u32), 3));
	// vmaddfp v13,v0,v12,v13
	simd::store_f32_aligned(ctx.v13.f32, simd::add_f32(simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v12.f32)), simd::load_f32_aligned(ctx.v13.f32)));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// stvx128 v13,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v13), &VectorMaskL[(ea & 0xF) * 16]);
	// addi r11,r1,176
	r11.s64 = ctx.r1.s64 + 176;
	// lvlx v0,0,r23
	temp.u32 = r0.u32 + r23.u32;
	simd::store_shuffled(ctx.v0,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vspltw v12,v0,0
	simd::store_i32(ctx.v12.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v0.u32), 3));
	// vsubfp v0,v11,v13
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v11.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	f0.f64 = double(temp.f32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(f0.f64 * f0.f64));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// vmulfp128 v0,v0,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// vmsum3fp128 v12,v0,v0
	simd::store_f32_aligned(ctx.v12.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// stvewx v12,r0,r8
	PPC_STORE_U32((ctx.r8.u32) & ~0x3, simd::extract_u32(*reinterpret_cast<const simd::vec128i*>(&ctx.v12.u32), 3 - ((ctx.r8.u32) & 0xF) >> 2));
	// lfs f13,92(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x82e68d54
	if (!cr6.gt) goto loc_82E68D54;
	// fsqrts f13,f13
	ctx.f13.f64 = double(simd::sqrt_f32(float(ctx.f13.f64)));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// fdivs f13,f30,f13
	ctx.f13.f64 = double(float(f30.f64 / ctx.f13.f64));
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v12,0,r11
	temp.u32 = r0.u32 + r11.u32;
	simd::store_shuffled(ctx.v12,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// vspltw v12,v12,0
	simd::store_i32(ctx.v12.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v12.u32), 3));
	// vmulfp128 v0,v0,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v12.f32)));
loc_82E68D54:
	// vaddfp v0,v13,v0
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// lfs f0,0(r19)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r19.u32 + 0);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	cr6.compare(f0.f64, f29.f64);
	// beq cr6,0x82e68e3c
	if (cr6.eq) goto loc_82E68E3C;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82e680e8
	sub_82E680E8(ctx, base);
	// addi r11,r1,160
	r11.s64 = ctx.r1.s64 + 160;
	// lvlx v12,0,r19
	temp.u32 = r0.u32 + r19.u32;
	simd::store_shuffled(ctx.v12,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// vspltw v12,v12,0
	simd::store_i32(ctx.v12.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v12.u32), 3));
	// lfs f13,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * f31.f64));
	// lfs f12,0(r19)
	temp.u32 = PPC_LOAD_U32(r19.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,36(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 36);
	f0.f64 = double(temp.f32);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// vmulfp128 v0,v0,v127
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(v127.f32)));
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// fmuls f11,f13,f12
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(f0.f64 * f0.f64));
	// vsubfp v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::sub_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v13.f32)));
	// vmulfp128 v0,v0,v12
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// vmsum3fp128 v12,v0,v0
	simd::store_f32_aligned(ctx.v12.f32, simd::dp_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v0.f32), 0xEF));
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
	// stvewx v12,r0,r11
	PPC_STORE_U32((r11.u32) & ~0x3, simd::extract_u32(*reinterpret_cast<const simd::vec128i*>(&ctx.v12.u32), 3 - ((r11.u32) & 0xF) >> 2));
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x82e68e18
	if (!cr6.gt) goto loc_82E68E18;
	// fmuls f9,f11,f11
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// fcmpu cr6,f13,f9
	cr6.compare(ctx.f13.f64, ctx.f9.f64);
	// bge cr6,0x82e68df8
	if (!cr6.lt) goto loc_82E68DF8;
	// fdivs f0,f12,f13
	f0.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fsqrts f0,f0
	f0.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// b 0x82e68e00
	goto loc_82E68E00;
loc_82E68DF8:
	// fmuls f0,f0,f11
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f0.f64 * ctx.f11.f64));
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
loc_82E68E00:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v12,0,r11
	temp.u32 = r0.u32 + r11.u32;
	simd::store_shuffled(ctx.v12,
		simde_mm_shuffle_epi8(
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(base + ((temp).u32 & ~0xF))),
			simde_mm_load_si128(reinterpret_cast<const simde__m128i*>(&VectorMaskL[((temp).u32 & 0xF) * 16]))
		));
	// addi r11,r1,160
	r11.s64 = ctx.r1.s64 + 160;
	// vspltw v12,v12,0
	simd::store_i32(ctx.v12.u32, simd::broadcast_lane_i32(simd::load_i32(ctx.v12.u32), 3));
	// vmulfp128 v0,v0,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simd::store_f32_aligned(ctx.v0.f32, simd::mul_f32(simd::load_f32_aligned(ctx.v0.f32), simd::load_f32_aligned(ctx.v12.f32)));
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
loc_82E68E18:
	// lwz r11,500(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(500) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e68e30
	if (cr6.eq) goto loc_82E68E30;
	// lfsx f0,r20,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r20.u32 + r11.u32);
	f0.f64 = double(temp.f32);
	// fadds f0,f0,f10
	f0.f64 = double(float(f0.f64 + ctx.f10.f64));
	// stfsx f0,r20,r11
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r20.u32 + r11.u32, temp.u32);
loc_82E68E30:
	// vaddfp v0,v13,v0
	ctx.fpscr.enableFlushMode();
	simd::store_f32_aligned(ctx.v0.f32, simd::add_f32(simd::load_f32_aligned(ctx.v13.f32), simd::load_f32_aligned(ctx.v0.f32)));
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// stvx128 v0,r0,r11
	ea = (r11.u32) & ~0xF;
	simd::store_shuffled(base + ea, simd::to_vec128i(ctx.v0), &VectorMaskL[(ea & 0xF) * 16]);
loc_82E68E3C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82d7c3a8
	sub_82D7C3A8(ctx, base);
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + int32_t(0) );
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(68) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(96) );
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + int32_t(0) );
	// addi r27,r27,96
	r27.s64 = r27.s64 + 96;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r18,r18,64
	r18.s64 = r18.s64 + 64;
	// addi r20,r20,4
	r20.s64 = r20.s64 + 4;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// blt cr6,0x82e689c8
	if (cr6.lt) goto loc_82E689C8;
	// lwz r30,88(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(88) );
	// lwz r29,112(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(112) );
loc_82E68E88:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(40) );
	// stw r30,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r30.u32);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x82e68eb0
	if (!cr6.eq) goto loc_82E68EB0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E68EB0:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// li r0,-208
	r0.s64 = -208;
	// lvx128 v126,r1,r0
	simd::store_shuffled(v126, simd::load_and_shuffle(base + ((ctx.r1.u32 + r0.u32) & ~0xF), VectorMaskL));
	// li r0,-192
	r0.s64 = -192;
	// lvx128 v127,r1,r0
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + r0.u32) & ~0xF), VectorMaskL));
	// lfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82ca2c00
	return;
}

PPC_WEAK_FUNC(sub_82E688A8) {
	__imp__sub_82E688A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E68ED8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r3,r11,20704
	ctx.r3.s64 = r11.s64 + 20704;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E68ED8) {
	__imp__sub_82E68ED8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E68EE8) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82624598
	sub_82624598(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r11,-30968
	ctx.r10.s64 = r11.s64 + -30968;
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,3040(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3040);
	f0.f64 = double(temp.f32);
	// stfs f0,92(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 92, temp.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// stb r11,88(r31)
	PPC_STORE_U8(r31.u32 + 88, r11.u8);
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E68EE8) {
	__imp__sub_82E68EE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E68F40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r3,r11,-19236
	ctx.r3.s64 = r11.s64 + -19236;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E68F40) {
	__imp__sub_82E68F40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E68F50) {
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
	// bl 0x826246e0
	sub_826246E0(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E68F50) {
	__imp__sub_82E68F50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E68F80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r4,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r4.u32);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(8) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// b 0x826248d0
	sub_826248D0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82E68F80) {
	__imp__sub_82E68F80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E68FA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E68FA0) {
	__imp__sub_82E68FA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E68FA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 100);
	f0.f64 = double(temp.f32);
	// lfs f13,3084(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bne cr6,0x82e69004
	if (!cr6.eq) goto loc_82E69004;
	// li r11,1
	r11.s64 = 1;
	// stfs f0,92(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 92, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,16(r31)
	PPC_STORE_U8(r31.u32 + 16, r11.u8);
	// stw r10,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r10.u32);
	// bl 0x82260978
	sub_82260978(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lwz r4,472(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(472) );
	// lwz r5,20(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// bl 0x82e7a558
	sub_82E7A558(ctx, base);
loc_82E68FFC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e69088
	goto loc_82E69088;
loc_82E69004:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lwz r10,44(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(44) );
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,16(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 16);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82e69084
	if (!cr6.eq) goto loc_82E69084;
	// lfs f0,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 100);
	f0.f64 = double(temp.f32);
	// lfs f13,104(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x82e69058
	if (cr6.gt) goto loc_82E69058;
	// lfs f12,92(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// bgt cr6,0x82e69058
	if (cr6.gt) goto loc_82E69058;
	// stfs f0,92(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 92, temp.u32);
	// li r11,0
	r11.s64 = 0;
	// b 0x82e6907c
	goto loc_82E6907C;
loc_82E69058:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82e69078
	if (!cr6.lt) goto loc_82E69078;
	// lfs f0,92(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 92);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgt cr6,0x82e69078
	if (cr6.gt) goto loc_82E69078;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// stfs f13,92(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 92, temp.u32);
	// b 0x82e6907c
	goto loc_82E6907C;
loc_82E69078:
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(108) );
loc_82E6907C:
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// b 0x82e68ffc
	goto loc_82E68FFC;
loc_82E69084:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E69088:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E68FA8) {
	__imp__sub_82E68FA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E690A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(4) );
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,60(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(60) );
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// lwz r9,64(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(64) );
	// lwzx r11,r8,r7
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// mulli r11,r11,20
	r11.s64 = r11.s64 * 20;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82E690A0) {
	__imp__sub_82E690A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E690D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(4) );
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-30992
	ctx.r10.s64 = ctx.r10.s64 + -30992;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(80) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e69144
	if (cr0.eq) goto loc_82E69144;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(0) );
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e69144
	if (cr0.eq) goto loc_82E69144;
	// lwz r10,84(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(84) );
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// lwz r10,32(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(32) );
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82e69160
	goto loc_82E69160;
loc_82E69144:
	// lwz r11,84(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(84) );
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// bl 0x82e890a8
	sub_82E890A8(ctx, base);
loc_82E69160:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E690D0) {
	__imp__sub_82E690D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E69170) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826248d8
	sub_826248D8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,3040(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3040);
	f0.f64 = double(temp.f32);
	// stfs f0,92(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 92, temp.u32);
	// stw r10,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E69170) {
	__imp__sub_82E69170(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E691B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lbz r11,16(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82e691c4
	if (!cr0.eq) goto loc_82E691C4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82E691C4:
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(96) );
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E691B0) {
	__imp__sub_82E691B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E691D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x82ca2be8
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r30,0
	r30.s64 = 0;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lfs f0,16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	f0.f64 = double(temp.f32);
	// li r11,0
	r11.s64 = 0;
	// fmuls f30,f0,f0
	f30.f64 = double(float(f0.f64 * f0.f64));
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r11,416(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(416) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// fmr f31,f30
	f31.f64 = f30.f64;
	// ble cr6,0x82e69288
	if (!cr6.gt) goto loc_82E69288;
loc_82E6921C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82195b30
	sub_82195B30(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82e69274
	if (!cr6.eq) goto loc_82E69274;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,52(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f11,f0
	f0.f64 = static_cast<float>(ctx.f11.f64 - f0.f64);
	// lfs f10,56(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f10,f13
	ctx.f13.f64 = static_cast<float>(ctx.f10.f64 - ctx.f13.f64);
	// lfs f11,60(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = static_cast<float>(ctx.f11.f64 - ctx.f12.f64);
	// fmuls f0,f0,f0
	f0.f64 = double(float(f0.f64 * f0.f64));
	// fmadds f0,f13,f13,f0
	f0.f64 = double(std::fma(float(ctx.f13.f64), float(ctx.f13.f64), float(f0.f64)));
	// fmadds f0,f12,f12,f0
	f0.f64 = double(std::fma(float(ctx.f12.f64), float(ctx.f12.f64), float(f0.f64)));
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bge cr6,0x82e69274
	if (!cr6.lt) goto loc_82E69274;
	// fmr f31,f0
	f31.f64 = f0.f64;
loc_82E69274:
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r11,416(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(416) );
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82e6921c
	if (cr6.lt) goto loc_82E6921C;
loc_82E69288:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// li r30,0
	r30.s64 = 0;
	// lfs f0,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r11,404(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(404) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e69328
	if (!cr6.gt) goto loc_82E69328;
loc_82E692B0:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82e698b8
	sub_82E698B8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82e69314
	if (!cr6.eq) goto loc_82E69314;
	// lfs f12,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,0(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	f0.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	f0.f64 = static_cast<float>(ctx.f12.f64 - f0.f64);
	// lfs f12,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = static_cast<float>(ctx.f12.f64 - ctx.f13.f64);
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = static_cast<float>(ctx.f11.f64 - ctx.f12.f64);
	// fmuls f0,f0,f0
	f0.f64 = double(float(f0.f64 * f0.f64));
	// fmadds f0,f13,f13,f0
	f0.f64 = double(std::fma(float(ctx.f13.f64), float(ctx.f13.f64), float(f0.f64)));
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f12,f12,f0
	f0.f64 = double(std::fma(float(ctx.f12.f64), float(ctx.f12.f64), float(f0.f64)));
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x82e69314
	if (!cr6.lt) goto loc_82E69314;
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bge cr6,0x82e69314
	if (!cr6.lt) goto loc_82E69314;
	// fmr f31,f0
	f31.f64 = f0.f64;
loc_82E69314:
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r11,404(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(404) );
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82e692b0
	if (cr6.lt) goto loc_82E692B0;
loc_82E69328:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// cmplwi cr6,r28,1
	cr6.compare<uint32_t>(r28.u32, 1, xer);
	// lfs f10,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	ctx.f10.f64 = double(temp.f32);
	// bne cr6,0x82e69340
	if (!cr6.eq) goto loc_82E69340;
	// fmr f1,f10
	ctx.f1.f64 = ctx.f10.f64;
	// b 0x82e69348
	goto loc_82E69348;
loc_82E69340:
	// fsubs f0,f30,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = static_cast<float>(f30.f64 - f31.f64);
	// fdivs f1,f0,f30
	ctx.f1.f64 = double(float(f0.f64 / f30.f64));
loc_82E69348:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lfs f11,16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,20(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// lfs f9,52(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f0,f0,f9
	f0.f64 = static_cast<float>(f0.f64 - ctx.f9.f64);
	// lfs f8,56(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f13,f13,f8
	ctx.f13.f64 = static_cast<float>(ctx.f13.f64 - ctx.f8.f64);
	// lfs f9,60(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 60);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f12,f12,f9
	ctx.f12.f64 = static_cast<float>(ctx.f12.f64 - ctx.f9.f64);
	// fmuls f0,f0,f0
	f0.f64 = double(float(f0.f64 * f0.f64));
	// fmadds f0,f13,f13,f0
	f0.f64 = double(std::fma(float(ctx.f13.f64), float(ctx.f13.f64), float(f0.f64)));
	// fmadds f0,f12,f12,f0
	f0.f64 = double(std::fma(float(ctx.f12.f64), float(ctx.f12.f64), float(f0.f64)));
	// fsqrts f0,f0
	f0.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// fcmpu cr6,f0,f11
	cr6.compare(f0.f64, ctx.f11.f64);
	// ble cr6,0x82e693a0
	if (!cr6.gt) goto loc_82E693A0;
	// fdivs f0,f0,f11
	f0.f64 = double(float(f0.f64 / ctx.f11.f64));
	// fsubs f0,f0,f10
	f0.f64 = static_cast<float>(f0.f64 - ctx.f10.f64);
	// fadds f1,f0,f1
	ctx.f1.f64 = double(float(f0.f64 + ctx.f1.f64));
loc_82E693A0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82E691D0) {
	__imp__sub_82E691D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E693B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r10,-19240(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-19240) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,-19240(r11)
	PPC_STORE_U32(r11.u32 + -19240, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E693B0) {
	__imp__sub_82E693B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E693C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e693ec
	if (cr0.eq) goto loc_82E693EC;
	// bl 0x82e68ee8
	sub_82E68EE8(ctx, base);
	// b 0x82e693f0
	goto loc_82E693F0;
loc_82E693EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E693F0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E693C8) {
	__imp__sub_82E693C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E69400) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82624698
	sub_82624698(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e6943c
	if (cr0.eq) goto loc_82E6943C;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,-9868(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E6943C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E69400) {
	__imp__sub_82E69400(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E69458) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82639068
	sub_82639068(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e691d0
	sub_82E691D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E69458) {
	__imp__sub_82E69458(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E694A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,1
	r11.s64 = 1;
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82e694d0
	if (!cr0.eq) goto loc_82E694D0;
	// li r11,0
	r11.s64 = 0;
loc_82E694D0:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82e694e0
	if (!cr6.eq) goto loc_82E694E0;
	// li r11,0
	r11.s64 = 0;
loc_82E694E0:
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82e694f0
	if (!cr6.eq) goto loc_82E694F0;
	// li r11,0
	r11.s64 = 0;
loc_82E694F0:
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// bne cr6,0x82e69500
	if (!cr6.eq) goto loc_82E69500;
	// li r11,0
	r11.s64 = 0;
loc_82E69500:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e69510
	if (!cr0.eq) goto loc_82E69510;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e6954c
	goto loc_82E6954C;
loc_82E69510:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,436
	ctx.r4.s64 = ctx.r10.s64 + 436;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,3040(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3040);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// stfs f0,92(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 92, temp.u32);
	// stb r11,88(r31)
	PPC_STORE_U8(r31.u32 + 88, r11.u8);
	// bl 0x82e691d0
	sub_82E691D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// stfs f1,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// bl 0x82e69458
	sub_82E69458(ctx, base);
	// stfs f1,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 104, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E6954C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E694A8) {
	__imp__sub_82E694A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E69560) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82e69458
	sub_82E69458(ctx, base);
	// lfs f0,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 92);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bge cr6,0x82e69594
	if (!cr6.lt) goto loc_82E69594;
	// stfs f1,92(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 92, temp.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r30.u32);
loc_82E69594:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E69560) {
	__imp__sub_82E69560(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E695B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r11,r11,-18960
	r11.s64 = r11.s64 + -18960;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e69668
	if (cr6.eq) goto loc_82E69668;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r11,r11,-18132
	r11.s64 = r11.s64 + -18132;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e69668
	if (cr6.eq) goto loc_82E69668;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r11,r11,-17856
	r11.s64 = r11.s64 + -17856;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e69668
	if (cr6.eq) goto loc_82E69668;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r11,r11,-18684
	r11.s64 = r11.s64 + -18684;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e69668
	if (cr6.eq) goto loc_82E69668;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r11,r11,-17024
	r11.s64 = r11.s64 + -17024;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e69668
	if (cr6.eq) goto loc_82E69668;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r11,r11,-17300
	r11.s64 = r11.s64 + -17300;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e69668
	if (cr6.eq) goto loc_82E69668;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r11,r11,-18408
	r11.s64 = r11.s64 + -18408;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e69668
	if (cr6.eq) goto loc_82E69668;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r11,r11,-17576
	r11.s64 = r11.s64 + -17576;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e69668
	if (cr6.eq) goto loc_82E69668;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,-19236
	r11.s64 = r11.s64 + -19236;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_82E69668:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E695B0) {
	__imp__sub_82E695B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E69670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r11,r11,10684
	r11.s64 = r11.s64 + 10684;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(44) );
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x82e696b8
	if (cr0.eq) goto loc_82E696B8;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e696b8
	if (cr0.eq) goto loc_82E696B8;
	// bl 0x82e86dd0
	sub_82E86DD0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
loc_82E696B8:
	// lwz r3,396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(396) );
	// lis r30,-31952
	r30.s64 = -2094006272;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e696d4
	if (cr0.eq) goto loc_82E696D4;
	// lwz r11,-9868(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E696D4:
	// lwz r3,400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(400) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e696ec
	if (cr0.eq) goto loc_82E696EC;
	// lwz r11,-9868(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E696EC:
	// lwz r3,412(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(412) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e69704
	if (cr0.eq) goto loc_82E69704;
	// lwz r11,-9868(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E69704:
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-30984
	r11.s64 = r11.s64 + -30984;
	// stw r11,448(r31)
	PPC_STORE_U32(r31.u32 + 448, r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// bl 0x82e82a48
	sub_82E82A48(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E69670) {
	__imp__sub_82E69670(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E69738) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r3,r11,-18960
	ctx.r3.s64 = r11.s64 + -18960;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E69738) {
	__imp__sub_82E69738(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E69748) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// stw r30,460(r31)
	PPC_STORE_U32(r31.u32 + 460, r30.u32);
	// stb r30,480(r31)
	PPC_STORE_U8(r31.u32 + 480, r30.u8);
	// lfs f0,3800(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3800);
	f0.f64 = double(temp.f32);
	// stb r30,481(r31)
	PPC_STORE_U8(r31.u32 + 481, r30.u8);
	// lwz r11,20(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// lfs f13,52(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,436(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 436, temp.u32);
	// lfs f13,56(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,440(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 440, temp.u32);
	// lfs f13,60(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,444(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 444, temp.u32);
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(44) );
	// stfs f0,464(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 464, temp.u32);
	// stw r30,428(r31)
	PPC_STORE_U32(r31.u32 + 428, r30.u32);
	// stb r30,432(r31)
	PPC_STORE_U8(r31.u32 + 432, r30.u8);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82e697c4
	if (cr0.eq) goto loc_82E697C4;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e697c4
	if (cr0.eq) goto loc_82E697C4;
	// bl 0x82e86dd0
	sub_82E86DD0(ctx, base);
	// stw r30,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r30.u32);
loc_82E697C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E69748) {
	__imp__sub_82E69748(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E697E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(20) );
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e697f4
	if (!cr6.eq) goto loc_82E697F4;
	// li r11,0
	r11.s64 = 0;
loc_82E697F4:
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(28) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e69804
	if (!cr6.eq) goto loc_82E69804;
	// li r11,0
	r11.s64 = 0;
loc_82E69804:
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(48) );
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x82e69814
	if (!cr6.eq) goto loc_82E69814;
	// li r11,0
	r11.s64 = 0;
loc_82E69814:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E697E0) {
	__imp__sub_82E697E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E69820) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,476(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(476) );
	// li r11,1
	r11.s64 = 1;
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x82e69834
	if (!cr6.eq) goto loc_82E69834;
	// li r11,0
	r11.s64 = 0;
loc_82E69834:
	// lwz r10,472(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(472) );
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x82e69844
	if (!cr6.eq) goto loc_82E69844;
	// li r11,0
	r11.s64 = 0;
loc_82E69844:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E69820) {
	__imp__sub_82E69820(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E69850) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r10,404(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(404) );
	// lwz r9,408(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(408) );
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x82e6986c
	if (cr6.lt) goto loc_82E6986C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82E6986C:
	// lwz r9,396(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(396) );
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// fmuls f13,f1,f1
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,0(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lwz r10,404(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(404) );
	// lwz r9,400(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(400) );
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f13,r10,r9
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, temp.u32);
	// lwz r10,404(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(404) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,404(r11)
	PPC_STORE_U32(r11.u32 + 404, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E69850) {
	__imp__sub_82E69850(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E698B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,404(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(404) );
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// blt cr6,0x82e698d0
	if (cr6.lt) goto loc_82E698D0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82E698D0:
	// lwz r11,396(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(396) );
	// mulli r9,r4,12
	ctx.r9.s64 = ctx.r4.s64 * 12;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lwz r11,400(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(400) );
	// lfsx f0,r11,r9
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r6)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E698B8) {
	__imp__sub_82E698B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E69910) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bne cr6,0x82e6992c
	if (!cr6.eq) goto loc_82E6992C;
loc_82E69924:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82E6992C:
	// lwz r10,416(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(416) );
	// lwz r9,420(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(420) );
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82e69924
	if (!cr6.lt) goto loc_82E69924;
	// lwz r9,412(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(412) );
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,1
	ctx.r3.s64 = 1;
	// stwx r4,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r4.u32);
	// lwz r10,416(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(416) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,416(r11)
	PPC_STORE_U32(r11.u32 + 416, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E69910) {
	__imp__sub_82E69910(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E69960) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 416, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E69960) {
	__imp__sub_82E69960(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E69970) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r4,492(r31)
	PPC_STORE_U32(r31.u32 + 492, ctx.r4.u32);
	// stw r5,496(r31)
	PPC_STORE_U32(r31.u32 + 496, ctx.r5.u32);
	// stw r30,428(r31)
	PPC_STORE_U32(r31.u32 + 428, r30.u32);
	// beq cr6,0x82e699a4
	if (cr6.eq) goto loc_82E699A4;
	// stb r30,480(r31)
	PPC_STORE_U8(r31.u32 + 480, r30.u8);
loc_82E699A4:
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(44) );
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82e699bc
	if (cr0.eq) goto loc_82E699BC;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// bl 0x82e86dd0
	sub_82E86DD0(ctx, base);
	// stw r30,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r30.u32);
loc_82E699BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E69970) {
	__imp__sub_82E69970(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E699D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(44) );
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82e69a00
	if (cr0.eq) goto loc_82E69A00;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// bl 0x82e86dd0
	sub_82E86DD0(ctx, base);
loc_82E69A00:
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e69a24
	if (!cr0.eq) goto loc_82E69A24;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r30,472(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(472) );
	// lwz r29,20(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// bl 0x82260978
	sub_82260978(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x82e7a558
	sub_82E7A558(ctx, base);
loc_82E69A24:
	// li r11,0
	r11.s64 = 0;
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E699D8) {
	__imp__sub_82E699D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E69A38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,100(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(100) );
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x82e69a84
	if (!cr6.eq) goto loc_82E69A84;
	// lwz r8,100(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(100) );
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82e69a84
	if (cr0.eq) goto loc_82E69A84;
	// lwz r9,120(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(120) );
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq 0x82e69a84
	if (cr0.eq) goto loc_82E69A84;
	// lwz r11,112(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(112) );
loc_82E69A68:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// beq cr6,0x82e69a8c
	if (cr6.eq) goto loc_82E69A8C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x82e69a68
	if (cr6.lt) goto loc_82E69A68;
loc_82E69A84:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82E69A8C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E69A38) {
	__imp__sub_82E69A38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E69A98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E69A98) {
	__imp__sub_82E69A98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E69AA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82e82a28
	sub_82E82A28(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r11,r11,10684
	r11.s64 = r11.s64 + 10684;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r11,-720(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-720) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e69ae0
	if (cr0.eq) goto loc_82E69AE0;
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82e69ae8
	goto loc_82E69AE8;
loc_82E69AE0:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	ctx.f13.f64 = double(temp.f32);
loc_82E69AE8:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r30,0
	r30.s64 = 0;
	// li r29,-1
	r29.s64 = -1;
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// lfs f0,2792(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2792);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r30.u32);
	// stw r29,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r29.u32);
	// bl 0x82e88b80
	sub_82E88B80(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r30,396(r31)
	PPC_STORE_U32(r31.u32 + 396, r30.u32);
	// stw r30,400(r31)
	PPC_STORE_U32(r31.u32 + 400, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,404(r31)
	PPC_STORE_U32(r31.u32 + 404, r30.u32);
	// stw r30,408(r31)
	PPC_STORE_U32(r31.u32 + 408, r30.u32);
	// stw r30,412(r31)
	PPC_STORE_U32(r31.u32 + 412, r30.u32);
	// lfs f0,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r30,416(r31)
	PPC_STORE_U32(r31.u32 + 416, r30.u32);
	// addi r11,r11,4284
	r11.s64 = r11.s64 + 4284;
	// stw r30,420(r31)
	PPC_STORE_U32(r31.u32 + 420, r30.u32);
	// stfs f0,436(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 436, temp.u32);
	// stfs f0,440(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 440, temp.u32);
	// stfs f0,444(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 444, temp.u32);
	// stw r30,452(r31)
	PPC_STORE_U32(r31.u32 + 452, r30.u32);
	// stw r29,456(r31)
	PPC_STORE_U32(r31.u32 + 456, r29.u32);
	// stw r11,448(r31)
	PPC_STORE_U32(r31.u32 + 448, r11.u32);
	// stw r30,492(r31)
	PPC_STORE_U32(r31.u32 + 492, r30.u32);
	// stw r30,496(r31)
	PPC_STORE_U32(r31.u32 + 496, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E69AA8) {
	__imp__sub_82E69AA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E69B80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82e69670
	sub_82E69670(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e69bbc
	if (cr0.eq) goto loc_82E69BBC;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,-9868(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E69BBC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E69B80) {
	__imp__sub_82E69B80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E69BD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be8
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// clrlwi. r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e69bfc
	if (!cr0.eq) goto loc_82E69BFC;
	// lwz r11,408(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(408) );
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x82e69cdc
	if (!cr6.gt) goto loc_82E69CDC;
loc_82E69BFC:
	// lwz r3,396(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(396) );
	// lis r31,-31952
	r31.s64 = -2094006272;
	// stw r4,408(r30)
	PPC_STORE_U32(r30.u32 + 408, ctx.r4.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e69c1c
	if (cr0.eq) goto loc_82E69C1C;
	// lwz r11,-9868(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E69C1C:
	// lwz r3,400(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(400) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e69c34
	if (cr0.eq) goto loc_82E69C34;
	// lwz r11,-9868(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E69C34:
	// lwz r31,408(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + int32_t(408) );
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// bne 0x82e69c50
	if (!cr0.eq) goto loc_82E69C50;
	// li r29,0
	r29.s64 = 0;
	// stw r29,396(r30)
	PPC_STORE_U32(r30.u32 + 396, r29.u32);
	// stw r29,400(r30)
	PPC_STORE_U32(r30.u32 + 400, r29.u32);
	// b 0x82e69cd8
	goto loc_82E69CD8;
loc_82E69C50:
	// lis r11,5461
	r11.s64 = 357892096;
	// li r28,-1
	r28.s64 = -1;
	// ori r11,r11,21845
	r11.u64 = r11.u64 | 21845;
	// mulli r3,r31,12
	ctx.r3.s64 = r31.s64 * 12;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// ble cr6,0x82e69c6c
	if (!cr6.gt) goto loc_82E69C6C;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_82E69C6C:
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// mr. r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82e69cac
	if (cr0.eq) goto loc_82E69CAC;
	// addic. r9,r31,-1
	xer.ca = r31.u32 > 0;
	ctx.r9.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blt 0x82e69cb0
	if (cr0.lt) goto loc_82E69CB0;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r11,r10,8
	r11.s64 = ctx.r10.s64 + 8;
	// lfs f0,3084(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3084);
	f0.f64 = double(temp.f32);
loc_82E69C90:
	// stfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + -8, temp.u32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stfs f0,-4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + -4, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// bge 0x82e69c90
	if (!cr0.lt) goto loc_82E69C90;
	// b 0x82e69cb0
	goto loc_82E69CB0;
loc_82E69CAC:
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_82E69CB0:
	// lis r9,16383
	ctx.r9.s64 = 1073676288;
	// lwz r11,408(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(408) );
	// stw r10,396(r30)
	PPC_STORE_U32(r30.u32 + 396, ctx.r10.u32);
	// ori r9,r9,65535
	ctx.r9.u64 = ctx.r9.u64 | 65535;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// ble cr6,0x82e69cd0
	if (!cr6.gt) goto loc_82E69CD0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_82E69CD0:
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// stw r3,400(r30)
	PPC_STORE_U32(r30.u32 + 400, ctx.r3.u32);
loc_82E69CD8:
	// stw r29,404(r30)
	PPC_STORE_U32(r30.u32 + 404, r29.u32);
loc_82E69CDC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82E69BD8) {
	__imp__sub_82E69BD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E69CE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// clrlwi. r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e69d14
	if (!cr0.eq) goto loc_82E69D14;
	// lwz r11,420(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(420) );
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x82e69d70
	if (!cr6.gt) goto loc_82E69D70;
loc_82E69D14:
	// lwz r3,412(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(412) );
	// stw r4,420(r31)
	PPC_STORE_U32(r31.u32 + 420, ctx.r4.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e69d34
	if (cr0.eq) goto loc_82E69D34;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// lwz r11,-9868(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E69D34:
	// lwz r11,420(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(420) );
	// li r30,0
	r30.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82e69d4c
	if (!cr0.eq) goto loc_82E69D4C;
	// stw r30,412(r31)
	PPC_STORE_U32(r31.u32 + 412, r30.u32);
	// b 0x82e69d6c
	goto loc_82E69D6C;
loc_82E69D4C:
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82e69d64
	if (!cr6.gt) goto loc_82E69D64;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82E69D64:
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// stw r3,412(r31)
	PPC_STORE_U32(r31.u32 + 412, ctx.r3.u32);
loc_82E69D6C:
	// stw r30,416(r31)
	PPC_STORE_U32(r31.u32 + 416, r30.u32);
loc_82E69D70:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E69CE8) {
	__imp__sub_82E69CE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E69D88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r31{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r31,8(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// lwz r11,100(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(100) );
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bne cr6,0x82e69de4
	if (!cr6.eq) goto loc_82E69DE4;
	// lwz r8,120(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(120) );
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,100(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(100) );
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq 0x82e69de4
	if (cr0.eq) goto loc_82E69DE4;
	// lwz r6,112(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(112) );
loc_82E69DB8:
	// lwz r11,0(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(0) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e69dd4
	if (cr0.eq) goto loc_82E69DD4;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82e69df0
	if (cr6.eq) goto loc_82E69DF0;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// add r9,r11,r9
	ctx.r9.u64 = r11.u64 + ctx.r9.u64;
loc_82E69DD4:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// blt cr6,0x82e69db8
	if (cr6.lt) goto loc_82E69DB8;
loc_82E69DE4:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82E69DE8:
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82E69DF0:
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r11,20
	r11.s64 = 20;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// lwz r7,108(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(108) );
	// lwz r6,108(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(108) );
	// lwz r5,104(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(104) );
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + int32_t(4) );
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// subf r8,r8,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r8.s64;
	// subf r10,r10,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r10.s64;
	// divwu r8,r8,r11
	ctx.r8.u32 = ctx.r8.u32 / r11.u32;
	// divwu r10,r10,r11
	ctx.r10.u32 = ctx.r10.u32 / r11.u32;
	// mullw r11,r8,r5
	r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// add r3,r11,r9
	ctx.r3.u64 = r11.u64 + ctx.r9.u64;
	// b 0x82e69de8
	goto loc_82E69DE8;
}

PPC_WEAK_FUNC(sub_82E69D88) {
	__imp__sub_82E69D88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E69E30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bd8
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(100) );
	// bl 0x82e828d0
	sub_82E828D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82e7fea8
	sub_82E7FEA8(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r25,1
	r25.s64 = 1;
	// li r27,0
	r27.s64 = 0;
	// mr r28,r25
	r28.u64 = r25.u64;
	// lfs f0,3040(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3040);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// beq cr6,0x82e69e94
	if (cr6.eq) goto loc_82E69E94;
	// bl 0x82260978
	sub_82260978(ctx, base);
	// lfs f0,76(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	f0.f64 = double(temp.f32);
	// fsubs f0,f0,f31
	f0.f64 = static_cast<float>(f0.f64 - f31.f64);
loc_82E69E94:
	// lfs f13,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x82e69ea8
	if (!cr6.lt) goto loc_82E69EA8;
	// li r27,2
	r27.s64 = 2;
	// b 0x82e69ed0
	goto loc_82E69ED0;
loc_82E69EA8:
	// lfs f13,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x82e69ec4
	if (!cr6.lt) goto loc_82E69EC4;
	// mr r27,r25
	r27.u64 = r25.u64;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(r30.s32, 2, xer);
	// bne cr6,0x82e69ed0
	if (!cr6.eq) goto loc_82E69ED0;
	// b 0x82e69ecc
	goto loc_82E69ECC;
loc_82E69EC4:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x82e69ed0
	if (!cr6.gt) goto loc_82E69ED0;
loc_82E69ECC:
	// li r28,0
	r28.s64 = 0;
loc_82E69ED0:
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e69f70
	if (!cr0.eq) goto loc_82E69F70;
	// cmpwi cr6,r26,1
	cr6.compare<int32_t>(r26.s32, 1, xer);
	// bne cr6,0x82e69f30
	if (!cr6.eq) goto loc_82E69F30;
	// bl 0x82260978
	sub_82260978(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82e69f18
	goto loc_82E69F18;
loc_82E69EEC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r25,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r25.u8);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(48) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82e69f64
	if (!cr0.eq) goto loc_82E69F64;
loc_82E69F18:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e7a138
	sub_82E7A138(ctx, base);
	// lbz r11,108(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 108);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82e69eec
	if (!cr6.eq) goto loc_82E69EEC;
	// b 0x82e69f70
	goto loc_82E69F70;
loc_82E69F30:
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(r26.s32, 2, xer);
	// bne cr6,0x82e69f70
	if (!cr6.eq) goto loc_82E69F70;
loc_82E69F38:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r25,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r25.u8);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(48) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e69f38
	if (cr0.eq) goto loc_82E69F38;
loc_82E69F64:
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e69f70
	if (cr0.eq) goto loc_82E69F70;
	// li r27,2
	r27.s64 = 2;
loc_82E69F70:
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(88) );
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = rotl64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r24)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r24.u32 + 0, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82ca2c28
	return;
}

PPC_WEAK_FUNC(sub_82E69E30) {
	__imp__sub_82E69E30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E69F90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// li r3,500
	ctx.r3.s64 = 500;
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e69fc0
	if (cr0.eq) goto loc_82E69FC0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82e69aa8
	sub_82E69AA8(ctx, base);
	// b 0x82e69fc4
	goto loc_82E69FC4;
loc_82E69FC0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E69FC4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E69F90) {
	__imp__sub_82E69F90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E69FD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be8
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// stw r11,460(r31)
	PPC_STORE_U32(r31.u32 + 460, r11.u32);
	// stb r11,480(r31)
	PPC_STORE_U8(r31.u32 + 480, r11.u8);
	// lfs f31,3080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	f31.f64 = double(temp.f32);
	// stb r11,481(r31)
	PPC_STORE_U8(r31.u32 + 481, r11.u8);
	// lwz r10,20(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(20) );
	// lis r9,-31948
	ctx.r9.s64 = -2093744128;
	// addi r4,r9,3696
	ctx.r4.s64 = ctx.r9.s64 + 3696;
	// lfs f0,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	f0.f64 = double(temp.f32);
	// stfs f0,436(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 436, temp.u32);
	// lfs f0,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	f0.f64 = double(temp.f32);
	// stfs f0,440(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 440, temp.u32);
	// lfs f0,60(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	f0.f64 = double(temp.f32);
	// stfs f0,444(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 444, temp.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// stfs f31,468(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 468, temp.u32);
	// stb r11,432(r31)
	PPC_STORE_U8(r31.u32 + 432, r11.u8);
	// stw r11,404(r31)
	PPC_STORE_U32(r31.u32 + 404, r11.u32);
	// stw r11,416(r31)
	PPC_STORE_U32(r31.u32 + 416, r11.u32);
	// stb r8,12(r31)
	PPC_STORE_U8(r31.u32 + 12, ctx.r8.u8);
	// stw r11,492(r31)
	PPC_STORE_U32(r31.u32 + 492, r11.u32);
	// bl 0x822674d0
	sub_822674D0(ctx, base);
	// lis r29,-31948
	r29.s64 = -2093744128;
	// stw r3,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r4,r11,-8808
	ctx.r4.s64 = r11.s64 + -8808;
	// lwz r3,-720(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(-720) );
	// bl 0x82267be0
	sub_82267BE0(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// lwz r3,100(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(100) );
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82e6a094
	if (cr0.eq) goto loc_82E6A094;
	// lis r11,-31947
	r11.s64 = -2093678592;
	// addi r4,r11,-8020
	ctx.r4.s64 = r11.s64 + -8020;
	// bl 0x82e80228
	sub_82E80228(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r3.u32);
loc_82E6A094:
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r3,-720(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(-720) );
	// addi r4,r11,11360
	ctx.r4.s64 = r11.s64 + 11360;
	// bl 0x82267be0
	sub_82267BE0(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// bl 0x82260978
	sub_82260978(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,-30828
	ctx.r4.s64 = r11.s64 + -30828;
	// bl 0x82e79cb8
	sub_82E79CB8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-30860
	ctx.r4.s64 = r11.s64 + -30860;
	// stw r10,476(r31)
	PPC_STORE_U32(r31.u32 + 476, ctx.r10.u32);
	// bl 0x82e79c50
	sub_82E79C50(ctx, base);
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r3,472(r31)
	PPC_STORE_U32(r31.u32 + 472, ctx.r3.u32);
	// addi r4,r11,-16196
	ctx.r4.s64 = r11.s64 + -16196;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f0.f64 = double(temp.f32);
	// stfs f0,464(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 464, temp.u32);
	// lwz r3,20(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// bl 0x821e8238
	sub_821E8238(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e6a10c
	if (cr0.eq) goto loc_82E6A10C;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// b 0x82e6a124
	goto loc_82E6A124;
loc_82E6A10C:
	// lwz r11,-720(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(-720) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e6a120
	if (cr0.eq) goto loc_82E6A120;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// b 0x82e6a124
	goto loc_82E6A124;
loc_82E6A120:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = f31.f64;
loc_82E6A124:
	// li r11,-1
	r11.s64 = -1;
	// stfs f0,488(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 488, temp.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,416(r31)
	PPC_STORE_U32(r31.u32 + 416, r11.u32);
	// bl 0x82e82b18
	sub_82E82B18(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e6a1b4
	if (cr0.eq) goto loc_82E6A1B4;
	// lwz r11,416(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(416) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x82e6a160
	if (!cr6.eq) goto loc_82E6A160;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e69ce8
	sub_82E69CE8(ctx, base);
loc_82E6A160:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(40) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e6a1b4
	if (cr0.eq) goto loc_82E6A1B4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(44) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e6a1b4
	if (cr0.eq) goto loc_82E6A1B4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e6a1b8
	goto loc_82E6A1B8;
loc_82E6A1B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E6A1B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82E69FD8) {
	__imp__sub_82E69FD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6A1C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82e6a1f0
	if (!cr6.eq) goto loc_82E6A1F0;
loc_82E6A1E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e6a54c
	goto loc_82E6A54C;
loc_82E6A1F0:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r30,r11,-30692
	r30.s64 = r11.s64 + -30692;
	// bl 0x826b4b60
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e6a250
	if (!cr0.eq) goto loc_82E6A250;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r4,r11,11360
	ctx.r4.s64 = r11.s64 + 11360;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r3,-720(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-720) );
	// bl 0x82267be0
	sub_82267BE0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82e6a1e8
	if (cr0.eq) goto loc_82E6A1E8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b568c0
	sub_82B568C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e86b30
	sub_82E86B30(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,48(r29)
	PPC_STORE_U32(r29.u32 + 48, r11.u32);
	// b 0x82e6a54c
	goto loc_82E6A54C;
loc_82E6A250:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r30,r11,-30700
	r30.s64 = r11.s64 + -30700;
	// bl 0x826b4b60
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne 0x82e6a2d4
	if (!cr0.eq) goto loc_82E6A2D4;
	// bl 0x82b568c0
	sub_82B568C0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x82e6a540
	if (cr0.eq) goto loc_82E6A540;
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(28) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e6a1e8
	if (cr0.eq) goto loc_82E6A1E8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82e757b8
	sub_82E757B8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82e6a1e8
	if (cr0.eq) goto loc_82E6A1E8;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r3,28(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(28) );
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r5,r11,23468
	ctx.r5.s64 = r11.s64 + 23468;
	// bl 0x82e86a08
	sub_82E86A08(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(48) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E6A2CC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e6a54c
	goto loc_82E6A54C;
loc_82E6A2D4:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r30,r11,-30720
	r30.s64 = r11.s64 + -30720;
	// bl 0x826b4b60
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne 0x82e6a318
	if (!cr0.eq) goto loc_82E6A318;
	// bl 0x82b568c0
	sub_82B568C0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e6a540
	if (cr0.eq) goto loc_82E6A540;
	// bl 0x82ca3b30
	sub_82CA3B30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82e69bd8
	sub_82E69BD8(ctx, base);
	// b 0x82e6a2cc
	goto loc_82E6A2CC;
loc_82E6A318:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r30,r11,-30744
	r30.s64 = r11.s64 + -30744;
	// bl 0x826b4b60
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne 0x82e6a35c
	if (!cr0.eq) goto loc_82E6A35C;
	// bl 0x82b568c0
	sub_82B568C0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e6a540
	if (cr0.eq) goto loc_82E6A540;
	// bl 0x82ca3b30
	sub_82CA3B30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82e69ce8
	sub_82E69CE8(ctx, base);
	// b 0x82e6a2cc
	goto loc_82E6A2CC;
loc_82E6A35C:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r30,r11,-30760
	r30.s64 = r11.s64 + -30760;
	// bl 0x826b4b60
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne 0x82e6a3cc
	if (!cr0.eq) goto loc_82E6A3CC;
	// bl 0x82b568c0
	sub_82B568C0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e6a540
	if (cr0.eq) goto loc_82E6A540;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r11,-720(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-720) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e6a3a0
	if (cr0.eq) goto loc_82E6A3A0;
	// lfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f31.f64 = double(temp.f32);
	// b 0x82e6a3a8
	goto loc_82E6A3A8;
loc_82E6A3A0:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f31.f64 = double(temp.f32);
loc_82E6A3A8:
	// bl 0x82ca5860
	sub_82CA5860(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,3084(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x82e6a2cc
	if (!cr6.gt) goto loc_82E6A2CC;
	// stfs f0,16(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 16, temp.u32);
	// b 0x82e6a2cc
	goto loc_82E6A2CC;
loc_82E6A3CC:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r30,r11,-30780
	r30.s64 = r11.s64 + -30780;
	// bl 0x826b4b60
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne 0x82e6a40c
	if (!cr0.eq) goto loc_82E6A40C;
	// bl 0x82b568c0
	sub_82B568C0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e6a540
	if (cr0.eq) goto loc_82E6A540;
	// bl 0x82ca5860
	sub_82CA5860(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,468(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 468, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e6a54c
	goto loc_82E6A54C;
loc_82E6A40C:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r30,r11,-30796
	r30.s64 = r11.s64 + -30796;
	// bl 0x826b4b60
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne 0x82e6a4dc
	if (!cr0.eq) goto loc_82E6A4DC;
	// bl 0x82b568c0
	sub_82B568C0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82e6a540
	if (cr0.eq) goto loc_82E6A540;
	// lis r11,-32241
	r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-24228
	ctx.r4.s64 = r11.s64 + -24228;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82e6a4d0
	if (cr0.eq) goto loc_82E6A4D0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,3900
	ctx.r4.s64 = r11.s64 + 3900;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82e6a4d0
	if (cr0.eq) goto loc_82E6A4D0;
	// lis r11,-32241
	r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-32012
	ctx.r4.s64 = r11.s64 + -32012;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82e6a4d0
	if (cr0.eq) goto loc_82E6A4D0;
	// lis r11,-32241
	r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-24224
	ctx.r4.s64 = r11.s64 + -24224;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82e6a4c8
	if (cr0.eq) goto loc_82E6A4C8;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,5664
	ctx.r4.s64 = r11.s64 + 5664;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82e6a4c8
	if (cr0.eq) goto loc_82E6A4C8;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-10856
	ctx.r4.s64 = r11.s64 + -10856;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e6a1e8
	if (!cr0.eq) goto loc_82E6A1E8;
loc_82E6A4C8:
	// li r11,0
	r11.s64 = 0;
	// b 0x82e6a4d4
	goto loc_82E6A4D4;
loc_82E6A4D0:
	// li r11,1
	r11.s64 = 1;
loc_82E6A4D4:
	// stb r11,12(r29)
	PPC_STORE_U8(r29.u32 + 12, r11.u8);
	// b 0x82e6a2cc
	goto loc_82E6A2CC;
loc_82E6A4DC:
	// lis r11,-32244
	r11.s64 = -2113142784;
	// addi r30,r11,-14084
	r30.s64 = r11.s64 + -14084;
	// bl 0x826b4b60
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e6a540
	if (!cr0.eq) goto loc_82E6A540;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b568c0
	sub_82B568C0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e6a540
	if (cr0.eq) goto loc_82E6A540;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r11,-720(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-720) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e6a520
	if (cr0.eq) goto loc_82E6A520;
	// lfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f31.f64 = double(temp.f32);
	// b 0x82e6a528
	goto loc_82E6A528;
loc_82E6A520:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f31.f64 = double(temp.f32);
loc_82E6A528:
	// bl 0x82ca5860
	sub_82CA5860(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(f0.f64 * f31.f64));
	// bl 0x821e8038
	sub_821E8038(ctx, base);
	// b 0x82e6a2cc
	goto loc_82E6A2CC;
loc_82E6A540:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e9fbe8
	sub_82E9FBE8(ctx, base);
loc_82E6A54C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E6A1C8) {
	__imp__sub_82E6A1C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6A558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bdc
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// bne cr6,0x82e6a58c
	if (!cr6.eq) goto loc_82E6A58C;
loc_82E6A584:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e6a65c
	goto loc_82E6A65C;
loc_82E6A58C:
	// lbz r25,68(r31)
	r25.u64 = PPC_LOAD_U8(r31.u32 + 68);
	// cmplwi r25,0
	cr0.compare<uint32_t>(r25.u32, 0, xer);
	// bne 0x82e6a5e4
	if (!cr0.eq) goto loc_82E6A5E4;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e69a38
	sub_82E69A38(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e6a5e4
	if (cr0.eq) goto loc_82E6A5E4;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e69d88
	sub_82E69D88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x82e6a584
	if (cr6.eq) goto loc_82E6A584;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e69e30
	sub_82E69E30(ctx, base);
	// b 0x82e6a65c
	goto loc_82E6A65C;
loc_82E6A5E4:
	// cmpwi cr6,r26,1
	cr6.compare<int32_t>(r26.s32, 1, xer);
	// beq cr6,0x82e6a664
	if (cr6.eq) goto loc_82E6A664;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x82e6a5fc
	if (cr6.eq) goto loc_82E6A5FC;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// beq cr6,0x82e6a664
	if (cr6.eq) goto loc_82E6A664;
loc_82E6A5FC:
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(r26.s32, 2, xer);
	// bne cr6,0x82e6a584
	if (!cr6.eq) goto loc_82E6A584;
loc_82E6A604:
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d3ad0
	sub_822D3AD0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(52) );
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e6a604
	if (cr0.eq) goto loc_82E6A604;
loc_82E6A64C:
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r3,r11,0,30,30
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
loc_82E6A65C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	return;
loc_82E6A664:
	// bl 0x82260978
	sub_82260978(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// b 0x82e6a6b8
	goto loc_82E6A6B8;
loc_82E6A670:
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d3ad0
	sub_822D3AD0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(52) );
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82e6a64c
	if (!cr0.eq) goto loc_82E6A64C;
loc_82E6A6B8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82e7a138
	sub_82E7A138(ctx, base);
	// lbz r11,108(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 108);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82e6a670
	if (!cr6.eq) goto loc_82E6A670;
	// b 0x82e6a584
	goto loc_82E6A584;
}

PPC_WEAK_FUNC(sub_82E6A558) {
	__imp__sub_82E6A558(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6A6D0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82e82a28
	sub_82E82A28(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lis r8,-32025
	ctx.r8.s64 = -2098790400;
	// addi r10,r11,11796
	ctx.r10.s64 = r11.s64 + 11796;
	// lis r11,-32023
	r11.s64 = -2098659328;
	// addi r7,r8,-6136
	ctx.r7.s64 = ctx.r8.s64 + -6136;
	// addi r6,r11,16936
	ctx.r6.s64 = r11.s64 + 16936;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r8,r11,4284
	ctx.r8.s64 = r11.s64 + 4284;
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r6,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,20(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(20) );
	// stw r7,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r7.u32);
	// lwz r9,20(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(20) );
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r10,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r9.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
	// stw r8,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r8.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// stw r10,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r10.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// stb r11,108(r31)
	PPC_STORE_U8(r31.u32 + 108, r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6A6D0) {
	__imp__sub_82E6A6D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6A788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r3,r11,-18684
	ctx.r3.s64 = r11.s64 + -18684;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6A788) {
	__imp__sub_82E6A788(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6A798) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r11,r11,11796
	r11.s64 = r11.s64 + 11796;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x82e6a7d8
	if (cr0.eq) goto loc_82E6A7D8;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e6a7d8
	if (cr0.eq) goto loc_82E6A7D8;
	// bl 0x82e86dd0
	sub_82E86DD0(ctx, base);
loc_82E6A7D8:
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(68) );
	// lis r30,-31952
	r30.s64 = -2094006272;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e6a7f4
	if (cr0.eq) goto loc_82E6A7F4;
	// lwz r11,-9868(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E6A7F4:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(56) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e6a80c
	if (cr0.eq) goto loc_82E6A80C;
	// lwz r11,-9868(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E6A80C:
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-30984
	r11.s64 = r11.s64 + -30984;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// bl 0x82e82a48
	sub_82E82A48(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6A798) {
	__imp__sub_82E6A798(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6A838) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r30,0
	r30.s64 = 0;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// lfs f0,3800(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3800);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// stb r30,108(r31)
	PPC_STORE_U8(r31.u32 + 108, r30.u8);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82e6a888
	if (cr0.eq) goto loc_82E6A888;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e6a888
	if (cr0.eq) goto loc_82E6A888;
	// bl 0x82e86dd0
	sub_82E86DD0(ctx, base);
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
loc_82E6A888:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6A838) {
	__imp__sub_82E6A838(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6A8A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,52(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(52) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x82e6a8b4
	if (!cr6.eq) goto loc_82E6A8B4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82E6A8B4:
	// lwz r11,100(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(100) );
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6A8A0) {
	__imp__sub_82E6A8A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6A8C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(28) );
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e6a8dc
	if (!cr6.eq) goto loc_82E6A8DC;
	// li r11,0
	r11.s64 = 0;
loc_82E6A8DC:
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(36) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e6a8ec
	if (!cr6.eq) goto loc_82E6A8EC;
	// li r11,0
	r11.s64 = 0;
loc_82E6A8EC:
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(52) );
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x82e6a8fc
	if (!cr6.eq) goto loc_82E6A8FC;
	// li r11,0
	r11.s64 = 0;
loc_82E6A8FC:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6A8C8) {
	__imp__sub_82E6A8C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6A908) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,116(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(116) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6A908) {
	__imp__sub_82E6A908(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6A920) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,60(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(60) );
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// blt cr6,0x82e6a934
	if (cr6.lt) goto loc_82E6A934;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82E6A934:
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(56) );
	// mulli r10,r4,12
	ctx.r10.s64 = ctx.r4.s64 * 12;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6A920) {
	__imp__sub_82E6A920(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6A960) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6A960) {
	__imp__sub_82E6A960(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6A970) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bne cr6,0x82e6a98c
	if (!cr6.eq) goto loc_82E6A98C;
loc_82E6A984:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82E6A98C:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(72) );
	// lwz r9,76(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(76) );
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82e6a984
	if (!cr6.lt) goto loc_82E6A984;
	// lwz r9,68(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(68) );
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,1
	ctx.r3.s64 = 1;
	// stwx r4,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r4.u32);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(72) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,72(r11)
	PPC_STORE_U32(r11.u32 + 72, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6A970) {
	__imp__sub_82E6A970(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6A9C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,72(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(72) );
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// blt cr6,0x82e6a9d4
	if (cr6.lt) goto loc_82E6A9D4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82E6A9D4:
	// lwz r11,68(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(68) );
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6A9C0) {
	__imp__sub_82E6A9C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6A9F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbz r11,108(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 108);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e6aa1c
	if (cr0.eq) goto loc_82E6AA1C;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// addi r28,r11,52
	r28.s64 = r11.s64 + 52;
	// b 0x82e6aa24
	goto loc_82E6AA24;
loc_82E6AA1C:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// addi r28,r11,4
	r28.s64 = r11.s64 + 4;
loc_82E6AA24:
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(72) );
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e6aa70
	if (!cr6.gt) goto loc_82E6AA70;
	// li r30,0
	r30.s64 = 0;
loc_82E6AA38:
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(68) );
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e6aac8
	if (!cr0.eq) goto loc_82E6AAC8;
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(72) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82e6aa38
	if (cr6.lt) goto loc_82E6AA38;
loc_82E6AA70:
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(60) );
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e6aabc
	if (!cr6.gt) goto loc_82E6AABC;
	// li r30,0
	r30.s64 = 0;
loc_82E6AA84:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(56) );
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e6aac8
	if (!cr0.eq) goto loc_82E6AAC8;
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(60) );
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82e6aa84
	if (cr6.lt) goto loc_82E6AA84;
loc_82E6AABC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E6AAC0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
loc_82E6AAC8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e6aac0
	goto loc_82E6AAC0;
}

PPC_WEAK_FUNC(sub_82E6A9F0) {
	__imp__sub_82E6A9F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6AAD0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// stw r4,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r4.u32);
	// stw r5,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r5.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// beq 0x82e6ab14
	if (cr0.eq) goto loc_82E6AB14;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// bl 0x82e86dd0
	sub_82E86DD0(ctx, base);
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
loc_82E6AB14:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6AAD0) {
	__imp__sub_82E6AAD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6AB30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// li r3,120
	ctx.r3.s64 = 120;
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e6ab60
	if (cr0.eq) goto loc_82E6AB60;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82e6a6d0
	sub_82E6A6D0(ctx, base);
	// b 0x82e6ab64
	goto loc_82E6AB64;
loc_82E6AB60:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E6AB64:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6AB30) {
	__imp__sub_82E6AB30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6AB78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82e6a798
	sub_82E6A798(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e6abb4
	if (cr0.eq) goto loc_82E6ABB4;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,-9868(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E6ABB4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6AB78) {
	__imp__sub_82E6AB78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6ABD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x82ca2be8
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82269520
	sub_82269520(ctx, base);
	// li r28,1
	r28.s64 = 1;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stb r28,44(r31)
	PPC_STORE_U8(r31.u32 + 44, r28.u8);
	// bne cr6,0x82e6ac24
	if (!cr6.eq) goto loc_82E6AC24;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(52) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e6ac24
	if (!cr0.eq) goto loc_82E6AC24;
loc_82E6AC1C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e6ae68
	goto loc_82E6AE68;
loc_82E6AC24:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e6ae64
	if (cr6.eq) goto loc_82E6AE64;
	// li r29,0
	r29.s64 = 0;
	// mr r30,r29
	r30.u64 = r29.u64;
	// bl 0x82260978
	sub_82260978(ctx, base);
	// lbz r11,108(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 108);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82e6ac94
	if (!cr0.eq) goto loc_82E6AC94;
	// bl 0x82260978
	sub_82260978(ctx, base);
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 80);
	f0.f64 = double(temp.f32);
	// lfs f31,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	f31.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fsubs f13,f31,f0
	ctx.f13.f64 = static_cast<float>(f31.f64 - f0.f64);
	// lfs f0,3056(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3056);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x82e6ac94
	if (!cr6.gt) goto loc_82E6AC94;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(56) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e6ac90
	if (!cr0.eq) goto loc_82E6AC90;
	// mr r30,r28
	r30.u64 = r28.u64;
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// b 0x82e6ac94
	goto loc_82E6AC94;
loc_82E6AC90:
	// stfs f31,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
loc_82E6AC94:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e6ae60
	if (cr6.eq) goto loc_82E6AE60;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,-720(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-720) );
	// lfs f31,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	f31.f64 = double(temp.f32);
	// lfs f30,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	f30.f64 = double(temp.f32);
	// lfs f1,3080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	ctx.f1.f64 = double(temp.f32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e6accc
	if (cr0.eq) goto loc_82E6ACCC;
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82e6acd0
	goto loc_82E6ACD0;
loc_82E6ACCC:
	// fmr f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f1.f64;
loc_82E6ACD0:
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e6acdc
	if (cr0.eq) goto loc_82E6ACDC;
	// lfs f1,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
loc_82E6ACDC:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lfs f0,2708(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2708);
	f0.f64 = double(temp.f32);
	// lwz r11,48(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(48) );
	// fmuls f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 * f0.f64));
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r10,r10,-30984
	ctx.r10.s64 = ctx.r10.s64 + -30984;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,108(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82E6AD30:
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82e6ad30
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E6AD30;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r11,-1
	r11.s64 = -1;
	// stb r29,184(r1)
	PPC_STORE_U8(ctx.r1.u32 + 184, r29.u8);
	// addi r10,r10,4284
	ctx.r10.s64 = ctx.r10.s64 + 4284;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x821ae8c0
	sub_821AE8C0(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// lfs f1,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(44) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(36) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e6adb8
	if (cr0.eq) goto loc_82E6ADB8;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E6ADB8:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(64) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e6add8
	if (cr0.eq) goto loc_82E6ADD8;
	// stb r28,108(r31)
	PPC_STORE_U8(r31.u32 + 108, r28.u8);
loc_82E6ADD8:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(48) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(72) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x82e6ac1c
	if (cr6.eq) goto loc_82E6AC1C;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e6ae64
	if (cr0.eq) goto loc_82E6AE64;
	// lbz r11,108(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 108);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e6ae40
	if (cr0.eq) goto loc_82E6AE40;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r4,20(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// lfs f1,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	ctx.f1.f64 = double(temp.f32);
	// addi r5,r4,52
	ctx.r5.s64 = ctx.r4.s64 + 52;
	// b 0x82e6ae58
	goto loc_82E6AE58;
loc_82E6AE40:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(84) );
	// addi r5,r11,4
	ctx.r5.s64 = r11.s64 + 4;
	// lfs f1,3084(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,20(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(20) );
loc_82E6AE58:
	// bl 0x822a8fd8
	sub_822A8FD8(ctx, base);
	// b 0x82e6ae64
	goto loc_82E6AE64;
loc_82E6AE60:
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
loc_82E6AE64:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E6AE68:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82E6ABD0) {
	__imp__sub_82E6ABD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6AE78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// clrlwi. r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e6aea4
	if (!cr0.eq) goto loc_82E6AEA4;
	// lwz r11,64(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(64) );
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x82e6af38
	if (!cr6.gt) goto loc_82E6AF38;
loc_82E6AEA4:
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(56) );
	// stw r4,64(r30)
	PPC_STORE_U32(r30.u32 + 64, ctx.r4.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e6aec4
	if (cr0.eq) goto loc_82E6AEC4;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// lwz r11,-9868(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E6AEC4:
	// lwz r31,64(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + int32_t(64) );
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x82e6af28
	if (cr0.eq) goto loc_82E6AF28;
	// lis r11,5461
	r11.s64 = 357892096;
	// mulli r3,r31,12
	ctx.r3.s64 = r31.s64 * 12;
	// ori r11,r11,21845
	r11.u64 = r11.u64 | 21845;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// ble cr6,0x82e6aee8
	if (!cr6.gt) goto loc_82E6AEE8;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82E6AEE8:
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e6af28
	if (cr0.eq) goto loc_82E6AF28;
	// addic. r10,r31,-1
	xer.ca = r31.u32 > 0;
	ctx.r10.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt 0x82e6af20
	if (cr0.lt) goto loc_82E6AF20;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r3,8
	r11.s64 = ctx.r3.s64 + 8;
	// lfs f0,3084(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3084);
	f0.f64 = double(temp.f32);
loc_82E6AF08:
	// stfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + -8, temp.u32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stfs f0,-4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + -4, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// bge 0x82e6af08
	if (!cr0.lt) goto loc_82E6AF08;
loc_82E6AF20:
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x82e6af2c
	goto loc_82E6AF2C;
loc_82E6AF28:
	// li r11,0
	r11.s64 = 0;
loc_82E6AF2C:
	// stw r11,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r11.u32);
loc_82E6AF38:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6AE78) {
	__imp__sub_82E6AE78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6AF50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// clrlwi. r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e6af7c
	if (!cr0.eq) goto loc_82E6AF7C;
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(76) );
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x82e6afd8
	if (!cr6.gt) goto loc_82E6AFD8;
loc_82E6AF7C:
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(68) );
	// stw r4,76(r31)
	PPC_STORE_U32(r31.u32 + 76, ctx.r4.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e6af9c
	if (cr0.eq) goto loc_82E6AF9C;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// lwz r11,-9868(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E6AF9C:
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(76) );
	// li r30,0
	r30.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82e6afb4
	if (!cr0.eq) goto loc_82E6AFB4;
	// stw r30,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r30.u32);
	// b 0x82e6afd4
	goto loc_82E6AFD4;
loc_82E6AFB4:
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82e6afcc
	if (!cr6.gt) goto loc_82E6AFCC;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82E6AFCC:
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// stw r3,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r3.u32);
loc_82E6AFD4:
	// stw r30,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r30.u32);
loc_82E6AFD8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6AF50) {
	__imp__sub_82E6AF50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6AFF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be4
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82260978
	sub_82260978(ctx, base);
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 80);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = static_cast<float>(ctx.f13.f64 - f0.f64);
	// lfs f0,3056(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3056);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x82e6b338
	if (cr6.lt) goto loc_82E6B338;
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e6b29c
	if (!cr6.eq) goto loc_82E6B29C;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(52) );
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// bl 0x82e86d58
	sub_82E86D58(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e6b29c
	if (cr0.eq) goto loc_82E6B29C;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// stb r29,108(r31)
	PPC_STORE_U8(r31.u32 + 108, r29.u8);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-30984
	r11.s64 = r11.s64 + -30984;
	// stb r29,84(r3)
	PPC_STORE_U8(ctx.r3.u32 + 84, r29.u8);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f0.f64 = double(temp.f32);
	// stfs f0,116(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82E6B080:
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82e6b080
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E6B080;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stb r29,200(r1)
	PPC_STORE_U8(ctx.r1.u32 + 200, r29.u8);
	// li r30,-1
	r30.s64 = -1;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// addi r11,r11,4284
	r11.s64 = r11.s64 + 4284;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x821ae8c0
	sub_821AE8C0(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// addi r4,r11,52
	ctx.r4.s64 = r11.s64 + 52;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82e6b1d0
	if (!cr6.eq) goto loc_82E6B1D0;
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e6b108
	if (cr6.eq) goto loc_82E6B108;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(100) );
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82e6b108
	if (!cr6.eq) goto loc_82E6B108;
	// mr r30,r11
	r30.u64 = r11.u64;
	// b 0x82e6b1c8
	goto loc_82E6B1C8;
loc_82E6B108:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e6b1a8
	if (cr0.eq) goto loc_82E6B1A8;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(100) );
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82e6b1a8
	if (!cr6.eq) goto loc_82E6B1A8;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82e6b1a8
	if (!cr6.eq) goto loc_82E6B1A8;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(84) );
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(100) );
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x82e6b1a8
	if (cr6.eq) goto loc_82E6B1A8;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82e6b1a8
	if (!cr6.lt) goto loc_82E6B1A8;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// mulli r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 * 20;
	// add r30,r11,r10
	r30.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e6b1a8
	if (cr6.eq) goto loc_82E6B1A8;
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// bne 0x82e6b214
	if (!cr0.eq) goto loc_82E6B214;
loc_82E6B1A8:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// lwz r5,104(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(104) );
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(100) );
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// addi r3,r11,52
	ctx.r3.s64 = r11.s64 + 52;
	// bl 0x82e6d368
	sub_82E6D368(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82E6B1C8:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82e6b214
	if (!cr6.eq) goto loc_82E6B214;
loc_82E6B1D0:
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// bl 0x82e86dd0
	sub_82E86DD0(ctx, base);
	// stw r29,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r29.u32);
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// bl 0x82260978
	sub_82260978(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lfs f0,76(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	f0.f64 = double(temp.f32);
	// lwz r30,116(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + int32_t(116) );
	// stfs f0,80(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// lwz r31,20(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// bl 0x82260978
	sub_82260978(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x82e7a558
	sub_82E7A558(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e6b33c
	goto loc_82E6B33C;
loc_82E6B214:
	// lwz r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(116) );
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// bl 0x82c79700
	sub_82C79700(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// bl 0x82e92370
	sub_82E92370(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(100) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// stw r10,80(r11)
	PPC_STORE_U32(r11.u32 + 80, ctx.r10.u32);
	// stw r9,72(r11)
	PPC_STORE_U32(r11.u32 + 72, ctx.r9.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// stw r10,76(r11)
	PPC_STORE_U32(r11.u32 + 76, ctx.r10.u32);
	// stw r9,68(r11)
	PPC_STORE_U32(r11.u32 + 68, ctx.r9.u32);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// bl 0x82e6e0e8
	sub_82E6E0E8(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r11,r11,-30984
	r11.s64 = r11.s64 + -30984;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
loc_82E6B29C:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e6b31c
	if (cr0.eq) goto loc_82E6B31C;
	// bl 0x82e6e3a8
	sub_82E6E3A8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82e6b338
	if (!cr6.eq) goto loc_82E6B338;
	// addi r30,r31,84
	r30.s64 = r31.s64 + 84;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82e6e0f0
	sub_82E6E0F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e6b2d4
	if (!cr0.eq) goto loc_82E6B2D4;
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
loc_82E6B2D4:
	// bl 0x82260978
	sub_82260978(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// lfs f0,76(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 76);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// bl 0x82e86dd0
	sub_82E86DD0(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r28,116(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + int32_t(116) );
	// lwz r27,20(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// bl 0x82260978
	sub_82260978(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x82e7a558
	sub_82E7A558(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// stw r29,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// b 0x82e6b338
	goto loc_82E6B338;
loc_82E6B31C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r31,116(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + int32_t(116) );
	// lwz r30,20(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// bl 0x82260978
	sub_82260978(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x82e7a720
	sub_82E7A720(ctx, base);
loc_82E6B338:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E6B33C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82E6AFF0) {
	__imp__sub_82E6AFF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6B348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,84(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(84) );
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e6b3cc
	if (cr0.eq) goto loc_82E6B3CC;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r10,r10,-30984
	ctx.r10.s64 = ctx.r10.s64 + -30984;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82E6B39C:
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82e6b39c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E6B39C;
	// addi r4,r4,88
	ctx.r4.s64 = ctx.r4.s64 + 88;
	// stb r8,168(r1)
	PPC_STORE_U8(ctx.r1.u32 + 168, ctx.r8.u8);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// bl 0x821ae8c0
	sub_821AE8C0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// b 0x82e6b418
	goto loc_82E6B418;
loc_82E6B3CC:
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lwz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(8) );
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,-30984
	r11.s64 = r11.s64 + -30984;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r11.u32);
	// lwz r11,20(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(20) );
	// lfs f0,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	f0.f64 = double(temp.f32);
	// stfs f0,180(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	f0.f64 = double(temp.f32);
	// stfs f0,184(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lfs f0,60(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 60);
	f0.f64 = double(temp.f32);
	// stfs f0,188(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82E6B404:
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82e6b404
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E6B404;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stb r8,264(r1)
	PPC_STORE_U8(ctx.r1.u32 + 264, ctx.r8.u8);
loc_82E6B418:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821acbb8
	sub_821ACBB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6B348) {
	__imp__sub_82E6B348(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6B438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r4,r11,3696
	ctx.r4.s64 = r11.s64 + 3696;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// bl 0x822674d0
	sub_822674D0(ctx, base);
	// lis r30,-31948
	r30.s64 = -2093744128;
	// stw r3,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r4,r11,11360
	ctx.r4.s64 = r11.s64 + 11360;
	// lwz r3,-720(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-720) );
	// bl 0x82267be0
	sub_82267BE0(ctx, base);
	// lis r11,-31947
	r11.s64 = -2093678592;
	// stw r3,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// lwz r3,-720(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-720) );
	// addi r4,r11,-7468
	ctx.r4.s64 = r11.s64 + -7468;
	// bl 0x82267be0
	sub_82267BE0(ctx, base);
	// lis r11,-31948
	r11.s64 = -2093744128;
	// stw r3,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r3.u32);
	// addi r4,r11,-8808
	ctx.r4.s64 = r11.s64 + -8808;
	// lwz r3,-720(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-720) );
	// bl 0x82267be0
	sub_82267BE0(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// stw r3,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// beq cr6,0x82e6b5b8
	if (cr6.eq) goto loc_82E6B5B8;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e6b5b8
	if (cr6.eq) goto loc_82E6B5B8;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lis r11,-31948
	r11.s64 = -2093744128;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-16196
	ctx.r4.s64 = r11.s64 + -16196;
	// lwz r3,20(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// bl 0x821e8238
	sub_821E8238(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e6b4e8
	if (cr0.eq) goto loc_82E6B4E8;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// b 0x82e6b504
	goto loc_82E6B504;
loc_82E6B4E8:
	// lwz r11,-720(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-720) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e6b4fc
	if (cr0.eq) goto loc_82E6B4FC;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// b 0x82e6b504
	goto loc_82E6B504;
loc_82E6B4FC:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f0.f64 = double(temp.f32);
loc_82E6B504:
	// li r11,-1
	r11.s64 = -1;
	// stfs f0,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
	// bl 0x82e82b18
	sub_82E82B18(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e6b5b8
	if (cr0.eq) goto loc_82E6B5B8;
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(72) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x82e6b540
	if (!cr6.eq) goto loc_82E6B540;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e6af50
	sub_82E6AF50(ctx, base);
loc_82E6B540:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r30,r11,-30660
	r30.s64 = r11.s64 + -30660;
	// bl 0x82260978
	sub_82260978(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82e79c50
	sub_82E79C50(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(40) );
	// stw r10,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r10.u32);
	// stw r9,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r9.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e6b5b8
	if (cr0.eq) goto loc_82E6B5B8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(44) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e6b5b8
	if (cr0.eq) goto loc_82E6B5B8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e6b5bc
	goto loc_82E6B5BC;
loc_82E6B5B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E6B5BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E6B438) {
	__imp__sub_82E6B438(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6B5C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82e6b5f0
	if (!cr6.eq) goto loc_82E6B5F0;
loc_82E6B5E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e6b7cc
	goto loc_82E6B7CC;
loc_82E6B5F0:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r30,r11,-30692
	r30.s64 = r11.s64 + -30692;
	// bl 0x826b4b60
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e6b650
	if (!cr0.eq) goto loc_82E6B650;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r4,r11,11360
	ctx.r4.s64 = r11.s64 + 11360;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r3,-720(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-720) );
	// bl 0x82267be0
	sub_82267BE0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82e6b5e8
	if (cr0.eq) goto loc_82E6B5E8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b568c0
	sub_82B568C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e86b30
	sub_82E86B30(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,52(r29)
	PPC_STORE_U32(r29.u32 + 52, r11.u32);
	// b 0x82e6b7cc
	goto loc_82E6B7CC;
loc_82E6B650:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r30,r11,-30700
	r30.s64 = r11.s64 + -30700;
	// bl 0x826b4b60
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne 0x82e6b6d4
	if (!cr0.eq) goto loc_82E6B6D4;
	// bl 0x82b568c0
	sub_82B568C0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x82e6b7c0
	if (cr0.eq) goto loc_82E6B7C0;
	// lwz r11,36(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(36) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e6b5e8
	if (cr0.eq) goto loc_82E6B5E8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82e757b8
	sub_82E757B8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82e6b5e8
	if (cr0.eq) goto loc_82E6B5E8;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r3,36(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(36) );
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r5,r11,23468
	ctx.r5.s64 = r11.s64 + 23468;
	// bl 0x82e86a08
	sub_82E86A08(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(48) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E6B6CC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e6b7cc
	goto loc_82E6B7CC;
loc_82E6B6D4:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r30,r11,-30720
	r30.s64 = r11.s64 + -30720;
	// bl 0x826b4b60
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne 0x82e6b718
	if (!cr0.eq) goto loc_82E6B718;
	// bl 0x82b568c0
	sub_82B568C0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e6b7c0
	if (cr0.eq) goto loc_82E6B7C0;
	// bl 0x82ca3b30
	sub_82CA3B30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82e6ae78
	sub_82E6AE78(ctx, base);
	// b 0x82e6b6cc
	goto loc_82E6B6CC;
loc_82E6B718:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r30,r11,-30744
	r30.s64 = r11.s64 + -30744;
	// bl 0x826b4b60
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne 0x82e6b75c
	if (!cr0.eq) goto loc_82E6B75C;
	// bl 0x82b568c0
	sub_82B568C0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e6b7c0
	if (cr0.eq) goto loc_82E6B7C0;
	// bl 0x82ca3b30
	sub_82CA3B30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82e6af50
	sub_82E6AF50(ctx, base);
	// b 0x82e6b6cc
	goto loc_82E6B6CC;
loc_82E6B75C:
	// lis r11,-32244
	r11.s64 = -2113142784;
	// addi r30,r11,-14084
	r30.s64 = r11.s64 + -14084;
	// bl 0x826b4b60
	sub_826B4B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e6b7c0
	if (!cr0.eq) goto loc_82E6B7C0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b568c0
	sub_82B568C0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e6b7c0
	if (cr0.eq) goto loc_82E6B7C0;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r11,-720(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-720) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e6b7a0
	if (cr0.eq) goto loc_82E6B7A0;
	// lfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f31.f64 = double(temp.f32);
	// b 0x82e6b7a8
	goto loc_82E6B7A8;
loc_82E6B7A0:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f31.f64 = double(temp.f32);
loc_82E6B7A8:
	// bl 0x82ca5860
	sub_82CA5860(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(f0.f64 * f31.f64));
	// bl 0x821e81b8
	sub_821E81B8(ctx, base);
	// b 0x82e6b6cc
	goto loc_82E6B6CC;
loc_82E6B7C0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e9fbe8
	sub_82E9FBE8(ctx, base);
loc_82E6B7CC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E6B5C8) {
	__imp__sub_82E6B5C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6B7D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r3,r11,-18408
	ctx.r3.s64 = r11.s64 + -18408;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6B7D8) {
	__imp__sub_82E6B7D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6B7E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r4,r11,3696
	ctx.r4.s64 = r11.s64 + 3696;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// bl 0x822674d0
	sub_822674D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// bne 0x82e6b824
	if (!cr0.eq) goto loc_82E6B824;
loc_82E6B81C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e6b910
	goto loc_82E6B910;
loc_82E6B824:
	// lis r30,-31948
	r30.s64 = -2093744128;
	// lis r11,-31947
	r11.s64 = -2093678592;
	// addi r4,r11,-7468
	ctx.r4.s64 = r11.s64 + -7468;
	// lwz r3,-720(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-720) );
	// bl 0x82267be0
	sub_82267BE0(ctx, base);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// li r11,0
	r11.s64 = 0;
	// stb r10,144(r31)
	PPC_STORE_U8(r31.u32 + 144, ctx.r10.u8);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// lwz r11,-720(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-720) );
	// lfs f31,3080(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	f31.f64 = double(temp.f32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e6b86c
	if (cr0.eq) goto loc_82E6B86C;
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82e6b870
	goto loc_82E6B870;
loc_82E6B86C:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f31.f64;
loc_82E6B870:
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-16196
	ctx.r4.s64 = r11.s64 + -16196;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2844(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2844);
	f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,148(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 148, temp.u32);
	// stfs f13,140(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 140, temp.u32);
	// lwz r3,20(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// bl 0x821e8238
	sub_821E8238(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e6b8ac
	if (cr0.eq) goto loc_82E6B8AC;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// b 0x82e6b8c4
	goto loc_82E6B8C4;
loc_82E6B8AC:
	// lwz r11,-720(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-720) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e6b8c0
	if (cr0.eq) goto loc_82E6B8C0;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// b 0x82e6b8c4
	goto loc_82E6B8C4;
loc_82E6B8C0:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = f31.f64;
loc_82E6B8C4:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stfs f0,136(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 136, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e82b18
	sub_82E82B18(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e6b81c
	if (cr0.eq) goto loc_82E6B81C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(40) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e6b81c
	if (cr0.eq) goto loc_82E6B81C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E6B910:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E6B7E8) {
	__imp__sub_82E6B7E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6B920) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// addi r4,r31,120
	ctx.r4.s64 = r31.s64 + 120;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// lfs f0,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f0,60(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 60);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stb r30,88(r3)
	PPC_STORE_U8(ctx.r3.u32 + 88, r30.u8);
	// stw r30,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r30.u32);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// bl 0x821ae8c0
	sub_821AE8C0(ctx, base);
	// stb r30,132(r31)
	PPC_STORE_U8(r31.u32 + 132, r30.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6B920) {
	__imp__sub_82E6B920(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6B998) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// stw r5,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r5.u32);
	// beq cr6,0x82e6b9b8
	if (cr6.eq) goto loc_82E6B9B8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(44) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_82E6B9B8:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// addi r11,r3,28
	r11.s64 = ctx.r3.s64 + 28;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r3,120
	ctx.r4.s64 = ctx.r3.s64 + 120;
	// li r8,-1
	ctx.r8.s64 = -1;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// lfs f0,52(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lfs f0,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// lfs f0,60(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// stb r9,88(r11)
	PPC_STORE_U8(r11.u32 + 88, ctx.r9.u8);
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// stw r8,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// b 0x821ae8c0
	sub_821AE8C0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82E6B998) {
	__imp__sub_82E6B998(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6BA00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82e82a28
	sub_82E82A28(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r31,28
	r11.s64 = r31.s64 + 28;
	// addi r9,r10,10584
	ctx.r9.s64 = ctx.r10.s64 + 10584;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// lfs f0,3084(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	f0.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r8,r10,-30984
	ctx.r8.s64 = ctx.r10.s64 + -30984;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// addi r8,r11,16
	ctx.r8.s64 = r11.s64 + 16;
	// stfs f0,12(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82E6BA60:
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x82e6ba60
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E6BA60;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stb r10,88(r11)
	PPC_STORE_U8(r11.u32 + 88, ctx.r10.u8);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r10,124(r31)
	PPC_STORE_U32(r31.u32 + 124, ctx.r10.u32);
	// addi r9,r9,4284
	ctx.r9.s64 = ctx.r9.s64 + 4284;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r8,128(r31)
	PPC_STORE_U32(r31.u32 + 128, ctx.r8.u32);
	// stw r9,120(r31)
	PPC_STORE_U32(r31.u32 + 120, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6BA00) {
	__imp__sub_82E6BA00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6BAA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,10584
	ctx.r10.s64 = r11.s64 + 10584;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r11,r11,-30984
	r11.s64 = r11.s64 + -30984;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// bl 0x82e82a48
	sub_82E82A48(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e6baf8
	if (cr0.eq) goto loc_82E6BAF8;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,-9868(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E6BAF8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6BAA0) {
	__imp__sub_82E6BAA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6BB18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be8
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82e6bb40
	if (!cr6.eq) goto loc_82E6BB40;
loc_82E6BB38:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e6bd44
	goto loc_82E6BD44;
loc_82E6BB40:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826b4b60
	sub_826B4B60(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,-30700
	ctx.r4.s64 = r11.s64 + -30700;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e6bbcc
	if (!cr0.eq) goto loc_82E6BBCC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b568c0
	sub_82B568C0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x82e6bd38
	if (cr0.eq) goto loc_82E6BD38;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r4,r11,11360
	ctx.r4.s64 = r11.s64 + 11360;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r3,-720(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-720) );
	// bl 0x82267be0
	sub_82267BE0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82e6bb38
	if (cr0.eq) goto loc_82E6BB38;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e757b8
	sub_82E757B8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82e6bb38
	if (cr0.eq) goto loc_82E6BB38;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r11,23468
	ctx.r5.s64 = r11.s64 + 23468;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e86a08
	sub_82E86A08(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82e6b998
	sub_82E6B998(ctx, base);
loc_82E6BBC4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e6bd44
	goto loc_82E6BD44;
loc_82E6BBCC:
	// lis r11,-32244
	r11.s64 = -2113142784;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-14084
	ctx.r4.s64 = r11.s64 + -14084;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e6bc2c
	if (!cr0.eq) goto loc_82E6BC2C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b568c0
	sub_82B568C0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e6bbc4
	if (cr0.eq) goto loc_82E6BBC4;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r11,-720(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-720) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e6bc0c
	if (cr0.eq) goto loc_82E6BC0C;
	// lfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f31.f64 = double(temp.f32);
	// b 0x82e6bc14
	goto loc_82E6BC14;
loc_82E6BC0C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f31.f64 = double(temp.f32);
loc_82E6BC14:
	// bl 0x82ca5860
	sub_82CA5860(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(f0.f64 * f31.f64));
	// bl 0x821e8308
	sub_821E8308(ctx, base);
	// b 0x82e6bbc4
	goto loc_82E6BBC4;
loc_82E6BC2C:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-30576
	ctx.r4.s64 = r11.s64 + -30576;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e6bca0
	if (!cr0.eq) goto loc_82E6BCA0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b568c0
	sub_82B568C0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e6bbc4
	if (cr0.eq) goto loc_82E6BBC4;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r11,-720(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-720) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e6bc6c
	if (cr0.eq) goto loc_82E6BC6C;
	// lfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f31.f64 = double(temp.f32);
	// b 0x82e6bc74
	goto loc_82E6BC74;
loc_82E6BC6C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f31.f64 = double(temp.f32);
loc_82E6BC74:
	// bl 0x82ca5860
	sub_82CA5860(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,3084(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x82e6bc98
	if (!cr6.lt) goto loc_82E6BC98;
	// stfs f13,140(r28)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r28.u32 + 140, temp.u32);
	// b 0x82e6bbc4
	goto loc_82E6BBC4;
loc_82E6BC98:
	// stfs f0,140(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r28.u32 + 140, temp.u32);
	// b 0x82e6bbc4
	goto loc_82E6BBC4;
loc_82E6BCA0:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-30596
	ctx.r4.s64 = r11.s64 + -30596;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e6bcd4
	if (!cr0.eq) goto loc_82E6BCD4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b568c0
	sub_82B568C0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e6bbc4
	if (cr0.eq) goto loc_82E6BBC4;
	// bl 0x82ca3b30
	sub_82CA3B30(ctx, base);
	// stb r3,144(r28)
	PPC_STORE_U8(r28.u32 + 144, ctx.r3.u8);
	// b 0x82e6bbc4
	goto loc_82E6BBC4;
loc_82E6BCD4:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-30612
	ctx.r4.s64 = r11.s64 + -30612;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e6bd38
	if (!cr0.eq) goto loc_82E6BD38;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b568c0
	sub_82B568C0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e6bbc4
	if (cr0.eq) goto loc_82E6BBC4;
	// bl 0x82ca5860
	sub_82CA5860(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,3084(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x82e6bbc4
	if (cr6.lt) goto loc_82E6BBC4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,2628(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2628);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x82e6bbc4
	if (cr6.gt) goto loc_82E6BBC4;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// lfs f13,476(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 476);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f0,148(r28)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r28.u32 + 148, temp.u32);
	// b 0x82e6bbc4
	goto loc_82E6BBC4;
loc_82E6BD38:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82e9fbe8
	sub_82E9FBE8(ctx, base);
loc_82E6BD44:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82E6BB18) {
	__imp__sub_82E6BB18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6BD50) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r12,r1,-16
	r12.s64 = ctx.r1.s64 + -16;
	// bl 0x82ca7504
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8227ef68
	sub_8227EF68(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8227ef68
	sub_8227EF68(ctx, base);
	// lfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f31.f64 = double(temp.f32);
	// lfs f30,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f30.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmuls f12,f31,f30
	ctx.f12.f64 = double(float(f31.f64 * f30.f64));
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f29,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	f29.f64 = double(temp.f32);
	// lfs f28,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	f28.f64 = double(temp.f32);
	// fmadds f0,f0,f13,f12
	f0.f64 = double(std::fma(float(f0.f64), float(ctx.f13.f64), float(ctx.f12.f64)));
	// fmadds f1,f29,f28,f0
	ctx.f1.f64 = double(std::fma(float(f29.f64), float(f28.f64), float(f0.f64)));
	// lfs f0,3080(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f27,3800(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3800);
	f27.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// ble cr6,0x82e6bdc8
	if (!cr6.gt) goto loc_82E6BDC8;
	// fmr f1,f0
	ctx.f1.f64 = f0.f64;
	// b 0x82e6bdd4
	goto loc_82E6BDD4;
loc_82E6BDC8:
	// fcmpu cr6,f1,f27
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, f27.f64);
	// bge cr6,0x82e6bdd4
	if (!cr6.lt) goto loc_82E6BDD4;
	// fmr f1,f27
	ctx.f1.f64 = f27.f64;
loc_82E6BDD4:
	// bl 0x82260900
	sub_82260900(ctx, base);
	// fmuls f0,f30,f28
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f30.f64 * f28.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// frsp f1,f1
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// lfs f13,3084(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f0,f29,f31,f0
	f0.f64 = double(std::fma(float(f29.f64), float(f31.f64), -float(f0.f64)));
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x82e6be0c
	if (!cr6.lt) goto loc_82E6BE0C;
	// fabs f13,f0
	ctx.f13.u64 = f0.u64 & 0x7FFFFFFFFFFFFFFF;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2752(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2752);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x82e6be0c
	if (!cr6.gt) goto loc_82E6BE0C;
	// fmuls f1,f1,f27
	ctx.f1.f64 = double(float(ctx.f1.f64 * f27.f64));
loc_82E6BE0C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-16
	r12.s64 = ctx.r1.s64 + -16;
	// bl 0x82ca7550
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6BD50) {
	__imp__sub_82E6BD50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6BE28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// li r3,152
	ctx.r3.s64 = 152;
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e6be58
	if (cr0.eq) goto loc_82E6BE58;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82e6ba00
	sub_82E6BA00(ctx, base);
	// b 0x82e6be5c
	goto loc_82E6BE5C;
loc_82E6BE58:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E6BE5C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6BE28) {
	__imp__sub_82E6BE28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6BE70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bcc
	// stfd f29,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, f29.u64);
	// stfd f30,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, f30.u64);
	// stfd f31,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, f31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r21,-1
	r21.s64 = -1;
	// li r22,0
	r22.s64 = 0;
	// mr r23,r21
	r23.u64 = r21.u64;
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(24) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e6c0f4
	if (cr0.eq) goto loc_82E6C0F4;
	// lbz r11,144(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 144);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e6c0f4
	if (cr0.eq) goto loc_82E6C0F4;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f1,140(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 140);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f0,60(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 60);
	f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82e91098
	sub_82E91098(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,1
	cr6.compare<uint32_t>(r26.u32, 1, xer);
	// ble cr6,0x82e6c0f4
	if (!cr6.gt) goto loc_82E6C0F4;
	// lbz r10,144(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 144);
	// cmplw cr6,r26,r10
	cr6.compare<uint32_t>(r26.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82e6befc
	if (cr6.gt) goto loc_82E6BEFC;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_82E6BEFC:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// mr r27,r22
	r27.u64 = r22.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lfs f29,2624(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2624);
	f29.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f30,3084(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f30.f64 = double(temp.f32);
	// lwz r11,20(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(20) );
	// stfs f30,116(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f30,80(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f30,84(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f30,88(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,76(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 76);
	f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f0,84(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 84);
	f0.f64 = double(temp.f32);
	// stfs f0,120(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// beq cr6,0x82e6c078
	if (cr6.eq) goto loc_82E6C078;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// addi r25,r11,-30984
	r25.s64 = r11.s64 + -30984;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r28,r11,-30984
	r28.s64 = r11.s64 + -30984;
loc_82E6BF54:
	// bl 0x82ca3b80
	sub_82CA3B80(ctx, base);
	// divwu r10,r3,r26
	ctx.r10.u32 = ctx.r3.u32 / r26.u32;
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(92) );
	// twllei r26,0
	// mullw r10,r10,r26
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r26.s32);
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(20) );
	// subf r10,r10,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r10.s64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r9
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(r30.s32, -1, xer);
	// beq cr6,0x82e6c070
	if (cr6.eq) goto loc_82E6C070;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// bge cr6,0x82e6c070
	if (!cr6.lt) goto loc_82E6C070;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// mulli r10,r30,20
	ctx.r10.s64 = r30.s64 * 20;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x82e6c070
	if (cr6.eq) goto loc_82E6C070;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e6c070
	if (cr0.eq) goto loc_82E6C070;
	// addi r31,r11,4
	r31.s64 = r11.s64 + 4;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f30,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	f0.f64 = double(temp.f32);
	// lfs f13,60(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	f0.f64 = static_cast<float>(ctx.f12.f64 - f0.f64);
	// fsubs f13,f11,f13
	ctx.f13.f64 = static_cast<float>(ctx.f11.f64 - ctx.f13.f64);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82e6bd50
	sub_82E6BD50(ctx, base);
	// fabs f31,f1
	ctx.fpscr.disableFlushMode();
	f31.u64 = ctx.f1.u64 & 0x7FFFFFFFFFFFFFFF;
	// lfs f0,148(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 148);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bge cr6,0x82e6bffc
	if (!cr6.lt) goto loc_82E6BFFC;
	// fmr f31,f0
	f31.f64 = f0.f64;
loc_82E6BFFC:
	// fcmpu cr6,f31,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, f29.f64);
	// bge cr6,0x82e6c070
	if (!cr6.lt) goto loc_82E6C070;
	// stfs f30,132(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// stfs f30,136(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// stfs f30,140(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82E6C024:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x82e6c024
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E6C024;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + int32_t(12) );
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stb r22,216(r1)
	PPC_STORE_U8(ctx.r1.u32 + 216, r22.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82e6c06c
	if (!cr6.eq) goto loc_82E6C06C;
	// clrlwi r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	// fmr f29,f31
	ctx.fpscr.disableFlushMode();
	f29.f64 = f31.f64;
	// mr r23,r30
	r23.u64 = r30.u64;
	// ori r27,r11,1
	r27.u64 = r11.u64 | 1;
loc_82E6C06C:
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r25.u32);
loc_82E6C070:
	// addic. r24,r24,-1
	xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// bne 0x82e6bf54
	if (!cr0.eq) goto loc_82E6BF54;
loc_82E6C078:
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e6c0f4
	if (cr0.eq) goto loc_82E6C0F4;
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(20) );
	// cmpwi cr6,r23,-1
	cr6.compare<int32_t>(r23.s32, -1, xer);
	// beq cr6,0x82e6c0b0
	if (cr6.eq) goto loc_82E6C0B0;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// cmplw cr6,r23,r10
	cr6.compare<uint32_t>(r23.u32, ctx.r10.u32, xer);
	// bge cr6,0x82e6c0b0
	if (!cr6.lt) goto loc_82E6C0B0;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// mulli r10,r23,20
	ctx.r10.s64 = r23.s64 * 20;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x82e6c0b4
	if (!cr6.eq) goto loc_82E6C0B4;
loc_82E6C0B0:
	// mr r11,r22
	r11.u64 = r22.u64;
loc_82E6C0B4:
	// addi r3,r29,28
	ctx.r3.s64 = r29.s64 + 28;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// cmpwi cr6,r23,-1
	cr6.compare<int32_t>(r23.s32, -1, xer);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stb r22,88(r3)
	PPC_STORE_U8(ctx.r3.u32 + 88, r22.u8);
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(20) );
	// beq cr6,0x82e6c19c
	if (cr6.eq) goto loc_82E6C19C;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// cmplw cr6,r23,r10
	cr6.compare<uint32_t>(r23.u32, ctx.r10.u32, xer);
	// bge cr6,0x82e6c19c
	if (!cr6.lt) goto loc_82E6C19C;
	// mulli r10,r23,20
	ctx.r10.s64 = r23.s64 * 20;
	// b 0x82e6c188
	goto loc_82E6C188;
loc_82E6C0F4:
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(20) );
	// lwz r31,20(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x82e6c1b0
	if (cr0.eq) goto loc_82E6C1B0;
	// bl 0x82ca3b80
	sub_82CA3B80(ctx, base);
	// divwu r10,r3,r31
	ctx.r10.u32 = ctx.r3.u32 / r31.u32;
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(20) );
	// twllei r31,0
	// mullw r10,r10,r31
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r31.s32);
	// subf r10,r10,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r10.s64;
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x82e6c148
	if (cr6.eq) goto loc_82E6C148;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82e6c148
	if (!cr6.lt) goto loc_82E6C148;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// mulli r9,r10,20
	ctx.r9.s64 = ctx.r10.s64 * 20;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// bne cr6,0x82e6c14c
	if (!cr6.eq) goto loc_82E6C14C;
loc_82E6C148:
	// mr r11,r22
	r11.u64 = r22.u64;
loc_82E6C14C:
	// addi r3,r29,28
	ctx.r3.s64 = r29.s64 + 28;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stb r22,88(r3)
	PPC_STORE_U8(ctx.r3.u32 + 88, r22.u8);
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(20) );
	// beq cr6,0x82e6c19c
	if (cr6.eq) goto loc_82E6C19C;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82e6c19c
	if (!cr6.lt) goto loc_82E6C19C;
	// mulli r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 * 20;
loc_82E6C188:
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x82e6c1a0
	if (!cr6.eq) goto loc_82E6C1A0;
loc_82E6C19C:
	// mr r11,r22
	r11.u64 = r22.u64;
loc_82E6C1A0:
	// addi r4,r29,120
	ctx.r4.s64 = r29.s64 + 120;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// stw r21,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r21.u32);
	// bl 0x821ae8c0
	sub_821AE8C0(ctx, base);
loc_82E6C1B0:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f29,-120(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f30,-112(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x82ca2c1c
	return;
}

PPC_WEAK_FUNC(sub_82E6BE70) {
	__imp__sub_82E6BE70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6C1C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	f0.f64 = double(temp.f32);
	// addi r11,r3,16
	r11.s64 = ctx.r3.s64 + 16;
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// subf r9,r3,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r3.s64;
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	f0.f64 = double(temp.f32);
	// li r10,16
	ctx.r10.s64 = 16;
	// stfs f0,8(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
loc_82E6C1EC:
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x82e6c1ec
	if (!cr0.eq) goto loc_82E6C1EC;
	// lbz r11,88(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 88);
	// stb r11,88(r3)
	PPC_STORE_U8(ctx.r3.u32 + 88, r11.u8);
	// lwz r11,80(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(80) );
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, r11.u32);
	// lwz r11,84(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(84) );
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6C1C8) {
	__imp__sub_82E6C1C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6C220) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r3,r11,-18132
	ctx.r3.s64 = r11.s64 + -18132;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6C220) {
	__imp__sub_82E6C220(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6C230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(24) );
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6C230) {
	__imp__sub_82E6C230(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6C248) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(32) );
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6C248) {
	__imp__sub_82E6C248(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6C260) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e6c2ac
	if (cr0.eq) goto loc_82E6C2AC;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(8) );
	// lfs f0,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	f0.f64 = double(temp.f32);
	// lfs f13,56(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,60(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// lfs f11,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	f0.f64 = static_cast<float>(f0.f64 - ctx.f11.f64);
	// lfs f10,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f13,f10
	ctx.f13.f64 = static_cast<float>(ctx.f13.f64 - ctx.f10.f64);
	// lfs f11,60(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = static_cast<float>(ctx.f12.f64 - ctx.f11.f64);
	// fmuls f0,f0,f0
	f0.f64 = double(float(f0.f64 * f0.f64));
	// fmadds f0,f13,f13,f0
	f0.f64 = double(std::fma(float(ctx.f13.f64), float(ctx.f13.f64), float(f0.f64)));
	// fmadds f0,f12,f12,f0
	f0.f64 = double(std::fma(float(ctx.f12.f64), float(ctx.f12.f64), float(f0.f64)));
	// fsqrts f1,f0
	ctx.f1.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// blr 
	return;
loc_82E6C2AC:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f1,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6C260) {
	__imp__sub_82E6C260(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6C2B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e6c360
	if (cr0.eq) goto loc_82E6C360;
	// lfs f0,64(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 64);
	f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f0,68(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 68);
	f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f12,72(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,20(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,3084(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82e7f500
	sub_82E7F500(ctx, base);
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	f0.f64 = double(temp.f32);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fmuls f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 * f0.f64));
	// lfs f11,52(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,60(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 60);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,56(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// fadds f13,f10,f12
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// fadds f0,f9,f0
	f0.f64 = double(float(ctx.f9.f64 + f0.f64));
	// stfs f0,8(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// b 0x82e6c37c
	goto loc_82E6C37C;
loc_82E6C360:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// lfs f0,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	f0.f64 = double(temp.f32);
	// lfs f12,60(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,56(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
loc_82E6C37C:
	// stfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6C2B8) {
	__imp__sub_82E6C2B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6C3A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82260ef0
	sub_82260EF0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e7a240
	sub_82E7A240(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq 0x82e6c3fc
	if (cr0.eq) goto loc_82E6C3FC;
	// bl 0x82e7a558
	sub_82E7A558(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e7a5d8
	sub_82E7A5D8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e6c404
	goto loc_82E6C404;
loc_82E6C3FC:
	// bl 0x82e7a720
	sub_82E7A720(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E6C404:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E6C3A0) {
	__imp__sub_82E6C3A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6C410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82e82a28
	sub_82E82A28(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r11,r31,68
	r11.s64 = r31.s64 + 68;
	// addi r8,r8,-30984
	ctx.r8.s64 = ctx.r8.s64 + -30984;
	// addi r7,r11,16
	ctx.r7.s64 = r11.s64 + 16;
	// lfs f0,3084(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r10,11688
	ctx.r9.s64 = ctx.r10.s64 + 11688;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// stfs f0,40(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// stfs f0,44(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// stfs f0,52(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// stfs f0,56(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 56, temp.u32);
	// stfs f0,60(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 60, temp.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82E6C48C:
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bdnz 0x82e6c48c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E6C48C;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stb r10,88(r11)
	PPC_STORE_U8(r11.u32 + 88, ctx.r10.u8);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r10,164(r31)
	PPC_STORE_U32(r31.u32 + 164, ctx.r10.u32);
	// addi r9,r9,4284
	ctx.r9.s64 = ctx.r9.s64 + 4284;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r8,168(r31)
	PPC_STORE_U32(r31.u32 + 168, ctx.r8.u32);
	// stw r9,160(r31)
	PPC_STORE_U32(r31.u32 + 160, ctx.r9.u32);
	// stb r7,176(r31)
	PPC_STORE_U8(r31.u32 + 176, ctx.r7.u8);
	// stb r10,178(r31)
	PPC_STORE_U8(r31.u32 + 178, ctx.r10.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6C410) {
	__imp__sub_82E6C410(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6C4D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,11688
	ctx.r10.s64 = r11.s64 + 11688;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r11,r11,-30984
	r11.s64 = r11.s64 + -30984;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,160(r31)
	PPC_STORE_U32(r31.u32 + 160, r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
	// bl 0x82e82a48
	sub_82E82A48(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e6c530
	if (cr0.eq) goto loc_82E6C530;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,-9868(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E6C530:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6C4D8) {
	__imp__sub_82E6C4D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6C550) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x82260978
	sub_82260978(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r4,r11,-30528
	ctx.r4.s64 = r11.s64 + -30528;
	// bl 0x82e79c50
	sub_82E79C50(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r30,0
	r30.s64 = 0;
	// stw r3,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// lfs f30,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f30.f64 = double(temp.f32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// stfs f30,36(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// addi r11,r11,-30984
	r11.s64 = r11.s64 + -30984;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r11,20(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// li r10,16
	ctx.r10.s64 = 16;
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,60(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 60);
	f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82E6C5CC:
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82e6c5cc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E6C5CC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,168(r1)
	PPC_STORE_U8(ctx.r1.u32 + 168, r30.u8);
	// addi r3,r31,68
	ctx.r3.s64 = r31.s64 + 68;
	// bl 0x82e6c1c8
	sub_82E6C1C8(ctx, base);
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// stfs f30,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// addi r4,r11,3696
	ctx.r4.s64 = r11.s64 + 3696;
	// stfs f30,20(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// stb r30,177(r31)
	PPC_STORE_U8(r31.u32 + 177, r30.u8);
	// lfs f31,3080(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f31.f64 = double(temp.f32);
	// stfs f31,180(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 180, temp.u32);
	// bl 0x822674d0
	sub_822674D0(ctx, base);
	// lis r30,-31948
	r30.s64 = -2093744128;
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// lis r11,-31947
	r11.s64 = -2093678592;
	// addi r4,r11,-7468
	ctx.r4.s64 = r11.s64 + -7468;
	// lwz r3,-720(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-720) );
	// bl 0x82267be0
	sub_82267BE0(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lis r11,-31948
	r11.s64 = -2093744128;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r3,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// addi r4,r11,-16196
	ctx.r4.s64 = r11.s64 + -16196;
	// lwz r3,20(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// bl 0x821e8238
	sub_821E8238(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e6c658
	if (cr0.eq) goto loc_82E6C658;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// b 0x82e6c670
	goto loc_82E6C670;
loc_82E6C658:
	// lwz r11,-720(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-720) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e6c66c
	if (cr0.eq) goto loc_82E6C66C;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// b 0x82e6c670
	goto loc_82E6C670;
loc_82E6C66C:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = f31.f64;
loc_82E6C670:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stfs f0,172(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 172, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e82b18
	sub_82E82B18(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e6c744
	if (cr0.eq) goto loc_82E6C744;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(40) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e6c744
	if (cr0.eq) goto loc_82E6C744;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(44) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e6c744
	if (cr0.eq) goto loc_82E6C744;
	// lfs f0,180(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 180);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// blt cr6,0x82e6c744
	if (cr6.lt) goto loc_82E6C744;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lis r11,-31948
	r11.s64 = -2093744128;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-15368
	ctx.r4.s64 = r11.s64 + -15368;
	// lwz r3,20(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// bl 0x821e8238
	sub_821E8238(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e6c700
	if (cr0.eq) goto loc_82E6C700;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3056(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3056);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// b 0x82e6c724
	goto loc_82E6C724;
loc_82E6C700:
	// lwz r11,-720(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-720) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e6c714
	if (cr0.eq) goto loc_82E6C714;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// b 0x82e6c718
	goto loc_82E6C718;
loc_82E6C714:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = f31.f64;
loc_82E6C718:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,3056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3056);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
loc_82E6C724:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// stfs f0,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 64, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e6c748
	goto loc_82E6C748;
loc_82E6C744:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E6C748:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E6C550) {
	__imp__sub_82E6C550(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6C758) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82e6c780
	if (!cr6.eq) goto loc_82E6C780;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e6c938
	goto loc_82E6C938;
loc_82E6C780:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826b4b60
	sub_826B4B60(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,-30448
	ctx.r4.s64 = r11.s64 + -30448;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e6c7e8
	if (!cr0.eq) goto loc_82E6C7E8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b568c0
	sub_82B568C0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e6c92c
	if (cr0.eq) goto loc_82E6C92C;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r11,-720(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-720) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e6c7c8
	if (cr0.eq) goto loc_82E6C7C8;
	// lfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f31.f64 = double(temp.f32);
	// b 0x82e6c7d0
	goto loc_82E6C7D0;
loc_82E6C7C8:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f31.f64 = double(temp.f32);
loc_82E6C7D0:
	// bl 0x82ca5860
	sub_82CA5860(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// stfs f0,16(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 16, temp.u32);
	// b 0x82e6c938
	goto loc_82E6C938;
loc_82E6C7E8:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-30464
	ctx.r4.s64 = r11.s64 + -30464;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e6c824
	if (!cr0.eq) goto loc_82E6C824;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b568c0
	sub_82B568C0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e6c92c
	if (cr0.eq) goto loc_82E6C92C;
	// bl 0x82ca5860
	sub_82CA5860(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,20(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 20, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e6c938
	goto loc_82E6C938;
loc_82E6C824:
	// lis r11,-32241
	r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-19724
	ctx.r4.s64 = r11.s64 + -19724;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e6c868
	if (!cr0.eq) goto loc_82E6C868;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b568c0
	sub_82B568C0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x82e6c92c
	if (cr0.eq) goto loc_82E6C92C;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r3,-720(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-720) );
	// bl 0x82e7c2f0
	sub_82E7C2F0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r11.u32);
	// b 0x82e6c938
	goto loc_82E6C938;
loc_82E6C868:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-30488
	ctx.r4.s64 = r11.s64 + -30488;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e6c8c8
	if (!cr0.eq) goto loc_82E6C8C8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b568c0
	sub_82B568C0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e6c92c
	if (cr0.eq) goto loc_82E6C92C;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r11,-720(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-720) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e6c8a8
	if (cr0.eq) goto loc_82E6C8A8;
	// lfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f31.f64 = double(temp.f32);
	// b 0x82e6c8b0
	goto loc_82E6C8B0;
loc_82E6C8A8:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f31.f64 = double(temp.f32);
loc_82E6C8B0:
	// bl 0x82ca5860
	sub_82CA5860(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// stfs f0,180(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 180, temp.u32);
	// b 0x82e6c938
	goto loc_82E6C938;
loc_82E6C8C8:
	// lis r11,-32244
	r11.s64 = -2113142784;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-14084
	ctx.r4.s64 = r11.s64 + -14084;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e6c92c
	if (!cr0.eq) goto loc_82E6C92C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b568c0
	sub_82B568C0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e6c92c
	if (cr0.eq) goto loc_82E6C92C;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r11,-720(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-720) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e6c908
	if (cr0.eq) goto loc_82E6C908;
	// lfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f31.f64 = double(temp.f32);
	// b 0x82e6c910
	goto loc_82E6C910;
loc_82E6C908:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f31.f64 = double(temp.f32);
loc_82E6C910:
	// bl 0x82ca5860
	sub_82CA5860(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(f0.f64 * f31.f64));
	// bl 0x821e80b8
	sub_821E80B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e6c938
	goto loc_82E6C938;
loc_82E6C92C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e9fbe8
	sub_82E9FBE8(ctx, base);
loc_82E6C938:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E6C758) {
	__imp__sub_82E6C758(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6C948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-30984
	r11.s64 = r11.s64 + -30984;
	// li r30,0
	r30.s64 = 0;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// stb r10,176(r31)
	PPC_STORE_U8(r31.u32 + 176, ctx.r10.u8);
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r11,20(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + int32_t(20) );
	// lfs f0,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,60(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 60);
	f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82E6C9A0:
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82e6c9a0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E6C9A0;
	// addi r29,r31,68
	r29.s64 = r31.s64 + 68;
	// stb r30,168(r1)
	PPC_STORE_U8(ctx.r1.u32 + 168, r30.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e6c1c8
	sub_82E6C1C8(ctx, base);
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// li r11,-1
	r11.s64 = -1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r30,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r30.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// bl 0x821ae8c0
	sub_821AE8C0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stb r30,177(r31)
	PPC_STORE_U8(r31.u32 + 177, r30.u8);
	// stb r30,178(r31)
	PPC_STORE_U8(r31.u32 + 178, r30.u8);
	// stb r30,179(r31)
	PPC_STORE_U8(r31.u32 + 179, r30.u8);
	// lfs f0,3800(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3800);
	f0.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E6C948) {
	__imp__sub_82E6C948(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6C9F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be8
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,16(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	f0.f64 = double(temp.f32);
	// lfs f31,3084(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// beq cr6,0x82e6cb84
	if (cr6.eq) goto loc_82E6CB84;
	// addi r29,r31,72
	r29.s64 = r31.s64 + 72;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f0,0(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,8(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82e6c2b8
	sub_82E6C2B8(ctx, base);
	// addi r30,r31,68
	r30.s64 = r31.s64 + 68;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// li r28,0
	r28.s64 = 0;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r10,r11,-30984
	ctx.r10.s64 = r11.s64 + -30984;
	// stfs f0,4(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// li r9,16
	ctx.r9.s64 = 16;
	// stfs f0,8(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 12, temp.u32);
	// stb r28,88(r30)
	PPC_STORE_U8(r30.u32 + 88, r28.u8);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	f0.f64 = double(temp.f32);
	// stfs f0,116(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	f0.f64 = double(temp.f32);
	// stfs f0,120(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f0,60(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 60);
	f0.f64 = double(temp.f32);
	// stfs f0,124(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82E6CAA8:
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x82e6caa8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E6CAA8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stb r28,200(r1)
	PPC_STORE_U8(ctx.r1.u32 + 200, r28.u8);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x821acbb8
	sub_821ACBB8(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(76) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// bne 0x82e6cb34
	if (!cr0.eq) goto loc_82E6CB34;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e6cb04
	if (cr0.eq) goto loc_82E6CB04;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// bl 0x82ec1cc8
	sub_82EC1CC8(ctx, base);
loc_82E6CB04:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f0,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// lfs f0,60(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 60);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 12, temp.u32);
	// stb r28,88(r30)
	PPC_STORE_U8(r30.u32 + 88, r28.u8);
	// bl 0x821ae8c0
	sub_821AE8C0(ctx, base);
	// b 0x82e6cbdc
	goto loc_82E6CBDC;
loc_82E6CB34:
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e6cbe4
	if (cr0.eq) goto loc_82E6CBE4;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// bl 0x82ec1cc8
	sub_82EC1CC8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lfs f1,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 64);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// bl 0x82ec2508
	sub_82EC2508(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82e6cb04
	if (!cr0.eq) goto loc_82E6CB04;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// bl 0x822a8fd8
	sub_822A8FD8(ctx, base);
	// stb r28,178(r31)
	PPC_STORE_U8(r31.u32 + 178, r28.u8);
	// b 0x82e6cbe4
	goto loc_82E6CBE4;
loc_82E6CB84:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r28,0
	r28.s64 = 0;
	// addi r10,r10,-30984
	ctx.r10.s64 = ctx.r10.s64 + -30984;
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// lfs f0,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	f0.f64 = double(temp.f32);
	// stfs f0,212(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	f0.f64 = double(temp.f32);
	// stw r10,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// stfs f0,216(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// lfs f0,60(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 60);
	f0.f64 = double(temp.f32);
	// stfs f0,220(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82E6CBC0:
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82e6cbc0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E6CBC0;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// stb r28,296(r1)
	PPC_STORE_U8(ctx.r1.u32 + 296, r28.u8);
	// addi r3,r31,68
	ctx.r3.s64 = r31.s64 + 68;
	// bl 0x82e6c1c8
	sub_82E6C1C8(ctx, base);
loc_82E6CBDC:
	// li r11,1
	r11.s64 = 1;
	// stb r11,178(r31)
	PPC_STORE_U8(r31.u32 + 178, r11.u8);
loc_82E6CBE4:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82E6C9F8) {
	__imp__sub_82E6C9F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6CBF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be8
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq 0x82e6ced0
	if (cr0.eq) goto loc_82E6CED0;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-30984
	r11.s64 = r11.s64 + -30984;
	// li r30,0
	r30.s64 = 0;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// lfs f0,3084(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	f0.f64 = double(temp.f32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stb r30,176(r31)
	PPC_STORE_U8(r31.u32 + 176, r30.u8);
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// li r11,16
	r11.s64 = 16;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82E6CC4C:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82e6cc4c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E6CC4C;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r30,168(r1)
	PPC_STORE_U8(ctx.r1.u32 + 168, r30.u8);
	// addi r4,r8,52
	ctx.r4.s64 = ctx.r8.s64 + 52;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e6ccbc
	if (!cr0.eq) goto loc_82E6CCBC;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r3,r31,68
	ctx.r3.s64 = r31.s64 + 68;
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// lfs f0,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f0,60(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 60);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stb r30,88(r3)
	PPC_STORE_U8(ctx.r3.u32 + 88, r30.u8);
	// stw r30,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r30.u32);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// b 0x82e6cecc
	goto loc_82E6CECC;
loc_82E6CCBC:
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,24296
	ctx.r4.s64 = r11.s64 + 24296;
	// bl 0x82e82f30
	sub_82E82F30(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r5,r10,52
	ctx.r5.s64 = ctx.r10.s64 + 52;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// lwz r11,80(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(80) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e6cd58
	if (!cr0.eq) goto loc_82E6CD58;
	// addi r3,r31,68
	ctx.r3.s64 = r31.s64 + 68;
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// lfs f12,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f12,12(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stb r30,88(r3)
	PPC_STORE_U8(ctx.r3.u32 + 88, r30.u8);
	// beq cr6,0x82e6cd3c
	if (cr6.eq) goto loc_82E6CD3C;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// b 0x82e6cd48
	goto loc_82E6CD48;
loc_82E6CD3C:
	// li r11,-1
	r11.s64 = -1;
	// stw r30,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r30.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
loc_82E6CD48:
	// bl 0x821ae8c0
	sub_821AE8C0(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,179(r31)
	PPC_STORE_U8(r31.u32 + 179, r11.u8);
	// b 0x82e6ced0
	goto loc_82E6CED0;
loc_82E6CD58:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e6c260
	sub_82E6C260(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x82260978
	sub_82260978(ctx, base);
	// lfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 36);
	f0.f64 = double(temp.f32);
	// lfs f13,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x82e6cd90
	if (cr6.lt) goto loc_82E6CD90;
	// lbz r11,177(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 177);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82e6cd90
	if (!cr0.eq) goto loc_82E6CD90;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,3040(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3040);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82e6cdc8
	goto loc_82E6CDC8;
loc_82E6CD90:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lfs f0,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 40);
	f0.f64 = double(temp.f32);
	// lfs f13,44(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,52(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	f0.f64 = static_cast<float>(ctx.f12.f64 - f0.f64);
	// lfs f11,56(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f11,f13
	ctx.f13.f64 = static_cast<float>(ctx.f11.f64 - ctx.f13.f64);
	// lfs f12,60(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,48(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = static_cast<float>(ctx.f12.f64 - ctx.f11.f64);
	// fmuls f0,f0,f0
	f0.f64 = double(float(f0.f64 * f0.f64));
	// fmadds f0,f13,f13,f0
	f0.f64 = double(std::fma(float(ctx.f13.f64), float(ctx.f13.f64), float(f0.f64)));
	// fmadds f0,f12,f12,f0
	f0.f64 = double(std::fma(float(ctx.f12.f64), float(ctx.f12.f64), float(f0.f64)));
	// fsqrts f13,f0
	ctx.f13.f64 = double(simd::sqrt_f32(float(f0.f64)));
loc_82E6CDC8:
	// lbz r10,179(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 179);
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82e6cde0
	if (!cr6.eq) goto loc_82E6CDE0;
	// stb r11,176(r31)
	PPC_STORE_U8(r31.u32 + 176, r11.u8);
	// stb r30,179(r31)
	PPC_STORE_U8(r31.u32 + 179, r30.u8);
loc_82E6CDE0:
	// lbz r10,177(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 177);
	// lfs f12,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82e6ce1c
	if (!cr6.eq) goto loc_82E6CE1C;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f0,-30536(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30536);
	f0.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// ble cr6,0x82e6ce0c
	if (!cr6.gt) goto loc_82E6CE0C;
	// stb r30,177(r31)
	PPC_STORE_U8(r31.u32 + 177, r30.u8);
	// b 0x82e6ce54
	goto loc_82E6CE54;
loc_82E6CE0C:
	// clrlwi. r10,r28,24
	ctx.r10.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82e6ce54
	if (!cr0.eq) goto loc_82E6CE54;
	// lfs f0,180(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 180);
	f0.f64 = double(temp.f32);
	// b 0x82e6ce4c
	goto loc_82E6CE4C;
loc_82E6CE1C:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f0,-30540(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30540);
	f0.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bge cr6,0x82e6ce38
	if (!cr6.lt) goto loc_82E6CE38;
	// stb r11,177(r31)
	PPC_STORE_U8(r31.u32 + 177, r11.u8);
	// b 0x82e6ce54
	goto loc_82E6CE54;
loc_82E6CE38:
	// clrlwi. r10,r28,24
	ctx.r10.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82e6ce54
	if (!cr0.eq) goto loc_82E6CE54;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f0,-30532(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30532);
	f0.f64 = double(temp.f32);
	// fmuls f0,f31,f0
	f0.f64 = double(float(f31.f64 * f0.f64));
loc_82E6CE4C:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x82e6ce58
	if (!cr6.gt) goto loc_82E6CE58;
loc_82E6CE54:
	// stb r11,176(r31)
	PPC_STORE_U8(r31.u32 + 176, r11.u8);
loc_82E6CE58:
	// lbz r11,176(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 176);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82e6ced0
	if (!cr6.eq) goto loc_82E6CED0;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// lfs f0,76(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 76);
	f0.f64 = double(temp.f32);
	// stfs f0,52(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// lfs f0,80(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 80);
	f0.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 56, temp.u32);
	// lfs f0,84(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 84);
	f0.f64 = double(temp.f32);
	// stfs f0,60(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 60, temp.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	f0.f64 = double(temp.f32);
	// stfs f0,44(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// lfs f0,60(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 60);
	f0.f64 = double(temp.f32);
	// stfs f0,48(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// beq cr6,0x82e6cebc
	if (cr6.eq) goto loc_82E6CEBC;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// b 0x82e6cec8
	goto loc_82E6CEC8;
loc_82E6CEBC:
	// li r11,-1
	r11.s64 = -1;
	// stw r30,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r30.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
loc_82E6CEC8:
	// addi r3,r31,68
	ctx.r3.s64 = r31.s64 + 68;
loc_82E6CECC:
	// bl 0x821ae8c0
	sub_821AE8C0(ctx, base);
loc_82E6CED0:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82E6CBF0) {
	__imp__sub_82E6CBF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6CEE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e6cf10
	if (cr0.eq) goto loc_82E6CF10;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82e6c410
	sub_82E6C410(ctx, base);
	// b 0x82e6cf14
	goto loc_82E6CF14;
loc_82E6CF10:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E6CF14:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6CEE0) {
	__imp__sub_82E6CEE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6CF28) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82e82a28
	sub_82E82A28(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,10104
	r11.s64 = r11.s64 + 10104;
	// lfs f0,3084(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// stfs f0,20(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// stfs f0,24(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// stfs f0,28(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6CF28) {
	__imp__sub_82E6CF28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6CF80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r3,r11,-17856
	ctx.r3.s64 = r11.s64 + -17856;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6CF80) {
	__imp__sub_82E6CF80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6CF90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r4,r11,-16196
	ctx.r4.s64 = r11.s64 + -16196;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r3,20(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// bl 0x821e8238
	sub_821E8238(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lis r30,-31948
	r30.s64 = -2093744128;
	// beq 0x82e6cfd0
	if (cr0.eq) goto loc_82E6CFD0;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// b 0x82e6cfec
	goto loc_82E6CFEC;
loc_82E6CFD0:
	// lwz r11,-720(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-720) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e6cfe4
	if (cr0.eq) goto loc_82E6CFE4;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// b 0x82e6cfec
	goto loc_82E6CFEC;
loc_82E6CFE4:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f0.f64 = double(temp.f32);
loc_82E6CFEC:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e82b18
	sub_82E82B18(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e6d00c
	if (!cr0.eq) goto loc_82E6D00C;
loc_82E6D004:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e6d06c
	goto loc_82E6D06C;
loc_82E6D00C:
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r4,r11,3696
	ctx.r4.s64 = r11.s64 + 3696;
	// bl 0x822674d0
	sub_822674D0(ctx, base);
	// lis r11,-31947
	r11.s64 = -2093678592;
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// addi r4,r11,-7468
	ctx.r4.s64 = r11.s64 + -7468;
	// lwz r3,-720(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-720) );
	// bl 0x82267be0
	sub_82267BE0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(40) );
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e6d004
	if (cr0.eq) goto loc_82E6D004;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E6D06C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E6CF90) {
	__imp__sub_82E6CF90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6D078) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r11,r11,3972
	r11.s64 = r11.s64 + 3972;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,24(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,28(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6D078) {
	__imp__sub_82E6D078(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6D0A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6D0A0) {
	__imp__sub_82E6D0A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6D0B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e6d0e8
	if (cr0.eq) goto loc_82E6D0E8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82e6cf28
	sub_82E6CF28(ctx, base);
	// b 0x82e6d0ec
	goto loc_82E6D0EC;
loc_82E6D0E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E6D0EC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6D0B8) {
	__imp__sub_82E6D0B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6D100) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,10104
	r11.s64 = r11.s64 + 10104;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82e82a48
	sub_82E82A48(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e6d148
	if (cr0.eq) goto loc_82E6D148;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,-9868(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E6D148:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6D100) {
	__imp__sub_82E6D100(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6D168) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82e6d198
	if (!cr6.eq) goto loc_82E6D198;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e6d20c
	goto loc_82E6D20C;
loc_82E6D198:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b4b60
	sub_826B4B60(ctx, base);
	// lis r11,-32244
	r11.s64 = -2113142784;
	// addi r4,r11,-14084
	ctx.r4.s64 = r11.s64 + -14084;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e6d200
	if (!cr0.eq) goto loc_82E6D200;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b568c0
	sub_82B568C0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e6d200
	if (cr0.eq) goto loc_82E6D200;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r11,-720(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-720) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e6d1dc
	if (cr0.eq) goto loc_82E6D1DC;
	// lfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f31.f64 = double(temp.f32);
	// b 0x82e6d1e4
	goto loc_82E6D1E4;
loc_82E6D1DC:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f31.f64 = double(temp.f32);
loc_82E6D1E4:
	// bl 0x82ca5860
	sub_82CA5860(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(f0.f64 * f31.f64));
	// bl 0x821e8138
	sub_821E8138(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e6d20c
	goto loc_82E6D20C;
loc_82E6D200:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e9fbe8
	sub_82E9FBE8(ctx, base);
loc_82E6D20C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
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

PPC_WEAK_FUNC(sub_82E6D168) {
	__imp__sub_82E6D168(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6D228) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister f23{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// addi r12,r1,-8
	r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82ca74f4
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f0,f3
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f3.f64;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// fadds f13,f2,f0
	ctx.f13.f64 = double(float(ctx.f2.f64 + f0.f64));
	// fcmpu cr6,f30,f13
	cr6.compare(f30.f64, ctx.f13.f64);
	// ble cr6,0x82e6d25c
	if (!cr6.gt) goto loc_82E6D25C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f1,3084(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82e6d350
	goto loc_82E6D350;
loc_82E6D25C:
	// fadds f13,f30,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f30.f64 + f0.f64));
	// fcmpu cr6,f2,f13
	cr6.compare(ctx.f2.f64, ctx.f13.f64);
	// ble cr6,0x82e6d27c
	if (!cr6.gt) goto loc_82E6D27C;
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(f0.f64 * f0.f64));
loc_82E6D26C:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lfs f0,-30400(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -30400);
	f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// b 0x82e6d350
	goto loc_82E6D350;
loc_82E6D27C:
	// fadds f13,f30,f2
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f30.f64 + ctx.f2.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x82e6d290
	if (!cr6.gt) goto loc_82E6D290;
	// fmuls f13,f2,f2
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// b 0x82e6d26c
	goto loc_82E6D26C;
loc_82E6D290:
	// fcmpu cr6,f2,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f2.f64, f0.f64);
	// ble cr6,0x82e6d2a0
	if (!cr6.gt) goto loc_82E6D2A0;
	// fmr f13,f2
	ctx.f13.f64 = ctx.f2.f64;
	// b 0x82e6d2a4
	goto loc_82E6D2A4;
loc_82E6D2A0:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f0.f64;
loc_82E6D2A4:
	// fcmpu cr6,f2,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f2.f64, f0.f64);
	// bge cr6,0x82e6d2b0
	if (!cr6.lt) goto loc_82E6D2B0;
	// fmr f0,f2
	f0.f64 = ctx.f2.f64;
loc_82E6D2B0:
	// fmuls f26,f0,f0
	ctx.fpscr.disableFlushMode();
	f26.f64 = double(float(f0.f64 * f0.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmuls f29,f13,f13
	f29.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f28,3140(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3140);
	f28.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmuls f0,f30,f28
	f0.f64 = double(float(f30.f64 * f28.f64));
	// fsubs f13,f29,f26
	ctx.f13.f64 = static_cast<float>(f29.f64 - f26.f64);
	// fmadds f13,f30,f30,f13
	ctx.f13.f64 = double(std::fma(float(f30.f64), float(f30.f64), float(ctx.f13.f64)));
	// fdivs f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 / f0.f64));
	// fnmsubs f0,f31,f31,f29
	f0.f64 = -double(std::fma(float(f31.f64), float(f31.f64), -float(f29.f64)));
	// fsqrts f27,f0
	f27.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// lfs f0,3080(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f0.f64 = double(temp.f32);
	// fdivs f25,f0,f27
	f25.f64 = double(float(f0.f64 / f27.f64));
	// fmuls f1,f25,f31
	ctx.f1.f64 = double(float(f25.f64 * f31.f64));
	// bl 0x8227ee80
	sub_8227EE80(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32240
	r11.s64 = -2112880640;
	// fmuls f0,f27,f31
	f0.f64 = double(float(f27.f64 * f31.f64));
	// fsubs f24,f30,f31
	f24.f64 = static_cast<float>(f30.f64 - f31.f64);
	// lfs f23,420(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 420);
	f23.f64 = double(temp.f32);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & 0x7FFFFFFFFFFFFFFF;
	// fmuls f1,f25,f24
	ctx.f1.f64 = double(float(f25.f64 * f24.f64));
	// fmuls f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 * f28.f64));
	// fmuls f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 * f29.f64));
	// fmsubs f29,f13,f23,f0
	f29.f64 = double(std::fma(float(ctx.f13.f64), float(f23.f64), -float(f0.f64)));
	// bl 0x8227ee80
	sub_8227EE80(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fmuls f0,f24,f27
	f0.f64 = double(float(f24.f64 * f27.f64));
	// fcmpu cr6,f30,f31
	cr6.compare(f30.f64, f31.f64);
	// fmuls f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 * f28.f64));
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & 0x7FFFFFFFFFFFFFFF;
	// fmuls f13,f13,f26
	ctx.f13.f64 = double(float(ctx.f13.f64 * f26.f64));
	// fmsubs f0,f13,f23,f0
	f0.f64 = double(std::fma(float(ctx.f13.f64), float(f23.f64), -float(f0.f64)));
	// blt cr6,0x82e6d340
	if (cr6.lt) goto loc_82E6D340;
	// fadds f1,f0,f29
	ctx.f1.f64 = double(float(f0.f64 + f29.f64));
	// b 0x82e6d350
	goto loc_82E6D350;
loc_82E6D340:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lfs f13,-30400(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -30400);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f13,f26,f13,f29
	ctx.f13.f64 = double(std::fma(float(f26.f64), float(ctx.f13.f64), float(f29.f64)));
	// fsubs f1,f13,f0
	ctx.f1.f64 = static_cast<float>(ctx.f13.f64 - f0.f64);
loc_82E6D350:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-8
	r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82ca7540
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6D228) {
	__imp__sub_82E6D228(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6D368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bdc
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// li r25,0
	r25.s64 = 0;
	// lwz r11,-720(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-720) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e6d3a4
	if (cr0.eq) goto loc_82E6D3A4;
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82e6d3ac
	goto loc_82E6D3AC;
loc_82E6D3A4:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	ctx.f13.f64 = double(temp.f32);
loc_82E6D3AC:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lfs f0,2792(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2792);
	f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// bl 0x82e90f18
	sub_82E90F18(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82e6d3d8
	if (!cr6.eq) goto loc_82E6D3D8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e6d4ac
	goto loc_82E6D4AC;
loc_82E6D3D8:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// lfs f30,3040(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3040);
	f30.f64 = double(temp.f32);
	// ble cr6,0x82e6d4a8
	if (!cr6.gt) goto loc_82E6D4A8;
	// li r29,0
	r29.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_82E6D3F0:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// lwzx r11,r29,r11
	r11.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x82e6d408
	if (!cr6.eq) goto loc_82E6D408;
loc_82E6D400:
	// li r31,0
	r31.s64 = 0;
	// b 0x82e6d434
	goto loc_82E6D434;
loc_82E6D408:
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + int32_t(12) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82e6d400
	if (!cr6.lt) goto loc_82E6D400;
	// lwz r10,24(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + int32_t(24) );
	// mulli r11,r11,20
	r11.s64 = r11.s64 * 20;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// li r31,0
	r31.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x82e6d434
	if (cr6.eq) goto loc_82E6D434;
	// mr r31,r11
	r31.u64 = r11.u64;
loc_82E6D434:
	// addi r5,r31,4
	ctx.r5.s64 = r31.s64 + 4;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f11,f0
	f0.f64 = static_cast<float>(ctx.f11.f64 - f0.f64);
	// lfs f10,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f10,f13
	ctx.f13.f64 = static_cast<float>(ctx.f10.f64 - ctx.f13.f64);
	// lfs f11,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = static_cast<float>(ctx.f11.f64 - ctx.f12.f64);
	// fmuls f0,f0,f0
	f0.f64 = double(float(f0.f64 * f0.f64));
	// fmadds f0,f13,f13,f0
	f0.f64 = double(std::fma(float(ctx.f13.f64), float(ctx.f13.f64), float(f0.f64)));
	// fmadds f31,f12,f12,f0
	f31.f64 = double(std::fma(float(ctx.f12.f64), float(ctx.f12.f64), float(f0.f64)));
	// fcmpu cr6,f31,f30
	cr6.compare(f31.f64, f30.f64);
	// bge cr6,0x82e6d49c
	if (!cr6.lt) goto loc_82E6D49C;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(80) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82e6d49c
	if (!cr6.eq) goto loc_82E6D49C;
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	f30.f64 = f31.f64;
	// mr r25,r31
	r25.u64 = r31.u64;
loc_82E6D49C:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bne 0x82e6d3f0
	if (!cr0.eq) goto loc_82E6D3F0;
loc_82E6D4A8:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_82E6D4AC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82ca2c2c
	return;
}

PPC_WEAK_FUNC(sub_82E6D368) {
	__imp__sub_82E6D368(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6D4C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	// stfd f31,-8(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -8, f31.u64);
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f8,f0,f0
	ctx.f8.f64 = double(float(f0.f64 * f0.f64));
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fmuls f1,f12,f13
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f11,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f5,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f31,f12,f0
	f31.f64 = double(float(ctx.f12.f64 * f0.f64));
	// lfs f10,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f7,f12,f12
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f4,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f6,f13,f13
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f9,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f0,f5,f11
	f0.f64 = static_cast<float>(ctx.f5.f64 - ctx.f11.f64);
	// lfs f3,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f13,f4,f10
	ctx.f13.f64 = static_cast<float>(ctx.f4.f64 - ctx.f10.f64);
	// fsubs f12,f3,f9
	ctx.f12.f64 = static_cast<float>(ctx.f3.f64 - ctx.f9.f64);
	// fneg f5,f2
	ctx.f5.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// fneg f4,f1
	ctx.f4.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// fneg f3,f31
	ctx.f3.u64 = f31.u64 ^ 0x8000000000000000;
	// fadds f2,f8,f7
	ctx.f2.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// fadds f7,f6,f7
	ctx.f7.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// fadds f8,f8,f6
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f6.f64));
	// fmuls f6,f5,f13
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmuls f1,f4,f12
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// fmuls f4,f4,f13
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fmadds f7,f7,f0,f6
	ctx.f7.f64 = double(std::fma(float(ctx.f7.f64), float(f0.f64), float(ctx.f6.f64)));
	// fmadds f6,f2,f13,f1
	ctx.f6.f64 = double(std::fma(float(ctx.f2.f64), float(ctx.f13.f64), float(ctx.f1.f64)));
	// fmadds f8,f8,f12,f4
	ctx.f8.f64 = double(std::fma(float(ctx.f8.f64), float(ctx.f12.f64), float(ctx.f4.f64)));
	// fmadds f13,f3,f12,f7
	ctx.f13.f64 = double(std::fma(float(ctx.f3.f64), float(ctx.f12.f64), float(ctx.f7.f64)));
	// fmadds f12,f5,f0,f6
	ctx.f12.f64 = double(std::fma(float(ctx.f5.f64), float(f0.f64), float(ctx.f6.f64)));
	// fmadds f0,f3,f0,f8
	f0.f64 = double(std::fma(float(ctx.f3.f64), float(f0.f64), float(ctx.f8.f64)));
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fadds f13,f10,f12
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fadds f0,f9,f0
	f0.f64 = double(float(ctx.f9.f64 + f0.f64));
	// stfs f0,8(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfd f31,-8(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6D4C0) {
	__imp__sub_82E6D4C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6D568) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	// stfd f30,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, f30.u64);
	// stfd f31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, f31.u64);
	// lfs f10,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f8,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f5,f10,f13
	ctx.f5.f64 = static_cast<float>(ctx.f10.f64 - ctx.f13.f64);
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	f0.f64 = double(temp.f32);
	// fsubs f31,f8,f13
	f31.f64 = static_cast<float>(ctx.f8.f64 - ctx.f13.f64);
	// lfs f12,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f10,f13
	ctx.f13.f64 = static_cast<float>(ctx.f10.f64 - ctx.f13.f64);
	// lfs f9,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f4,f12,f0
	ctx.f4.f64 = static_cast<float>(ctx.f12.f64 - f0.f64);
	// fsubs f2,f9,f0
	ctx.f2.f64 = static_cast<float>(ctx.f9.f64 - f0.f64);
	// lfs f6,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f10,f12,f0
	ctx.f10.f64 = static_cast<float>(ctx.f12.f64 - f0.f64);
	// lfs f11,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f3,f6,f11
	ctx.f3.f64 = static_cast<float>(ctx.f6.f64 - ctx.f11.f64);
	// fsubs f30,f7,f11
	f30.f64 = static_cast<float>(ctx.f7.f64 - ctx.f11.f64);
	// fsubs f11,f6,f11
	ctx.f11.f64 = static_cast<float>(ctx.f6.f64 - ctx.f11.f64);
	// fmuls f6,f2,f4
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f4.f64));
	// fmuls f10,f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f6,f5,f31,f6
	ctx.f6.f64 = double(std::fma(float(ctx.f5.f64), float(f31.f64), float(ctx.f6.f64)));
	// fmadds f13,f13,f13,f10
	ctx.f13.f64 = double(std::fma(float(ctx.f13.f64), float(ctx.f13.f64), float(ctx.f10.f64)));
	// fmadds f6,f3,f30,f6
	ctx.f6.f64 = double(std::fma(float(ctx.f3.f64), float(f30.f64), float(ctx.f6.f64)));
	// fmadds f13,f11,f11,f13
	ctx.f13.f64 = double(std::fma(float(ctx.f11.f64), float(ctx.f11.f64), float(ctx.f13.f64)));
	// lfs f11,3084(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f13,f6,f13
	ctx.f13.f64 = double(float(ctx.f6.f64 / ctx.f13.f64));
	// fcmpu cr6,f13,f11
	cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// blt cr6,0x82e6d650
	if (cr6.lt) goto loc_82E6D650;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f11,3080(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f13,f11
	cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bgt cr6,0x82e6d650
	if (cr6.gt) goto loc_82E6D650;
	// fsubs f12,f12,f0
	ctx.f12.f64 = static_cast<float>(ctx.f12.f64 - f0.f64);
	// lfs f11,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f6,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f4,f1,f1
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// fsubs f6,f6,f11
	ctx.f6.f64 = static_cast<float>(ctx.f6.f64 - ctx.f11.f64);
	// lfs f10,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f5,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fsubs f5,f5,f10
	ctx.f5.f64 = static_cast<float>(ctx.f5.f64 - ctx.f10.f64);
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f6,f6,f13
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fmuls f13,f5,f13
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fadds f0,f0,f12
	f0.f64 = double(float(f0.f64 + ctx.f12.f64));
	// fadds f12,f11,f6
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f6.f64));
	// fadds f11,f10,f13
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fsubs f0,f9,f0
	f0.f64 = static_cast<float>(ctx.f9.f64 - f0.f64);
	// fsubs f13,f7,f12
	ctx.f13.f64 = static_cast<float>(ctx.f7.f64 - ctx.f12.f64);
	// fsubs f12,f8,f11
	ctx.f12.f64 = static_cast<float>(ctx.f8.f64 - ctx.f11.f64);
	// fmuls f0,f0,f0
	f0.f64 = double(float(f0.f64 * f0.f64));
	// fmadds f0,f13,f13,f0
	f0.f64 = double(std::fma(float(ctx.f13.f64), float(ctx.f13.f64), float(f0.f64)));
	// fmadds f0,f12,f12,f0
	f0.f64 = double(std::fma(float(ctx.f12.f64), float(ctx.f12.f64), float(f0.f64)));
	// fcmpu cr6,f0,f4
	cr6.compare(f0.f64, ctx.f4.f64);
	// blt cr6,0x82e6d654
	if (cr6.lt) goto loc_82E6D654;
loc_82E6D650:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E6D654:
	// lfd f30,-16(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lfd f31,-8(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6D568) {
	__imp__sub_82E6D568(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6D660) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lfs f10,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f8,f10,f13
	ctx.f8.f64 = static_cast<float>(ctx.f10.f64 - ctx.f13.f64);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// fsubs f12,f12,f13
	ctx.f12.f64 = static_cast<float>(ctx.f12.f64 - ctx.f13.f64);
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f11,f11,f0
	ctx.f11.f64 = static_cast<float>(ctx.f11.f64 - f0.f64);
	// lfs f5,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f0,f7,f0
	f0.f64 = static_cast<float>(ctx.f7.f64 - f0.f64);
	// fsubs f10,f6,f9
	ctx.f10.f64 = static_cast<float>(ctx.f6.f64 - ctx.f9.f64);
	// fsubs f9,f5,f9
	ctx.f9.f64 = static_cast<float>(ctx.f5.f64 - ctx.f9.f64);
	// fmuls f8,f8,f12
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmadds f0,f0,f11,f8
	f0.f64 = double(std::fma(float(f0.f64), float(ctx.f11.f64), float(ctx.f8.f64)));
	// fmadds f0,f9,f10,f0
	f0.f64 = double(std::fma(float(ctx.f9.f64), float(ctx.f10.f64), float(f0.f64)));
	// lfs f9,3084(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f0,f9
	cr6.compare(f0.f64, ctx.f9.f64);
	// bge cr6,0x82e6d6c4
	if (!cr6.lt) goto loc_82E6D6C4;
loc_82E6D6BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82E6D6C4:
	// fmuls f8,f10,f10
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f8,f12,f12,f8
	ctx.f8.f64 = double(std::fma(float(ctx.f12.f64), float(ctx.f12.f64), float(ctx.f8.f64)));
	// fmadds f8,f11,f11,f8
	ctx.f8.f64 = double(std::fma(float(ctx.f11.f64), float(ctx.f11.f64), float(ctx.f8.f64)));
	// fsqrts f8,f8
	ctx.f8.f64 = double(simd::sqrt_f32(float(ctx.f8.f64)));
	// fcmpu cr6,f8,f9
	cr6.compare(ctx.f8.f64, ctx.f9.f64);
	// bne cr6,0x82e6d718
	if (!cr6.eq) goto loc_82E6D718;
	// stfs f13,0(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r7)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r7)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	f0.f64 = static_cast<float>(f0.f64 - ctx.f13.f64);
	// lfs f12,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = static_cast<float>(ctx.f12.f64 - ctx.f13.f64);
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = static_cast<float>(ctx.f12.f64 - ctx.f11.f64);
	// b 0x82e6d76c
	goto loc_82E6D76C;
loc_82E6D718:
	// fmuls f9,f8,f8
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fcmpu cr6,f0,f9
	cr6.compare(f0.f64, ctx.f9.f64);
	// bgt cr6,0x82e6d6bc
	if (cr6.gt) goto loc_82E6D6BC;
	// fdivs f0,f0,f9
	f0.f64 = double(float(f0.f64 / ctx.f9.f64));
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(f0.f64 * ctx.f11.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * f0.f64));
	// fadds f0,f13,f12
	f0.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f0,0(r7)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fadds f12,f8,f11
	ctx.f12.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// stfs f12,8(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// fadds f13,f10,f9
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stfs f13,4(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// lfs f11,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f0,f11,f0
	f0.f64 = static_cast<float>(ctx.f11.f64 - f0.f64);
	// lfs f11,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = static_cast<float>(ctx.f11.f64 - ctx.f12.f64);
	// fsubs f13,f10,f13
	ctx.f13.f64 = static_cast<float>(ctx.f10.f64 - ctx.f13.f64);
loc_82E6D76C:
	// fmuls f0,f0,f0
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f0.f64 * f0.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// fmadds f0,f13,f13,f0
	f0.f64 = double(std::fma(float(ctx.f13.f64), float(ctx.f13.f64), float(f0.f64)));
	// fmadds f0,f12,f12,f0
	f0.f64 = double(std::fma(float(ctx.f12.f64), float(ctx.f12.f64), float(f0.f64)));
	// fsqrts f0,f0
	f0.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// stfs f0,0(r6)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6D660) {
	__imp__sub_82E6D660(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6D788) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lfs f0,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	f0.f64 = double(temp.f32);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lfs f13,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lfs f5,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f2,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f11,f0
	ctx.f11.f64 = static_cast<float>(ctx.f11.f64 - f0.f64);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f11,128(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fsubs f11,f10,f13
	ctx.f11.f64 = static_cast<float>(ctx.f10.f64 - ctx.f13.f64);
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfs f11,132(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fsubs f11,f9,f12
	ctx.f11.f64 = static_cast<float>(ctx.f9.f64 - ctx.f12.f64);
	// lfs f8,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// stfs f11,136(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fsubs f11,f8,f0
	ctx.f11.f64 = static_cast<float>(ctx.f8.f64 - f0.f64);
	// lfs f7,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f11,f7,f13
	ctx.f11.f64 = static_cast<float>(ctx.f7.f64 - ctx.f13.f64);
	// lfs f6,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f11,f6,f12
	ctx.f11.f64 = static_cast<float>(ctx.f6.f64 - ctx.f12.f64);
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsubs f11,f5,f0
	ctx.f11.f64 = static_cast<float>(ctx.f5.f64 - f0.f64);
	// lfs f4,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f0,f2,f0
	f0.f64 = static_cast<float>(ctx.f2.f64 - f0.f64);
	// lfs f1,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f11,f4,f13
	ctx.f11.f64 = static_cast<float>(ctx.f4.f64 - ctx.f13.f64);
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fsubs f0,f1,f13
	f0.f64 = static_cast<float>(ctx.f1.f64 - ctx.f13.f64);
	// lfs f3,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f31,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	f31.f64 = double(temp.f32);
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f11,f3,f12
	ctx.f11.f64 = static_cast<float>(ctx.f3.f64 - ctx.f12.f64);
	// stfs f0,116(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fsubs f0,f31,f12
	f0.f64 = static_cast<float>(f31.f64 - ctx.f12.f64);
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x82e6bd50
	sub_82E6BD50(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e6bd50
	sub_82E6BD50(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fadds f31,f1,f31
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f1.f64 + f31.f64));
	// bl 0x82e6bd50
	sub_82E6BD50(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fadds f31,f1,f31
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f1.f64 + f31.f64));
	// bl 0x82e6bd50
	sub_82E6BD50(ctx, base);
	// fadds f13,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 + f31.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,3084(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// beq cr6,0x82e6d894
	if (cr6.eq) goto loc_82E6D894;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E6D894:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6D788) {
	__imp__sub_82E6D788(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6D8A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f18{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be8
	// addi r12,r1,-40
	r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82ca74e0
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// fmr f18,f1
	ctx.fpscr.disableFlushMode();
	f18.f64 = ctx.f1.f64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// fmr f21,f2
	f21.f64 = ctx.f2.f64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r4,r11,-16472
	ctx.r4.s64 = r11.s64 + -16472;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x821e8238
	sub_821E8238(ctx, base);
	// lis r11,-31948
	r11.s64 = -2093744128;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,-15368
	ctx.r4.s64 = r11.s64 + -15368;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e8238
	sub_821E8238(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82e6d91c
	if (!cr6.eq) goto loc_82E6D91C;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e6d914
	if (!cr6.eq) goto loc_82E6D914;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lfs f30,23732(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 23732);
	f30.f64 = double(temp.f32);
	// b 0x82e6d940
	goto loc_82E6D940;
loc_82E6D914:
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82e6d920
	goto loc_82E6D920;
loc_82E6D91C:
	// lfs f13,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
loc_82E6D920:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r11,r11,3056
	r11.s64 = r11.s64 + 3056;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// fmuls f30,f13,f0
	f30.f64 = double(float(ctx.f13.f64 * f0.f64));
	// bne cr6,0x82e6d954
	if (!cr6.eq) goto loc_82E6D954;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82e6d94c
	if (!cr6.eq) goto loc_82E6D94C;
loc_82E6D940:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,2676(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2676);
	f31.f64 = double(temp.f32);
	// b 0x82e6d95c
	goto loc_82E6D95C;
loc_82E6D94C:
	// lfs f13,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82e6d958
	goto loc_82E6D958;
loc_82E6D954:
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
loc_82E6D958:
	// fmuls f31,f13,f0
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f13.f64 * f0.f64));
loc_82E6D95C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 64);
	f0.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r30,r31,76
	r30.s64 = r31.s64 + 76;
	// lfs f29,9652(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 9652);
	f29.f64 = double(temp.f32);
	// fadds f0,f0,f29
	f0.f64 = double(float(f0.f64 + f29.f64));
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f0,68(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 68);
	f0.f64 = double(temp.f32);
	// stfs f0,116(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f0,72(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 72);
	f0.f64 = double(temp.f32);
	// stfs f0,120(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x82e7f500
	sub_82E7F500(ctx, base);
	// lfs f0,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 68);
	f0.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// fsubs f0,f0,f29
	f0.f64 = static_cast<float>(f0.f64 - f29.f64);
	// stfs f0,116(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f0,64(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 64);
	f0.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f0,72(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 72);
	f0.f64 = double(temp.f32);
	// stfs f0,120(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x82e7f500
	sub_82E7F500(ctx, base);
	// lfs f2,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f2.f64 = double(temp.f32);
	// addi r31,r31,52
	r31.s64 = r31.s64 + 52;
	// fmuls f0,f2,f31
	f0.f64 = double(float(ctx.f2.f64 * f31.f64));
	// lfs f1,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f1.f64 = double(temp.f32);
	// lfs f24,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	f24.f64 = double(temp.f32);
	// fmuls f13,f1,f31
	ctx.f13.f64 = double(float(ctx.f1.f64 * f31.f64));
	// fmuls f8,f24,f30
	ctx.f8.f64 = double(float(f24.f64 * f30.f64));
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f25,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	f25.f64 = double(temp.f32);
	// fmuls f5,f11,f31
	ctx.f5.f64 = double(float(ctx.f11.f64 * f31.f64));
	// lfs f28,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f28.f64 = double(temp.f32);
	// fmuls f12,f25,f31
	ctx.f12.f64 = double(float(f25.f64 * f31.f64));
	// lfs f23,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	f23.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f20,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f20.f64 = double(temp.f32);
	// fmuls f7,f23,f30
	ctx.f7.f64 = double(float(f23.f64 * f30.f64));
	// lfs f10,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f22,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	f22.f64 = double(temp.f32);
	// fmuls f4,f10,f31
	ctx.f4.f64 = double(float(ctx.f10.f64 * f31.f64));
	// fmuls f6,f22,f30
	ctx.f6.f64 = double(float(f22.f64 * f30.f64));
	// lfs f9,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f0,f28,f0
	f0.f64 = static_cast<float>(f28.f64 - f0.f64);
	// lfs f28,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	f28.f64 = double(temp.f32);
	// fsubs f13,f20,f13
	ctx.f13.f64 = static_cast<float>(f20.f64 - ctx.f13.f64);
	// lfs f29,0(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 0);
	f29.f64 = double(temp.f32);
	// fmuls f3,f9,f31
	ctx.f3.f64 = double(float(ctx.f9.f64 * f31.f64));
	// lfs f27,4(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 4);
	f27.f64 = double(temp.f32);
	// lfs f26,8(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 8);
	f26.f64 = double(temp.f32);
	// fsubs f12,f28,f12
	ctx.f12.f64 = static_cast<float>(f28.f64 - ctx.f12.f64);
	// lfs f28,3084(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f28.f64 = double(temp.f32);
	// fsubs f0,f0,f8
	f0.f64 = static_cast<float>(f0.f64 - ctx.f8.f64);
	// fsubs f13,f13,f7
	ctx.f13.f64 = static_cast<float>(ctx.f13.f64 - ctx.f7.f64);
	// fsubs f12,f12,f6
	ctx.f12.f64 = static_cast<float>(ctx.f12.f64 - ctx.f6.f64);
	// fsubs f8,f0,f5
	ctx.f8.f64 = static_cast<float>(f0.f64 - ctx.f5.f64);
	// fsubs f7,f13,f4
	ctx.f7.f64 = static_cast<float>(ctx.f13.f64 - ctx.f4.f64);
	// fsubs f6,f12,f3
	ctx.f6.f64 = static_cast<float>(ctx.f12.f64 - ctx.f3.f64);
	// fsubs f0,f29,f8
	f0.f64 = static_cast<float>(f29.f64 - ctx.f8.f64);
	// fsubs f13,f27,f7
	ctx.f13.f64 = static_cast<float>(f27.f64 - ctx.f7.f64);
	// fsubs f12,f26,f6
	ctx.f12.f64 = static_cast<float>(f26.f64 - ctx.f6.f64);
	// fmuls f0,f0,f0
	f0.f64 = double(float(f0.f64 * f0.f64));
	// fmadds f0,f13,f13,f0
	f0.f64 = double(std::fma(float(ctx.f13.f64), float(ctx.f13.f64), float(f0.f64)));
	// fmadds f0,f12,f12,f0
	f0.f64 = double(std::fma(float(ctx.f12.f64), float(ctx.f12.f64), float(f0.f64)));
	// fsqrts f0,f0
	f0.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// fcmpu cr6,f0,f28
	cr6.compare(f0.f64, f28.f64);
	// beq cr6,0x82e6e054
	if (cr6.eq) goto loc_82E6E054;
	// fsubs f13,f26,f6
	ctx.f13.f64 = static_cast<float>(f26.f64 - ctx.f6.f64);
	// fsubs f12,f27,f7
	ctx.f12.f64 = static_cast<float>(f27.f64 - ctx.f7.f64);
	// fsubs f0,f29,f8
	f0.f64 = static_cast<float>(f29.f64 - ctx.f8.f64);
	// fmuls f8,f25,f13
	ctx.f8.f64 = double(float(f25.f64 * ctx.f13.f64));
	// fmuls f10,f12,f10
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// fmuls f7,f22,f13
	ctx.f7.f64 = double(float(f22.f64 * ctx.f13.f64));
	// fmadds f8,f2,f0,f8
	ctx.f8.f64 = double(std::fma(float(ctx.f2.f64), float(f0.f64), float(ctx.f8.f64)));
	// fmadds f10,f13,f9,f10
	ctx.f10.f64 = double(std::fma(float(ctx.f13.f64), float(ctx.f9.f64), float(ctx.f10.f64)));
	// fmadds f7,f24,f0,f7
	ctx.f7.f64 = double(std::fma(float(f24.f64), float(f0.f64), float(ctx.f7.f64)));
	// fmadds f13,f1,f12,f8
	ctx.f13.f64 = double(std::fma(float(ctx.f1.f64), float(ctx.f12.f64), float(ctx.f8.f64)));
	// fmadds f0,f11,f0,f10
	f0.f64 = double(std::fma(float(ctx.f11.f64), float(f0.f64), float(ctx.f10.f64)));
	// fmadds f12,f23,f12,f7
	ctx.f12.f64 = double(std::fma(float(f23.f64), float(ctx.f12.f64), float(ctx.f7.f64)));
	// fcmpu cr6,f13,f28
	cr6.compare(ctx.f13.f64, f28.f64);
	// blt cr6,0x82e6dadc
	if (cr6.lt) goto loc_82E6DADC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f11,3140(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3140);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f31,f11
	ctx.f10.f64 = double(float(f31.f64 * ctx.f11.f64));
	// fcmpu cr6,f13,f10
	cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// bgt cr6,0x82e6dadc
	if (cr6.gt) goto loc_82E6DADC;
	// fcmpu cr6,f12,f28
	cr6.compare(ctx.f12.f64, f28.f64);
	// blt cr6,0x82e6dadc
	if (cr6.lt) goto loc_82E6DADC;
	// fmuls f13,f30,f11
	ctx.f13.f64 = double(float(f30.f64 * ctx.f11.f64));
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bgt cr6,0x82e6dadc
	if (cr6.gt) goto loc_82E6DADC;
	// fcmpu cr6,f0,f28
	cr6.compare(f0.f64, f28.f64);
	// blt cr6,0x82e6dadc
	if (cr6.lt) goto loc_82E6DADC;
	// fcmpu cr6,f0,f10
	cr6.compare(f0.f64, ctx.f10.f64);
	// ble cr6,0x82e6e054
	if (!cr6.gt) goto loc_82E6E054;
loc_82E6DADC:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stfs f28,204(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f28,80(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f28,84(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f28,88(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x8227ef68
	sub_8227EF68(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f0.f64 = double(temp.f32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f21
	f0.f64 = double(float(f0.f64 * f21.f64));
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f21
	ctx.f13.f64 = double(float(ctx.f13.f64 * f21.f64));
	// fmuls f12,f12,f21
	ctx.f12.f64 = double(float(ctx.f12.f64 * f21.f64));
	// addi r6,r1,204
	ctx.r6.s64 = ctx.r1.s64 + 204;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// fadds f0,f29,f0
	f0.f64 = double(float(f29.f64 + f0.f64));
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f0,f27,f13
	f0.f64 = double(float(f27.f64 + ctx.f13.f64));
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f0,f26,f12
	f0.f64 = double(float(f26.f64 + ctx.f12.f64));
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82e6d660
	sub_82E6D660(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e6db50
	if (!cr0.eq) goto loc_82E6DB50;
loc_82E6DB48:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e6e058
	goto loc_82E6E058;
loc_82E6DB50:
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(f30.f64, f31.f64);
	// ble cr6,0x82e6db60
	if (!cr6.gt) goto loc_82E6DB60;
	// fmr f25,f30
	f25.f64 = f30.f64;
	// b 0x82e6db64
	goto loc_82E6DB64;
loc_82E6DB60:
	// fmr f25,f31
	ctx.fpscr.disableFlushMode();
	f25.f64 = f31.f64;
loc_82E6DB64:
	// lfs f21,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	f21.f64 = double(temp.f32);
	// fmr f1,f18
	ctx.f1.f64 = f18.f64;
	// lfs f20,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f20.f64 = double(temp.f32);
	// fsubs f26,f26,f21
	f26.f64 = static_cast<float>(f26.f64 - f21.f64);
	// lfs f19,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	f19.f64 = double(temp.f32);
	// fsubs f29,f29,f20
	f29.f64 = static_cast<float>(f29.f64 - f20.f64);
	// fsubs f27,f27,f19
	f27.f64 = static_cast<float>(f27.f64 - f19.f64);
	// bl 0x82e7f4d0
	sub_82E7F4D0(ctx, base);
	// fmr f24,f1
	ctx.fpscr.disableFlushMode();
	f24.f64 = ctx.f1.f64;
	// fmr f1,f18
	ctx.f1.f64 = f18.f64;
	// bl 0x82e7f4a0
	sub_82E7F4A0(ctx, base);
	// fmuls f0,f29,f29
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f29.f64 * f29.f64));
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f13,f24,f1
	ctx.f13.f64 = double(float(f24.f64 / ctx.f1.f64));
	// fsubs f12,f12,f21
	ctx.f12.f64 = static_cast<float>(ctx.f12.f64 - f21.f64);
	// fmadds f0,f27,f27,f0
	f0.f64 = double(std::fma(float(f27.f64), float(f27.f64), float(f0.f64)));
	// fmadds f0,f26,f26,f0
	f0.f64 = double(std::fma(float(f26.f64), float(f26.f64), float(f0.f64)));
	// fsqrts f0,f0
	f0.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// fmuls f29,f13,f0
	f29.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// fsubs f0,f0,f20
	f0.f64 = static_cast<float>(f0.f64 - f20.f64);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f19
	ctx.f13.f64 = static_cast<float>(ctx.f13.f64 - f19.f64);
	// fadds f11,f29,f25
	ctx.f11.f64 = double(float(f29.f64 + f25.f64));
	// fmuls f0,f0,f0
	f0.f64 = double(float(f0.f64 * f0.f64));
	// fmadds f0,f13,f13,f0
	f0.f64 = double(std::fma(float(ctx.f13.f64), float(ctx.f13.f64), float(f0.f64)));
	// fmadds f0,f12,f12,f0
	f0.f64 = double(std::fma(float(ctx.f12.f64), float(ctx.f12.f64), float(f0.f64)));
	// fsqrts f0,f0
	f0.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// fcmpu cr6,f0,f11
	cr6.compare(f0.f64, ctx.f11.f64);
	// bgt cr6,0x82e6db48
	if (cr6.gt) goto loc_82E6DB48;
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r11,r1,216
	r11.s64 = ctx.r1.s64 + 216;
loc_82E6DBE4:
	// stfs f28,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r11.u32 + -8, temp.u32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stfs f28,-4(r11)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r11.u32 + -4, temp.u32);
	// stfs f28,0(r11)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// bge 0x82e6dbe4
	if (!cr0.lt) goto loc_82E6DBE4;
	// lfs f5,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f0,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	f0.f64 = double(temp.f32);
	// fmr f2,f5
	ctx.f2.f64 = ctx.f5.f64;
	// lfs f12,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * f31.f64));
	// lfs f13,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * f31.f64));
	// lfs f4,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f11,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f11.f64 = double(temp.f32);
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// lfs f10,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f11,f30
	ctx.f11.f64 = double(float(ctx.f11.f64 * f30.f64));
	// lfs f9,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f30
	ctx.f10.f64 = double(float(ctx.f10.f64 * f30.f64));
	// lfs f3,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f9,f9,f30
	ctx.f9.f64 = double(float(ctx.f9.f64 * f30.f64));
	// fmr f30,f3
	f30.f64 = ctx.f3.f64;
	// lfs f8,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmr f28,f5
	f28.f64 = ctx.f5.f64;
	// lfs f6,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmr f26,f3
	f26.f64 = ctx.f3.f64;
	// lfs f7,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fadds f2,f0,f2
	ctx.f2.f64 = double(float(f0.f64 + ctx.f2.f64));
	// lfs f25,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	f25.f64 = double(temp.f32);
	// fsubs f3,f3,f12
	ctx.f3.f64 = static_cast<float>(ctx.f3.f64 - ctx.f12.f64);
	// lfs f24,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f24.f64 = double(temp.f32);
	// fmr f27,f4
	f27.f64 = ctx.f4.f64;
	// lfs f23,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f23.f64 = double(temp.f32);
	// fsubs f5,f5,f0
	ctx.f5.f64 = static_cast<float>(ctx.f5.f64 - f0.f64);
	// lfs f22,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	f22.f64 = double(temp.f32);
	// fsubs f4,f4,f13
	ctx.f4.f64 = static_cast<float>(ctx.f4.f64 - ctx.f13.f64);
	// fadds f1,f1,f13
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// fmuls f8,f8,f31
	ctx.f8.f64 = double(float(ctx.f8.f64 * f31.f64));
	// fadds f30,f30,f12
	f30.f64 = double(float(f30.f64 + ctx.f12.f64));
	// fadds f28,f28,f0
	f28.f64 = double(float(f28.f64 + f0.f64));
	// fmuls f6,f6,f31
	ctx.f6.f64 = double(float(ctx.f6.f64 * f31.f64));
	// fsubs f2,f2,f11
	ctx.f2.f64 = static_cast<float>(ctx.f2.f64 - ctx.f11.f64);
	// fsubs f3,f3,f9
	ctx.f3.f64 = static_cast<float>(ctx.f3.f64 - ctx.f9.f64);
	// fadds f27,f27,f13
	f27.f64 = double(float(f27.f64 + ctx.f13.f64));
	// fadds f26,f26,f12
	f26.f64 = double(float(f26.f64 + ctx.f12.f64));
	// fmuls f7,f7,f31
	ctx.f7.f64 = double(float(ctx.f7.f64 * f31.f64));
	// fsubs f5,f5,f11
	ctx.f5.f64 = static_cast<float>(ctx.f5.f64 - ctx.f11.f64);
	// fsubs f4,f4,f10
	ctx.f4.f64 = static_cast<float>(ctx.f4.f64 - ctx.f10.f64);
	// fsubs f1,f1,f10
	ctx.f1.f64 = static_cast<float>(ctx.f1.f64 - ctx.f10.f64);
	// fsubs f30,f30,f9
	f30.f64 = static_cast<float>(f30.f64 - ctx.f9.f64);
	// fadds f28,f28,f11
	f28.f64 = double(float(f28.f64 + ctx.f11.f64));
	// fadds f2,f2,f8
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f8.f64));
	// stfs f2,220(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// fadds f3,f3,f6
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f6.f64));
	// stfs f3,216(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// fadds f3,f27,f10
	ctx.f3.f64 = double(float(f27.f64 + ctx.f10.f64));
	// lfs f27,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f27.f64 = double(temp.f32);
	// fadds f2,f26,f9
	ctx.f2.f64 = double(float(f26.f64 + ctx.f9.f64));
	// lfs f26,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f26.f64 = double(temp.f32);
	// fsubs f27,f27,f0
	f27.f64 = static_cast<float>(f27.f64 - f0.f64);
	// fadds f5,f5,f8
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f8.f64));
	// stfs f5,208(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// fadds f4,f4,f7
	ctx.f4.f64 = double(float(ctx.f4.f64 + ctx.f7.f64));
	// stfs f4,212(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// lfs f5,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fadds f1,f1,f7
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f7.f64));
	// lfs f4,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fadds f30,f30,f6
	f30.f64 = double(float(f30.f64 + ctx.f6.f64));
	// stfs f1,224(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// fmuls f5,f5,f31
	ctx.f5.f64 = double(float(ctx.f5.f64 * f31.f64));
	// stfs f30,228(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// fadds f1,f28,f8
	ctx.f1.f64 = double(float(f28.f64 + ctx.f8.f64));
	// fmuls f4,f4,f31
	ctx.f4.f64 = double(float(ctx.f4.f64 * f31.f64));
	// lfs f30,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f30.f64 = double(temp.f32);
	// lfs f31,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f31.f64 = double(temp.f32);
	// fsubs f30,f30,f13
	f30.f64 = static_cast<float>(f30.f64 - ctx.f13.f64);
	// lfs f28,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	f28.f64 = double(temp.f32);
	// fsubs f31,f31,f0
	f31.f64 = static_cast<float>(f31.f64 - f0.f64);
	// fsubs f28,f28,f12
	f28.f64 = static_cast<float>(f28.f64 - ctx.f12.f64);
	// fsubs f26,f26,f13
	f26.f64 = static_cast<float>(f26.f64 - ctx.f13.f64);
	// fsubs f25,f25,f12
	f25.f64 = static_cast<float>(f25.f64 - ctx.f12.f64);
	// fadds f3,f3,f7
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f7.f64));
	// fadds f2,f2,f6
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f6.f64));
	// fadds f24,f0,f24
	f24.f64 = double(float(f0.f64 + f24.f64));
	// fadds f23,f23,f13
	f23.f64 = double(float(f23.f64 + ctx.f13.f64));
	// stfs f1,232(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// fadds f1,f31,f11
	ctx.f1.f64 = double(float(f31.f64 + ctx.f11.f64));
	// fadds f31,f30,f10
	f31.f64 = double(float(f30.f64 + ctx.f10.f64));
	// stfs f2,240(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// fadds f30,f28,f9
	f30.f64 = double(float(f28.f64 + ctx.f9.f64));
	// stfs f3,236(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// fsubs f28,f27,f11
	f28.f64 = static_cast<float>(f27.f64 - ctx.f11.f64);
	// li r30,0
	r30.s64 = 0;
	// fsubs f27,f26,f10
	f27.f64 = static_cast<float>(f26.f64 - ctx.f10.f64);
	// fsubs f26,f25,f9
	f26.f64 = static_cast<float>(f25.f64 - ctx.f9.f64);
	// fsubs f2,f23,f10
	ctx.f2.f64 = static_cast<float>(f23.f64 - ctx.f10.f64);
	// fadds f22,f22,f12
	f22.f64 = double(float(f22.f64 + ctx.f12.f64));
	// fsubs f3,f24,f11
	ctx.f3.f64 = static_cast<float>(f24.f64 - ctx.f11.f64);
	// fadds f1,f1,f8
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f8.f64));
	// stfs f1,244(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// fadds f31,f31,f7
	f31.f64 = double(float(f31.f64 + ctx.f7.f64));
	// stfs f31,248(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// fadds f30,f30,f6
	f30.f64 = double(float(f30.f64 + ctx.f6.f64));
	// lfs f1,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f28,f28,f8
	f28.f64 = static_cast<float>(f28.f64 - ctx.f8.f64);
	// stfs f28,256(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// lfs f28,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f28.f64 = double(temp.f32);
	// fsubs f7,f27,f7
	ctx.f7.f64 = static_cast<float>(f27.f64 - ctx.f7.f64);
	// fsubs f6,f26,f6
	ctx.f6.f64 = static_cast<float>(f26.f64 - ctx.f6.f64);
	// stfs f6,264(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// fsubs f6,f2,f5
	ctx.f6.f64 = static_cast<float>(ctx.f2.f64 - ctx.f5.f64);
	// lfs f2,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fadds f2,f2,f0
	ctx.f2.f64 = double(float(ctx.f2.f64 + f0.f64));
	// lfs f31,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	f31.f64 = double(temp.f32);
	// fsubs f0,f28,f0
	f0.f64 = static_cast<float>(f28.f64 - f0.f64);
	// lfs f27,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f27.f64 = double(temp.f32);
	// lfs f28,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	f28.f64 = double(temp.f32);
	// fsubs f25,f22,f9
	f25.f64 = static_cast<float>(f22.f64 - ctx.f9.f64);
	// fadds f1,f1,f13
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// stfs f7,260(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// fadds f31,f31,f12
	f31.f64 = double(float(f31.f64 + ctx.f12.f64));
	// stfs f6,272(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// fsubs f13,f27,f13
	ctx.f13.f64 = static_cast<float>(f27.f64 - ctx.f13.f64);
	// stfs f30,252(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// fsubs f12,f28,f12
	ctx.f12.f64 = static_cast<float>(f28.f64 - ctx.f12.f64);
	// fsubs f7,f3,f8
	ctx.f7.f64 = static_cast<float>(ctx.f3.f64 - ctx.f8.f64);
	// stfs f7,268(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// fmuls f30,f29,f29
	f30.f64 = double(float(f29.f64 * f29.f64));
	// fadds f7,f2,f11
	ctx.f7.f64 = double(float(ctx.f2.f64 + ctx.f11.f64));
	// fadds f0,f0,f11
	f0.f64 = double(float(f0.f64 + ctx.f11.f64));
	// fsubs f3,f25,f4
	ctx.f3.f64 = static_cast<float>(f25.f64 - ctx.f4.f64);
	// stfs f3,276(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// fadds f6,f1,f10
	ctx.f6.f64 = double(float(ctx.f1.f64 + ctx.f10.f64));
	// fadds f3,f31,f9
	ctx.f3.f64 = double(float(f31.f64 + ctx.f9.f64));
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// fadds f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// fsubs f11,f7,f8
	ctx.f11.f64 = static_cast<float>(ctx.f7.f64 - ctx.f8.f64);
	// stfs f11,280(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// fsubs f0,f0,f8
	f0.f64 = static_cast<float>(f0.f64 - ctx.f8.f64);
	// stfs f0,292(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// fsubs f10,f6,f5
	ctx.f10.f64 = static_cast<float>(ctx.f6.f64 - ctx.f5.f64);
	// stfs f10,284(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// fsubs f9,f3,f4
	ctx.f9.f64 = static_cast<float>(ctx.f3.f64 - ctx.f4.f64);
	// stfs f9,288(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// fsubs f13,f13,f5
	ctx.f13.f64 = static_cast<float>(ctx.f13.f64 - ctx.f5.f64);
	// stfs f13,296(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// fsubs f12,f12,f4
	ctx.f12.f64 = static_cast<float>(ctx.f12.f64 - ctx.f4.f64);
	// stfs f12,300(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 300, temp.u32);
loc_82E6DE3C:
	// mulli r11,r30,12
	r11.s64 = r30.s64 * 12;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r6,r11,r10
	ctx.r6.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82e6d4c0
	sub_82E6D4C0(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fsubs f0,f20,f0
	f0.f64 = static_cast<float>(f20.f64 - f0.f64);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fsubs f13,f19,f13
	ctx.f13.f64 = static_cast<float>(f19.f64 - ctx.f13.f64);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fsubs f12,f21,f12
	ctx.f12.f64 = static_cast<float>(f21.f64 - ctx.f12.f64);
	// fmuls f0,f0,f0
	f0.f64 = double(float(f0.f64 * f0.f64));
	// fmadds f0,f13,f13,f0
	f0.f64 = double(std::fma(float(ctx.f13.f64), float(ctx.f13.f64), float(f0.f64)));
	// fmadds f0,f12,f12,f0
	f0.f64 = double(std::fma(float(ctx.f12.f64), float(ctx.f12.f64), float(f0.f64)));
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// blt cr6,0x82e6e054
	if (cr6.lt) goto loc_82E6E054;
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
	// clrlwi r30,r11,24
	r30.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r30,8
	cr6.compare<uint32_t>(r30.u32, 8, xer);
	// blt cr6,0x82e6de3c
	if (cr6.lt) goto loc_82E6DE3C;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// li r28,0
	r28.s64 = 0;
	// addi r30,r11,-10384
	r30.s64 = r11.s64 + -10384;
loc_82E6DEAC:
	// rlwinm r31,r28,2,0,29
	r31.u64 = rotl64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// lbzx r11,r31,r30
	r11.u64 = PPC_LOAD_U8(r31.u32 + r30.u32);
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add r6,r11,r10
	ctx.r6.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82e6d4c0
	sub_82E6D4C0(ctx, base);
	// addi r10,r30,1
	ctx.r10.s64 = r30.s64 + 1;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lbzx r10,r31,r10
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + ctx.r10.u32);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// stfs f0,176(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,180(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,184(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bl 0x82e6d4c0
	sub_82E6D4C0(ctx, base);
	// addi r10,r30,2
	ctx.r10.s64 = r30.s64 + 2;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lbzx r10,r31,r10
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + ctx.r10.u32);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// stfs f0,192(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,196(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,200(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bl 0x82e6d4c0
	sub_82E6D4C0(ctx, base);
	// addi r10,r30,3
	ctx.r10.s64 = r30.s64 + 3;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lbzx r10,r31,r10
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + ctx.r10.u32);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// stfs f0,160(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,164(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,168(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bl 0x82e6d4c0
	sub_82E6D4C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82e6d788
	sub_82E6D788(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x82e6e054
	if (cr6.eq) goto loc_82E6E054;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e6d568
	sub_82E6D568(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e6e054
	if (!cr0.eq) goto loc_82E6E054;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e6d568
	sub_82E6D568(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e6e054
	if (!cr0.eq) goto loc_82E6E054;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e6d568
	sub_82E6D568(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e6e054
	if (!cr0.eq) goto loc_82E6E054;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e6d568
	sub_82E6D568(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e6e054
	if (!cr0.eq) goto loc_82E6E054;
	// addi r11,r28,1
	r11.s64 = r28.s64 + 1;
	// clrlwi r28,r11,24
	r28.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r28,6
	cr6.compare<uint32_t>(r28.u32, 6, xer);
	// blt cr6,0x82e6deac
	if (cr6.lt) goto loc_82E6DEAC;
	// b 0x82e6db48
	goto loc_82E6DB48;
loc_82E6E054:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E6E058:
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// addi r12,r1,-40
	r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82ca752c
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82E6D8A8) {
	__imp__sub_82E6D8A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6E068) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r3,r11,-17576
	ctx.r3.s64 = r11.s64 + -17576;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6E068) {
	__imp__sub_82E6E068(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6E078) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// bl 0x82e855b0
	sub_82E855B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e6e0a0
	if (!cr0.eq) goto loc_82E6E0A0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e6e0d4
	goto loc_82E6E0D4;
loc_82E6E0A0:
	// lis r11,-31947
	r11.s64 = -2093678592;
	// addi r4,r11,-7468
	ctx.r4.s64 = r11.s64 + -7468;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r3,-720(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-720) );
	// bl 0x82267be0
	sub_82267BE0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// stw r3,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e6e0d0
	if (!cr6.eq) goto loc_82E6E0D0;
	// li r4,100
	ctx.r4.s64 = 100;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e92258
	sub_82E92258(ctx, base);
loc_82E6E0D0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E6E0D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6E078) {
	__imp__sub_82E6E078(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6E0E8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6E0E8) {
	__imp__sub_82E6E0E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6E0F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,60(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(60) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x82e6e104
	if (!cr6.eq) goto loc_82E6E104;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82E6E104:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12) );
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82e6e12c
	if (!cr6.lt) goto loc_82E6E12C;
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(24) );
	// mulli r11,r11,20
	r11.s64 = r11.s64 * 20;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x82e6e130
	if (!cr6.eq) goto loc_82E6E130;
loc_82E6E12C:
	// li r11,0
	r11.s64 = 0;
loc_82E6E130:
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r10,1
	ctx.r3.u64 = ctx.r10.u64 ^ 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6E0F0) {
	__imp__sub_82E6E0F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6E148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be0
	// stfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, f29.u64);
	// stfd f30,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(60) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x82e6e384
	if (!cr6.eq) goto loc_82E6E384;
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(92) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e6e28c
	if (cr6.eq) goto loc_82E6E28C;
	// lis r27,-31948
	r27.s64 = -2093744128;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,-720(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(-720) );
	// lfs f29,3080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	f29.f64 = double(temp.f32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e6e1a0
	if (cr0.eq) goto loc_82E6E1A0;
	// lfs f30,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f30.f64 = double(temp.f32);
	// b 0x82e6e1a4
	goto loc_82E6E1A4;
loc_82E6E1A0:
	// fmr f30,f29
	ctx.fpscr.disableFlushMode();
	f30.f64 = f29.f64;
loc_82E6E1A4:
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(64) );
	// lis r11,-31948
	r11.s64 = -2093744128;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r28,r11,-15368
	r28.s64 = r11.s64 + -15368;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// bl 0x821e8238
	sub_821E8238(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e6e1d0
	if (cr0.eq) goto loc_82E6E1D0;
	// lfs f30,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f30.f64 = double(temp.f32);
loc_82E6E1D0:
	// fmuls f13,f30,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f30.f64 * f30.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r29,r26,4
	r29.s64 = r26.s64 + 4;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(92) );
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lfs f0,2636(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2636);
	f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// bl 0x82ec2508
	sub_82EC2508(ctx, base);
	// b 0x82e6e284
	goto loc_82E6E284;
loc_82E6E1F4:
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(64) );
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// beq cr6,0x82e6e27c
	if (cr6.eq) goto loc_82E6E27C;
	// lwz r11,-720(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + int32_t(-720) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e6e220
	if (cr0.eq) goto loc_82E6E220;
	// lfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f31.f64 = double(temp.f32);
	// b 0x82e6e224
	goto loc_82E6E224;
loc_82E6E220:
	// fmr f31,f29
	ctx.fpscr.disableFlushMode();
	f31.f64 = f29.f64;
loc_82E6E224:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x821e8238
	sub_821E8238(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e6e23c
	if (cr0.eq) goto loc_82E6E23C;
	// lfs f31,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f31.f64 = double(temp.f32);
loc_82E6E23C:
	// fadds f0,f31,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f31.f64 + f30.f64));
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,8(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(f0.f64 * f0.f64));
	// lfs f0,0(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	f0.f64 = static_cast<float>(ctx.f13.f64 - f0.f64);
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = static_cast<float>(ctx.f12.f64 - ctx.f13.f64);
	// lfs f12,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f10
	ctx.f12.f64 = static_cast<float>(ctx.f12.f64 - ctx.f10.f64);
	// fmuls f0,f0,f0
	f0.f64 = double(float(f0.f64 * f0.f64));
	// fmadds f0,f13,f13,f0
	f0.f64 = double(std::fma(float(ctx.f13.f64), float(ctx.f13.f64), float(f0.f64)));
	// fmadds f0,f12,f12,f0
	f0.f64 = double(std::fma(float(ctx.f12.f64), float(ctx.f12.f64), float(f0.f64)));
	// fcmpu cr6,f0,f11
	cr6.compare(f0.f64, ctx.f11.f64);
	// blt cr6,0x82e6e39c
	if (cr6.lt) goto loc_82E6E39C;
loc_82E6E27C:
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(92) );
	// bl 0x82ec1f20
	sub_82EC1F20(ctx, base);
loc_82E6E284:
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x82e6e1f4
	if (!cr0.eq) goto loc_82E6E1F4;
loc_82E6E28C:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(64) );
	// li r30,0
	r30.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(72) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e6e2f8
	if (!cr6.gt) goto loc_82E6E2F8;
loc_82E6E2A8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(64) );
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82e6a9c0
	sub_82E6A9C0(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82e6e2e4
	if (!cr6.eq) goto loc_82E6E2E4;
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(80) );
	// addi r4,r26,4
	ctx.r4.s64 = r26.s64 + 4;
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(72) );
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e6e39c
	if (!cr0.eq) goto loc_82E6E39C;
loc_82E6E2E4:
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(64) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(72) );
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82e6e2a8
	if (cr6.lt) goto loc_82E6E2A8;
loc_82E6E2F8:
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(64) );
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,3972
	r11.s64 = r11.s64 + 3972;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r11,60(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(60) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e6e37c
	if (!cr6.gt) goto loc_82E6E37C;
loc_82E6E32C:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(64) );
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82e6a920
	sub_82E6A920(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82e6e368
	if (!cr6.eq) goto loc_82E6E368;
	// lwz r5,76(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + int32_t(76) );
	// addi r4,r26,4
	ctx.r4.s64 = r26.s64 + 4;
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(68) );
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e6e39c
	if (!cr0.eq) goto loc_82E6E39C;
loc_82E6E368:
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(64) );
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(60) );
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82e6e32c
	if (cr6.lt) goto loc_82E6E32C;
loc_82E6E37C:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + int32_t(0) );
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
loc_82E6E384:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E6E388:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82ca2c30
	return;
loc_82E6E39C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e6e388
	goto loc_82E6E388;
}

PPC_WEAK_FUNC(sub_82E6E148) {
	__imp__sub_82E6E148(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6E3A8) {
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
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(64) );
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lwz r10,44(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(44) );
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(60) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e6e3ec
	if (cr6.eq) goto loc_82E6E3EC;
	// li r11,1
	r11.s64 = 1;
	// stb r11,16(r31)
	PPC_STORE_U8(r31.u32 + 16, r11.u8);
loc_82E6E3EC:
	// lbz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U8(r31.u32 + 16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6E3A8) {
	__imp__sub_82E6E3A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6E408) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82e92330
	sub_82E92330(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6E408) {
	__imp__sub_82E6E408(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6E440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be4
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f29.u64);
	// stfd f30,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r27,0
	r27.s64 = 0;
	// addi r10,r10,-30992
	ctx.r10.s64 = ctx.r10.s64 + -30992;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(80) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e6e4d4
	if (cr0.eq) goto loc_82E6E4D4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e6e4d4
	if (cr0.eq) goto loc_82E6E4D4;
	// lwz r11,64(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(64) );
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(32) );
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e6e4d4
	if (!cr0.eq) goto loc_82E6E4D4;
loc_82E6E4CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e6e770
	goto loc_82E6E770;
loc_82E6E4D4:
	// lbz r11,84(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 84);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bne 0x82e6e4f4
	if (!cr0.eq) goto loc_82E6E4F4;
	// bl 0x82e923e0
	sub_82E923E0(ctx, base);
	// b 0x82e6e770
	goto loc_82E6E770;
loc_82E6E4F4:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = rotl64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,60(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(60) );
	// lwz r6,56(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + int32_t(56) );
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(24) );
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// lwzx r11,r7,r10
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// lwzx r10,r6,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// mulli r11,r11,20
	r11.s64 = r11.s64 * 20;
	// mulli r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 * 20;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + f0.f64));
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + f0.f64));
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// lfs f11,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fadds f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 + f0.f64));
	// lfs f0,3056(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3056);
	f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 * f0.f64));
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82e923e0
	sub_82E923E0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e6e4cc
	if (cr0.eq) goto loc_82E6E4CC;
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(64) );
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// mr r31,r27
	r31.u64 = r27.u64;
	// lis r28,-31948
	r28.s64 = -2093744128;
	// lwz r11,72(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(72) );
	// lfs f29,3084(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3084);
	f29.f64 = double(temp.f32);
	// lfs f31,27524(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 27524);
	f31.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f30,3080(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f30.f64 = double(temp.f32);
	// ble cr6,0x82e6e674
	if (!cr6.gt) goto loc_82E6E674;
loc_82E6E5AC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82e6a9c0
	sub_82E6A9C0(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82e6e660
	if (!cr6.eq) goto loc_82E6E660;
	// lwz r5,80(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + int32_t(80) );
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,72(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(72) );
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e6e660
	if (cr0.eq) goto loc_82E6E660;
	// lwz r11,-720(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(-720) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e6e5f8
	if (cr0.eq) goto loc_82E6E5F8;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// b 0x82e6e5fc
	goto loc_82E6E5FC;
loc_82E6E5F8:
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = f30.f64;
loc_82E6E5FC:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(80) );
	// fmuls f11,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(f0.f64 * f31.f64));
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	f0.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	f0.f64 = static_cast<float>(ctx.f12.f64 - f0.f64);
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,56(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = static_cast<float>(ctx.f12.f64 - ctx.f13.f64);
	// lfs f12,60(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f10,f12
	ctx.f12.f64 = static_cast<float>(ctx.f10.f64 - ctx.f12.f64);
	// fmuls f0,f0,f0
	f0.f64 = double(float(f0.f64 * f0.f64));
	// fmadds f0,f13,f13,f0
	f0.f64 = double(std::fma(float(ctx.f13.f64), float(ctx.f13.f64), float(f0.f64)));
	// fmadds f0,f12,f12,f0
	f0.f64 = double(std::fma(float(ctx.f12.f64), float(ctx.f12.f64), float(f0.f64)));
	// fsqrts f0,f0
	f0.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// fcmpu cr6,f0,f11
	cr6.compare(f0.f64, ctx.f11.f64);
	// ble cr6,0x82e6e648
	if (!cr6.gt) goto loc_82E6E648;
	// fmr f0,f29
	f0.f64 = f29.f64;
	// b 0x82e6e654
	goto loc_82E6E654;
loc_82E6E648:
	// fsubs f0,f11,f0
	ctx.fpscr.disableFlushMode();
	f0.f64 = static_cast<float>(ctx.f11.f64 - f0.f64);
	// lfs f13,88(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
loc_82E6E654:
	// lfs f13,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// stfs f0,0(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 0, temp.u32);
loc_82E6E660:
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(64) );
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r11,72(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(72) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82e6e5ac
	if (cr6.lt) goto loc_82E6E5AC;
loc_82E6E674:
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(64) );
	// mr r31,r27
	r31.u64 = r27.u64;
	// addi r11,r11,3972
	r11.s64 = r11.s64 + 3972;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,116(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,120(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r11,60(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(60) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e6e76c
	if (!cr6.gt) goto loc_82E6E76C;
loc_82E6E6A8:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82e6a920
	sub_82E6A920(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82e6e758
	if (!cr6.eq) goto loc_82E6E758;
	// lwz r5,76(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + int32_t(76) );
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,68(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(68) );
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e6e758
	if (cr0.eq) goto loc_82E6E758;
	// lwz r11,-720(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(-720) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e6e6f4
	if (cr0.eq) goto loc_82E6E6F4;
	// lfs f11,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// b 0x82e6e6f8
	goto loc_82E6E6F8;
loc_82E6E6F4:
	// fmr f11,f30
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = f30.f64;
loc_82E6E6F8:
	// lfs f13,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * f31.f64));
	// lfs f0,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	f0.f64 = static_cast<float>(f0.f64 - ctx.f13.f64);
	// lfs f12,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = static_cast<float>(ctx.f13.f64 - ctx.f12.f64);
	// lfs f10,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f10
	ctx.f12.f64 = static_cast<float>(ctx.f12.f64 - ctx.f10.f64);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f0,f0,f0,f13
	f0.f64 = double(std::fma(float(f0.f64), float(f0.f64), float(ctx.f13.f64)));
	// fmadds f0,f12,f12,f0
	f0.f64 = double(std::fma(float(ctx.f12.f64), float(ctx.f12.f64), float(f0.f64)));
	// fsqrts f0,f0
	f0.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// fcmpu cr6,f0,f11
	cr6.compare(f0.f64, ctx.f11.f64);
	// ble cr6,0x82e6e740
	if (!cr6.gt) goto loc_82E6E740;
	// fmr f0,f29
	f0.f64 = f29.f64;
	// b 0x82e6e74c
	goto loc_82E6E74C;
loc_82E6E740:
	// fsubs f0,f11,f0
	ctx.fpscr.disableFlushMode();
	f0.f64 = static_cast<float>(ctx.f11.f64 - f0.f64);
	// lfs f13,88(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
loc_82E6E74C:
	// lfs f13,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// stfs f0,0(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 0, temp.u32);
loc_82E6E758:
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(64) );
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r11,60(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(60) );
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82e6e6a8
	if (cr6.lt) goto loc_82E6E6A8;
loc_82E6E76C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E6E770:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82E6E440) {
	__imp__sub_82E6E440(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6E788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r10,-17580(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-17580) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,-17580(r11)
	PPC_STORE_U32(r11.u32 + -17580, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6E788) {
	__imp__sub_82E6E788(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6E7A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-30392
	r11.s64 = r11.s64 + -30392;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82e921c0
	sub_82E921C0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e6e7e8
	if (cr0.eq) goto loc_82E6E7E8;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,-9868(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E6E7E8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6E7A0) {
	__imp__sub_82E6E7A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6E808) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,196(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,-30984
	r11.s64 = r11.s64 + -30984;
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,200(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	f0.f64 = double(temp.f32);
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// stfs f0,204(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r11.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82E6E858:
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82e6e858
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E6E858;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stb r30,280(r1)
	PPC_STORE_U8(ctx.r1.u32 + 280, r30.u8);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	f0.f64 = double(temp.f32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	f0.f64 = double(temp.f32);
	// li r11,16
	r11.s64 = 16;
	// stfs f0,108(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82E6E894:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82e6e894
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E6E894;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stb r30,184(r1)
	PPC_STORE_U8(ctx.r1.u32 + 184, r30.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// addi r11,r11,6288
	r11.s64 = r11.s64 + 6288;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x821ae8c0
	sub_821AE8C0(ctx, base);
	// lis r11,-31952
	r11.s64 = -2094006272;
	// addi r11,r11,-9856
	r11.s64 = r11.s64 + -9856;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(36) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e6e8dc
	if (!cr6.eq) goto loc_82E6E8DC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x82e6e900
	goto loc_82E6E900;
loc_82E6E8DC:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(36) );
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lfs f1,3084(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E6E900:
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6E808) {
	__imp__sub_82E6E808(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6E928) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82e92540
	sub_82E92540(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r8,-32025
	ctx.r8.s64 = -2098790400;
	// addi r10,r11,-30392
	ctx.r10.s64 = r11.s64 + -30392;
	// lis r11,-32241
	r11.s64 = -2112946176;
	// lis r9,-32023
	ctx.r9.s64 = -2098659328;
	// li r7,-1
	ctx.r7.s64 = -1;
	// addi r8,r8,-6136
	ctx.r8.s64 = ctx.r8.s64 + -6136;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r9,r9,16936
	ctx.r9.s64 = ctx.r9.s64 + 16936;
	// lfs f0,27524(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 27524);
	f0.f64 = double(temp.f32);
	// li r11,0
	r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f0,88(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// stw r7,60(r31)
	PPC_STORE_U32(r31.u32 + 60, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r8,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r8.u32);
	// stw r9,72(r31)
	PPC_STORE_U32(r31.u32 + 72, ctx.r9.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r11.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stb r10,84(r31)
	PPC_STORE_U8(r31.u32 + 84, ctx.r10.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6E928) {
	__imp__sub_82E6E928(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6E9A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e6e9cc
	if (cr0.eq) goto loc_82E6E9CC;
	// bl 0x82e6e928
	sub_82E6E928(ctx, base);
	// b 0x82e6e9d0
	goto loc_82E6E9D0;
loc_82E6E9CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E6E9D0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6E9A8) {
	__imp__sub_82E6E9A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6E9E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82e82a28
	sub_82E82A28(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f0.f64 = double(temp.f32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// stfs f0,36(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// addi r10,r11,-30280
	ctx.r10.s64 = r11.s64 + -30280;
	// stfs f0,40(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// li r11,0
	r11.s64 = 0;
	// stfs f0,44(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// addi r10,r10,3972
	ctx.r10.s64 = ctx.r10.s64 + 3972;
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,52(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,56(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 56, temp.u32);
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stfs f13,60(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 60, temp.u32);
	// stfs f0,64(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 64, temp.u32);
	// stfs f0,68(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 68, temp.u32);
	// stfs f0,72(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 72, temp.u32);
	// stfs f0,80(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// stfs f0,84(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 84, temp.u32);
	// stfs f0,88(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// lwz r10,-720(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(-720) );
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82e6ea90
	if (cr0.eq) goto loc_82E6EA90;
	// lfs f12,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// b 0x82e6ea98
	goto loc_82E6EA98;
loc_82E6EA90:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,3080(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	ctx.f12.f64 = double(temp.f32);
loc_82E6EA98:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,188(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 188, temp.u32);
	// stw r11,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,192(r31)
	PPC_STORE_U32(r31.u32 + 192, r11.u32);
	// lfs f13,3056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3056);
	ctx.f13.f64 = double(temp.f32);
	// li r10,20
	ctx.r10.s64 = 20;
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f13,172(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 172, temp.u32);
	// stb r10,176(r31)
	PPC_STORE_U8(r31.u32 + 176, ctx.r10.u8);
	// stb r10,184(r31)
	PPC_STORE_U8(r31.u32 + 184, ctx.r10.u8);
	// stfs f0,200(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 200, temp.u32);
	// stfs f0,204(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 204, temp.u32);
	// stfs f0,208(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 208, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6E9E0) {
	__imp__sub_82E6E9E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6EAE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r3,r11,-17300
	ctx.r3.s64 = r11.s64 + -17300;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6EAE8) {
	__imp__sub_82E6EAE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6EAF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,-30280
	r11.s64 = r11.s64 + -30280;
	// lwz r3,192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(192) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x82e6eb38
	if (cr0.eq) goto loc_82E6EB38;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E6EB38:
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e6eb58
	if (cr0.eq) goto loc_82E6EB58;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(0) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E6EB58:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e82a48
	sub_82E82A48(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6EAF8) {
	__imp__sub_82E6EAF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6EB78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(92) );
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e6eb8c
	if (!cr6.eq) goto loc_82E6EB8C;
	// li r11,0
	r11.s64 = 0;
loc_82E6EB8C:
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(100) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e6eb9c
	if (!cr6.eq) goto loc_82E6EB9C;
	// li r11,0
	r11.s64 = 0;
loc_82E6EB9C:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6EB78) {
	__imp__sub_82E6EB78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6EBA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,116(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(116) );
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e6ebc8
	if (!cr6.eq) goto loc_82E6EBC8;
	// lwz r10,120(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(120) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e6ebc8
	if (!cr6.eq) goto loc_82E6EBC8;
	// li r11,0
	r11.s64 = 0;
loc_82E6EBC8:
	// lwz r10,124(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(124) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e6ebd8
	if (!cr6.eq) goto loc_82E6EBD8;
	// li r11,0
	r11.s64 = 0;
loc_82E6EBD8:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6EBA8) {
	__imp__sub_82E6EBA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6EBE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,140(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(140) );
	// li r11,1
	r11.s64 = 1;
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x82e6ebf4
	if (!cr6.eq) goto loc_82E6EBF4;
	// li r11,0
	r11.s64 = 0;
loc_82E6EBF4:
	// lwz r10,144(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(144) );
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x82e6ec04
	if (!cr6.eq) goto loc_82E6EC04;
	// li r11,0
	r11.s64 = 0;
loc_82E6EC04:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6EBE0) {
	__imp__sub_82E6EBE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6EC10) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// lfs f0,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 60);
	f0.f64 = double(temp.f32);
	// lfs f13,56(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,60(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,56(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	f0.f64 = static_cast<float>(ctx.f12.f64 - f0.f64);
	// fsubs f13,f11,f13
	ctx.f13.f64 = static_cast<float>(ctx.f11.f64 - ctx.f13.f64);
	// lfs f12,52(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,52(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = static_cast<float>(ctx.f12.f64 - ctx.f11.f64);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x82e7f5c8
	sub_82E7F5C8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	f0.f64 = double(temp.f32);
	// lfs f13,2628(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2628);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x82e6ec88
	if (!cr6.gt) goto loc_82E6EC88;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lfs f13,-30284(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -30284);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	f0.f64 = static_cast<float>(f0.f64 - ctx.f13.f64);
	// b 0x82e6eca4
	goto loc_82E6ECA4;
loc_82E6EC88:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lfs f13,-30288(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -30288);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x82e6eca4
	if (!cr6.lt) goto loc_82E6ECA4;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lfs f13,-30284(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -30284);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
loc_82E6ECA4:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f0,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 76, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e7f500
	sub_82E7F500(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,64(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 64, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 68, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,72(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 72, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6EC10) {
	__imp__sub_82E6EC10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6ECE0) {
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
	// lwz r11,32(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(32) );
	// lfs f0,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f12,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f11,60(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f11,f0
	f0.f64 = static_cast<float>(ctx.f11.f64 - f0.f64);
	// lfs f10,56(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,52(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f10,f13
	ctx.f13.f64 = static_cast<float>(ctx.f10.f64 - ctx.f13.f64);
	// fsubs f12,f11,f12
	ctx.f12.f64 = static_cast<float>(ctx.f11.f64 - ctx.f12.f64);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x82e7f5c8
	sub_82E7F5C8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e7f500
	sub_82E7F500(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6ECE0) {
	__imp__sub_82E6ECE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6ED58) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// bl 0x82260978
	sub_82260978(ctx, base);
	// lfs f13,76(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,152(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 152);
	f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// stfs f0,164(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 164, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6ED58) {
	__imp__sub_82E6ED58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6EDA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
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
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r30,r31,64
	r30.s64 = r31.s64 + 64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82e7f5c8
	sub_82E7F5C8(ctx, base);
	// bl 0x82ca3b80
	sub_82CA3B80(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 44);
	f0.f64 = double(temp.f32);
	// fmr f13,f0
	ctx.f13.f64 = f0.f64;
	// lfs f31,3092(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3092);
	f31.f64 = double(temp.f32);
	// extsw r11,r3
	r11.s64 = ctx.r3.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f30,3140(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3140);
	f30.f64 = double(temp.f32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fmuls f0,f0,f30
	f0.f64 = double(float(f0.f64 * f30.f64));
	// fmsubs f0,f0,f31,f13
	f0.f64 = double(std::fma(float(f0.f64), float(f31.f64), -float(ctx.f13.f64)));
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x82ca3b80
	sub_82CA3B80(ctx, base);
	// extsw r11,r3
	r11.s64 = ctx.r3.s32;
	// lfs f0,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 44);
	f0.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fmr f13,f0
	ctx.f13.f64 = f0.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fmuls f0,f0,f30
	f0.f64 = double(float(f0.f64 * f30.f64));
	// fmsubs f0,f0,f31,f13
	f0.f64 = double(std::fma(float(f0.f64), float(f31.f64), -float(ctx.f13.f64)));
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x82e7f500
	sub_82E7F500(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// stb r9,4(r11)
	PPC_STORE_U8(r11.u32 + 4, ctx.r9.u8);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	f0.f64 = double(temp.f32);
	// stfs f0,24(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// lfs f0,60(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 60);
	f0.f64 = double(temp.f32);
	// stfs f0,28(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// stb r9,32(r11)
	PPC_STORE_U8(r11.u32 + 32, ctx.r9.u8);
	// stb r9,4(r11)
	PPC_STORE_U8(r11.u32 + 4, ctx.r9.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// lfd f30,-40(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6EDA0) {
	__imp__sub_82E6EDA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6EEF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f0,3084(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// ble cr6,0x82e6ef5c
	if (!cr6.gt) goto loc_82E6EF5C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lis r11,-31948
	r11.s64 = -2093744128;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-16196
	ctx.r4.s64 = r11.s64 + -16196;
	// lwz r3,20(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// bl 0x821e8238
	sub_821E8238(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e6ef58
	if (cr0.eq) goto loc_82E6EF58;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// ble cr6,0x82e6ef58
	if (!cr6.gt) goto loc_82E6EF58;
	// stfs f0,20(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// b 0x82e6ef5c
	goto loc_82E6EF5C;
loc_82E6EF58:
	// stfs f31,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
loc_82E6EF5C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6EEF8) {
	__imp__sub_82E6EEF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6EF78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,16(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(16) );
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(4) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82e6efac
	if (!cr0.eq) goto loc_82E6EFAC;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,-30984
	r11.s64 = r11.s64 + -30984;
	// addi r10,r10,-30984
	ctx.r10.s64 = ctx.r10.s64 + -30984;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// blr 
	return;
loc_82E6EFAC:
	// lwz r9,20(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(20) );
	// li r8,1
	ctx.r8.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r9.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// stw r9,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r9.u32);
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + int32_t(0) );
	// stb r8,16(r11)
	PPC_STORE_U8(r11.u32 + 16, ctx.r8.u8);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82e6f028
	if (!cr6.eq) goto loc_82E6F028;
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(12) );
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82e6f00c
	if (!cr0.eq) goto loc_82E6F00C;
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, r11.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(8) );
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(12) );
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(12) );
	// stw r10,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// b 0x82e6f04c
	goto loc_82E6F04C;
loc_82E6F00C:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// stw r9,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r9.u32);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(12) );
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r11.u32);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, r11.u32);
	// b 0x82e6f04c
	goto loc_82E6F04C;
loc_82E6F028:
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// beq 0x82e6f048
	if (cr0.eq) goto loc_82E6F048;
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, r11.u32);
	// b 0x82e6f04c
	goto loc_82E6F04C;
loc_82E6F048:
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
loc_82E6F04C:
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r10,r10,-30984
	ctx.r10.s64 = ctx.r10.s64 + -30984;
	// addi r9,r9,-30984
	ctx.r9.s64 = ctx.r9.s64 + -30984;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6EF78) {
	__imp__sub_82E6EF78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6F070) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// li r3,216
	ctx.r3.s64 = 216;
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e6f0a0
	if (cr0.eq) goto loc_82E6F0A0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82e6e9e0
	sub_82E6E9E0(ctx, base);
	// b 0x82e6f0a4
	goto loc_82E6F0A4;
loc_82E6F0A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E6F0A4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6F070) {
	__imp__sub_82E6F070(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6F0B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82e6eaf8
	sub_82E6EAF8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e6f0f4
	if (cr0.eq) goto loc_82E6F0F4;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,-9868(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E6F0F4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6F0B8) {
	__imp__sub_82E6F0B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6F110) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82e6f138
	if (!cr6.eq) goto loc_82E6F138;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e6f44c
	goto loc_82E6F44C;
loc_82E6F138:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826b4b60
	sub_826B4B60(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,-30064
	ctx.r4.s64 = r11.s64 + -30064;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e6f17c
	if (!cr0.eq) goto loc_82E6F17C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b568c0
	sub_82B568C0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e6f440
	if (cr0.eq) goto loc_82E6F440;
	// bl 0x82ca5860
	sub_82CA5860(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,40(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 40, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e6f44c
	goto loc_82E6F44C;
loc_82E6F17C:
	// lis r11,-32241
	r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-19724
	ctx.r4.s64 = r11.s64 + -19724;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e6f1c4
	if (!cr0.eq) goto loc_82E6F1C4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b568c0
	sub_82B568C0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x82e6f440
	if (cr0.eq) goto loc_82E6F440;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r3,-720(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-720) );
	// bl 0x82e7c2f0
	sub_82E7C2F0(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// stw r3,32(r29)
	PPC_STORE_U32(r29.u32 + 32, ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
	// b 0x82e6f44c
	goto loc_82E6F44C;
loc_82E6F1C4:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-30076
	ctx.r4.s64 = r11.s64 + -30076;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e6f224
	if (!cr0.eq) goto loc_82E6F224;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b568c0
	sub_82B568C0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e6f440
	if (cr0.eq) goto loc_82E6F440;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r11,-720(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-720) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e6f204
	if (cr0.eq) goto loc_82E6F204;
	// lfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f31.f64 = double(temp.f32);
	// b 0x82e6f20c
	goto loc_82E6F20C;
loc_82E6F204:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f31.f64 = double(temp.f32);
loc_82E6F20C:
	// bl 0x82ca5860
	sub_82CA5860(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// stfs f0,36(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 36, temp.u32);
	// b 0x82e6f44c
	goto loc_82E6F44C;
loc_82E6F224:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-30092
	ctx.r4.s64 = r11.s64 + -30092;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e6f260
	if (!cr0.eq) goto loc_82E6F260;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b568c0
	sub_82B568C0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e6f440
	if (cr0.eq) goto loc_82E6F440;
	// bl 0x82ca5860
	sub_82CA5860(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,44(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 44, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e6f44c
	goto loc_82E6F44C;
loc_82E6F260:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-30116
	ctx.r4.s64 = r11.s64 + -30116;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e6f29c
	if (!cr0.eq) goto loc_82E6F29C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b568c0
	sub_82B568C0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e6f440
	if (cr0.eq) goto loc_82E6F440;
	// bl 0x82ca5860
	sub_82CA5860(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,148(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 148, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e6f44c
	goto loc_82E6F44C;
loc_82E6F29C:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-30132
	ctx.r4.s64 = r11.s64 + -30132;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e6f2fc
	if (!cr0.eq) goto loc_82E6F2FC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b568c0
	sub_82B568C0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e6f440
	if (cr0.eq) goto loc_82E6F440;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r11,-720(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-720) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e6f2dc
	if (cr0.eq) goto loc_82E6F2DC;
	// lfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f31.f64 = double(temp.f32);
	// b 0x82e6f2e4
	goto loc_82E6F2E4;
loc_82E6F2DC:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f31.f64 = double(temp.f32);
loc_82E6F2E4:
	// bl 0x82ca5860
	sub_82CA5860(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// stfs f0,188(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 188, temp.u32);
	// b 0x82e6f44c
	goto loc_82E6F44C;
loc_82E6F2FC:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-30152
	ctx.r4.s64 = r11.s64 + -30152;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e6f338
	if (!cr0.eq) goto loc_82E6F338;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b568c0
	sub_82B568C0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e6f440
	if (cr0.eq) goto loc_82E6F440;
	// bl 0x82ca3b30
	sub_82CA3B30(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,184(r29)
	PPC_STORE_U8(r29.u32 + 184, r11.u8);
	// b 0x82e6f44c
	goto loc_82E6F44C;
loc_82E6F338:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-30172
	ctx.r4.s64 = r11.s64 + -30172;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e6f374
	if (!cr0.eq) goto loc_82E6F374;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b568c0
	sub_82B568C0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e6f440
	if (cr0.eq) goto loc_82E6F440;
	// bl 0x82ca3b30
	sub_82CA3B30(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,176(r29)
	PPC_STORE_U8(r29.u32 + 176, r11.u8);
	// b 0x82e6f44c
	goto loc_82E6F44C;
loc_82E6F374:
	// lis r11,-32244
	r11.s64 = -2113142784;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-14084
	ctx.r4.s64 = r11.s64 + -14084;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e6f3d8
	if (!cr0.eq) goto loc_82E6F3D8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b568c0
	sub_82B568C0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e6f3d0
	if (cr0.eq) goto loc_82E6F3D0;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r11,-720(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-720) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e6f3b4
	if (cr0.eq) goto loc_82E6F3B4;
	// lfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f31.f64 = double(temp.f32);
	// b 0x82e6f3bc
	goto loc_82E6F3BC;
loc_82E6F3B4:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f31.f64 = double(temp.f32);
loc_82E6F3BC:
	// bl 0x82ca5860
	sub_82CA5860(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(f0.f64 * f31.f64));
	// bl 0x82e6eef8
	sub_82E6EEF8(ctx, base);
loc_82E6F3D0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e6f44c
	goto loc_82E6F44C;
loc_82E6F3D8:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-30204
	ctx.r4.s64 = r11.s64 + -30204;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e6f440
	if (!cr0.eq) goto loc_82E6F440;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b568c0
	sub_82B568C0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e6f3d0
	if (cr0.eq) goto loc_82E6F3D0;
	// bl 0x82ca5860
	sub_82CA5860(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,24(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// frsp f0,f1
	f0.f64 = double(float(ctx.f1.f64));
	// lfs f11,3084(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,3080(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	ctx.f12.f64 = double(temp.f32);
loc_82E6F41C:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f11.f64);
	// blt cr6,0x82e6f430
	if (cr6.lt) goto loc_82E6F430;
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// bgt cr6,0x82e6f430
	if (cr6.gt) goto loc_82E6F430;
	// fmr f13,f0
	ctx.f13.f64 = f0.f64;
loc_82E6F430:
	// fcmpu cr6,f13,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f13.f64);
	// bne cr6,0x82e6f41c
	if (!cr6.eq) goto loc_82E6F41C;
	// stfs f13,24(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r29.u32 + 24, temp.u32);
	// b 0x82e6f3d0
	goto loc_82E6F3D0;
loc_82E6F440:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e9fbe8
	sub_82E9FBE8(ctx, base);
loc_82E6F44C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E6F110) {
	__imp__sub_82E6F110(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6F458) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// bl 0x82260978
	sub_82260978(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f12,76(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 76);
	ctx.f12.f64 = double(temp.f32);
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// lfs f0,3084(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	f0.f64 = double(temp.f32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lwz r10,52(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(52) );
	// stfs f0,48(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// stfs f13,164(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 164, temp.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stb r30,196(r31)
	PPC_STORE_U8(r31.u32 + 196, r30.u8);
	// lfs f0,3800(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3800);
	f0.f64 = double(temp.f32);
	// stfs f0,164(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 164, temp.u32);
	// stfs f0,160(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 160, temp.u32);
	// stfs f0,168(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 168, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6F458) {
	__imp__sub_82E6F458(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6F4E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,180(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(180) );
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82e6f518
	goto loc_82E6F518;
loc_82E6F4F4:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// stb r10,16(r9)
	PPC_STORE_U8(ctx.r9.u32 + 16, ctx.r10.u8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(12) );
	// stw r7,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r7.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// stw r8,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r8.u32);
	// stw r9,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r9.u32);
loc_82E6F518:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82e6f4f4
	if (!cr6.eq) goto loc_82E6F4F4;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
	// lwz r11,192(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(192) );
	// b 0x82e6f558
	goto loc_82E6F558;
loc_82E6F534:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// stb r10,24(r9)
	PPC_STORE_U8(ctx.r9.u32 + 24, ctx.r10.u8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(20) );
	// stw r7,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r7.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// stw r8,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r8.u32);
	// stw r9,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r9.u32);
loc_82E6F558:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82e6f534
	if (!cr6.eq) goto loc_82E6F534;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
	// stb r10,196(r3)
	PPC_STORE_U8(ctx.r3.u32 + 196, ctx.r10.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6F4E8) {
	__imp__sub_82E6F4E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6F578) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x82e6f604
	if (cr6.eq) goto loc_82E6F604;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x82e6f604
	if (cr6.eq) goto loc_82E6F604;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82e6f780
	if (!cr6.eq) goto loc_82E6F780;
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// lfs f0,64(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 64);
	f0.f64 = double(temp.f32);
	// li r30,1
	r30.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f0,8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// lfs f0,68(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 68);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// lfs f0,72(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 72);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// stb r30,4(r11)
	PPC_STORE_U8(r11.u32 + 4, r30.u8);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	f0.f64 = double(temp.f32);
	// stfs f0,24(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// lfs f0,60(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 60);
	f0.f64 = double(temp.f32);
	// stfs f0,28(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(124) );
	// stb r9,32(r11)
	PPC_STORE_U8(r11.u32 + 32, ctx.r9.u8);
	// b 0x82e6f6c8
	goto loc_82E6F6C8;
loc_82E6F604:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r30,1
	r30.s64 = 1;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// lfs f0,60(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 60);
	f0.f64 = double(temp.f32);
	// lfs f12,56(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,52(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lfs f13,60(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,3972
	r11.s64 = r11.s64 + 3972;
	// lfs f10,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = static_cast<float>(f0.f64 - ctx.f13.f64);
	// fsubs f0,f12,f10
	f0.f64 = static_cast<float>(ctx.f12.f64 - ctx.f10.f64);
	// lfs f12,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = static_cast<float>(ctx.f11.f64 - ctx.f12.f64);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fcmpu cr6,f12,f11
	cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bne cr6,0x82e6f674
	if (!cr6.eq) goto loc_82E6F674;
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// bne cr6,0x82e6f674
	if (!cr6.eq) goto loc_82E6F674;
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// li r11,0
	r11.s64 = 0;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// beq cr6,0x82e6f678
	if (cr6.eq) goto loc_82E6F678;
loc_82E6F674:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82E6F678:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e6f780
	if (cr0.eq) goto loc_82E6F780;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f31,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f31.f64 = double(temp.f32);
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x8227eda8
	sub_8227EDA8(ctx, base);
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e6f6d0
	if (cr6.eq) goto loc_82E6F6D0;
	// rotlwi r11,r11,0
	r11.u64 = rotl32(r11.u32, 0);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stb r30,4(r11)
	PPC_STORE_U8(r11.u32 + 4, r30.u8);
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(128) );
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
loc_82E6F6C8:
	// stb r30,4(r11)
	PPC_STORE_U8(r11.u32 + 4, r30.u8);
	// b 0x82e6f780
	goto loc_82E6F780;
loc_82E6F6D0:
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(116) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82e6f6e8
	if (!cr0.eq) goto loc_82E6F6E8;
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e6f780
	if (cr6.eq) goto loc_82E6F780;
loc_82E6F6E8:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x82e6f780
	if (!cr6.eq) goto loc_82E6F780;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e6f714
	if (cr6.eq) goto loc_82E6F714;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stb r30,4(r11)
	PPC_STORE_U8(r11.u32 + 4, r30.u8);
	// addi r4,r10,-14816
	ctx.r4.s64 = ctx.r10.s64 + -14816;
	// b 0x82e6f76c
	goto loc_82E6F76C;
loc_82E6F714:
	// lis r11,-32240
	r11.s64 = -2112880640;
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2092(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2092);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82e6f73c
	if (!cr6.lt) goto loc_82E6F73C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// lfs f0,3800(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3800);
	f0.f64 = double(temp.f32);
loc_82E6F734:
	// stfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// b 0x82e6f760
	goto loc_82E6F760;
loc_82E6F73C:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lfs f0,-16948(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -16948);
	f0.f64 = double(temp.f32);
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(120) );
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x82e6f75c
	if (!cr6.gt) goto loc_82E6F75C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,3080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	f0.f64 = double(temp.f32);
	// b 0x82e6f734
	goto loc_82E6F734;
loc_82E6F75C:
	// stfs f31,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
loc_82E6F760:
	// stb r30,4(r11)
	PPC_STORE_U8(r11.u32 + 4, r30.u8);
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r4,r11,-14816
	ctx.r4.s64 = r11.s64 + -14816;
loc_82E6F76C:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// bl 0x82e76fd0
	sub_82E76FD0(ctx, base);
	// stb r30,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, r30.u8);
	// stfs f31,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
loc_82E6F780:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
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

PPC_WEAK_FUNC(sub_82E6F578) {
	__imp__sub_82E6F578(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6F7A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r11,r11,-27288
	r11.s64 = r11.s64 + -27288;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// stw r29,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r29.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r29.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r29.u32);
	// beq cr6,0x82e6f8e4
	if (cr6.eq) goto loc_82E6F8E4;
	// lis r11,2340
	r11.s64 = 153354240;
	// li r3,-1
	ctx.r3.s64 = -1;
	// ori r11,r11,37449
	r11.u64 = r11.u64 | 37449;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// mulli r11,r30,28
	r11.s64 = r30.s64 * 28;
	// ble cr6,0x82e6f800
	if (!cr6.gt) goto loc_82E6F800;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82E6F800:
	// li r10,-5
	ctx.r10.s64 = -5;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82e6f810
	if (cr6.gt) goto loc_82E6F810;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_82E6F810:
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e6f878
	if (cr0.eq) goto loc_82E6F878;
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// addic. r10,r30,-1
	xer.ca = r30.u32 > 0;
	ctx.r10.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// blt 0x82e6f870
	if (cr0.lt) goto loc_82E6F870;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// addi r11,r9,12
	r11.s64 = ctx.r9.s64 + 12;
	// addi r8,r8,-30208
	ctx.r8.s64 = ctx.r8.s64 + -30208;
	// lfs f0,3084(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3084);
	f0.f64 = double(temp.f32);
loc_82E6F844:
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + -8, temp.u32);
	// stfs f0,-4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + -4, temp.u32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// addi r9,r9,28
	ctx.r9.s64 = ctx.r9.s64 + 28;
	// stb r29,12(r11)
	PPC_STORE_U8(r11.u32 + 12, r29.u8);
	// addi r11,r11,28
	r11.s64 = r11.s64 + 28;
	// bge 0x82e6f844
	if (!cr0.lt) goto loc_82E6F844;
loc_82E6F870:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// b 0x82e6f87c
	goto loc_82E6F87C;
loc_82E6F878:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82E6F87C:
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r29,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r29.u32);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// ble cr6,0x82e6f8d0
	if (!cr6.gt) goto loc_82E6F8D0;
	// li r11,28
	r11.s64 = 28;
loc_82E6F89C:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// addi r8,r9,-28
	ctx.r8.s64 = ctx.r9.s64 + -28;
	// stw r8,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r8.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// addi r11,r11,28
	r11.s64 = r11.s64 + 28;
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(16) );
	// stw r9,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r9.u32);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x82e6f89c
	if (cr6.lt) goto loc_82E6F89C;
loc_82E6F8D0:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mulli r11,r11,28
	r11.s64 = r11.s64 * 28;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r29,-8(r11)
	PPC_STORE_U32(r11.u32 + -8, r29.u32);
loc_82E6F8E4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E6F7A0) {
	__imp__sub_82E6F7A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6F8F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,16(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(16) );
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + int32_t(4) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82e6f924
	if (!cr0.eq) goto loc_82E6F924;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,-17100
	r11.s64 = r11.s64 + -17100;
	// addi r10,r10,-30984
	ctx.r10.s64 = ctx.r10.s64 + -30984;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// blr 
	return;
loc_82E6F924:
	// lwz r9,20(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(20) );
	// li r8,1
	ctx.r8.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r9.u32);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// stw r9,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r9.u32);
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lfs f0,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// lfs f0,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// stb r8,24(r11)
	PPC_STORE_U8(r11.u32 + 24, ctx.r8.u8);
	// bne cr6,0x82e6f9b0
	if (!cr6.eq) goto loc_82E6F9B0;
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(12) );
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82e6f994
	if (!cr0.eq) goto loc_82E6F994;
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, r11.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(8) );
	// stw r10,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r10.u32);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(12) );
	// stw r10,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r10.u32);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(12) );
	// stw r10,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r10.u32);
	// b 0x82e6f9d4
	goto loc_82E6F9D4;
loc_82E6F994:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// stw r9,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r9.u32);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + int32_t(12) );
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, r11.u32);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, r11.u32);
	// b 0x82e6f9d4
	goto loc_82E6F9D4;
loc_82E6F9B0:
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(16) );
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, r11.u32);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r9,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r9.u32);
	// beq 0x82e6f9d0
	if (cr0.eq) goto loc_82E6F9D0;
	// stw r11,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, r11.u32);
	// b 0x82e6f9d4
	goto loc_82E6F9D4;
loc_82E6F9D0:
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
loc_82E6F9D4:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r10,r10,-17100
	ctx.r10.s64 = ctx.r10.s64 + -17100;
	// addi r9,r9,-30984
	ctx.r9.s64 = ctx.r9.s64 + -30984;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6F8F0) {
	__imp__sub_82E6F8F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6F9F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm. r11,r4,0,30,30
	r11.u64 = rotl64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e6fa6c
	if (cr0.eq) goto loc_82E6FA6C;
	// lwz r11,-4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(-4) );
	// addi r30,r31,-4
	r30.s64 = r31.s64 + -4;
	// mulli r10,r11,28
	ctx.r10.s64 = r11.s64 * 28;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// blt 0x82e6fa48
	if (cr0.lt) goto loc_82E6FA48;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r9,r9,-30984
	ctx.r9.s64 = ctx.r9.s64 + -30984;
loc_82E6FA38:
	// addi r10,r10,-28
	ctx.r10.s64 = ctx.r10.s64 + -28;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// bge 0x82e6fa38
	if (!cr0.lt) goto loc_82E6FA38;
loc_82E6FA48:
	// clrlwi. r11,r4,31
	r11.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e6fa64
	if (cr0.eq) goto loc_82E6FA64;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,-9868(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E6FA64:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x82e6fa98
	goto loc_82E6FA98;
loc_82E6FA6C:
	// lis r11,-32243
	r11.s64 = -2113077248;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,-30984
	r11.s64 = r11.s64 + -30984;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x82e6fa94
	if (cr0.eq) goto loc_82E6FA94;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,-9868(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E6FA94:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82E6FA98:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6F9F8) {
	__imp__sub_82E6F9F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6FAB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be4
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f29.u64);
	// stfd f30,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r4,r11,3696
	ctx.r4.s64 = r11.s64 + 3696;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// bl 0x822674d0
	sub_822674D0(ctx, base);
	// lis r28,-31948
	r28.s64 = -2093744128;
	// stw r3,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r3.u32);
	// lis r11,-31947
	r11.s64 = -2093678592;
	// addi r4,r11,-7468
	ctx.r4.s64 = r11.s64 + -7468;
	// lwz r3,-720(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + int32_t(-720) );
	// bl 0x82267be0
	sub_82267BE0(ctx, base);
	// lis r11,-31948
	r11.s64 = -2093744128;
	// stw r3,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// lwz r3,-720(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + int32_t(-720) );
	// addi r4,r11,6048
	ctx.r4.s64 = r11.s64 + 6048;
	// bl 0x82267be0
	sub_82267BE0(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// stw r3,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// lwz r3,100(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(100) );
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82e6fb6c
	if (cr0.eq) goto loc_82E6FB6C;
	// lis r11,-31947
	r11.s64 = -2093678592;
	// addi r4,r11,-8020
	ctx.r4.s64 = r11.s64 + -8020;
	// bl 0x82e80228
	sub_82E80228(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lis r11,-31947
	r11.s64 = -2093678592;
	// stw r3,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r3.u32);
	// addi r4,r11,-6916
	ctx.r4.s64 = r11.s64 + -6916;
	// lwz r11,20(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// lwz r3,100(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(100) );
	// bl 0x82e80228
	sub_82E80228(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lis r11,-31947
	r11.s64 = -2093678592;
	// stw r3,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r3.u32);
	// addi r4,r11,-7192
	ctx.r4.s64 = r11.s64 + -7192;
	// lwz r11,20(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// lwz r3,100(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + int32_t(100) );
	// bl 0x82e80228
	sub_82E80228(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(r31.u32 + 112, ctx.r3.u32);
loc_82E6FB6C:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lis r11,-31948
	r11.s64 = -2093744128;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-15920
	ctx.r4.s64 = r11.s64 + -15920;
	// lwz r3,20(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// bl 0x821e8238
	sub_821E8238(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lis r11,-31948
	r11.s64 = -2093744128;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r3,132(r31)
	PPC_STORE_U32(r31.u32 + 132, ctx.r3.u32);
	// addi r4,r11,-13712
	ctx.r4.s64 = r11.s64 + -13712;
	// lwz r3,20(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// bl 0x821e8238
	sub_821E8238(ctx, base);
	// stw r3,136(r31)
	PPC_STORE_U32(r31.u32 + 136, ctx.r3.u32);
	// bl 0x82260978
	sub_82260978(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,-30012
	ctx.r4.s64 = r11.s64 + -30012;
	// bl 0x82e79c50
	sub_82E79C50(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-30044
	ctx.r4.s64 = r11.s64 + -30044;
	// stw r10,140(r31)
	PPC_STORE_U32(r31.u32 + 140, ctx.r10.u32);
	// bl 0x82e79c50
	sub_82E79C50(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r3,144(r31)
	PPC_STORE_U32(r31.u32 + 144, ctx.r3.u32);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// lfs f31,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f31.f64 = double(temp.f32);
	// lis r11,-31952
	r11.s64 = -2094006272;
	// addi r11,r11,-9560
	r11.s64 = r11.s64 + -9560;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,64(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 64, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 68, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// lis r11,-31948
	r11.s64 = -2093744128;
	// stfs f0,72(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 72, temp.u32);
	// addi r11,r11,3972
	r11.s64 = r11.s64 + 3972;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,84(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 84, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// stfs f31,76(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 76, temp.u32);
	// beq cr6,0x82e6feb4
	if (cr6.eq) goto loc_82E6FEB4;
	// li r11,0
	r11.s64 = 0;
	// stfs f31,40(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// lwz r11,-720(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(-720) );
	// lfs f29,3080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	f29.f64 = double(temp.f32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e6fc50
	if (cr0.eq) goto loc_82E6FC50;
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82e6fc54
	goto loc_82E6FC54;
loc_82E6FC50:
	// fmr f13,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f29.f64;
loc_82E6FC54:
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r5,1
	ctx.r5.s64 = 1;
	// stfs f31,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// addi r4,r11,-16472
	ctx.r4.s64 = r11.s64 + -16472;
	// stfs f29,152(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 152, temp.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2740(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2740);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f13,36(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// lfs f0,2704(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2704);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f0,148(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 148, temp.u32);
	// lfs f30,3056(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3056);
	f30.f64 = double(temp.f32);
	// stfs f30,156(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 156, temp.u32);
	// lwz r3,20(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// bl 0x821e8238
	sub_821E8238(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lis r11,-31948
	r11.s64 = -2093744128;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-15368
	ctx.r4.s64 = r11.s64 + -15368;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,20(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// bl 0x821e8238
	sub_821E8238(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lis r11,-31948
	r11.s64 = -2093744128;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-16196
	ctx.r4.s64 = r11.s64 + -16196;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,20(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// bl 0x821e8238
	sub_821E8238(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e6fce4
	if (cr0.eq) goto loc_82E6FCE4;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// b 0x82e6fcfc
	goto loc_82E6FCFC;
loc_82E6FCE4:
	// lwz r11,-720(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(-720) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e6fcf8
	if (cr0.eq) goto loc_82E6FCF8;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// b 0x82e6fcfc
	goto loc_82E6FCFC;
loc_82E6FCF8:
	// fmr f0,f29
	ctx.fpscr.disableFlushMode();
	f0.f64 = f29.f64;
loc_82E6FCFC:
	// stfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stfs f31,172(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 172, temp.u32);
	// bne cr6,0x82e6fd38
	if (!cr6.eq) goto loc_82E6FD38;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82e6fd30
	if (!cr6.eq) goto loc_82E6FD30;
	// lwz r11,-720(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(-720) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e6fd28
	if (cr0.eq) goto loc_82E6FD28;
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// b 0x82e6fd3c
	goto loc_82E6FD3C;
loc_82E6FD28:
	// fmr f0,f29
	ctx.fpscr.disableFlushMode();
	f0.f64 = f29.f64;
	// b 0x82e6fd3c
	goto loc_82E6FD3C;
loc_82E6FD30:
	// lfs f0,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	f0.f64 = double(temp.f32);
	// b 0x82e6fd3c
	goto loc_82E6FD3C;
loc_82E6FD38:
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	f0.f64 = double(temp.f32);
loc_82E6FD3C:
	// fmuls f0,f0,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f0.f64 * f30.f64));
	// stfs f0,172(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 172, temp.u32);
	// lwz r11,-720(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(-720) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e6fd54
	if (cr0.eq) goto loc_82E6FD54;
	// lfs f29,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f29.f64 = double(temp.f32);
loc_82E6FD54:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,2708(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2708);
	f0.f64 = double(temp.f32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// fmuls f13,f29,f0
	ctx.f13.f64 = double(float(f29.f64 * f0.f64));
	// stfs f13,188(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 188, temp.u32);
	// lfs f0,-31004(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -31004);
	f0.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// bl 0x82e82b18
	sub_82E82B18(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e6feb4
	if (cr0.eq) goto loc_82E6FEB4;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-15092
	ctx.r4.s64 = r11.s64 + -15092;
	// bl 0x82e76fd0
	sub_82E76FD0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-13988
	ctx.r4.s64 = r11.s64 + -13988;
	// stw r10,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r10.u32);
	// bl 0x82e76fd0
	sub_82E76FD0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lis r11,-31948
	r11.s64 = -2093744128;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-14264
	ctx.r4.s64 = r11.s64 + -14264;
	// stw r10,120(r31)
	PPC_STORE_U32(r31.u32 + 120, ctx.r10.u32);
	// bl 0x82e76fd0
	sub_82E76FD0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lis r11,-31948
	r11.s64 = -2093744128;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-14540
	ctx.r4.s64 = r11.s64 + -14540;
	// stw r10,124(r31)
	PPC_STORE_U32(r31.u32 + 124, ctx.r10.u32);
	// bl 0x82e76fd0
	sub_82E76FD0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(40) );
	// stw r10,128(r31)
	PPC_STORE_U32(r31.u32 + 128, ctx.r10.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e6feb4
	if (cr0.eq) goto loc_82E6FEB4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(44) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e6feb4
	if (cr0.eq) goto loc_82E6FEB4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(48) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e6feb4
	if (cr0.eq) goto loc_82E6FEB4;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e6fe68
	if (cr0.eq) goto loc_82E6FE68;
	// lbz r4,184(r31)
	ctx.r4.u64 = PPC_LOAD_U8(r31.u32 + 184);
	// bl 0x82e6f7a0
	sub_82E6F7A0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x82e6fe6c
	goto loc_82E6FE6C;
loc_82E6FE68:
	// li r11,0
	r11.s64 = 0;
loc_82E6FE6C:
	// li r3,28
	ctx.r3.s64 = 28;
	// stw r11,192(r31)
	PPC_STORE_U32(r31.u32 + 192, r11.u32);
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e6fe90
	if (cr0.eq) goto loc_82E6FE90;
	// lbz r4,176(r31)
	ctx.r4.u64 = PPC_LOAD_U8(r31.u32 + 176);
	// bl 0x82e92de8
	sub_82E92DE8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x82e6fe94
	goto loc_82E6FE94;
loc_82E6FE90:
	// li r11,0
	r11.s64 = 0;
loc_82E6FE94:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r11.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12) );
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e6feb8
	goto loc_82E6FEB8;
loc_82E6FEB4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E6FEB8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82E6FAB0) {
	__imp__sub_82E6FAB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E6FED0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f29{};
	PPCRegister f30{};
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
	// stfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f29.u64);
	// stfd f30,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x82e7019c
	if (cr6.lt) goto loc_82E7019C;
	// beq cr6,0x82e70130
	if (cr6.eq) goto loc_82E70130;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x82e7009c
	if (cr6.lt) goto loc_82E7009C;
	// beq cr6,0x82e6ff94
	if (cr6.eq) goto loc_82E6FF94;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// bge cr6,0x82e701a4
	if (!cr6.lt) goto loc_82E701A4;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// addi r30,r31,80
	r30.s64 = r31.s64 + 80;
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// lfs f0,60(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 60);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(92) );
	// lfs f1,20(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(44) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(92) );
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(40) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82e701a4
	if (!cr6.eq) goto loc_82E701A4;
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(92) );
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82e701a4
	goto loc_82E701A4;
loc_82E6FF94:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(96) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lfs f29,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f29.f64 = double(temp.f32);
	// beq 0x82e6ffbc
	if (cr0.eq) goto loc_82E6FFBC;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r5,r31,200
	ctx.r5.s64 = r31.s64 + 200;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// bl 0x822a8fd8
	sub_822A8FD8(ctx, base);
loc_82E6FFBC:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(92) );
	// lfs f0,172(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 172);
	f0.f64 = double(temp.f32);
	// lfs f13,2636(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2636);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// fmuls f2,f0,f13
	ctx.f2.f64 = double(float(f0.f64 * ctx.f13.f64));
	// lfs f31,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	f31.f64 = double(temp.f32);
	// lfs f30,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	f30.f64 = double(temp.f32);
	// lfs f13,3140(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3140);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,48(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(48) );
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(f0.f64 * ctx.f13.f64));
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(92) );
	// lfs f1,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(44) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(92) );
	// addi r4,r31,200
	ctx.r4.s64 = r31.s64 + 200;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(40) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82e70054
	if (!cr6.eq) goto loc_82E70054;
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(92) );
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e6f578
	sub_82E6F578(ctx, base);
loc_82E70054:
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(92) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(64) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e7007c
	if (cr0.eq) goto loc_82E7007C;
	// li r11,1
	r11.s64 = 1;
	// stfs f29,160(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 160, temp.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_82E7007C:
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(92) );
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(48) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82e701a4
	goto loc_82E701A4;
loc_82E7009C:
	// lbz r11,196(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 196);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82e700f8
	if (!cr0.eq) goto loc_82E700F8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(56) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e700e0
	if (cr0.eq) goto loc_82E700E0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(60) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e700f8
	if (!cr0.eq) goto loc_82E700F8;
loc_82E700E0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(68) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82e701a4
	goto loc_82E701A4;
loc_82E700F8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(64) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82e701a4
	if (!cr6.eq) goto loc_82E701A4;
	// lbz r11,197(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 197);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e700e0
	if (cr0.eq) goto loc_82E700E0;
	// li r11,3
	r11.s64 = 3;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// b 0x82e701a4
	goto loc_82E701A4;
loc_82E70130:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(96) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e70168
	if (cr0.eq) goto loc_82E70168;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r5,r31,200
	ctx.r5.s64 = r31.s64 + 200;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// bl 0x82ec1cc8
	sub_82EC1CC8(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(96) );
	// lwz r4,20(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// lfs f1,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	ctx.f1.f64 = double(temp.f32);
	// addi r5,r4,52
	ctx.r5.s64 = ctx.r4.s64 + 52;
	// bl 0x822a8fd8
	sub_822A8FD8(ctx, base);
loc_82E70168:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// lfs f0,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	f0.f64 = double(temp.f32);
	// stfs f0,84(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 84, temp.u32);
	// lfs f0,60(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 60);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// bl 0x82e6f578
	sub_82E6F578(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e6eda0
	sub_82E6EDA0(ctx, base);
	// b 0x82e701a4
	goto loc_82E701A4;
loc_82E7019C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e6f578
	sub_82E6F578(ctx, base);
loc_82E701A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// lfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f30,-40(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E6FED0) {
	__imp__sub_82E6FED0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E701C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// bl 0x82ca2be8
	// addi r12,r1,-40
	r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82ca7508
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// lwz r11,192(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(192) );
	// b 0x82e70210
	goto loc_82E70210;
loc_82E701EC:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// stb r30,24(r10)
	PPC_STORE_U8(ctx.r10.u32 + 24, r30.u8);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// stw r8,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r8.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
loc_82E70210:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e701ec
	if (!cr6.eq) goto loc_82E701EC;
	// stw r30,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r30.u32);
	// stw r30,20(r11)
	PPC_STORE_U32(r11.u32 + 20, r30.u32);
	// bl 0x82260978
	sub_82260978(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lfs f13,76(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,156(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 156);
	f0.f64 = double(temp.f32);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// stfs f0,168(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 168, temp.u32);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	f0.f64 = double(temp.f32);
	// lfs f13,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bne cr6,0x82e70278
	if (!cr6.eq) goto loc_82E70278;
	// lfs f0,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	f0.f64 = double(temp.f32);
	// lfs f13,56(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bne cr6,0x82e70278
	if (!cr6.eq) goto loc_82E70278;
	// lfs f0,60(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	f0.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f13,60(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// beq cr6,0x82e7027c
	if (cr6.eq) goto loc_82E7027C;
loc_82E70278:
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
loc_82E7027C:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82e7028c
	if (cr0.eq) goto loc_82E7028C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e703e4
	goto loc_82E703E4;
loc_82E7028C:
	// lfs f10,52(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// lis r9,-31952
	ctx.r9.s64 = -2094006272;
	// lfs f11,52(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// fsubs f11,f10,f11
	ctx.f11.f64 = static_cast<float>(ctx.f10.f64 - ctx.f11.f64);
	// lfs f9,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,56(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// addi r9,r9,-9536
	ctx.r9.s64 = ctx.r9.s64 + -9536;
	// fsubs f10,f9,f10
	ctx.f10.f64 = static_cast<float>(ctx.f9.f64 - ctx.f10.f64);
	// lfs f8,60(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,60(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 60);
	ctx.f9.f64 = double(temp.f32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// fsubs f9,f8,f9
	ctx.f9.f64 = static_cast<float>(ctx.f8.f64 - ctx.f9.f64);
	// lfs f12,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	f0.f64 = double(temp.f32);
	// lfs f13,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * f0.f64));
	// fmuls f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f6,f9,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmsubs f12,f11,f12,f7
	ctx.f12.f64 = double(std::fma(float(ctx.f11.f64), float(ctx.f12.f64), -float(ctx.f7.f64)));
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmsubs f0,f10,f0,f6
	f0.f64 = double(std::fma(float(ctx.f10.f64), float(f0.f64), -float(ctx.f6.f64)));
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmsubs f0,f9,f13,f8
	f0.f64 = double(std::fma(float(ctx.f9.f64), float(ctx.f13.f64), -float(ctx.f8.f64)));
	// stfs f0,108(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x8227ef68
	sub_8227EF68(ctx, base);
	// lbz r10,184(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 184);
	// lfs f31,188(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 188);
	f31.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82e703d4
	if (cr0.eq) goto loc_82E703D4;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f30,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f30.f64 = double(temp.f32);
	// lfs f29,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	f29.f64 = double(temp.f32);
	// mr r28,r30
	r28.u64 = r30.u64;
	// lfs f28,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	f28.f64 = double(temp.f32);
	// addi r29,r10,-17100
	r29.s64 = ctx.r10.s64 + -17100;
loc_82E70320:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r4,192(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(192) );
	// fmuls f0,f28,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f28.f64 * f31.f64));
	// fmuls f13,f29,f31
	ctx.f13.f64 = double(float(f29.f64 * f31.f64));
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// fmuls f12,f30,f31
	ctx.f12.f64 = double(float(f30.f64 * f31.f64));
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// lfs f11,52(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,56(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// beq 0x82e70384
	if (cr0.eq) goto loc_82E70384;
	// fadds f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 + f0.f64));
	// stfs f0,120(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f0,60(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 60);
	f0.f64 = double(temp.f32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f0,f0,f12
	f0.f64 = double(float(f0.f64 + ctx.f12.f64));
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// bl 0x82e6f8f0
	sub_82E6F8F0(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// b 0x82e703c0
	goto loc_82E703C0;
loc_82E70384:
	// fsubs f0,f11,f0
	ctx.fpscr.disableFlushMode();
	f0.f64 = static_cast<float>(ctx.f11.f64 - f0.f64);
	// stfs f0,136(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lfs f0,60(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 60);
	f0.f64 = double(temp.f32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// fsubs f13,f10,f13
	ctx.f13.f64 = static_cast<float>(ctx.f10.f64 - ctx.f13.f64);
	// fsubs f0,f0,f12
	f0.f64 = static_cast<float>(f0.f64 - ctx.f12.f64);
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f0,144(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// bl 0x82e6f8f0
	sub_82E6F8F0(ctx, base);
	// lfs f0,188(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 188);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fadds f31,f31,f0
	f31.f64 = double(float(f31.f64 + f0.f64));
loc_82E703C0:
	// addi r10,r28,1
	ctx.r10.s64 = r28.s64 + 1;
	// lbz r9,184(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 184);
	// clrlwi r28,r10,24
	r28.u64 = ctx.r10.u32 & 0xFF;
	// cmplw cr6,r28,r9
	cr6.compare<uint32_t>(r28.u32, ctx.r9.u32, xer);
	// blt cr6,0x82e70320
	if (cr6.lt) goto loc_82E70320;
loc_82E703D4:
	// li r11,1
	r11.s64 = 1;
	// stb r30,212(r31)
	PPC_STORE_U8(r31.u32 + 212, r30.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,196(r31)
	PPC_STORE_U8(r31.u32 + 196, r11.u8);
loc_82E703E4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-40
	r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82ca7554
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82E701C8) {
	__imp__sub_82E701C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E703F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be4
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f29.u64);
	// stfd f30,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lfs f0,56(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 56);
	f0.f64 = double(temp.f32);
	// stb r28,197(r31)
	PPC_STORE_U8(r31.u32 + 197, r28.u8);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// lfs f13,56(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-31952
	r11.s64 = -2094006272;
	// fsubs f0,f0,f13
	f0.f64 = static_cast<float>(f0.f64 - ctx.f13.f64);
	// addi r11,r11,-9536
	r11.s64 = r11.s64 + -9536;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f30,f13,f0
	f30.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f29,f13,f0
	f29.f64 = double(float(ctx.f13.f64 * f0.f64));
	// bl 0x82260978
	sub_82260978(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(144) );
	// lwz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// bl 0x82e6c3a0
	sub_82E6C3A0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e70744
	if (cr0.eq) goto loc_82E70744;
	// lwz r11,192(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(192) );
	// lbz r8,212(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 212);
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// beq 0x82e704a0
	if (cr0.eq) goto loc_82E704A0;
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_82E7048C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x82e7048c
	if (cr6.lt) goto loc_82E7048C;
loc_82E704A0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e704c4
	if (!cr6.eq) goto loc_82E704C4;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
loc_82E704B0:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(144) );
	// bl 0x82e7a7d0
	sub_82E7A7D0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e70748
	goto loc_82E70748;
loc_82E704C4:
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fadds f0,f0,f29
	f0.f64 = double(float(f0.f64 + f29.f64));
	// fadds f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 + f30.f64));
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f12,f31,f12
	ctx.f12.f64 = double(float(f31.f64 + ctx.f12.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stb r10,212(r31)
	PPC_STORE_U8(r31.u32 + 212, ctx.r10.u8);
	// bl 0x82e6ece0
	sub_82E6ECE0(ctx, base);
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// lwz r30,8(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// b 0x82e70530
	goto loc_82E70530;
loc_82E7050C:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f2,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,40(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82e6d8a8
	sub_82E6D8A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e70620
	if (!cr0.eq) goto loc_82E70620;
	// lwz r30,12(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + int32_t(12) );
loc_82E70530:
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// bne 0x82e7050c
	if (!cr0.eq) goto loc_82E7050C;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// stfs f0,228(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// addi r29,r11,-30984
	r29.s64 = r11.s64 + -30984;
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	f0.f64 = double(temp.f32);
	// stfs f0,232(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	f0.f64 = double(temp.f32);
	// li r11,16
	r11.s64 = 16;
	// stfs f0,236(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// stw r29,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, r29.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82E7056C:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82e7056c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E7056C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stb r28,312(r1)
	PPC_STORE_U8(ctx.r1.u32 + 312, r28.u8);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r30,r11,6288
	r30.s64 = r11.s64 + 6288;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r11,20(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// bl 0x821ae8c0
	sub_821AE8C0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r29.u32);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// lfs f0,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	f0.f64 = double(temp.f32);
	// stfs f0,132(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	f0.f64 = double(temp.f32);
	// stfs f0,136(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lfs f0,60(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 60);
	f0.f64 = double(temp.f32);
	// stfs f0,140(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82E705D0:
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82e705d0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E705D0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stb r28,216(r1)
	PPC_STORE_U8(ctx.r1.u32 + 216, r28.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x821ae8c0
	sub_821AE8C0(ctx, base);
	// lis r11,-31952
	r11.s64 = -2094006272;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r11,r11,-9856
	r11.s64 = r11.s64 + -9856;
	// lwz r7,20(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(20) );
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(36) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f31,3084(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	f31.f64 = double(temp.f32);
	// bne cr6,0x82e70650
	if (!cr6.eq) goto loc_82E70650;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// b 0x82e7066c
	goto loc_82E7066C;
loc_82E70620:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
loc_82E70624:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stb r28,197(r31)
	PPC_STORE_U8(r31.u32 + 197, r28.u8);
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(144) );
	// lwz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// bl 0x82e7a7d0
	sub_82E7A7D0(ctx, base);
	// lbz r11,184(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 184);
	// lbz r10,212(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 212);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// b 0x82e70748
	goto loc_82E70748;
loc_82E70650:
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(36) );
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E7066C:
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// bne 0x82e70624
	if (!cr0.eq) goto loc_82E70624;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(92) );
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// addi r4,r11,52
	ctx.r4.s64 = r11.s64 + 52;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(80) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e70620
	if (cr0.eq) goto loc_82E70620;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(92) );
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// addi r5,r11,52
	ctx.r5.s64 = r11.s64 + 52;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(80) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e70620
	if (cr0.eq) goto loc_82E70620;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(96) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e70704
	if (cr0.eq) goto loc_82E70704;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f1,172(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 172);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82ec2508
	sub_82EC2508(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82e70624
	if (!cr0.eq) goto loc_82E70624;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(96) );
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x822a8fd8
	sub_822A8FD8(ctx, base);
loc_82E70704:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,200(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 200, temp.u32);
	// stfs f13,204(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 204, temp.u32);
	// stfs f12,208(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 208, temp.u32);
	// stfs f0,80(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// lfs f0,204(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 204);
	f0.f64 = double(temp.f32);
	// stfs f0,84(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 84, temp.u32);
	// lfs f0,208(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 208);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// stb r11,197(r31)
	PPC_STORE_U8(r31.u32 + 197, r11.u8);
	// lwz r5,20(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// b 0x82e704b0
	goto loc_82E704B0;
loc_82E70744:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E70748:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// lfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82E703F8) {
	__imp__sub_82E703F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E70760) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(112) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e707b4
	if (cr0.eq) goto loc_82E707B4;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// bl 0x822d1b30
	sub_822D1B30(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82e707b4
	if (cr0.eq) goto loc_82E707B4;
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// b 0x82e70820
	goto loc_82E70820;
loc_82E707B4:
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r31,r11,-15920
	r31.s64 = r11.s64 + -15920;
	// li r29,-1
	r29.s64 = -1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,20(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// li r30,-1
	r30.s64 = -1;
	// bl 0x821e8238
	sub_821E8238(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e707e4
	if (cr0.eq) goto loc_82E707E4;
	// lwz r29,4(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
loc_82E707E4:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821e8238
	sub_821E8238(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e70800
	if (cr0.eq) goto loc_82E70800;
	// lwz r30,4(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
loc_82E70800:
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(r29.s32, -1, xer);
	// beq cr6,0x82e7081c
	if (cr6.eq) goto loc_82E7081C;
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(r30.s32, -1, xer);
	// beq cr6,0x82e7081c
	if (cr6.eq) goto loc_82E7081C;
	// cmpw cr6,r29,r30
	cr6.compare<int32_t>(r29.s32, r30.s32, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x82e70820
	if (!cr6.eq) goto loc_82E70820;
loc_82E7081C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E70820:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82E70760) {
	__imp__sub_82E70760(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E70828) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r3,108(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(108) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e70888
	if (cr0.eq) goto loc_82E70888;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lfs f0,3040(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3040);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r4,20(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// bl 0x82e6a558
	sub_82E6A558(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e70888
	if (!cr0.eq) goto loc_82E70888;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82e708c4
	goto loc_82E708C4;
loc_82E70888:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(8) );
	// lfs f0,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 52);
	f0.f64 = double(temp.f32);
	// lfs f13,56(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,60(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// lfs f11,52(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	f0.f64 = static_cast<float>(f0.f64 - ctx.f11.f64);
	// lfs f10,56(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f13,f10
	ctx.f13.f64 = static_cast<float>(ctx.f13.f64 - ctx.f10.f64);
	// lfs f11,60(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = static_cast<float>(ctx.f12.f64 - ctx.f11.f64);
	// fmuls f0,f0,f0
	f0.f64 = double(float(f0.f64 * f0.f64));
	// fmadds f0,f13,f13,f0
	f0.f64 = double(std::fma(float(ctx.f13.f64), float(ctx.f13.f64), float(f0.f64)));
	// fmadds f0,f12,f12,f0
	f0.f64 = double(std::fma(float(ctx.f12.f64), float(ctx.f12.f64), float(f0.f64)));
	// fsqrts f1,f0
	ctx.f1.f64 = double(simd::sqrt_f32(float(f0.f64)));
loc_82E708C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E70828) {
	__imp__sub_82E70828(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E708E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82e70918
	if (cr0.eq) goto loc_82E70918;
	// bl 0x82e70828
	sub_82E70828(ctx, base);
	// lfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 36);
	f0.f64 = double(temp.f32);
	// stfs f1,48(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// li r3,1
	ctx.r3.s64 = 1;
	// blt cr6,0x82e7091c
	if (cr6.lt) goto loc_82E7091C;
loc_82E70918:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E7091C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E708E0) {
	__imp__sub_82E708E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E70930) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be8
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r28,0
	r28.s64 = 0;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(104) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e70980
	if (cr0.eq) goto loc_82E70980;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r28.u8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// bl 0x822d1b30
	sub_822D1B30(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82e70980
	if (cr0.eq) goto loc_82E70980;
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// b 0x82e70a90
	goto loc_82E70A90;
loc_82E70980:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// addi r29,r11,-30984
	r29.s64 = r11.s64 + -30984;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// lwz r11,20(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// stw r29,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r29.u32);
	// lfs f0,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	f0.f64 = double(temp.f32);
	// stfs f0,212(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	f0.f64 = double(temp.f32);
	// stfs f0,216(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// lfs f0,60(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 60);
	f0.f64 = double(temp.f32);
	// stfs f0,220(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82E709BC:
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x82e709bc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E709BC;
	// stb r28,296(r1)
	PPC_STORE_U8(ctx.r1.u32 + 296, r28.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,20(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r30,r10,6288
	r30.s64 = ctx.r10.s64 + 6288;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// bl 0x821ae8c0
	sub_821AE8C0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r29.u32);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// lfs f0,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	f0.f64 = double(temp.f32);
	// stfs f0,116(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	f0.f64 = double(temp.f32);
	// stfs f0,120(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f0,60(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 60);
	f0.f64 = double(temp.f32);
	// stfs f0,124(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82E70A1C:
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82e70a1c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E70A1C;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stb r28,200(r1)
	PPC_STORE_U8(ctx.r1.u32 + 200, r28.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// bl 0x821ae8c0
	sub_821AE8C0(ctx, base);
	// lis r11,-31952
	r11.s64 = -2094006272;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r11,r11,-9856
	r11.s64 = r11.s64 + -9856;
	// lwz r7,20(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(20) );
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(36) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e70a64
	if (!cr6.eq) goto loc_82E70A64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// b 0x82e70a84
	goto loc_82E70A84;
loc_82E70A64:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(36) );
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lfs f1,3084(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E70A84:
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
loc_82E70A90:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82E70930) {
	__imp__sub_82E70930(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E70A98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne 0x82e70ac0
	if (!cr0.eq) goto loc_82E70AC0;
loc_82E70AB8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e70b38
	goto loc_82E70B38;
loc_82E70AC0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e70828
	sub_82E70828(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// stfs f1,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// bl 0x82e70930
	sub_82E70930(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// stb r3,17(r31)
	PPC_STORE_U8(r31.u32 + 17, ctx.r3.u8);
	// lfs f0,3084(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x82e70ab8
	if (!cr6.gt) goto loc_82E70AB8;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	f0.f64 = double(temp.f32);
	// stfs f0,52(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	f0.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 56, temp.u32);
	// lfs f0,60(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 60);
	f0.f64 = double(temp.f32);
	// stfs f0,60(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 60, temp.u32);
	// lwz r11,136(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(136) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e70b34
	if (cr0.eq) goto loc_82E70B34;
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,52(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 56, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,60(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 60, temp.u32);
loc_82E70B34:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E70B38:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E70A98) {
	__imp__sub_82E70A98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E70B50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bd4
	// addi r12,r1,-80
	r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82ca74ec
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r28,r31,52
	r28.s64 = r31.s64 + 52;
	// addi r10,r11,-30984
	ctx.r10.s64 = r11.s64 + -30984;
	// li r30,0
	r30.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r9,r1,256
	ctx.r9.s64 = ctx.r1.s64 + 256;
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 0);
	f0.f64 = double(temp.f32);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// stfs f0,244(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stw r10,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r10.u32);
	// lfs f0,4(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 4);
	f0.f64 = double(temp.f32);
	// li r11,16
	r11.s64 = 16;
	// stfs f0,248(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// lfs f0,8(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,252(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82E70BA8:
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82e70ba8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E70BA8;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// stb r30,328(r1)
	PPC_STORE_U8(ctx.r1.u32 + 328, r30.u8);
	// li r10,16
	ctx.r10.s64 = 16;
	// lfs f0,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	f0.f64 = double(temp.f32);
	// stfs f0,148(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	f0.f64 = double(temp.f32);
	// stfs f0,152(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lfs f0,60(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 60);
	f0.f64 = double(temp.f32);
	// stfs f0,156(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82E70BE8:
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82e70be8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E70BE8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stb r30,232(r1)
	PPC_STORE_U8(ctx.r1.u32 + 232, r30.u8);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r10,r10,6288
	ctx.r10.s64 = ctx.r10.s64 + 6288;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// bl 0x821ae8c0
	sub_821AE8C0(ctx, base);
	// lis r11,-31952
	r11.s64 = -2094006272;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r11,r11,-9856
	r11.s64 = r11.s64 + -9856;
	// lwz r7,20(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(20) );
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(36) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f25,3084(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	f25.f64 = double(temp.f32);
	// bne cr6,0x82e70c40
	if (!cr6.eq) goto loc_82E70C40;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x82e70c5c
	goto loc_82E70C5C;
loc_82E70C40:
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(36) );
	// fmr f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f25.f64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E70C5C:
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x82e70f00
	if (cr6.eq) goto loc_82E70F00;
	// lbz r11,17(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 17);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e70f00
	if (cr0.eq) goto loc_82E70F00;
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e70c88
	if (!cr6.eq) goto loc_82E70C88;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e70f04
	goto loc_82E70F04;
loc_82E70C88:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8227ef68
	sub_8227EF68(ctx, base);
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// fmr f27,f25
	ctx.fpscr.disableFlushMode();
	f27.f64 = f25.f64;
	// lwz r23,8(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// cmplwi r23,0
	cr0.compare<uint32_t>(r23.u32, 0, xer);
	// beq 0x82e70ef0
	if (cr0.eq) goto loc_82E70EF0;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r27,r11,3972
	r27.s64 = r11.s64 + 3972;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f26,2876(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2876);
	f26.f64 = double(temp.f32);
	// addi r26,r11,-15368
	r26.s64 = r11.s64 + -15368;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lfs f22,3056(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3056);
	f22.f64 = double(temp.f32);
	// lis r24,-32252
	r24.s64 = -2113667072;
	// lfs f23,23732(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23732);
	f23.f64 = double(temp.f32);
	// addi r25,r11,-16472
	r25.s64 = r11.s64 + -16472;
	// lfs f24,-31004(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -31004);
	f24.f64 = double(temp.f32);
loc_82E70CE4:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r30,4(r23)
	r30.u64 = PPC_LOAD_U32(r23.u32 + int32_t(4) );
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// cmplw cr6,r23,r11
	cr6.compare<uint32_t>(r23.u32, r11.u32, xer);
	// beq cr6,0x82e70ed8
	if (cr6.eq) goto loc_82E70ED8;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// cmplw cr6,r23,r11
	cr6.compare<uint32_t>(r23.u32, r11.u32, xer);
	// beq cr6,0x82e70ed8
	if (cr6.eq) goto loc_82E70ED8;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(28) );
	// lwz r10,-27056(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + int32_t(-27056) );
	// and. r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e70ed8
	if (cr0.eq) goto loc_82E70ED8;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lfs f2,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lfs f1,40(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e6d8a8
	sub_82E6D8A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e70ed8
	if (cr0.eq) goto loc_82E70ED8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e70760
	sub_82E70760(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x82e70ed8
	if (cr6.eq) goto loc_82E70ED8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e70930
	sub_82E70930(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e70ed8
	if (cr0.eq) goto loc_82E70ED8;
	// lfs f0,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 40);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f25
	cr6.compare(f0.f64, f25.f64);
	// beq cr6,0x82e70ee8
	if (cr6.eq) goto loc_82E70EE8;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821e8238
	sub_821E8238(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821e8238
	sub_821E8238(ctx, base);
	// fmr f0,f24
	ctx.fpscr.disableFlushMode();
	f0.f64 = f24.f64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// fmr f13,f23
	ctx.f13.f64 = f23.f64;
	// beq cr6,0x82e70db0
	if (cr6.eq) goto loc_82E70DB0;
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f22
	ctx.f13.f64 = double(float(ctx.f13.f64 * f22.f64));
loc_82E70DB0:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e70dc0
	if (cr6.eq) goto loc_82E70DC0;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f22
	f0.f64 = double(float(f0.f64 * f22.f64));
loc_82E70DC0:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x82e70dd0
	if (!cr6.gt) goto loc_82E70DD0;
	// fmr f28,f0
	f28.f64 = f0.f64;
	// b 0x82e70dd4
	goto loc_82E70DD4;
loc_82E70DD0:
	// fmr f28,f13
	ctx.fpscr.disableFlushMode();
	f28.f64 = ctx.f13.f64;
loc_82E70DD4:
	// lfs f13,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f13,4(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r30,52
	ctx.r5.s64 = r30.s64 + 52;
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lfs f13,8(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f0,36(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 36);
	f0.f64 = double(temp.f32);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f9,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fmuls f0,f9,f0
	f0.f64 = double(float(ctx.f9.f64 * f0.f64));
	// lfs f11,0(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfs f25,80(r1)
	temp.f32 = float(f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fadds f13,f10,f12
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fadds f0,f9,f0
	f0.f64 = double(float(ctx.f9.f64 + f0.f64));
	// stfs f0,136(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x82e6d660
	sub_82E6D660(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e70ee8
	if (cr0.eq) goto loc_82E70EE8;
	// lfs f0,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 8);
	f0.f64 = double(temp.f32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f31,f0,f12
	f31.f64 = static_cast<float>(f0.f64 - ctx.f12.f64);
	// lfs f13,0(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f30,f13,f12
	f30.f64 = static_cast<float>(ctx.f13.f64 - ctx.f12.f64);
	// lfs f0,4(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lfs f1,40(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f29,f0,f13
	f29.f64 = static_cast<float>(f0.f64 - ctx.f13.f64);
	// bl 0x82e7f4d0
	sub_82E7F4D0(ctx, base);
	// fmr f21,f1
	ctx.fpscr.disableFlushMode();
	f21.f64 = ctx.f1.f64;
	// lfs f1,40(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82e7f4a0
	sub_82E7F4A0(ctx, base);
	// fmuls f0,f30,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f30.f64 * f30.f64));
	// fmr f13,f1
	ctx.f13.f64 = ctx.f1.f64;
	// lfs f1,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f28
	ctx.f3.f64 = f28.f64;
	// fmadds f0,f29,f29,f0
	f0.f64 = double(std::fma(float(f29.f64), float(f29.f64), float(f0.f64)));
	// fdivs f13,f21,f13
	ctx.f13.f64 = double(float(f21.f64 / ctx.f13.f64));
	// fmadds f0,f31,f31,f0
	f0.f64 = double(std::fma(float(f31.f64), float(f31.f64), float(f0.f64)));
	// fsqrts f0,f0
	f0.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// fmuls f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// bl 0x82e6d228
	sub_82E6D228(ctx, base);
	// fmuls f0,f31,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f31.f64 * f31.f64));
	// fmuls f0,f0,f26
	f0.f64 = double(float(f0.f64 * f26.f64));
	// fdivs f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 / f0.f64));
	// fcmpu cr6,f0,f27
	cr6.compare(f0.f64, f27.f64);
	// ble cr6,0x82e70ed8
	if (!cr6.gt) goto loc_82E70ED8;
	// lfs f13,24(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fmr f27,f0
	f27.f64 = f0.f64;
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x82e70ef0
	if (!cr6.lt) goto loc_82E70EF0;
loc_82E70ED8:
	// lwz r23,12(r23)
	r23.u64 = PPC_LOAD_U32(r23.u32 + int32_t(12) );
	// cmplwi r23,0
	cr0.compare<uint32_t>(r23.u32, 0, xer);
	// bne 0x82e70ce4
	if (!cr0.eq) goto loc_82E70CE4;
	// b 0x82e70ef0
	goto loc_82E70EF0;
loc_82E70EE8:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f27,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f27.f64 = double(temp.f32);
loc_82E70EF0:
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fcmpu cr6,f27,f0
	cr6.compare(f27.f64, f0.f64);
	// blt cr6,0x82e70f04
	if (cr6.lt) goto loc_82E70F04;
loc_82E70F00:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E70F04:
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// addi r12,r1,-80
	r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82ca7538
	// b 0x82ca2c24
	return;
}

PPC_WEAK_FUNC(sub_82E70B50) {
	__imp__sub_82E70B50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E70F18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be4
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f29.u64);
	// stfd f30,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r27,0
	r27.s64 = 0;
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// b 0x82e70f64
	goto loc_82E70F64;
loc_82E70F40:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// stb r27,16(r10)
	PPC_STORE_U8(ctx.r10.u32 + 16, r27.u8);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(12) );
	// stw r8,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
loc_82E70F64:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e70f40
	if (!cr6.eq) goto loc_82E70F40;
	// stw r27,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r27.u32);
	// stw r27,20(r11)
	PPC_STORE_U32(r11.u32 + 20, r27.u32);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(132) );
	// stb r27,28(r31)
	PPC_STORE_U8(r31.u32 + 28, r27.u8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e70f90
	if (cr0.eq) goto loc_82E70F90;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// b 0x82e70f94
	goto loc_82E70F94;
loc_82E70F90:
	// li r11,-1
	r11.s64 = -1;
loc_82E70F94:
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e711fc
	if (cr6.eq) goto loc_82E711FC;
	// lbz r11,184(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 184);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// lfs f0,3056(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3056);
	f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// bl 0x822955c0
	sub_822955C0(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f1.f64;
	// lfs f13,188(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 188);
	ctx.f13.f64 = double(temp.f32);
	// lfs f30,36(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 36);
	f30.f64 = double(temp.f32);
	// lfs f1,40(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 * f0.f64));
	// bl 0x82e7f4d0
	sub_82E7F4D0(ctx, base);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// lfs f1,40(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82e7f4a0
	sub_82E7F4A0(ctx, base);
	// fdivs f0,f29,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f29.f64 / ctx.f1.f64));
	// fmuls f0,f0,f30
	f0.f64 = double(float(f0.f64 * f30.f64));
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// ble cr6,0x82e71010
	if (!cr6.gt) goto loc_82E71010;
	// fcmpu cr6,f30,f31
	cr6.compare(f30.f64, f31.f64);
	// ble cr6,0x82e71008
	if (!cr6.gt) goto loc_82E71008;
	// fmr f29,f30
	f29.f64 = f30.f64;
	// b 0x82e71014
	goto loc_82E71014;
loc_82E71008:
	// fmr f29,f31
	ctx.fpscr.disableFlushMode();
	f29.f64 = f31.f64;
	// b 0x82e71014
	goto loc_82E71014;
loc_82E71010:
	// fmr f29,f0
	ctx.fpscr.disableFlushMode();
	f29.f64 = f0.f64;
loc_82E71014:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,172(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 172);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,68(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,72(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 72);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,56(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,60(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 60);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,2636(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2636);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f13,40(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lfs f31,3084(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	cr6.compare(ctx.f13.f64, f31.f64);
	// lfs f13,64(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fmuls f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 * f0.f64));
	// lfs f11,52(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f11,f13
	ctx.f13.f64 = static_cast<float>(ctx.f11.f64 - ctx.f13.f64);
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fsubs f13,f10,f12
	ctx.f13.f64 = static_cast<float>(ctx.f10.f64 - ctx.f12.f64);
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fsubs f0,f9,f0
	f0.f64 = static_cast<float>(ctx.f9.f64 - f0.f64);
	// stfs f0,144(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// bne cr6,0x82e710b0
	if (!cr6.eq) goto loc_82E710B0;
	// fmr f0,f11
	f0.f64 = ctx.f11.f64;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// fmr f11,f9
	ctx.f11.f64 = ctx.f9.f64;
	// lfs f13,52(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,56(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	f0.f64 = static_cast<float>(ctx.f13.f64 - f0.f64);
	// fmr f13,f10
	ctx.f13.f64 = ctx.f10.f64;
	// fmuls f0,f0,f0
	f0.f64 = double(float(f0.f64 * f0.f64));
	// fsubs f13,f12,f13
	ctx.f13.f64 = static_cast<float>(ctx.f12.f64 - ctx.f13.f64);
	// lfs f12,60(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = static_cast<float>(ctx.f12.f64 - ctx.f11.f64);
	// fmadds f0,f13,f13,f0
	f0.f64 = double(std::fma(float(ctx.f13.f64), float(ctx.f13.f64), float(f0.f64)));
	// fmadds f0,f12,f12,f0
	f0.f64 = double(std::fma(float(ctx.f12.f64), float(ctx.f12.f64), float(f0.f64)));
	// fsqrts f0,f0
	f0.f64 = double(simd::sqrt_f32(float(f0.f64)));
	// b 0x82e710b4
	goto loc_82E710B4;
loc_82E710B0:
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = f30.f64;
loc_82E710B4:
	// lfs f13,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lfs f12,68(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f11,72(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 72);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fmuls f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 * f0.f64));
	// lfs f11,52(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,56(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(100) );
	// lfs f9,60(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 60);
	ctx.f9.f64 = double(temp.f32);
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fadds f13,f10,f12
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fadds f0,f9,f0
	f0.f64 = double(float(ctx.f9.f64 + f0.f64));
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// addi r4,r11,52
	ctx.r4.s64 = r11.s64 + 52;
	// bl 0x82e80800
	sub_82E80800(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// beq 0x82e711fc
	if (cr0.eq) goto loc_82E711FC;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r29,r11,-30984
	r29.s64 = r11.s64 + -30984;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r28,r11,-30984
	r28.s64 = r11.s64 + -30984;
loc_82E71130:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// beq cr6,0x82e711dc
	if (cr6.eq) goto loc_82E711DC;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// beq cr6,0x82e711dc
	if (cr6.eq) goto loc_82E711DC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e70760
	sub_82E70760(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e711dc
	if (!cr0.eq) goto loc_82E711DC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e70930
	sub_82E70930(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82e711dc
	if (!cr6.eq) goto loc_82E711DC;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r30,52
	ctx.r5.s64 = r30.s64 + 52;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82e6d660
	sub_82E6D660(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82e711dc
	if (!cr6.eq) goto loc_82E711DC;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	cr6.compare(f0.f64, f29.f64);
	// bge cr6,0x82e711dc
	if (!cr6.lt) goto loc_82E711DC;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lwz r4,180(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(180) );
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// bl 0x82e6ef78
	sub_82E6EF78(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(4) );
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e711f4
	if (!cr0.eq) goto loc_82E711F4;
loc_82E711DC:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(100) );
	// bl 0x82e802c8
	sub_82E802C8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// bne 0x82e71130
	if (!cr0.eq) goto loc_82E71130;
	// b 0x82e711fc
	goto loc_82E711FC;
loc_82E711F4:
	// li r11,1
	r11.s64 = 1;
	// stb r11,28(r31)
	PPC_STORE_U8(r31.u32 + 28, r11.u8);
loc_82E711FC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82E70F18) {
	__imp__sub_82E70F18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E71218) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82e708e0
	sub_82E708E0(ctx, base);
	// li r28,4
	r28.s64 = 4;
	// li r27,1
	r27.s64 = 1;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e71270
	if (!cr0.eq) goto loc_82E71270;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x82e71340
	if (cr6.eq) goto loc_82E71340;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// lfs f0,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// lfs f0,56(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	f0.f64 = double(temp.f32);
	// stfs f0,84(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 84, temp.u32);
	// lfs f0,60(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 60);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// stw r28,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r28.u32);
	// b 0x82e71340
	goto loc_82E71340;
loc_82E71270:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e6ec10
	sub_82E6EC10(ctx, base);
	// bl 0x82260978
	sub_82260978(ctx, base);
	// lfs f0,160(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 160);
	f0.f64 = double(temp.f32);
	// lfs f31,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bge cr6,0x82e71340
	if (!cr6.lt) goto loc_82E71340;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fsubs f12,f31,f0
	ctx.f12.f64 = static_cast<float>(f31.f64 - f0.f64);
	// lfs f13,148(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// li r30,0
	r30.s64 = 0;
	// lfs f0,3140(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3140);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// ble cr6,0x82e712b0
	if (!cr6.gt) goto loc_82E712B0;
	// mr r30,r27
	r30.u64 = r27.u64;
loc_82E712B0:
	// bl 0x82260978
	sub_82260978(ctx, base);
	// clrlwi r29,r30,24
	r29.u64 = r30.u32 & 0xFF;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(r29.u32, 1, xer);
	// beq cr6,0x82e712dc
	if (cr6.eq) goto loc_82E712DC;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r4,140(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(140) );
	// lwz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// bl 0x82e6c3a0
	sub_82E6C3A0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e71340
	if (cr0.eq) goto loc_82E71340;
loc_82E712DC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// lfs f0,148(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 148);
	f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	f0.f64 = double(float(f0.f64 + f31.f64));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f0,160(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 160, temp.u32);
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(56) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82e7131c
	if (!cr6.eq) goto loc_82E7131C;
	// addi r4,r31,64
	ctx.r4.s64 = r31.s64 + 64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e70b50
	sub_82E70B50(ctx, base);
	// stb r3,16(r31)
	PPC_STORE_U8(r31.u32 + 16, ctx.r3.u8);
	// b 0x82e71324
	goto loc_82E71324;
loc_82E7131C:
	// li r11,0
	r11.s64 = 0;
	// stb r11,16(r31)
	PPC_STORE_U8(r31.u32 + 16, r11.u8);
loc_82E71324:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82e71340
	if (!cr6.eq) goto loc_82E71340;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,140(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(140) );
	// lwz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// bl 0x82e7a7d0
	sub_82E7A7D0(ctx, base);
loc_82E71340:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x82e713e4
	if (cr6.lt) goto loc_82E713E4;
	// beq cr6,0x82e713c8
	if (cr6.eq) goto loc_82E713C8;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x82e713b4
	if (cr6.lt) goto loc_82E713B4;
	// beq cr6,0x82e713a0
	if (cr6.eq) goto loc_82E713A0;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// bge cr6,0x82e71414
	if (!cr6.lt) goto loc_82E71414;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3196(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3196);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f13,48(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82e71414
	if (!cr6.lt) goto loc_82E71414;
	// lbz r11,17(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 17);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82e713f8
	if (!cr0.eq) goto loc_82E713F8;
loc_82E7138C:
	// lbz r11,16(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e71414
	if (cr0.eq) goto loc_82E71414;
	// stw r27,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r27.u32);
	// b 0x82e71414
	goto loc_82E71414;
loc_82E713A0:
	// bl 0x82260978
	sub_82260978(ctx, base);
	// lfs f0,168(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 168);
	f0.f64 = double(temp.f32);
	// lfs f13,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x82e71414
	if (cr6.gt) goto loc_82E71414;
loc_82E713B4:
	// lbz r11,17(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 17);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82e7138c
	if (!cr0.eq) goto loc_82E7138C;
loc_82E713C0:
	// stw r28,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r28.u32);
	// b 0x82e71414
	goto loc_82E71414;
loc_82E713C8:
	// lbz r11,16(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82e71414
	if (!cr0.eq) goto loc_82E71414;
	// lbz r11,17(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 17);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82e713f8
	if (!cr0.eq) goto loc_82E713F8;
	// b 0x82e713c0
	goto loc_82E713C0;
loc_82E713E4:
	// bl 0x82260978
	sub_82260978(ctx, base);
	// lfs f0,164(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 164);
	f0.f64 = double(temp.f32);
	// lfs f13,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x82e71414
	if (!cr6.lt) goto loc_82E71414;
loc_82E713F8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(52) );
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E71414:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82E71218) {
	__imp__sub_82E71218(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E71420) {
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
	// bl 0x82269520
	sub_82269520(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e71218
	sub_82E71218(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e6fed0
	sub_82E6FED0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E71420) {
	__imp__sub_82E71420(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E71460) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82e82a28
	sub_82E82A28(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r11,-29968
	ctx.r10.s64 = r11.s64 + -29968;
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,3084(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3084);
	f0.f64 = double(temp.f32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f0,60(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 60, temp.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stfs f0,64(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 64, temp.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stfs f0,80(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stfs f0,88(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// stfs f0,96(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
	// stb r10,76(r31)
	PPC_STORE_U8(r31.u32 + 76, ctx.r10.u8);
	// stb r10,77(r31)
	PPC_STORE_U8(r31.u32 + 77, ctx.r10.u8);
	// stb r11,78(r31)
	PPC_STORE_U8(r31.u32 + 78, r11.u8);
	// stb r11,79(r31)
	PPC_STORE_U8(r31.u32 + 79, r11.u8);
	// stb r11,84(r31)
	PPC_STORE_U8(r31.u32 + 84, r11.u8);
	// stb r11,92(r31)
	PPC_STORE_U8(r31.u32 + 92, r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E71460) {
	__imp__sub_82E71460(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E71510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r3,r11,-17024
	ctx.r3.s64 = r11.s64 + -17024;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E71510) {
	__imp__sub_82E71510(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E71520) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r11,68(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(68) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82e71534
	if (!cr0.eq) goto loc_82E71534;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82E71534:
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E71520) {
	__imp__sub_82E71520(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E71548) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82269520
	sub_82269520(ctx, base);
	// lbz r11,77(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 77);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82e718ac
	if (!cr0.eq) goto loc_82E718AC;
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(68) );
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + int32_t(72) );
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82e71588
	if (!cr6.gt) goto loc_82E71588;
loc_82E71580:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e718b0
	goto loc_82E718B0;
loc_82E71588:
	// lbz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 76);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82e71648
	if (cr0.eq) goto loc_82E71648;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(48) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e718ac
	if (cr0.eq) goto loc_82E718AC;
	// lbz r11,78(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 78);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(72) );
	// beq 0x82e71608
	if (cr0.eq) goto loc_82E71608;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
	// stb r10,76(r31)
	PPC_STORE_U8(r31.u32 + 76, ctx.r10.u8);
	// bne cr6,0x82e718ac
	if (!cr6.eq) goto loc_82E718AC;
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(68) );
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 12);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82e715f4
	if (cr0.eq) goto loc_82E715F4;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x82e71600
	goto loc_82E71600;
loc_82E715F4:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,77(r31)
	PPC_STORE_U8(r31.u32 + 77, ctx.r10.u8);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
loc_82E71600:
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
	// b 0x82e718ac
	goto loc_82E718AC;
loc_82E71608:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(68) );
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
	// stb r9,76(r31)
	PPC_STORE_U8(r31.u32 + 76, ctx.r9.u8);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// blt cr6,0x82e718ac
	if (cr6.lt) goto loc_82E718AC;
	// lbz r11,12(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e7163c
	if (cr0.eq) goto loc_82E7163C;
	// stw r9,72(r31)
	PPC_STORE_U32(r31.u32 + 72, ctx.r9.u32);
	// b 0x82e718ac
	goto loc_82E718AC;
loc_82E7163C:
	// li r11,1
	r11.s64 = 1;
	// stb r11,77(r31)
	PPC_STORE_U8(r31.u32 + 77, r11.u8);
	// b 0x82e718ac
	goto loc_82E718AC;
loc_82E71648:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e71580
	if (cr0.eq) goto loc_82E71580;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mulli r11,r4,144
	r11.s64 = ctx.r4.s64 * 144;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// addi r10,r10,-29896
	ctx.r10.s64 = ctx.r10.s64 + -29896;
loc_82E7166C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82e71690
	if (cr0.eq) goto loc_82E71690;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82e7166c
	if (cr6.eq) goto loc_82E7166C;
loc_82E71690:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82e716ac
	if (!cr0.eq) goto loc_82E716AC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lfs f1,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 60);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(44) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E716AC:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(68) );
	// addi r10,r11,-29900
	ctx.r10.s64 = r11.s64 + -29900;
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(72) );
	// mulli r11,r11,144
	r11.s64 = r11.s64 * 144;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
loc_82E716CC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82e716f0
	if (cr0.eq) goto loc_82E716F0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82e716cc
	if (cr6.eq) goto loc_82E716CC;
loc_82E716F0:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82e71710
	if (!cr0.eq) goto loc_82E71710;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lfs f1,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 64);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(44) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E71710:
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(68) );
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(72) );
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(20) );
	// mulli r11,r11,144
	r11.s64 = r11.s64 * 144;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(4) );
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// beq 0x82e71760
	if (cr0.eq) goto loc_82E71760;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f1,3084(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,20(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// bl 0x822a8fd8
	sub_822A8FD8(ctx, base);
loc_82E71760:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(40) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e7188c
	if (cr0.eq) goto loc_82E7188C;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(64) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e717c4
	if (cr0.eq) goto loc_82E717C4;
	// li r11,1
	r11.s64 = 1;
	// stb r11,76(r31)
	PPC_STORE_U8(r31.u32 + 76, r11.u8);
	// b 0x82e718ac
	goto loc_82E718AC;
loc_82E717C4:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(68) );
	// addi r10,r11,-29908
	ctx.r10.s64 = r11.s64 + -29908;
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(72) );
	// mulli r11,r11,144
	r11.s64 = r11.s64 * 144;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
loc_82E717E4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82e71808
	if (cr0.eq) goto loc_82E71808;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82e717e4
	if (cr6.eq) goto loc_82E717E4;
loc_82E71808:
	// li r7,1
	ctx.r7.s64 = 1;
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82e71828
	if (!cr0.eq) goto loc_82E71828;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(36) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e71828
	if (cr0.eq) goto loc_82E71828;
	// stb r7,8(r11)
	PPC_STORE_U8(r11.u32 + 8, ctx.r7.u8);
	// stb r7,4(r11)
	PPC_STORE_U8(r11.u32 + 4, ctx.r7.u8);
loc_82E71828:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(68) );
	// addi r10,r11,-29916
	ctx.r10.s64 = r11.s64 + -29916;
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(72) );
	// mulli r11,r11,144
	r11.s64 = r11.s64 * 144;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
loc_82E71848:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82e7186c
	if (cr0.eq) goto loc_82E7186C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82e71848
	if (cr6.eq) goto loc_82E71848;
loc_82E7186C:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82e718ac
	if (!cr0.eq) goto loc_82E718AC;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(40) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e718ac
	if (cr0.eq) goto loc_82E718AC;
	// stb r7,8(r11)
	PPC_STORE_U8(r11.u32 + 8, ctx.r7.u8);
	// stb r7,4(r11)
	PPC_STORE_U8(r11.u32 + 4, ctx.r7.u8);
	// b 0x82e718ac
	goto loc_82E718AC;
loc_82E7188C:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(0) );
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(72) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x82e718b0
	if (cr6.eq) goto loc_82E718B0;
loc_82E718AC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E718B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E71548) {
	__imp__sub_82E71548(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E718C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(12) );
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e718dc
	if (!cr6.eq) goto loc_82E718DC;
	// li r11,0
	r11.s64 = 0;
loc_82E718DC:
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(16) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e718ec
	if (!cr6.eq) goto loc_82E718EC;
	// li r11,0
	r11.s64 = 0;
loc_82E718EC:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E718C8) {
	__imp__sub_82E718C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E718F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(28) );
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82e7191c
	if (!cr0.eq) goto loc_82E7191C;
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82e7191c
	if (!cr6.eq) goto loc_82E7191C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E7191C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e71934
	if (cr6.eq) goto loc_82E71934;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(32) );
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e71934
	if (cr6.eq) goto loc_82E71934;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E71934:
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + int32_t(44) );
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82e71950
	if (!cr0.eq) goto loc_82E71950;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + int32_t(48) );
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82e71950
	if (!cr6.eq) goto loc_82E71950;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E71950:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(48) );
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E718F8) {
	__imp__sub_82E718F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E71970) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// bl 0x82ca2be8
	// addi r12,r1,-40
	r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82ca7504
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mulli r10,r4,144
	ctx.r10.s64 = ctx.r4.s64 * 144;
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(68) );
	// addi r4,r11,-29872
	ctx.r4.s64 = r11.s64 + -29872;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(4) );
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r3,r11,80
	ctx.r3.s64 = r11.s64 + 80;
	// bl 0x82ca7408
	sub_82CA7408(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bge cr6,0x82e719c0
	if (!cr6.lt) goto loc_82E719C0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e71f00
	goto loc_82E71F00;
loc_82E719C0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ca5860
	sub_82CA5860(ctx, base);
	// lis r11,-32240
	r11.s64 = -2112880640;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f1.f64));
	// addi r9,r11,-11020
	ctx.r9.s64 = r11.s64 + -11020;
loc_82E719D8:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r11,0(r9)
	r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// subf r11,r11,r8
	r11.s64 = ctx.r8.s64 - r11.s64;
	// beq 0x82e719fc
	if (cr0.eq) goto loc_82E719FC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82e719d8
	if (cr6.eq) goto loc_82E719D8;
loc_82E719FC:
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r28,0
	r28.s64 = 0;
	// lfs f30,2736(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2736);
	f30.f64 = double(temp.f32);
	// li r30,1
	r30.s64 = 1;
	// lfs f29,3080(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3080);
	f29.f64 = double(temp.f32);
	// lis r29,-31948
	r29.s64 = -2093744128;
	// lfs f28,3084(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	f28.f64 = double(temp.f32);
	// lfs f27,3800(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3800);
	f27.f64 = double(temp.f32);
	// bne 0x82e71b04
	if (!cr0.eq) goto loc_82E71B04;
	// lbz r11,79(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 79);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82e71a50
	if (!cr0.eq) goto loc_82E71A50;
	// bl 0x82260978
	sub_82260978(ctx, base);
	// lfs f0,76(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	f0.f64 = double(float(f0.f64 + f31.f64));
	// stb r30,79(r31)
	PPC_STORE_U8(r31.u32 + 79, r30.u8);
	// stfs f0,80(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
loc_82E71A50:
	// lbz r11,79(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 79);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e71b04
	if (cr0.eq) goto loc_82E71B04;
	// bl 0x82260978
	sub_82260978(ctx, base);
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 80);
	f0.f64 = double(temp.f32);
	// lfs f13,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x82e71b00
	if (!cr6.gt) goto loc_82E71B00;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e71a84
	if (cr0.eq) goto loc_82E71A84;
	// stfs f28,8(r11)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stb r30,4(r11)
	PPC_STORE_U8(r11.u32 + 4, r30.u8);
loc_82E71A84:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e71b04
	if (cr0.eq) goto loc_82E71B04;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r10,-720(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(-720) );
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r9,20(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(20) );
	// lfs f13,88(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// beq 0x82e71ab0
	if (cr0.eq) goto loc_82E71AB0;
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	f0.f64 = double(temp.f32);
	// b 0x82e71ab4
	goto loc_82E71AB4;
loc_82E71AB0:
	// fmr f0,f29
	ctx.fpscr.disableFlushMode();
	f0.f64 = f29.f64;
loc_82E71AB4:
	// fmuls f0,f0,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f0.f64 * f30.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x82e71acc
	if (!cr6.gt) goto loc_82E71ACC;
	// stfs f27,8(r11)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stb r30,4(r11)
	PPC_STORE_U8(r11.u32 + 4, r30.u8);
	// b 0x82e71b04
	goto loc_82E71B04;
loc_82E71ACC:
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82e71adc
	if (cr0.eq) goto loc_82E71ADC;
	// lfs f0,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	f0.f64 = double(temp.f32);
	// b 0x82e71ae0
	goto loc_82E71AE0;
loc_82E71ADC:
	// fmr f0,f29
	ctx.fpscr.disableFlushMode();
	f0.f64 = f29.f64;
loc_82E71AE0:
	// fmuls f0,f0,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f0.f64 * f30.f64));
	// stb r30,4(r11)
	PPC_STORE_U8(r11.u32 + 4, r30.u8);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82e71af8
	if (!cr6.lt) goto loc_82E71AF8;
	// stfs f29,8(r11)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// b 0x82e71b04
	goto loc_82E71B04;
loc_82E71AF8:
	// stfs f28,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// b 0x82e71b04
	goto loc_82E71B04;
loc_82E71B00:
	// stb r28,79(r31)
	PPC_STORE_U8(r31.u32 + 79, r28.u8);
loc_82E71B04:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r10,r11,-29880
	ctx.r10.s64 = r11.s64 + -29880;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_82E71B10:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// beq 0x82e71b34
	if (cr0.eq) goto loc_82E71B34;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82e71b10
	if (cr6.eq) goto loc_82E71B10;
loc_82E71B34:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// lfs f12,-30284(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -30284);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,2628(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2628);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,-30288(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -30288);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,-29972(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29972);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,2092(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2092);
	ctx.f8.f64 = double(temp.f32);
	// bne 0x82e71d04
	if (!cr0.eq) goto loc_82E71D04;
	// lbz r11,84(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 84);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82e71bb8
	if (!cr0.eq) goto loc_82E71BB8;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// lfs f0,68(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 68);
	f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	f0.f64 = double(float(f0.f64 + f31.f64));
loc_82E71B80:
	// stfs f0,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// fcmpu cr6,f0,f11
	cr6.compare(f0.f64, ctx.f11.f64);
	// blt cr6,0x82e71b94
	if (cr6.lt) goto loc_82E71B94;
	// fcmpu cr6,f0,f10
	cr6.compare(f0.f64, ctx.f10.f64);
	// ble cr6,0x82e71bb4
	if (!cr6.gt) goto loc_82E71BB4;
loc_82E71B94:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f10.f64);
	// ble cr6,0x82e71ba4
	if (!cr6.gt) goto loc_82E71BA4;
	// fsubs f0,f0,f12
	f0.f64 = static_cast<float>(f0.f64 - ctx.f12.f64);
	// b 0x82e71b80
	goto loc_82E71B80;
loc_82E71BA4:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f11.f64);
	// bge cr6,0x82e71b80
	if (!cr6.lt) goto loc_82E71B80;
	// fadds f0,f0,f12
	f0.f64 = double(float(f0.f64 + ctx.f12.f64));
	// b 0x82e71b80
	goto loc_82E71B80;
loc_82E71BB4:
	// stb r30,84(r31)
	PPC_STORE_U8(r31.u32 + 84, r30.u8);
loc_82E71BB8:
	// lbz r11,84(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 84);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e71d04
	if (cr0.eq) goto loc_82E71D04;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lfs f0,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 88);
	f0.f64 = double(temp.f32);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// lfs f13,68(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	f0.f64 = static_cast<float>(f0.f64 - ctx.f13.f64);
loc_82E71BD8:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f11.f64);
	// blt cr6,0x82e71be8
	if (cr6.lt) goto loc_82E71BE8;
	// fcmpu cr6,f0,f10
	cr6.compare(f0.f64, ctx.f10.f64);
	// ble cr6,0x82e71c08
	if (!cr6.gt) goto loc_82E71C08;
loc_82E71BE8:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f10.f64);
	// ble cr6,0x82e71bf8
	if (!cr6.gt) goto loc_82E71BF8;
	// fsubs f0,f0,f12
	f0.f64 = static_cast<float>(f0.f64 - ctx.f12.f64);
	// b 0x82e71bd8
	goto loc_82E71BD8;
loc_82E71BF8:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f11.f64);
	// bge cr6,0x82e71bd8
	if (!cr6.lt) goto loc_82E71BD8;
	// fadds f0,f0,f12
	f0.f64 = double(float(f0.f64 + ctx.f12.f64));
	// b 0x82e71bd8
	goto loc_82E71BD8;
loc_82E71C08:
	// fabs f0,f0
	ctx.fpscr.disableFlushMode();
	f0.u64 = f0.u64 & 0x7FFFFFFFFFFFFFFF;
	// fcmpu cr6,f0,f9
	cr6.compare(f0.f64, ctx.f9.f64);
	// ble cr6,0x82e71d00
	if (!cr6.gt) goto loc_82E71D00;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e71c28
	if (cr0.eq) goto loc_82E71C28;
	// stfs f28,8(r11)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stb r30,4(r11)
	PPC_STORE_U8(r11.u32 + 4, r30.u8);
loc_82E71C28:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e71c9c
	if (cr0.eq) goto loc_82E71C9C;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r10,-720(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(-720) );
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r9,20(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(20) );
	// lfs f13,88(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// beq 0x82e71c54
	if (cr0.eq) goto loc_82E71C54;
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	f0.f64 = double(temp.f32);
	// b 0x82e71c58
	goto loc_82E71C58;
loc_82E71C54:
	// fmr f0,f29
	ctx.fpscr.disableFlushMode();
	f0.f64 = f29.f64;
loc_82E71C58:
	// fmuls f0,f0,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f0.f64 * f30.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x82e71c6c
	if (!cr6.gt) goto loc_82E71C6C;
	// stfs f27,8(r11)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// b 0x82e71c98
	goto loc_82E71C98;
loc_82E71C6C:
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82e71c7c
	if (cr0.eq) goto loc_82E71C7C;
	// lfs f0,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	f0.f64 = double(temp.f32);
	// b 0x82e71c80
	goto loc_82E71C80;
loc_82E71C7C:
	// fmr f0,f29
	ctx.fpscr.disableFlushMode();
	f0.f64 = f29.f64;
loc_82E71C80:
	// fmuls f0,f0,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f0.f64 * f30.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82e71c94
	if (!cr6.lt) goto loc_82E71C94;
	// stfs f29,8(r11)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// b 0x82e71c98
	goto loc_82E71C98;
loc_82E71C94:
	// stfs f28,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
loc_82E71C98:
	// stb r30,4(r11)
	PPC_STORE_U8(r11.u32 + 4, r30.u8);
loc_82E71C9C:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(44) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e71cb4
	if (cr0.eq) goto loc_82E71CB4;
	// lfs f0,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 88);
	f0.f64 = double(temp.f32);
	// stb r30,4(r11)
	PPC_STORE_U8(r11.u32 + 4, r30.u8);
	// stfs f0,8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
loc_82E71CB4:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e71d04
	if (cr0.eq) goto loc_82E71D04;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lfs f0,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 88);
	f0.f64 = double(temp.f32);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// lfs f13,68(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// stb r30,4(r11)
	PPC_STORE_U8(r11.u32 + 4, r30.u8);
	// fsubs f0,f0,f13
	f0.f64 = static_cast<float>(f0.f64 - ctx.f13.f64);
	// fcmpu cr6,f0,f9
	cr6.compare(f0.f64, ctx.f9.f64);
	// ble cr6,0x82e71ce8
	if (!cr6.gt) goto loc_82E71CE8;
	// stfs f29,8(r11)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// b 0x82e71d04
	goto loc_82E71D04;
loc_82E71CE8:
	// fcmpu cr6,f0,f8
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f8.f64);
	// bge cr6,0x82e71cf8
	if (!cr6.lt) goto loc_82E71CF8;
	// stfs f27,8(r11)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// b 0x82e71d04
	goto loc_82E71D04;
loc_82E71CF8:
	// stfs f28,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// b 0x82e71d04
	goto loc_82E71D04;
loc_82E71D00:
	// stb r28,84(r31)
	PPC_STORE_U8(r31.u32 + 84, r28.u8);
loc_82E71D04:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r10,r11,-29888
	ctx.r10.s64 = r11.s64 + -29888;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_82E71D10:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82e71d34
	if (cr0.eq) goto loc_82E71D34;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82e71d10
	if (cr6.eq) goto loc_82E71D10;
loc_82E71D34:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82e71ed4
	if (!cr0.eq) goto loc_82E71ED4;
	// lbz r11,92(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 92);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82e71d88
	if (!cr0.eq) goto loc_82E71D88;
	// stfs f31,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
loc_82E71D4C:
	// lfs f0,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 96);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	cr6.compare(f0.f64, ctx.f11.f64);
	// blt cr6,0x82e71d60
	if (cr6.lt) goto loc_82E71D60;
	// fcmpu cr6,f0,f10
	cr6.compare(f0.f64, ctx.f10.f64);
	// ble cr6,0x82e71d84
	if (!cr6.gt) goto loc_82E71D84;
loc_82E71D60:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f10.f64);
	// ble cr6,0x82e71d70
	if (!cr6.gt) goto loc_82E71D70;
	// fsubs f0,f0,f12
	f0.f64 = static_cast<float>(f0.f64 - ctx.f12.f64);
	// b 0x82e71d7c
	goto loc_82E71D7C;
loc_82E71D70:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f11.f64);
	// bge cr6,0x82e71d7c
	if (!cr6.lt) goto loc_82E71D7C;
	// fadds f0,f0,f12
	f0.f64 = double(float(f0.f64 + ctx.f12.f64));
loc_82E71D7C:
	// stfs f0,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// b 0x82e71d4c
	goto loc_82E71D4C;
loc_82E71D84:
	// stb r30,92(r31)
	PPC_STORE_U8(r31.u32 + 92, r30.u8);
loc_82E71D88:
	// lbz r11,92(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 92);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e71ed4
	if (cr0.eq) goto loc_82E71ED4;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lfs f0,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 96);
	f0.f64 = double(temp.f32);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// lfs f13,68(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	f0.f64 = static_cast<float>(f0.f64 - ctx.f13.f64);
loc_82E71DA8:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f11.f64);
	// blt cr6,0x82e71db8
	if (cr6.lt) goto loc_82E71DB8;
	// fcmpu cr6,f0,f10
	cr6.compare(f0.f64, ctx.f10.f64);
	// ble cr6,0x82e71dd8
	if (!cr6.gt) goto loc_82E71DD8;
loc_82E71DB8:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f10.f64);
	// ble cr6,0x82e71dc8
	if (!cr6.gt) goto loc_82E71DC8;
	// fsubs f0,f0,f12
	f0.f64 = static_cast<float>(f0.f64 - ctx.f12.f64);
	// b 0x82e71da8
	goto loc_82E71DA8;
loc_82E71DC8:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f11.f64);
	// bge cr6,0x82e71da8
	if (!cr6.lt) goto loc_82E71DA8;
	// fadds f0,f0,f12
	f0.f64 = double(float(f0.f64 + ctx.f12.f64));
	// b 0x82e71da8
	goto loc_82E71DA8;
loc_82E71DD8:
	// fabs f0,f0
	ctx.fpscr.disableFlushMode();
	f0.u64 = f0.u64 & 0x7FFFFFFFFFFFFFFF;
	// fcmpu cr6,f0,f9
	cr6.compare(f0.f64, ctx.f9.f64);
	// ble cr6,0x82e71ed0
	if (!cr6.gt) goto loc_82E71ED0;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(28) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e71df8
	if (cr0.eq) goto loc_82E71DF8;
	// stfs f28,8(r11)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stb r30,4(r11)
	PPC_STORE_U8(r11.u32 + 4, r30.u8);
loc_82E71DF8:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(32) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e71e6c
	if (cr0.eq) goto loc_82E71E6C;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lwz r10,-720(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(-720) );
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r9,20(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(20) );
	// lfs f13,88(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// beq 0x82e71e24
	if (cr0.eq) goto loc_82E71E24;
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	f0.f64 = double(temp.f32);
	// b 0x82e71e28
	goto loc_82E71E28;
loc_82E71E24:
	// fmr f0,f29
	ctx.fpscr.disableFlushMode();
	f0.f64 = f29.f64;
loc_82E71E28:
	// fmuls f0,f0,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f0.f64 * f30.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x82e71e3c
	if (!cr6.gt) goto loc_82E71E3C;
	// stfs f27,8(r11)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// b 0x82e71e68
	goto loc_82E71E68;
loc_82E71E3C:
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82e71e4c
	if (cr0.eq) goto loc_82E71E4C;
	// lfs f0,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	f0.f64 = double(temp.f32);
	// b 0x82e71e50
	goto loc_82E71E50;
loc_82E71E4C:
	// fmr f0,f29
	ctx.fpscr.disableFlushMode();
	f0.f64 = f29.f64;
loc_82E71E50:
	// fmuls f0,f0,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f0.f64 * f30.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82e71e64
	if (!cr6.lt) goto loc_82E71E64;
	// stfs f29,8(r11)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// b 0x82e71e68
	goto loc_82E71E68;
loc_82E71E64:
	// stfs f28,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
loc_82E71E68:
	// stb r30,4(r11)
	PPC_STORE_U8(r11.u32 + 4, r30.u8);
loc_82E71E6C:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(44) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e71e84
	if (cr0.eq) goto loc_82E71E84;
	// lfs f0,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 96);
	f0.f64 = double(temp.f32);
	// stb r30,4(r11)
	PPC_STORE_U8(r11.u32 + 4, r30.u8);
	// stfs f0,8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
loc_82E71E84:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(48) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e71ed4
	if (cr0.eq) goto loc_82E71ED4;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lfs f0,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 96);
	f0.f64 = double(temp.f32);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// lfs f13,68(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// stb r30,4(r11)
	PPC_STORE_U8(r11.u32 + 4, r30.u8);
	// fsubs f0,f0,f13
	f0.f64 = static_cast<float>(f0.f64 - ctx.f13.f64);
	// fcmpu cr6,f0,f9
	cr6.compare(f0.f64, ctx.f9.f64);
	// ble cr6,0x82e71eb8
	if (!cr6.gt) goto loc_82E71EB8;
	// stfs f29,8(r11)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// b 0x82e71ed4
	goto loc_82E71ED4;
loc_82E71EB8:
	// fcmpu cr6,f0,f8
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f8.f64);
	// bge cr6,0x82e71ec8
	if (!cr6.lt) goto loc_82E71EC8;
	// stfs f27,8(r11)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// b 0x82e71ed4
	goto loc_82E71ED4;
loc_82E71EC8:
	// stfs f28,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// b 0x82e71ed4
	goto loc_82E71ED4;
loc_82E71ED0:
	// stb r28,92(r31)
	PPC_STORE_U8(r31.u32 + 92, r28.u8);
loc_82E71ED4:
	// lbz r11,79(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 79);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82e71efc
	if (!cr0.eq) goto loc_82E71EFC;
	// lbz r11,84(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 84);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82e71efc
	if (!cr0.eq) goto loc_82E71EFC;
	// lbz r11,92(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 92);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e71f00
	if (cr0.eq) goto loc_82E71F00;
loc_82E71EFC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E71F00:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-40
	r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82ca7550
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82E71970) {
	__imp__sub_82E71970(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E71F10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,72(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(72) );
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e71f30
	if (cr0.eq) goto loc_82E71F30;
	// lwz r9,68(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(68) );
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(8) );
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82e71f54
	if (cr6.lt) goto loc_82E71F54;
loc_82E71F30:
	// lbz r11,78(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 78);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e71f50
	if (cr0.eq) goto loc_82E71F50;
	// lwz r11,68(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + int32_t(68) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, r11.u32);
	// b 0x82e71f54
	goto loc_82E71F54;
loc_82E71F50:
	// stw r10,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r10.u32);
loc_82E71F54:
	// stb r10,76(r3)
	PPC_STORE_U8(ctx.r3.u32 + 76, ctx.r10.u8);
	// stb r10,77(r3)
	PPC_STORE_U8(ctx.r3.u32 + 77, ctx.r10.u8);
	// stb r10,79(r3)
	PPC_STORE_U8(ctx.r3.u32 + 79, ctx.r10.u8);
	// stb r10,84(r3)
	PPC_STORE_U8(ctx.r3.u32 + 84, ctx.r10.u8);
	// stb r10,92(r3)
	PPC_STORE_U8(ctx.r3.u32 + 92, ctx.r10.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E71F10) {
	__imp__sub_82E71F10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E71F70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f0,3084(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// ble cr6,0x82e71fd4
	if (!cr6.gt) goto loc_82E71FD4;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lis r11,-31948
	r11.s64 = -2093744128;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-16196
	ctx.r4.s64 = r11.s64 + -16196;
	// lwz r3,20(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// bl 0x821e8238
	sub_821E8238(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e71fd0
	if (cr0.eq) goto loc_82E71FD0;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// ble cr6,0x82e71fd0
	if (!cr6.gt) goto loc_82E71FD0;
	// stfs f0,64(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 64, temp.u32);
	// b 0x82e71fd4
	goto loc_82E71FD4;
loc_82E71FD0:
	// stfs f31,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 64, temp.u32);
loc_82E71FD4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E71F70) {
	__imp__sub_82E71F70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E71FF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f0,3084(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// ble cr6,0x82e72054
	if (!cr6.gt) goto loc_82E72054;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lis r11,-31948
	r11.s64 = -2093744128;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-16196
	ctx.r4.s64 = r11.s64 + -16196;
	// lwz r3,20(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// bl 0x821e8238
	sub_821E8238(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e72050
	if (cr0.eq) goto loc_82E72050;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// ble cr6,0x82e72050
	if (!cr6.gt) goto loc_82E72050;
	// stfs f0,60(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 60, temp.u32);
	// b 0x82e72054
	goto loc_82E72054;
loc_82E72050:
	// stfs f31,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 60, temp.u32);
loc_82E72054:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E71FF0) {
	__imp__sub_82E71FF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E72070) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e720a0
	if (cr0.eq) goto loc_82E720A0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82e71460
	sub_82E71460(ctx, base);
	// b 0x82e720a4
	goto loc_82E720A4;
loc_82E720A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E720A4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E72070) {
	__imp__sub_82E72070(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E720B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-29968
	r11.s64 = r11.s64 + -29968;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82e82a48
	sub_82E82A48(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e72100
	if (cr0.eq) goto loc_82E72100;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,-9868(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E72100:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E720B8) {
	__imp__sub_82E720B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E72120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lfs f0,3084(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	f0.f64 = double(temp.f32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stfs f0,80(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// stfs f0,88(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// stb r11,79(r31)
	PPC_STORE_U8(r31.u32 + 79, r11.u8);
	// stfs f0,96(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// stb r11,84(r31)
	PPC_STORE_U8(r31.u32 + 84, r11.u8);
	// stb r11,92(r31)
	PPC_STORE_U8(r31.u32 + 92, r11.u8);
	// stb r11,78(r31)
	PPC_STORE_U8(r31.u32 + 78, r11.u8);
	// bne cr6,0x82e7216c
	if (!cr6.eq) goto loc_82E7216C;
loc_82E72164:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e72338
	goto loc_82E72338;
loc_82E7216C:
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// addi r4,r11,3696
	ctx.r4.s64 = r11.s64 + 3696;
	// bl 0x822674d0
	sub_822674D0(ctx, base);
	// lis r30,-31948
	r30.s64 = -2093744128;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// addi r4,r11,-8532
	ctx.r4.s64 = r11.s64 + -8532;
	// lwz r3,-720(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-720) );
	// bl 0x82267be0
	sub_82267BE0(ctx, base);
	// lis r11,-31947
	r11.s64 = -2093678592;
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// lwz r3,-720(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-720) );
	// addi r4,r11,-7468
	ctx.r4.s64 = r11.s64 + -7468;
	// bl 0x82267be0
	sub_82267BE0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(40) );
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e72164
	if (cr0.eq) goto loc_82E72164;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// lis r11,-31948
	r11.s64 = -2093744128;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-16196
	ctx.r4.s64 = r11.s64 + -16196;
	// lwz r3,20(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(20) );
	// bl 0x821e8238
	sub_821E8238(ctx, base);
	// mr. r11,r3
	r11.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// beq 0x82e721fc
	if (cr0.eq) goto loc_82E721FC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82e71f70
	sub_82E71F70(ctx, base);
loc_82E721FC:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(24) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e72214
	if (cr0.eq) goto loc_82E72214;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82e71ff0
	sub_82E71FF0(ctx, base);
loc_82E72214:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e82b18
	sub_82E82B18(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e72164
	if (cr0.eq) goto loc_82E72164;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e71f10
	sub_82E71F10(ctx, base);
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r30,r11,-14816
	r30.s64 = r11.s64 + -14816;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// bl 0x82e76fd0
	sub_82E76FD0(ctx, base);
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r3,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r3.u32);
	// addi r29,r11,-12884
	r29.s64 = r11.s64 + -12884;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + int32_t(8) );
	// bl 0x82e76fd0
	sub_82E76FD0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// bl 0x82e76fd0
	sub_82E76FD0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// bl 0x82e76fd0
	sub_82E76FD0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lis r11,-31948
	r11.s64 = -2093744128;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-15092
	ctx.r4.s64 = r11.s64 + -15092;
	// stw r10,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// bl 0x82e76fd0
	sub_82E76FD0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lis r11,-31948
	r11.s64 = -2093744128;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-13988
	ctx.r4.s64 = r11.s64 + -13988;
	// stw r10,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// bl 0x82e76fd0
	sub_82E76FD0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lis r11,-31948
	r11.s64 = -2093744128;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-13160
	ctx.r4.s64 = r11.s64 + -13160;
	// stw r10,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r10.u32);
	// bl 0x82e76fd0
	sub_82E76FD0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lis r11,-31948
	r11.s64 = -2093744128;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-13436
	ctx.r4.s64 = r11.s64 + -13436;
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// bl 0x82e76fd0
	sub_82E76FD0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(44) );
	// stw r10,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
loc_82E72338:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E72120) {
	__imp__sub_82E72120(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E72340) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82e72368
	if (!cr6.eq) goto loc_82E72368;
loc_82E72360:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e724c8
	goto loc_82E724C8;
loc_82E72368:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826b4b60
	sub_826B4B60(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,-29844
	ctx.r4.s64 = r11.s64 + -29844;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e723c0
	if (!cr0.eq) goto loc_82E723C0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b568c0
	sub_82B568C0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x82e72360
	if (cr0.eq) goto loc_82E72360;
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(16) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e72360
	if (cr0.eq) goto loc_82E72360;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82e757b8
	sub_82E757B8(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// stw r3,68(r29)
	PPC_STORE_U32(r29.u32 + 68, ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = rotl64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
	// b 0x82e724c8
	goto loc_82E724C8;
loc_82E723C0:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-29864
	ctx.r4.s64 = r11.s64 + -29864;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e723f8
	if (!cr0.eq) goto loc_82E723F8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b568c0
	sub_82B568C0(ctx, base);
	// bl 0x82ca3b30
	sub_82CA3B30(ctx, base);
	// mr. r11,r3
	r11.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x82e724bc
	if (cr0.lt) goto loc_82E724BC;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,72(r29)
	PPC_STORE_U32(r29.u32 + 72, r11.u32);
	// b 0x82e724c8
	goto loc_82E724C8;
loc_82E723F8:
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-25128
	ctx.r4.s64 = r11.s64 + -25128;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e7245c
	if (!cr0.eq) goto loc_82E7245C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b568c0
	sub_82B568C0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e72454
	if (cr0.eq) goto loc_82E72454;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r11,-720(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-720) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e72438
	if (cr0.eq) goto loc_82E72438;
	// lfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f31.f64 = double(temp.f32);
	// b 0x82e72440
	goto loc_82E72440;
loc_82E72438:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f31.f64 = double(temp.f32);
loc_82E72440:
	// bl 0x82ca5860
	sub_82CA5860(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(f0.f64 * f31.f64));
	// bl 0x82e71ff0
	sub_82E71FF0(ctx, base);
loc_82E72454:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e724c8
	goto loc_82E724C8;
loc_82E7245C:
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-25140
	ctx.r4.s64 = r11.s64 + -25140;
	// bl 0x82ca6320
	sub_82CA6320(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e724bc
	if (!cr0.eq) goto loc_82E724BC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b568c0
	sub_82B568C0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e72454
	if (cr0.eq) goto loc_82E72454;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r11,-720(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-720) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e7249c
	if (cr0.eq) goto loc_82E7249C;
	// lfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f31.f64 = double(temp.f32);
	// b 0x82e724a4
	goto loc_82E724A4;
loc_82E7249C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f31.f64 = double(temp.f32);
loc_82E724A4:
	// bl 0x82ca5860
	sub_82CA5860(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(f0.f64 * f31.f64));
	// bl 0x82e71f70
	sub_82E71F70(ctx, base);
	// b 0x82e72454
	goto loc_82E72454;
loc_82E724BC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e9fbe8
	sub_82E9FBE8(ctx, base);
loc_82E724C8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E72340) {
	__imp__sub_82E72340(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E724D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82e71f10
	sub_82E71F10(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82E724D8) {
	__imp__sub_82E724D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E724E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r11,r11,-12884
	r11.s64 = r11.s64 + -12884;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e726c4
	if (cr6.eq) goto loc_82E726C4;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r11,r11,-10392
	r11.s64 = r11.s64 + -10392;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e726c4
	if (cr6.eq) goto loc_82E726C4;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r11,r11,-13160
	r11.s64 = r11.s64 + -13160;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e726c4
	if (cr6.eq) goto loc_82E726C4;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r11,r11,-10668
	r11.s64 = r11.s64 + -10668;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e726c4
	if (cr6.eq) goto loc_82E726C4;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r11,r11,-14540
	r11.s64 = r11.s64 + -14540;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e726c4
	if (cr6.eq) goto loc_82E726C4;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r11,r11,-13436
	r11.s64 = r11.s64 + -13436;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e726c4
	if (cr6.eq) goto loc_82E726C4;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r11,r11,-15092
	r11.s64 = r11.s64 + -15092;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e726c4
	if (cr6.eq) goto loc_82E726C4;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r11,r11,-14264
	r11.s64 = r11.s64 + -14264;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e726c4
	if (cr6.eq) goto loc_82E726C4;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r11,r11,-14816
	r11.s64 = r11.s64 + -14816;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e726c4
	if (cr6.eq) goto loc_82E726C4;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r11,r11,-13988
	r11.s64 = r11.s64 + -13988;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e726c4
	if (cr6.eq) goto loc_82E726C4;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r11,r11,-10944
	r11.s64 = r11.s64 + -10944;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e726c4
	if (cr6.eq) goto loc_82E726C4;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r11,r11,-16748
	r11.s64 = r11.s64 + -16748;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e726c4
	if (cr6.eq) goto loc_82E726C4;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r11,r11,-11220
	r11.s64 = r11.s64 + -11220;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e726c4
	if (cr6.eq) goto loc_82E726C4;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r11,r11,-13712
	r11.s64 = r11.s64 + -13712;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e726c4
	if (cr6.eq) goto loc_82E726C4;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r11,r11,-11496
	r11.s64 = r11.s64 + -11496;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e726c4
	if (cr6.eq) goto loc_82E726C4;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r11,r11,-16472
	r11.s64 = r11.s64 + -16472;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e726c4
	if (cr6.eq) goto loc_82E726C4;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r11,r11,-11772
	r11.s64 = r11.s64 + -11772;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e726c4
	if (cr6.eq) goto loc_82E726C4;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r11,r11,-16196
	r11.s64 = r11.s64 + -16196;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e726c4
	if (cr6.eq) goto loc_82E726C4;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r11,r11,-15920
	r11.s64 = r11.s64 + -15920;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e726c4
	if (cr6.eq) goto loc_82E726C4;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r11,r11,-15644
	r11.s64 = r11.s64 + -15644;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e726c4
	if (cr6.eq) goto loc_82E726C4;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r11,r11,-12048
	r11.s64 = r11.s64 + -12048;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e726c4
	if (cr6.eq) goto loc_82E726C4;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r11,r11,-15368
	r11.s64 = r11.s64 + -15368;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e726c4
	if (cr6.eq) goto loc_82E726C4;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r11,r11,-12324
	r11.s64 = r11.s64 + -12324;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82e726c4
	if (cr6.eq) goto loc_82E726C4;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,-12600
	r11.s64 = r11.s64 + -12600;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(4) );
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_82E726C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E724E0) {
	__imp__sub_82E724E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E726D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82e72700
	if (!cr6.eq) goto loc_82E72700;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e727dc
	goto loc_82E727DC;
loc_82E72700:
	// lis r11,-31948
	r11.s64 = -2093744128;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-15644
	ctx.r4.s64 = r11.s64 + -15644;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f31,2628(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2628);
	f31.f64 = double(temp.f32);
	// bl 0x821e8238
	sub_821E8238(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e72728
	if (cr0.eq) goto loc_82E72728;
	// lfs f31,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	f31.f64 = double(temp.f32);
loc_82E72728:
	// lfs f0,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 52);
	f0.f64 = double(temp.f32);
	// lis r11,-31948
	r11.s64 = -2093744128;
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f0,56(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 56);
	f0.f64 = double(temp.f32);
	// addi r4,r11,-16748
	ctx.r4.s64 = r11.s64 + -16748;
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,60(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 60);
	f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f0,76(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 76);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,80(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 80);
	f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,84(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 84);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x821e8238
	sub_821E8238(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e7278c
	if (cr0.eq) goto loc_82E7278C;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f0,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
loc_82E7278C:
	// lis r11,-31948
	r11.s64 = -2093744128;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-11220
	ctx.r4.s64 = r11.s64 + -11220;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e8238
	sub_821E8238(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e727c0
	if (cr0.eq) goto loc_82E727C0;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_82E727C0:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f2,3800(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3800);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82e83370
	sub_82E83370(ctx, base);
loc_82E727DC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
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

PPC_WEAK_FUNC(sub_82E726D0) {
	__imp__sub_82E726D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E727F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r3,r11,-16748
	ctx.r3.s64 = r11.s64 + -16748;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E727F8) {
	__imp__sub_82E727F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E72808) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
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
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e72848
	if (cr0.eq) goto loc_82E72848;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-29808
	r11.s64 = r11.s64 + -29808;
	// lfs f0,3084(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stfs f0,8(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// b 0x82e7284c
	goto loc_82E7284C;
loc_82E72848:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E7284C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E72808) {
	__imp__sub_82E72808(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E72860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r3,r11,-16472
	ctx.r3.s64 = r11.s64 + -16472;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E72860) {
	__imp__sub_82E72860(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E72870) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e728cc
	if (cr0.eq) goto loc_82E728CC;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,-29768
	r11.s64 = r11.s64 + -29768;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r11,-720(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-720) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e728b0
	if (cr0.eq) goto loc_82E728B0;
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82e728b8
	goto loc_82E728B8;
loc_82E728B0:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	ctx.f13.f64 = double(temp.f32);
loc_82E728B8:
	// lis r11,-32240
	r11.s64 = -2112880640;
	// lfs f0,492(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 492);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// b 0x82e728d0
	goto loc_82E728D0;
loc_82E728CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E728D0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E72870) {
	__imp__sub_82E72870(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E728E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r3,r11,-16196
	ctx.r3.s64 = r11.s64 + -16196;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E728E0) {
	__imp__sub_82E728E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E728F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e7294c
	if (cr0.eq) goto loc_82E7294C;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,-29732
	r11.s64 = r11.s64 + -29732;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r11,-720(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-720) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e72930
	if (cr0.eq) goto loc_82E72930;
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82e72938
	goto loc_82E72938;
loc_82E72930:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	ctx.f13.f64 = double(temp.f32);
loc_82E72938:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,3056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3056);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// b 0x82e72950
	goto loc_82E72950;
loc_82E7294C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E72950:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E728F0) {
	__imp__sub_82E728F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E72960) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r29,r3
	cr6.compare<uint32_t>(r29.u32, ctx.r3.u32, xer);
	// bne cr6,0x82e729b0
	if (!cr6.eq) goto loc_82E729B0;
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
loc_82E729B0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E72960) {
	__imp__sub_82E72960(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E729C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r3,r11,-15920
	ctx.r3.s64 = r11.s64 + -15920;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E729C0) {
	__imp__sub_82E729C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E729D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e72a04
	if (cr0.eq) goto loc_82E72A04;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r11,r11,-29696
	r11.s64 = r11.s64 + -29696;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x82e72a08
	goto loc_82E72A08;
loc_82E72A04:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E72A08:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E729D0) {
	__imp__sub_82E729D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E72A18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r29,r3
	cr6.compare<uint32_t>(r29.u32, ctx.r3.u32, xer);
	// bne cr6,0x82e72a68
	if (!cr6.eq) goto loc_82E72A68;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(4) );
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_82E72A68:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E72A18) {
	__imp__sub_82E72A18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E72A78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,-29660
	r11.s64 = r11.s64 + -29660;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r11,-720(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-720) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e72a9c
	if (cr0.eq) goto loc_82E72A9C;
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82e72aa4
	goto loc_82E72AA4;
loc_82E72A9C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	ctx.f13.f64 = double(temp.f32);
loc_82E72AA4:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2720(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2720);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,3024(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3024);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E72A78) {
	__imp__sub_82E72A78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E72AC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r3,r11,-15644
	ctx.r3.s64 = r11.s64 + -15644;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E72AC8) {
	__imp__sub_82E72AC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E72AD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e72afc
	if (cr0.eq) goto loc_82E72AFC;
	// bl 0x82e72a78
	sub_82E72A78(ctx, base);
	// b 0x82e72b00
	goto loc_82E72B00;
loc_82E72AFC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E72B00:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E72AD8) {
	__imp__sub_82E72AD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E72B10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r29,r3
	cr6.compare<uint32_t>(r29.u32, ctx.r3.u32, xer);
	// bne cr6,0x82e72ba8
	if (!cr6.eq) goto loc_82E72BA8;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f12,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f13,3084(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	ctx.f13.f64 = double(temp.f32);
loc_82E72B68:
	// fcmpu cr6,f12,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x82e72b74
	if (cr6.lt) goto loc_82E72B74;
	// fmr f0,f12
	f0.f64 = ctx.f12.f64;
loc_82E72B74:
	// fcmpu cr6,f0,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, f0.f64);
	// bne cr6,0x82e72b68
	if (!cr6.eq) goto loc_82E72B68;
	// stfs f0,4(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x82e72b9c
	if (cr6.lt) goto loc_82E72B9C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,2628(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2628);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x82e72ba4
	if (!cr6.gt) goto loc_82E72BA4;
loc_82E72B9C:
	// stfs f13,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// b 0x82e72ba8
	goto loc_82E72BA8;
loc_82E72BA4:
	// stfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
loc_82E72BA8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E72B10) {
	__imp__sub_82E72B10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E72BB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r3,r11,-15368
	ctx.r3.s64 = r11.s64 + -15368;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E72BB8) {
	__imp__sub_82E72BB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E72BC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e72c24
	if (cr0.eq) goto loc_82E72C24;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,-29616
	r11.s64 = r11.s64 + -29616;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lwz r11,-720(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-720) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e72c08
	if (cr0.eq) goto loc_82E72C08;
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82e72c10
	goto loc_82E72C10;
loc_82E72C08:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	ctx.f13.f64 = double(temp.f32);
loc_82E72C10:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2912);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// b 0x82e72c28
	goto loc_82E72C28;
loc_82E72C24:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E72C28:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E72BC8) {
	__imp__sub_82E72BC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E72C38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e72c6c
	if (cr0.eq) goto loc_82E72C6C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,6984
	r11.s64 = r11.s64 + 6984;
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x82e72c70
	goto loc_82E72C70;
loc_82E72C6C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E72C70:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E72C38) {
	__imp__sub_82E72C38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E72C80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e72cb4
	if (cr0.eq) goto loc_82E72CB4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,6316
	r11.s64 = r11.s64 + 6316;
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x82e72cb8
	goto loc_82E72CB8;
loc_82E72CB4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E72CB8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E72C80) {
	__imp__sub_82E72C80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E72CC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r3,r11,-14540
	ctx.r3.s64 = r11.s64 + -14540;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E72CC8) {
	__imp__sub_82E72CC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E72CD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e72d0c
	if (cr0.eq) goto loc_82E72D0C;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-29540
	r11.s64 = r11.s64 + -29540;
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x82e72d10
	goto loc_82E72D10;
loc_82E72D0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E72D10:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E72CD8) {
	__imp__sub_82E72CD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E72D20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r29,r3
	cr6.compare<uint32_t>(r29.u32, ctx.r3.u32, xer);
	// bne cr6,0x82e72d84
	if (!cr6.eq) goto loc_82E72D84;
	// li r11,1
	r11.s64 = 1;
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// stb r11,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r11.u8);
	// lfs f0,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// stb r11,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r11.u8);
loc_82E72D84:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E72D20) {
	__imp__sub_82E72D20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E72D90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r3,r11,-14264
	ctx.r3.s64 = r11.s64 + -14264;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E72D90) {
	__imp__sub_82E72D90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E72DA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
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
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e72df4
	if (cr0.eq) goto loc_82E72DF4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f0.f64 = double(temp.f32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// addi r11,r11,-29496
	r11.s64 = r11.s64 + -29496;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stfs f0,8(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// b 0x82e72df8
	goto loc_82E72DF8;
loc_82E72DF4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E72DF8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E72DA0) {
	__imp__sub_82E72DA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E72E08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r29,r3
	cr6.compare<uint32_t>(r29.u32, ctx.r3.u32, xer);
	// bne cr6,0x82e72e94
	if (!cr6.eq) goto loc_82E72E94;
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// stfs f0,8(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// lfs f0,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// lfs f0,16(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// stb r11,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r11.u8);
	// lbz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 32);
	// stb r11,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r11.u8);
	// stb r10,32(r31)
	PPC_STORE_U8(r31.u32 + 32, ctx.r10.u8);
	// lfs f0,20(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 20);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// lfs f0,24(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 24);
	f0.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// lfs f0,28(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 28);
	f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
loc_82E72E94:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E72E08) {
	__imp__sub_82E72E08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E72EA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r3,r11,-13988
	ctx.r3.s64 = r11.s64 + -13988;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E72EA0) {
	__imp__sub_82E72EA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E72EB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e72ee4
	if (cr0.eq) goto loc_82E72EE4;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-29456
	r11.s64 = r11.s64 + -29456;
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x82e72ee8
	goto loc_82E72EE8;
loc_82E72EE4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E72EE8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E72EB0) {
	__imp__sub_82E72EB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E72EF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(12) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r29,r3
	cr6.compare<uint32_t>(r29.u32, ctx.r3.u32, xer);
	// bne cr6,0x82e72f80
	if (!cr6.eq) goto loc_82E72F80;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,3080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,3800(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3800);
	ctx.f12.f64 = double(temp.f32);
loc_82E72F58:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f12.f64);
	// blt cr6,0x82e72f6c
	if (cr6.lt) goto loc_82E72F6C;
	// fcmpu cr6,f0,f11
	cr6.compare(f0.f64, ctx.f11.f64);
	// bgt cr6,0x82e72f6c
	if (cr6.gt) goto loc_82E72F6C;
	// fmr f13,f0
	ctx.f13.f64 = f0.f64;
loc_82E72F6C:
	// fcmpu cr6,f13,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f13.f64);
	// bne cr6,0x82e72f58
	if (!cr6.eq) goto loc_82E72F58;
	// li r11,1
	r11.s64 = 1;
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// stb r11,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r11.u8);
loc_82E72F80:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E72EF8) {
	__imp__sub_82E72EF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E72F90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r3,r11,-13712
	ctx.r3.s64 = r11.s64 + -13712;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E72F90) {
	__imp__sub_82E72F90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E72FA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
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
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e72fe0
	if (cr0.eq) goto loc_82E72FE0;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-29416
	r11.s64 = r11.s64 + -29416;
	// lfs f0,3084(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stfs f0,8(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// b 0x82e72fe4
	goto loc_82E72FE4;
loc_82E72FE0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E72FE4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E72FA0) {
	__imp__sub_82E72FA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E72FF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r3,r11,-13436
	ctx.r3.s64 = r11.s64 + -13436;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E72FF8) {
	__imp__sub_82E72FF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E73008) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e7303c
	if (cr0.eq) goto loc_82E7303C;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-29376
	r11.s64 = r11.s64 + -29376;
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x82e73040
	goto loc_82E73040;
loc_82E7303C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E73040:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E73008) {
	__imp__sub_82E73008(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E73050) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r3,r11,-13160
	ctx.r3.s64 = r11.s64 + -13160;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E73050) {
	__imp__sub_82E73050(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E73060) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e73094
	if (cr0.eq) goto loc_82E73094;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-29340
	r11.s64 = r11.s64 + -29340;
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x82e73098
	goto loc_82E73098;
loc_82E73094:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E73098:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E73060) {
	__imp__sub_82E73060(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E730A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r3,r11,-12884
	ctx.r3.s64 = r11.s64 + -12884;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E730A8) {
	__imp__sub_82E730A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E730B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e730ec
	if (cr0.eq) goto loc_82E730EC;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-29300
	r11.s64 = r11.s64 + -29300;
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x82e730f0
	goto loc_82E730F0;
loc_82E730EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E730F0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E730B8) {
	__imp__sub_82E730B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E73100) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r3,r11,-12600
	ctx.r3.s64 = r11.s64 + -12600;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E73100) {
	__imp__sub_82E73100(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E73110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r30,-31952
	r30.s64 = -2094006272;
	// addi r11,r11,-29256
	r11.s64 = r11.s64 + -29256;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x82e73150
	if (cr0.eq) goto loc_82E73150;
	// lwz r11,-9868(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E73150:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e73168
	if (cr0.eq) goto loc_82E73168;
	// lwz r11,-9868(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E73168:
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r11,r11,-30984
	r11.s64 = r11.s64 + -30984;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E73110) {
	__imp__sub_82E73110(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E73190) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be4
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(0) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(r30.u32, ctx.r3.u32, xer);
	// bne cr6,0x82e73368
	if (!cr6.eq) goto loc_82E73368;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// li r27,0
	r27.s64 = 0;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// lis r28,-31952
	r28.s64 = -2094006272;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82e73280
	if (cr6.eq) goto loc_82E73280;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e73208
	if (cr0.eq) goto loc_82E73208;
	// lwz r11,-9868(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E73208:
	// lwz r30,8(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + int32_t(8) );
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// beq 0x82e7327c
	if (cr0.eq) goto loc_82E7327C;
	// lis r11,5461
	r11.s64 = 357892096;
	// mulli r3,r30,12
	ctx.r3.s64 = r30.s64 * 12;
	// ori r11,r11,21845
	r11.u64 = r11.u64 | 21845;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x82e73230
	if (!cr6.gt) goto loc_82E73230;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82E73230:
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e73270
	if (cr0.eq) goto loc_82E73270;
	// addic. r10,r30,-1
	xer.ca = r30.u32 > 0;
	ctx.r10.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt 0x82e73268
	if (cr0.lt) goto loc_82E73268;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r3,8
	r11.s64 = ctx.r3.s64 + 8;
	// lfs f0,3084(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3084);
	f0.f64 = double(temp.f32);
loc_82E73250:
	// stfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + -8, temp.u32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stfs f0,-4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + -4, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// bge 0x82e73250
	if (!cr0.lt) goto loc_82E73250;
loc_82E73268:
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x82e73274
	goto loc_82E73274;
loc_82E73270:
	// mr r11,r27
	r11.u64 = r27.u64;
loc_82E73274:
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// b 0x82e73280
	goto loc_82E73280;
loc_82E7327C:
	// stw r27,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r27.u32);
loc_82E73280:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(16) );
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82e732cc
	if (cr6.eq) goto loc_82E732CC;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e732a8
	if (cr0.eq) goto loc_82E732A8;
	// lwz r11,-9868(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E732A8:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + int32_t(16) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// beq 0x82e732c8
	if (cr0.eq) goto loc_82E732C8;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// b 0x82e732cc
	goto loc_82E732CC;
loc_82E732C8:
	// stw r27,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r27.u32);
loc_82E732CC:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e7331c
	if (!cr6.gt) goto loc_82E7331C;
	// mr r11,r27
	r11.u64 = r27.u64;
loc_82E732E0:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + int32_t(4) );
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + int32_t(8) );
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// blt cr6,0x82e732e0
	if (cr6.lt) goto loc_82E732E0;
loc_82E7331C:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(16) );
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + int32_t(12) );
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = rotl64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + int32_t(12) );
	// bl 0x82ca2c60
	sub_82CA2C60(ctx, base);
	// lfs f0,20(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 20);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// lfs f0,24(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 24);
	f0.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// lfs f0,28(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 28);
	f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// lfs f0,32(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 32);
	f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// lfs f0,36(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 36);
	f0.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// lfs f0,40(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 40);
	f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// lbz r11,44(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 44);
	// stb r11,44(r31)
	PPC_STORE_U8(r31.u32 + 44, r11.u8);
loc_82E73368:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	return;
}

PPC_WEAK_FUNC(sub_82E73190) {
	__imp__sub_82E73190(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E73378) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2be8
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,-12048
	ctx.r4.s64 = r11.s64 + -12048;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821e8238
	sub_821E8238(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
	// bne 0x82e733bc
	if (!cr0.eq) goto loc_82E733BC;
	// addi r11,r30,76
	r11.s64 = r30.s64 + 76;
loc_82E733BC:
	// lis r9,-31948
	ctx.r9.s64 = -2093744128;
	// lfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f31.f64 = double(temp.f32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lis r28,-31948
	r28.s64 = -2093744128;
	// lfs f30,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f30.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r10,-12604(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + int32_t(-12604) );
	// lfs f29,3080(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3080);
	f29.f64 = double(temp.f32);
	// clrlwi. r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// lis r8,-31948
	ctx.r8.s64 = -2093744128;
	// bne 0x82e7341c
	if (!cr0.eq) goto loc_82E7341C;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// lwz r11,-720(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(-720) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r10,-12604(r9)
	PPC_STORE_U32(ctx.r9.u32 + -12604, ctx.r10.u32);
	// beq 0x82e73404
	if (cr0.eq) goto loc_82E73404;
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82e73408
	goto loc_82E73408;
loc_82E73404:
	// fmr f13,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f29.f64;
loc_82E73408:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,3052(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3052);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,-12608(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + -12608, temp.u32);
	// b 0x82e73420
	goto loc_82E73420;
loc_82E7341C:
	// lfs f0,-12608(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -12608);
	f0.f64 = double(temp.f32);
loc_82E73420:
	// lfs f13,56(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,36(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = static_cast<float>(ctx.f13.f64 - ctx.f12.f64);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & 0x7FFFFFFFFFFFFFFF;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82e73494
	if (!cr6.lt) goto loc_82E73494;
	// lfs f13,20(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * f31.f64));
	// lfs f12,28(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f12,f12,f30,f13
	ctx.f12.f64 = double(std::fma(float(ctx.f12.f64), float(f30.f64), float(ctx.f13.f64)));
	// lfs f13,3028(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3028);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x82e73494
	if (!cr6.gt) goto loc_82E73494;
	// fmuls f10,f0,f0
	ctx.f10.f64 = double(float(f0.f64 * f0.f64));
	// lfs f13,52(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,32(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 32);
	f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	f0.f64 = static_cast<float>(f0.f64 - ctx.f13.f64);
	// lfs f12,36(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,56(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = static_cast<float>(ctx.f12.f64 - ctx.f13.f64);
	// lfs f9,60(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 60);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,40(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f9
	ctx.f12.f64 = static_cast<float>(ctx.f12.f64 - ctx.f9.f64);
	// fmuls f0,f0,f0
	f0.f64 = double(float(f0.f64 * f0.f64));
	// fmadds f0,f13,f13,f0
	f0.f64 = double(std::fma(float(ctx.f13.f64), float(ctx.f13.f64), float(f0.f64)));
	// fmadds f0,f12,f12,f0
	f0.f64 = double(std::fma(float(ctx.f12.f64), float(ctx.f12.f64), float(f0.f64)));
	// fcmpu cr6,f0,f10
	cr6.compare(f0.f64, ctx.f10.f64);
	// blt cr6,0x82e73600
	if (cr6.lt) goto loc_82E73600;
loc_82E73494:
	// lfs f0,52(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 52);
	f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f0,32(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// lis r11,-31948
	r11.s64 = -2093744128;
	// lfs f0,56(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 56);
	f0.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stfs f0,36(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// addi r4,r11,-10116
	ctx.r4.s64 = r11.s64 + -10116;
	// lfs f0,60(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 60);
	f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f0,40(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// stfs f31,20(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// stfs f11,24(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// stfs f30,28(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// stb r10,44(r31)
	PPC_STORE_U8(r31.u32 + 44, ctx.r10.u8);
	// bl 0x821e8238
	sub_821E8238(ctx, base);
	// lis r11,-31948
	r11.s64 = -2093744128;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r11,-15368
	ctx.r4.s64 = r11.s64 + -15368;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821e8238
	sub_821E8238(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82e734fc
	if (cr6.eq) goto loc_82E734FC;
	// lfs f13,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82e73514
	goto loc_82E73514;
loc_82E734FC:
	// lwz r11,-720(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + int32_t(-720) );
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e73510
	if (cr0.eq) goto loc_82E73510;
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82e73514
	goto loc_82E73514;
loc_82E73510:
	// fmr f13,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f29.f64;
loc_82E73514:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e73524
	if (cr6.eq) goto loc_82E73524;
	// lfs f12,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// b 0x82e73528
	goto loc_82E73528;
loc_82E73524:
	// fmr f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f13.f64;
loc_82E73528:
	// fmuls f11,f30,f12
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(f30.f64 * ctx.f12.f64));
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// fmuls f0,f31,f13
	f0.f64 = double(float(f31.f64 * ctx.f13.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmuls f12,f31,f12
	ctx.f12.f64 = double(float(f31.f64 * ctx.f12.f64));
	// lfs f7,52(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f13,f30,f13
	ctx.f13.f64 = double(float(f30.f64 * ctx.f13.f64));
	// lfs f6,60(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 60);
	ctx.f6.f64 = double(temp.f32);
	// lfs f10,56(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lfs f10,3056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3056);
	ctx.f10.f64 = double(temp.f32);
	// fneg f11,f11
	ctx.f11.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fadds f9,f13,f12
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fadds f8,f0,f11
	ctx.f8.f64 = double(float(f0.f64 + ctx.f11.f64));
	// fmuls f9,f9,f10
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmuls f10,f8,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fadds f9,f6,f9
	ctx.f9.f64 = double(float(ctx.f6.f64 + ctx.f9.f64));
	// stfs f9,8(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// fadds f10,f10,f7
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// stfs f10,0(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f10,f10,f0
	ctx.f10.f64 = static_cast<float>(ctx.f10.f64 - f0.f64);
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f8,f13
	ctx.f8.f64 = static_cast<float>(ctx.f8.f64 - ctx.f13.f64);
	// stfs f10,12(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// stfs f9,16(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// stfs f8,20(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lfs f10,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,20(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f11,f10,f11
	ctx.f11.f64 = static_cast<float>(ctx.f10.f64 - ctx.f11.f64);
	// lfs f10,16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f12,f9,f12
	ctx.f12.f64 = static_cast<float>(ctx.f9.f64 - ctx.f12.f64);
	// stfs f11,24(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// stfs f10,28(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r11.u32 + 28, temp.u32);
	// stfs f12,32(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 32, temp.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lfs f12,24(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,32(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f0,f12
	f0.f64 = double(float(f0.f64 + ctx.f12.f64));
	// lfs f12,28(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f0,36(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 36, temp.u32);
	// stfs f12,40(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 40, temp.u32);
	// stfs f13,44(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 44, temp.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(4) );
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,48(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 48, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,52(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 52, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,56(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 56, temp.u32);
loc_82E73600:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82ca2c38
	return;
}

PPC_WEAK_FUNC(sub_82E73378) {
	__imp__sub_82E73378(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E73618) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
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
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e7368c
	if (cr0.eq) goto loc_82E7368C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	f0.f64 = double(temp.f32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lfs f13,3040(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3040);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r11,-29256
	ctx.r10.s64 = r11.s64 + -29256;
	// li r11,0
	r11.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stfs f0,20(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stb r11,44(r3)
	PPC_STORE_U8(ctx.r3.u32 + 44, r11.u8);
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f13,32(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// b 0x82e73690
	goto loc_82E73690;
loc_82E7368C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E73690:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E73618) {
	__imp__sub_82E73618(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E736A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82e73110
	sub_82E73110(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e736dc
	if (cr0.eq) goto loc_82E736DC;
	// lis r11,-31952
	r11.s64 = -2094006272;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,-9868(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(-9868) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E736DC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E736A0) {
	__imp__sub_82E736A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E736F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(16) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// stw r31,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r31.u32);
	// beq 0x82e7378c
	if (cr0.eq) goto loc_82E7378C;
	// lis r11,5461
	r11.s64 = 357892096;
	// mulli r3,r31,12
	ctx.r3.s64 = r31.s64 * 12;
	// ori r11,r11,21845
	r11.u64 = r11.u64 | 21845;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// ble cr6,0x82e73744
	if (!cr6.gt) goto loc_82E73744;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82E73744:
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e73784
	if (cr0.eq) goto loc_82E73784;
	// addic. r10,r31,-1
	xer.ca = r31.u32 > 0;
	ctx.r10.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt 0x82e7377c
	if (cr0.lt) goto loc_82E7377C;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r3,8
	r11.s64 = ctx.r3.s64 + 8;
	// lfs f0,3084(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3084);
	f0.f64 = double(temp.f32);
loc_82E73764:
	// stfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + -8, temp.u32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stfs f0,-4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + -4, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// bge 0x82e73764
	if (!cr0.lt) goto loc_82E73764;
loc_82E7377C:
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x82e73788
	goto loc_82E73788;
loc_82E73784:
	// li r11,0
	r11.s64 = 0;
loc_82E73788:
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
loc_82E7378C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(20) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r3.u32);
	// beq 0x82e737b8
	if (cr0.eq) goto loc_82E737B8;
	// rlwinm r3,r3,3,0,28
	ctx.r3.u64 = rotl64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r3.u32);
loc_82E737B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E736F8) {
	__imp__sub_82E736F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E737D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r3,r11,-12324
	ctx.r3.s64 = r11.s64 + -12324;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E737D0) {
	__imp__sub_82E737D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E737E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e73814
	if (cr0.eq) goto loc_82E73814;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-29208
	r11.s64 = r11.s64 + -29208;
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x82e73818
	goto loc_82E73818;
loc_82E73814:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E73818:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E737E0) {
	__imp__sub_82E737E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E73828) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r29,r3
	cr6.compare<uint32_t>(r29.u32, ctx.r3.u32, xer);
	// bne cr6,0x82e73878
	if (!cr6.eq) goto loc_82E73878;
	// lbz r11,4(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 4);
	// stb r11,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r11.u8);
loc_82E73878:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E73828) {
	__imp__sub_82E73828(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E73888) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r3,r11,-12048
	ctx.r3.s64 = r11.s64 + -12048;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E73888) {
	__imp__sub_82E73888(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E73898) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
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
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e738d8
	if (cr0.eq) goto loc_82E738D8;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-29172
	r11.s64 = r11.s64 + -29172;
	// lfs f0,3084(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stfs f0,8(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// b 0x82e738dc
	goto loc_82E738DC;
loc_82E738D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E738DC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E73898) {
	__imp__sub_82E73898(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E738F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r3,r11,-11772
	ctx.r3.s64 = r11.s64 + -11772;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E738F0) {
	__imp__sub_82E738F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E73900) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
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
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e73940
	if (cr0.eq) goto loc_82E73940;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-29128
	r11.s64 = r11.s64 + -29128;
	// lfs f0,3084(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stfs f0,8(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// b 0x82e73944
	goto loc_82E73944;
loc_82E73940:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E73944:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E73900) {
	__imp__sub_82E73900(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E73958) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r29,r3
	cr6.compare<uint32_t>(r29.u32, ctx.r3.u32, xer);
	// bne cr6,0x82e739b8
	if (!cr6.eq) goto loc_82E739B8;
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// lfs f0,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
loc_82E739B8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E73958) {
	__imp__sub_82E73958(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E739C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r3,r11,-11496
	ctx.r3.s64 = r11.s64 + -11496;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E739C8) {
	__imp__sub_82E739C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E739D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e73a04
	if (cr0.eq) goto loc_82E73A04;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,-29088
	r11.s64 = r11.s64 + -29088;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x82e73a08
	goto loc_82E73A08;
loc_82E73A04:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E73A08:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E739D8) {
	__imp__sub_82E739D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E73A18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x82ca2bec
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + int32_t(0) );
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + int32_t(0) );
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + int32_t(8) );
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r29,r3
	cr6.compare<uint32_t>(r29.u32, ctx.r3.u32, xer);
	// bne cr6,0x82e73a88
	if (!cr6.eq) goto loc_82E73A88;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f12,3084(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3084);
	ctx.f12.f64 = double(temp.f32);
loc_82E73A70:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x82e73a7c
	if (cr6.lt) goto loc_82E73A7C;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
loc_82E73A7C:
	// fcmpu cr6,f0,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, f0.f64);
	// bne cr6,0x82e73a70
	if (!cr6.eq) goto loc_82E73A70;
	// stfs f0,4(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
loc_82E73A88:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	return;
}

PPC_WEAK_FUNC(sub_82E73A18) {
	__imp__sub_82E73A18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E73A98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r3,r11,-11220
	ctx.r3.s64 = r11.s64 + -11220;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E73A98) {
	__imp__sub_82E73A98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E73AA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
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
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e73ae8
	if (cr0.eq) goto loc_82E73AE8;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-29044
	r11.s64 = r11.s64 + -29044;
	// lfs f0,3084(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stfs f0,8(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// b 0x82e73aec
	goto loc_82E73AEC;
loc_82E73AE8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E73AEC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E73AA8) {
	__imp__sub_82E73AA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E73B00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r3,r11,-10944
	ctx.r3.s64 = r11.s64 + -10944;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E73B00) {
	__imp__sub_82E73B00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E73B10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e73b44
	if (cr0.eq) goto loc_82E73B44;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-29004
	r11.s64 = r11.s64 + -29004;
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x82e73b48
	goto loc_82E73B48;
loc_82E73B44:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E73B48:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E73B10) {
	__imp__sub_82E73B10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E73B58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r3,r11,-10668
	ctx.r3.s64 = r11.s64 + -10668;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E73B58) {
	__imp__sub_82E73B58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E73B68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e73b9c
	if (cr0.eq) goto loc_82E73B9C;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-28956
	r11.s64 = r11.s64 + -28956;
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x82e73ba0
	goto loc_82E73BA0;
loc_82E73B9C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E73BA0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E73B68) {
	__imp__sub_82E73B68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E73BB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r3,r11,-10392
	ctx.r3.s64 = r11.s64 + -10392;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E73BB0) {
	__imp__sub_82E73BB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82E73BC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82625f08
	sub_82625F08(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e73bf4
	if (cr0.eq) goto loc_82E73BF4;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-28912
	r11.s64 = r11.s64 + -28912;
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x82e73bf8
	goto loc_82E73BF8;
loc_82E73BF4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E73BF8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + int32_t(-8) );
	// mtlr r12
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82E73BC0) {
	__imp__sub_82E73BC0(ctx, base);
}

