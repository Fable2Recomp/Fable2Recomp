#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82FB7B7C"))) PPC_WEAK_FUNC(sub_82FB7B7C);
PPC_FUNC_IMPL(__imp__sub_82FB7B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB7B80"))) PPC_WEAK_FUNC(sub_82FB7B80);
PPC_FUNC_IMPL(__imp__sub_82FB7B80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FB7B88;
	sub_82CA2BE8(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82ca74dc
	ctx.lr = 0x82FB7B90;
	sub_82CA74DC(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f2
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f2.f64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// fmr f28,f3
	ctx.f28.f64 = ctx.f3.f64;
	// lfs f24,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f24.f64 = double(temp.f32);
	// lfs f26,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f26.f64 = double(temp.f32);
	// fmr f27,f4
	ctx.f27.f64 = ctx.f4.f64;
	// fmr f20,f5
	ctx.f20.f64 = ctx.f5.f64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// fmr f17,f7
	ctx.f17.f64 = ctx.f7.f64;
	// lfs f23,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f23.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// lfs f29,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f25,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f25.f64 = double(temp.f32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f5,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r29,1
	ctx.r29.s64 = 1;
	// fadds f7,f13,f31
	ctx.f7.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// fadds f12,f29,f28
	ctx.f12.f64 = double(float(ctx.f29.f64 + ctx.f28.f64));
	// lfs f19,3080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f19.f64 = double(temp.f32);
	// fadds f9,f24,f28
	ctx.f9.f64 = double(float(ctx.f24.f64 + ctx.f28.f64));
	// fadds f0,f26,f31
	ctx.f0.f64 = double(float(ctx.f26.f64 + ctx.f31.f64));
	// fadds f11,f13,f27
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f27.f64));
	// fmuls f18,f5,f20
	ctx.f18.f64 = double(float(ctx.f5.f64 * ctx.f20.f64));
	// fadds f10,f29,f30
	ctx.f10.f64 = double(float(ctx.f29.f64 + ctx.f30.f64));
	// fadds f8,f23,f27
	ctx.f8.f64 = double(float(ctx.f23.f64 + ctx.f27.f64));
	// fadds f13,f25,f30
	ctx.f13.f64 = double(float(ctx.f25.f64 + ctx.f30.f64));
	// fsubs f5,f9,f12
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fsubs f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// fsubs f3,f8,f11
	ctx.f3.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// fsubs f2,f10,f13
	ctx.f2.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fmuls f1,f5,f4
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// fmsubs f1,f3,f2,f1
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f2.f64 - ctx.f1.f64));
	// fabs f22,f1
	ctx.f22.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// fcmpu cr6,f22,f6
	ctx.cr6.compare(ctx.f22.f64, ctx.f6.f64);
	// bge cr6,0x82fb7c5c
	if (!ctx.cr6.lt) goto loc_82FB7C5C;
	// fadds f7,f0,f7
	ctx.f7.f64 = double(float(ctx.f0.f64 + ctx.f7.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,2680(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2680);
	ctx.f0.f64 = double(temp.f32);
	// fadds f11,f7,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fadds f12,f11,f8
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f8.f64));
	// fadds f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// fmuls f21,f12,f0
	ctx.f21.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f22,f13,f0
	ctx.f22.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x82fb7c7c
	goto loc_82FB7C7C;
loc_82FB7C5C:
	// fsubs f12,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// li r11,1
	ctx.r11.s64 = 1;
	// fsubs f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fmuls f12,f12,f3
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f3.f64));
	// fmsubs f12,f11,f5,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f5.f64 - ctx.f12.f64));
	// fdivs f12,f12,f1
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f1.f64));
	// fmadds f22,f2,f12,f13
	ctx.f22.f64 = double(float(ctx.f2.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f21,f4,f12,f0
	ctx.f21.f64 = double(float(ctx.f4.f64 * ctx.f12.f64 + ctx.f0.f64));
loc_82FB7C7C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fb7cd4
	if (ctx.cr0.eq) goto loc_82FB7CD4;
	// fsubs f0,f22,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f22.f64 - ctx.f29.f64));
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f21,f13
	ctx.f13.f64 = double(float(ctx.f21.f64 - ctx.f13.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fsqrts f19,f0
	ctx.f19.f64 = double(float(sqrt(ctx.f0.f64)));
	// fcmpu cr6,f19,f18
	ctx.cr6.compare(ctx.f19.f64, ctx.f18.f64);
	// bgt cr6,0x82fb7ccc
	if (ctx.cr6.gt) goto loc_82FB7CCC;
	// stfs f22,80(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f21,84(r1)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x82f43ef0
	ctx.lr = 0x82FB7CB8;
	sub_82F43EF0(ctx, base);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_82FB7CCC:
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x82fb7d54
	goto loc_82FB7D54;
loc_82FB7CD4:
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f25,f10
	ctx.f12.f64 = double(float(ctx.f25.f64 - ctx.f10.f64));
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f13,3084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f26,f0
	ctx.f11.f64 = double(float(ctx.f26.f64 - ctx.f0.f64));
	// fmuls f11,f11,f30
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// fmsubs f12,f12,f31,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 - ctx.f11.f64));
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x82fb7d04
	if (ctx.cr6.lt) goto loc_82FB7D04;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82FB7D04:
	// fsubs f12,f23,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f23.f64 - ctx.f0.f64));
	// li r11,1
	ctx.r11.s64 = 1;
	// fsubs f11,f24,f10
	ctx.f11.f64 = double(float(ctx.f24.f64 - ctx.f10.f64));
	// fmuls f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// fmsubs f12,f11,f31,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f31.f64 - ctx.f12.f64));
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x82fb7d24
	if (ctx.cr6.lt) goto loc_82FB7D24;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82FB7D24:
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82fb7d54
	if (ctx.cr6.eq) goto loc_82FB7D54;
	// stfs f10,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x82f43ef0
	ctx.lr = 0x82FB7D40;
	sub_82F43EF0(ctx, base);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_82FB7D54:
	// clrlwi. r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fb7ed4
	if (ctx.cr0.eq) goto loc_82FB7ED4;
	// lwz r11,348(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82fb7e68
	if (ctx.cr6.eq) goto loc_82FB7E68;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82fb7e40
	if (ctx.cr6.eq) goto loc_82FB7E40;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// beq 0x82fb7dd0
	if (ctx.cr0.eq) goto loc_82FB7DD0;
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// fmadds f13,f30,f20,f13
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f20.f64 + ctx.f13.f64));
	// addi r29,r30,8
	ctx.r29.s64 = ctx.r30.s64 + 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fnmsubs f0,f31,f20,f0
	ctx.f0.f64 = double(float(-(ctx.f31.f64 * ctx.f20.f64 - ctx.f0.f64)));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f0,f13,f31
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x82f43ef0
	ctx.lr = 0x82FB7DA8;
	sub_82F43EF0(ctx, base);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f27.f64));
	// fmadds f13,f27,f20,f13
	ctx.f13.f64 = double(float(ctx.f27.f64 * ctx.f20.f64 + ctx.f13.f64));
	// fnmsubs f0,f28,f20,f0
	ctx.f0.f64 = double(float(-(ctx.f28.f64 * ctx.f20.f64 - ctx.f0.f64)));
	// b 0x82fb7eac
	goto loc_82FB7EAC;
loc_82FB7DD0:
	// lfs f12,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f0,f30
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// fsubs f13,f18,f17
	ctx.f13.f64 = double(float(ctx.f18.f64 - ctx.f17.f64));
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// fsubs f9,f19,f17
	ctx.f9.f64 = double(float(ctx.f19.f64 - ctx.f17.f64));
	// fadds f10,f12,f31
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f31.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fadds f31,f0,f28
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f28.f64));
	// fadds f30,f12,f27
	ctx.f30.f64 = double(float(ctx.f12.f64 + ctx.f27.f64));
	// fsubs f0,f22,f11
	ctx.f0.f64 = double(float(ctx.f22.f64 - ctx.f11.f64));
	// fdivs f29,f13,f9
	ctx.f29.f64 = double(float(ctx.f13.f64 / ctx.f9.f64));
	// fsubs f12,f21,f10
	ctx.f12.f64 = double(float(ctx.f21.f64 - ctx.f10.f64));
	// fmadds f0,f0,f29,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f29.f64 + ctx.f11.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f0,f12,f29,f10
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f29.f64 + ctx.f10.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x82f43ef0
	ctx.lr = 0x82FB7E14;
	sub_82F43EF0(ctx, base);
	// fsubs f0,f22,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f22.f64 - ctx.f31.f64));
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// fsubs f13,f21,f30
	ctx.f13.f64 = double(float(ctx.f21.f64 - ctx.f30.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// fmadds f0,f0,f29,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f29.f64 + ctx.f31.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f0,f13,f29,f30
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f29.f64 + ctx.f30.f64));
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x82fb7eb8
	goto loc_82FB7EB8;
loc_82FB7E40:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f2,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f1,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmr f6,f27
	ctx.f6.f64 = ctx.f27.f64;
	// fmr f5,f28
	ctx.f5.f64 = ctx.f28.f64;
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// bl 0x82fb79e8
	ctx.lr = 0x82FB7E64;
	sub_82FB79E8(ctx, base);
	// b 0x82fb7ed4
	goto loc_82FB7ED4;
loc_82FB7E68:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r29,r30,8
	ctx.r29.s64 = ctx.r30.s64 + 8;
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82f43ef0
	ctx.lr = 0x82FB7E90;
	sub_82F43EF0(ctx, base);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f27.f64));
loc_82FB7EAC:
	// fadds f13,f13,f28
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f28.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82FB7EB8:
	// stfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82f43ef0
	ctx.lr = 0x82FB7EC4;
	sub_82F43EF0(ctx, base);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_82FB7ED4:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82ca7528
	ctx.lr = 0x82FB7EE0;
	sub_82CA7528(ctx, base);
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82FB7EE4"))) PPC_WEAK_FUNC(sub_82FB7EE4);
PPC_FUNC_IMPL(__imp__sub_82FB7EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB7EE8"))) PPC_WEAK_FUNC(sub_82FB7EE8);
PPC_FUNC_IMPL(__imp__sub_82FB7EE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82FB7EF0;
	sub_82CA2BE4(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82ca7500
	ctx.lr = 0x82FB7EF8;
	sub_82CA7500(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lfs f12,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// fsubs f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,3080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fdivs f12,f12,f1
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f1.f64));
	// lfs f9,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f29,3084(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f29.f64 = double(temp.f32);
	// fmr f28,f29
	ctx.f28.f64 = ctx.f29.f64;
	// fmuls f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f31,f11,f9
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fmuls f30,f12,f9
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// beq cr6,0x82fb7fc4
	if (ctx.cr6.eq) goto loc_82FB7FC4;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x82fb7f64
	if (!ctx.cr6.eq) goto loc_82FB7F64;
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// fmr f28,f30
	ctx.f28.f64 = ctx.f30.f64;
loc_82FB7F64:
	// fsubs f0,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// addi r29,r30,8
	ctx.r29.s64 = ctx.r30.s64 + 8;
	// fsubs f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f31.f64));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f0,f13,f28
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f28.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x82f43ef0
	ctx.lr = 0x82FB7F8C;
	sub_82F43EF0(ctx, base);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fadds f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f29.f64));
	// fsubs f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f28.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// b 0x82fb80fc
	goto loc_82FB80FC;
loc_82FB7FC4:
	// fneg f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = ctx.f30.u64 ^ 0x8000000000000000;
	// fneg f1,f31
	ctx.f1.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// bl 0x8219ec50
	ctx.lr = 0x82FB7FD0;
	sub_8219EC50(ctx, base);
	// frsp f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f12,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,2680(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2680);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,26580(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 26580);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f11,f0,f12
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fadds f13,f28,f13
	ctx.f13.f64 = double(float(ctx.f28.f64 + ctx.f13.f64));
	// fdivs f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// fsubs f29,f13,f28
	ctx.f29.f64 = double(float(ctx.f13.f64 - ctx.f28.f64));
	// bl 0x82260900
	ctx.lr = 0x82FB8000;
	sub_82260900(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r28,r30,8
	ctx.r28.s64 = ctx.r30.s64 + 8;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fsubs f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f31.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,3140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3140);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fdivs f0,f29,f0
	ctx.f0.f64 = double(float(ctx.f29.f64 / ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r29,92(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fdivs f29,f29,f0
	ctx.f29.f64 = double(float(ctx.f29.f64 / ctx.f0.f64));
	// fadds f28,f29,f28
	ctx.f28.f64 = double(float(ctx.f29.f64 + ctx.f28.f64));
	// bl 0x82f43ef0
	ctx.lr = 0x82FB8068;
	sub_82F43EF0(ctx, base);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// ble cr6,0x82fb80e0
	if (!ctx.cr6.gt) goto loc_82FB80E0;
loc_82FB8080:
	// fmr f27,f28
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f28.f64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x82239f68
	ctx.lr = 0x82FB808C;
	sub_82239F68(ctx, base);
	// frsp f26,f1
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = double(float(ctx.f1.f64));
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x82239e88
	ctx.lr = 0x82FB8098;
	sub_82239E88(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmadds f11,f13,f26,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f26.f64 + ctx.f11.f64));
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmadds f0,f13,f0,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82f43ef0
	ctx.lr = 0x82FB80C4;
	sub_82F43EF0(ctx, base);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// fadds f28,f29,f28
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = double(float(ctx.f29.f64 + ctx.f28.f64));
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// bne 0x82fb8080
	if (!ctx.cr0.eq) goto loc_82FB8080;
loc_82FB80E0:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_82FB80FC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82f43ef0
	ctx.lr = 0x82FB8104;
	sub_82F43EF0(ctx, base);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82ca754c
	ctx.lr = 0x82FB8120;
	sub_82CA754C(ctx, base);
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82FB8124"))) PPC_WEAK_FUNC(sub_82FB8124);
PPC_FUNC_IMPL(__imp__sub_82FB8124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB8128"))) PPC_WEAK_FUNC(sub_82FB8128);
PPC_FUNC_IMPL(__imp__sub_82FB8128) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FB8130;
	sub_82CA2BEC(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82ca7508
	ctx.lr = 0x82FB8138;
	sub_82CA7508(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lfs f5,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f13,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmr f12,f1
	ctx.f12.f64 = ctx.f1.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f7,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f29,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f29.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f0,f5
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f5.f64));
	// fsubs f3,f13,f9
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// lfs f11,3080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f0.f64));
	// fdivs f30,f11,f2
	ctx.f30.f64 = double(float(ctx.f11.f64 / ctx.f2.f64));
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fsubs f9,f9,f7
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// lfs f7,3084(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f7.f64 = double(temp.f32);
	// fadds f10,f12,f2
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f2.f64));
	// fdivs f31,f11,f12
	ctx.f31.f64 = double(float(ctx.f11.f64 / ctx.f12.f64));
	// fsubs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsubs f28,f13,f0
	ctx.f28.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,26592(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26592);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f8,f8,f3
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f3.f64));
	// fmuls f3,f30,f3
	ctx.f3.f64 = double(float(ctx.f30.f64 * ctx.f3.f64));
	// fmuls f6,f10,f11
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fmuls f10,f4,f31
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// fmuls f4,f1,f30
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// fmuls f11,f31,f29
	ctx.f11.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// fmsubs f8,f28,f9,f8
	ctx.f8.f64 = double(float(ctx.f28.f64 * ctx.f9.f64 - ctx.f8.f64));
	// fmuls f30,f3,f29
	ctx.f30.f64 = double(float(ctx.f3.f64 * ctx.f29.f64));
	// fmuls f10,f10,f29
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f29.f64));
	// fmuls f31,f4,f29
	ctx.f31.f64 = double(float(ctx.f4.f64 * ctx.f29.f64));
	// fmuls f1,f11,f9
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fcmpu cr6,f8,f7
	ctx.cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// ble cr6,0x82fb820c
	if (!ctx.cr6.gt) goto loc_82FB820C;
	// fcmpu cr6,f12,f2
	ctx.cr6.compare(ctx.f12.f64, ctx.f2.f64);
	// blt cr6,0x82fb81e0
	if (ctx.cr6.lt) goto loc_82FB81E0;
	// fmr f12,f2
	ctx.f12.f64 = ctx.f2.f64;
loc_82FB81E0:
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// fdivs f5,f12,f0
	ctx.f5.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f10
	ctx.f2.f64 = ctx.f10.f64;
	// bl 0x82fb7b80
	ctx.lr = 0x82FB8208;
	sub_82FB7B80(ctx, base);
	// b 0x82fb83e8
	goto loc_82FB83E8;
loc_82FB820C:
	// fadds f11,f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f30.f64 + ctx.f1.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fadds f9,f31,f10
	ctx.f9.f64 = double(float(ctx.f31.f64 + ctx.f10.f64));
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// lfs f12,3056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3056);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmuls f11,f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f12,f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fsqrts f7,f12
	ctx.f7.f64 = double(float(sqrt(ctx.f12.f64)));
	// beq cr6,0x82fb8244
	if (ctx.cr6.eq) goto loc_82FB8244;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82fb832c
	if (!ctx.cr6.eq) goto loc_82FB832C;
loc_82FB8244:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f9,f12,f7
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,3128(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3128);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fcmpu cr6,f9,f12
	ctx.cr6.compare(ctx.f9.f64, ctx.f12.f64);
	// bge cr6,0x82fb832c
	if (!ctx.cr6.lt) goto loc_82FB832C;
	// fadds f9,f13,f30
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f30
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// fadds f8,f11,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// lfs f7,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f30,f0,f1
	ctx.f30.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// fadds f0,f5,f1
	ctx.f0.f64 = double(float(ctx.f5.f64 + ctx.f1.f64));
	// fadds f7,f7,f31
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f31.f64));
	// fadds f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f31.f64));
	// fsubs f5,f9,f12
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fsubs f4,f8,f13
	ctx.f4.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fsubs f2,f30,f0
	ctx.f2.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// fsubs f3,f7,f11
	ctx.f3.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// fmuls f1,f5,f4
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// fmsubs f1,f3,f2,f1
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f2.f64 - ctx.f1.f64));
	// fabs f31,f1
	ctx.f31.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// fcmpu cr6,f31,f6
	ctx.cr6.compare(ctx.f31.f64, ctx.f6.f64);
	// bge cr6,0x82fb82e4
	if (!ctx.cr6.lt) goto loc_82FB82E4;
	// fadds f6,f0,f30
	ctx.f6.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fadds f13,f13,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f8.f64));
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,2680(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2680);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f6,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 + ctx.f12.f64));
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// fadds f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// fadds f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x82fb8304
	goto loc_82FB8304;
loc_82FB82E4:
	// fsubs f12,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// li r11,1
	ctx.r11.s64 = 1;
	// fsubs f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fmuls f12,f12,f3
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f3.f64));
	// fmsubs f12,f11,f5,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f5.f64 - ctx.f12.f64));
	// fdivs f11,f12,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 / ctx.f1.f64));
	// fmadds f12,f2,f11,f0
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fmadds f0,f4,f11,f13
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f11.f64 + ctx.f13.f64));
loc_82FB8304:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// beq 0x82fb831c
	if (ctx.cr0.eq) goto loc_82FB831C;
	// stfs f12,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// b 0x82fb8388
	goto loc_82FB8388;
loc_82FB831C:
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f30,128(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fadds f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// b 0x82fb8388
	goto loc_82FB8388;
loc_82FB832C:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82fb83c8
	if (ctx.cr6.lt) goto loc_82FB83C8;
	// beq cr6,0x82fb83a4
	if (ctx.cr6.eq) goto loc_82FB83A4;
	// lfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r29,r30,8
	ctx.r29.s64 = ctx.r30.s64 + 8;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f43ef0
	ctx.lr = 0x82FB835C;
	sub_82F43EF0(ctx, base);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
loc_82FB8388:
	// stfs f0,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// bl 0x82f43ef0
	ctx.lr = 0x82FB8390;
	sub_82F43EF0(ctx, base);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x82fb83e8
	goto loc_82FB83E8;
loc_82FB83A4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f1.f64;
	// lfs f2,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fmr f6,f31
	ctx.f6.f64 = ctx.f31.f64;
	// fmr f5,f30
	ctx.f5.f64 = ctx.f30.f64;
	// fmr f4,f10
	ctx.f4.f64 = ctx.f10.f64;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x82fb79e8
	ctx.lr = 0x82FB83C4;
	sub_82FB79E8(ctx, base);
	// b 0x82fb83e8
	goto loc_82FB83E8;
loc_82FB83C8:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lfs f5,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f10
	ctx.f2.f64 = ctx.f10.f64;
	// bl 0x82fb7b80
	ctx.lr = 0x82FB83E8;
	sub_82FB7B80(ctx, base);
loc_82FB83E8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82ca7554
	ctx.lr = 0x82FB83F4;
	sub_82CA7554(ctx, base);
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82FB83F8"))) PPC_WEAK_FUNC(sub_82FB83F8);
PPC_FUNC_IMPL(__imp__sub_82FB83F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82FB8400;
	sub_82CA2BE0(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x82fb8864
	if (ctx.cr6.lt) goto loc_82FB8864;
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82fb8624
	if (ctx.cr0.eq) goto loc_82FB8624;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// clrlwi. r28,r5,24
	ctx.r28.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lfs f31,3084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f31.f64 = double(temp.f32);
	// bne 0x82fb8444
	if (!ctx.cr0.eq) goto loc_82FB8444;
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x82fb8534
	if (!ctx.cr6.gt) goto loc_82FB8534;
loc_82FB8444:
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fbfeb0
	ctx.lr = 0x82FB8458;
	sub_82FBFEB0(ctx, base);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82fb852c
	if (!ctx.cr6.gt) goto loc_82FB852C;
loc_82FB8468:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fb8478
	if (!ctx.cr6.eq) goto loc_82FB8478;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
loc_82FB8478:
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82fb8494
	if (ctx.cr6.lt) goto loc_82FB8494;
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
loc_82FB8494:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fb84a4
	if (!ctx.cr6.eq) goto loc_82FB84A4;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
loc_82FB84A4:
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r6,r11,28,4,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFC;
	// clrlwi r5,r11,26
	ctx.r5.u64 = ctx.r11.u32 & 0x3F;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// rlwinm r3,r9,28,4,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFC;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// lwzx r7,r6,r7
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// mulli r8,r5,12
	ctx.r8.s64 = ctx.r5.s64 * 12;
	// lwzx r5,r3,r4
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	// clrlwi r9,r9,26
	ctx.r9.u64 = ctx.r9.u32 & 0x3F;
	// add r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 + ctx.r8.u64;
	// mulli r7,r9,12
	ctx.r7.s64 = ctx.r9.s64 * 12;
	// lfs f2,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// rlwinm r4,r10,28,4,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFC;
	// rlwinm r3,r11,28,4,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFC;
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// lwzx r8,r4,r27
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r27.u32);
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// lwzx r9,r3,r26
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r26.u32);
	// lfs f1,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fb8128
	ctx.lr = 0x82FB851C;
	sub_82FB8128(ctx, base);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82fb8468
	if (ctx.cr6.lt) goto loc_82FB8468;
loc_82FB852C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fbffd8
	ctx.lr = 0x82FB8534;
	sub_82FBFFD8(ctx, base);
loc_82FB8534:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82fb8548
	if (!ctx.cr6.eq) goto loc_82FB8548;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82fb8864
	if (!ctx.cr6.lt) goto loc_82FB8864;
loc_82FB8548:
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fbfeb0
	ctx.lr = 0x82FB855C;
	sub_82FBFEB0(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addic. r30,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r30.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82fb885c
	if (ctx.cr0.lt) goto loc_82FB885C;
loc_82FB8568:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82fb8578
	if (!ctx.cr6.eq) goto loc_82FB8578;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
loc_82FB8578:
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82fb858c
	if (!ctx.cr6.eq) goto loc_82FB858C;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
loc_82FB858C:
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82fb85a4
	if (ctx.cr6.lt) goto loc_82FB85A4;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
loc_82FB85A4:
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r7,r30,28,4,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 28) & 0xFFFFFFC;
	// rlwinm r4,r6,28,4,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xFFFFFFC;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// clrlwi r28,r6,26
	ctx.r28.u64 = ctx.r6.u32 & 0x3F;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// lwzx r9,r7,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// clrlwi r8,r30,26
	ctx.r8.u64 = ctx.r30.u32 & 0x3F;
	// lwzx r7,r4,r5
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// mulli r5,r28,12
	ctx.r5.s64 = ctx.r28.s64 * 12;
	// rlwinm r4,r10,28,4,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFC;
	// rlwinm r26,r11,28,4,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFC;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// mulli r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 * 12;
	// lfs f2,8(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwzx r8,r4,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// lwzx r9,r26,r27
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r27.u32);
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// lfs f1,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fb8128
	ctx.lr = 0x82FB8618;
	sub_82FB8128(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82fb8568
	if (!ctx.cr0.lt) goto loc_82FB8568;
	// b 0x82fb885c
	goto loc_82FB885C;
loc_82FB8624:
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fbfeb0
	ctx.lr = 0x82FB8638;
	sub_82FBFEB0(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r6,r11,12
	ctx.r6.s64 = ctx.r11.s64 + 12;
	// lfs f1,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82fb7ee8
	ctx.lr = 0x82FB865C;
	sub_82FB7EE8(ctx, base);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x82fb8738
	if (!ctx.cr6.gt) goto loc_82FB8738;
loc_82FB8670:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fb8680
	if (!ctx.cr6.eq) goto loc_82FB8680;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
loc_82FB8680:
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82fb869c
	if (ctx.cr6.lt) goto loc_82FB869C;
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
loc_82FB869C:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fb86ac
	if (!ctx.cr6.eq) goto loc_82FB86AC;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
loc_82FB86AC:
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r6,r11,28,4,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFC;
	// rlwinm r3,r9,28,4,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFC;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// clrlwi r4,r11,26
	ctx.r4.u64 = ctx.r11.u32 & 0x3F;
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// clrlwi r9,r9,26
	ctx.r9.u64 = ctx.r9.u32 & 0x3F;
	// lwzx r8,r6,r7
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwzx r7,r3,r5
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	// mulli r6,r4,12
	ctx.r6.s64 = ctx.r4.s64 * 12;
	// mulli r5,r9,12
	ctx.r5.s64 = ctx.r9.s64 * 12;
	// rlwinm r4,r10,28,4,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFC;
	// rlwinm r3,r11,28,4,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFC;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// lwzx r8,r4,r28
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r28.u32);
	// lwzx r9,r3,r27
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r27.u32);
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// lfs f1,8(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fb8128
	ctx.lr = 0x82FB8724;
	sub_82FB8128(ctx, base);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82fb8670
	if (ctx.cr6.lt) goto loc_82FB8670;
loc_82FB8738:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r7,r11,28,4,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFC;
	// clrlwi r6,r11,26
	ctx.r6.u64 = ctx.r11.u32 & 0x3F;
	// rlwinm r30,r11,28,4,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFC;
	// mulli r5,r6,12
	ctx.r5.s64 = ctx.r6.s64 * 12;
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwzx r7,r30,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// rlwinm r28,r10,28,4,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFC;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// clrlwi r30,r10,26
	ctx.r30.u64 = ctx.r10.u32 & 0x3F;
	// mulli r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 * 12;
	// lwzx r9,r28,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	// lfs f1,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// mulli r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 * 12;
	// add r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// bl 0x82fb7ee8
	ctx.lr = 0x82FB8798;
	sub_82FB7EE8(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addic. r30,r11,-2
	ctx.xer.ca = ctx.r11.u32 > 1;
	ctx.r30.s64 = ctx.r11.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82fb885c
	if (ctx.cr0.eq) goto loc_82FB885C;
loc_82FB87A4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82fb87b4
	if (!ctx.cr6.eq) goto loc_82FB87B4;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
loc_82FB87B4:
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82fb87c8
	if (!ctx.cr6.eq) goto loc_82FB87C8;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
loc_82FB87C8:
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82fb87e0
	if (ctx.cr6.lt) goto loc_82FB87E0;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
loc_82FB87E0:
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r7,r30,28,4,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 28) & 0xFFFFFFC;
	// rlwinm r4,r6,28,4,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xFFFFFFC;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// clrlwi r28,r6,26
	ctx.r28.u64 = ctx.r6.u32 & 0x3F;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// lwzx r9,r7,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// clrlwi r8,r30,26
	ctx.r8.u64 = ctx.r30.u32 & 0x3F;
	// lwzx r7,r4,r5
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// mulli r5,r28,12
	ctx.r5.s64 = ctx.r28.s64 * 12;
	// rlwinm r4,r10,28,4,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFC;
	// rlwinm r26,r11,28,4,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFC;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// mulli r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 * 12;
	// lfs f2,8(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwzx r8,r4,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// lwzx r9,r26,r27
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r27.u32);
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// lfs f1,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fb8128
	ctx.lr = 0x82FB8854;
	sub_82FB8128(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82fb87a4
	if (!ctx.cr0.eq) goto loc_82FB87A4;
loc_82FB885C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fbffd8
	ctx.lr = 0x82FB8864;
	sub_82FBFFD8(ctx, base);
loc_82FB8864:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82FB8870"))) PPC_WEAK_FUNC(sub_82FB8870);
PPC_FUNC_IMPL(__imp__sub_82FB8870) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bcc
	ctx.lr = 0x82FB8878;
	sub_82CA2BCC(ctx, base);
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// stw r26,24(r27)
	PPC_STORE_U32(ctx.r27.u32 + 24, ctx.r26.u32);
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// stb r26,44(r27)
	PPC_STORE_U8(ctx.r27.u32 + 44, ctx.r26.u8);
	// addi r31,r27,24
	ctx.r31.s64 = ctx.r27.s64 + 24;
	// lwz r11,28(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82fb8bb4
	if (!ctx.cr6.gt) goto loc_82FB8BB4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r28,-32252
	ctx.r28.s64 = -2113667072;
	// lfs f31,3084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f31.f64 = double(temp.f32);
loc_82FB88C0:
	// lwz r10,40(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 40);
	// rlwinm r9,r25,28,4,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 28) & 0xFFFFFFC;
	// clrlwi r11,r25,26
	ctx.r11.u64 = ctx.r25.u32 & 0x3F;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blt cr6,0x82fb88ec
	if (ctx.cr6.lt) goto loc_82FB88EC;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r22.s32, ctx.xer);
	// bne cr6,0x82fb8ba4
	if (!ctx.cr6.eq) goto loc_82FB8BA4;
loc_82FB88EC:
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82fb8ba4
	if (ctx.cr6.eq) goto loc_82FB8BA4;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82fb8978
	if (ctx.cr6.eq) goto loc_82FB8978;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lfs f0,26584(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 26584);
	ctx.f0.f64 = double(temp.f32);
	// lwz r5,36(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// rlwinm r4,r11,28,4,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFC;
	// rlwinm r3,r6,26,6,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 26) & 0x3FFFFFC;
	// rlwinm r6,r6,3,21,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0x7F8;
	// lwz r29,20(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// lwzx r10,r4,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// lwzx r5,r3,r29
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r29.u32);
	// ldx r6,r5,r6
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r5.u32 + ctx.r6.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fmadds f13,f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82fb8978
	if (ctx.cr6.gt) goto loc_82FB8978;
	// li r8,1
	ctx.r8.s64 = 1;
loc_82FB8978:
	// clrlwi. r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fb8a78
	if (ctx.cr0.eq) goto loc_82FB8A78;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// ble cr6,0x82fb8ba4
	if (!ctx.cr6.gt) goto loc_82FB8BA4;
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
loc_82FB8990:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r8,r10,26,6,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3FFFFFC;
	// rlwinm r10,r10,3,21,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x7F8;
	// lwz r9,20(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// ble cr6,0x82fb8a58
	if (!ctx.cr6.gt) goto loc_82FB8A58;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// lfs f0,26584(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 26584);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r8,r10,28,4,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFC;
	// rlwinm r7,r11,28,4,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFC;
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// clrlwi r6,r10,26
	ctx.r6.u64 = ctx.r10.u32 & 0x3F;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// lwzx r8,r8,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwzx r10,r7,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mulli r9,r6,12
	ctx.r9.s64 = ctx.r6.s64 * 12;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r8,r9
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lfs f11,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82fb8a3c
	if (ctx.cr6.gt) goto loc_82FB8A3C;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82FB8A3C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82fb8a58
	if (!ctx.cr0.eq) goto loc_82FB8A58;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fb8a58
	if (ctx.cr6.eq) goto loc_82FB8A58;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82FB8A58:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fb7688
	ctx.lr = 0x82FB8A64;
	sub_82FB7688(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fb8990
	if (ctx.cr6.lt) goto loc_82FB8990;
	// b 0x82fb8ba4
	goto loc_82FB8BA4;
loc_82FB8A78:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82fb8aac
	if (ctx.cr6.eq) goto loc_82FB8AAC;
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82fb76e8
	ctx.lr = 0x82FB8A94;
	sub_82FB76E8(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82fb83f8
	ctx.lr = 0x82FB8AA4;
	sub_82FB83F8(ctx, base);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// stb r26,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r26.u8);
loc_82FB8AAC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82fb8ba4
	if (!ctx.cr6.gt) goto loc_82FB8BA4;
	// stfs f31,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
loc_82FB8AC0:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r7,r10,26,6,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3FFFFFC;
	// rlwinm r9,r10,3,21,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x7F8;
	// lwz r10,20(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lwzx r10,r7,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// ble cr6,0x82fb8b88
	if (!ctx.cr6.gt) goto loc_82FB8B88;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// lfs f0,26584(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 26584);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r7,r10,28,4,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFC;
	// rlwinm r6,r11,28,4,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFC;
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// clrlwi r5,r11,26
	ctx.r5.u64 = ctx.r11.u32 & 0x3F;
	// mulli r9,r10,12
	ctx.r9.s64 = ctx.r10.s64 * 12;
	// lwzx r10,r7,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// lwzx r11,r6,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// mulli r8,r5,12
	ctx.r8.s64 = ctx.r5.s64 * 12;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f12,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82fb8b6c
	if (ctx.cr6.gt) goto loc_82FB8B6C;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82FB8B6C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82fb8b88
	if (!ctx.cr0.eq) goto loc_82FB8B88;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fb8b88
	if (ctx.cr6.eq) goto loc_82FB8B88;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82FB8B88:
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fb7688
	ctx.lr = 0x82FB8B94;
	sub_82FB7688(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fb8ac0
	if (ctx.cr6.lt) goto loc_82FB8AC0;
loc_82FB8BA4:
	// lwz r11,28(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fb88c0
	if (ctx.cr6.lt) goto loc_82FB88C0;
loc_82FB8BB4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82fb8be4
	if (!ctx.cr6.gt) goto loc_82FB8BE4;
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82fb76e8
	ctx.lr = 0x82FB8BD4;
	sub_82FB76E8(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82fb83f8
	ctx.lr = 0x82FB8BE4;
	sub_82FB83F8(ctx, base);
loc_82FB8BE4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x82ca2c1c
	// ERROR 82CA2C1C
	return;
}

__attribute__((alias("__imp__sub_82FB8BF0"))) PPC_WEAK_FUNC(sub_82FB8BF0);
PPC_FUNC_IMPL(__imp__sub_82FB8BF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FB8BF8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82ef8e38
	ctx.lr = 0x82FB8C10;
	sub_82EF8E38(ctx, base);
	// stb r3,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r3.u8);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f3e5a0
	ctx.lr = 0x82FB8C24;
	sub_82F3E5A0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82FB8C2C"))) PPC_WEAK_FUNC(sub_82FB8C2C);
PPC_FUNC_IMPL(__imp__sub_82FB8C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB8C30"))) PPC_WEAK_FUNC(sub_82FB8C30);
PPC_FUNC_IMPL(__imp__sub_82FB8C30) {
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
	// addi r11,r11,26672
	ctx.r11.s64 = ctx.r11.s64 + 26672;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fb8c60
	if (ctx.cr6.eq) goto loc_82FB8C60;
	// bl 0x82ef6f38
	ctx.lr = 0x82FB8C60;
	sub_82EF6F38(ctx, base);
loc_82FB8C60:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef70b0
	ctx.lr = 0x82FB8C68;
	sub_82EF70B0(ctx, base);
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

__attribute__((alias("__imp__sub_82FB8C7C"))) PPC_WEAK_FUNC(sub_82FB8C7C);
PPC_FUNC_IMPL(__imp__sub_82FB8C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB8C80"))) PPC_WEAK_FUNC(sub_82FB8C80);
PPC_FUNC_IMPL(__imp__sub_82FB8C80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f13,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f11,f13,f13
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f9,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f9,f9
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// stfs f10,12(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f12,3084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f0,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fsubs f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bne cr6,0x82fb8d0c
	if (!ctx.cr6.eq) goto loc_82FB8D0C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// lfs f11,3080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f11.f64 = double(temp.f32);
	// beq cr6,0x82fb8cd8
	if (ctx.cr6.eq) goto loc_82FB8CD8;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82fb8cd0
	if (!ctx.cr6.lt) goto loc_82FB8CD0;
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// b 0x82fb8cd4
	goto loc_82FB8CD4;
loc_82FB8CD0:
	// fsubs f0,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
loc_82FB8CD4:
	// stfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
loc_82FB8CD8:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// beq cr6,0x82fb8cf8
	if (ctx.cr6.eq) goto loc_82FB8CF8;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x82fb8cf0
	if (!ctx.cr6.lt) goto loc_82FB8CF0;
	// fadds f0,f13,f11
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// b 0x82fb8cf4
	goto loc_82FB8CF4;
loc_82FB8CF0:
	// fsubs f0,f13,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
loc_82FB8CF4:
	// stfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
loc_82FB8CF8:
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fsubs f11,f10,f0
	ctx.f11.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
loc_82FB8D0C:
	// fdivs f0,f9,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f9.f64 / ctx.f11.f64));
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FB8D18"))) PPC_WEAK_FUNC(sub_82FB8D18);
PPC_FUNC_IMPL(__imp__sub_82FB8D18) {
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
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,-12900(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12900);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x821fe378
	ctx.lr = 0x82FB8D4C;
	sub_821FE378(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2784(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2784);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3056);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f12,f0,f13
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// bl 0x8222c3e8
	ctx.lr = 0x82FB8D68;
	sub_8222C3E8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lbz r3,87(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FB8D88"))) PPC_WEAK_FUNC(sub_82FB8D88);
PPC_FUNC_IMPL(__imp__sub_82FB8D88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82fb8db4
	if (ctx.cr6.eq) goto loc_82FB8DB4;
	// lbz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82fb8db4
	if (!ctx.cr0.eq) goto loc_82FB8DB4;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fb8dac
	if (!ctx.cr6.eq) goto loc_82FB8DAC;
	// li r11,64
	ctx.r11.s64 = 64;
loc_82FB8DAC:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82fb8fcc
	if (!ctx.cr0.eq) goto loc_82FB8FCC;
loc_82FB8DB4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lhz r10,18(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 18);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// lfs f10,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f10.f64 = double(temp.f32);
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// ble cr6,0x82fb8f24
	if (!ctx.cr6.gt) goto loc_82FB8F24;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// lfs f11,3080(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3080);
	ctx.f11.f64 = double(temp.f32);
loc_82FB8DE4:
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r8,-6(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -6);
	// std r7,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r7.u64);
	// lfd f12,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// std r8,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r8.u64);
	// lfd f13,-48(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fcmpu cr6,f13,f10
	ctx.cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// ble cr6,0x82fb8f0c
	if (!ctx.cr6.gt) goto loc_82FB8F0C;
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// fdivs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 / ctx.f13.f64));
	// lbz r8,7(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// subf r8,r8,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r8.s64;
	// srawi r7,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 31;
	// xor r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r7.u64;
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// std r8,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r8.u64);
	// lfd f12,-32(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x82fb8e58
	if (!ctx.cr6.gt) goto loc_82FB8E58;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_82FB8E58:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// subf r8,r8,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r8.s64;
	// srawi r7,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 31;
	// xor r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r7.u64;
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// std r8,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r8.u64);
	// lfd f12,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x82fb8e94
	if (!ctx.cr6.gt) goto loc_82FB8E94;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_82FB8E94:
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,9(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// subf r8,r8,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r8.s64;
	// srawi r7,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 31;
	// xor r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r7.u64;
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f12,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x82fb8ed0
	if (!ctx.cr6.gt) goto loc_82FB8ED0;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_82FB8ED0:
	// lbz r7,-2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// lbz r8,6(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// subf r8,r8,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r8.s64;
	// srawi r7,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 31;
	// xor r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r7.u64;
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// std r8,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r8.u64);
	// lfd f12,-8(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82fb8f0c
	if (!ctx.cr6.gt) goto loc_82FB8F0C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82FB8F0C:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x82fb8de4
	if (!ctx.cr0.eq) goto loc_82FB8DE4;
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bne cr6,0x82fb8f2c
	if (!ctx.cr6.eq) goto loc_82FB8F2C;
loc_82FB8F24:
	// li r3,64
	ctx.r3.s64 = 64;
	// blr 
	return;
loc_82FB8F2C:
	// lbz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82fb8f44
	if (ctx.cr0.eq) goto loc_82FB8F44;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2708(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2708);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
loc_82FB8F44:
	// lbz r11,17(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 17);
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// bne cr6,0x82fb8f78
	if (!ctx.cr6.eq) goto loc_82FB8F78;
	// lfs f13,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// lfs f12,3056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3056);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x82fb8f78
	if (!ctx.cr6.gt) goto loc_82FB8F78;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,2856(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2856);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
loc_82FB8F78:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x82fb8f84
	if (!ctx.cr6.lt) goto loc_82FB8F84;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
loc_82FB8F84:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f13,26676(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26676);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f0,-16940(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16940);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f0.u64);
	// lwz r11,-4(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// blt cr6,0x82fb8fb8
	if (ctx.cr6.lt) goto loc_82FB8FB8;
	// li r11,17
	ctx.r11.s64 = 17;
loc_82FB8FB8:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,26600
	ctx.r10.s64 = ctx.r10.s64 + 26600;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
loc_82FB8FCC:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FB8FD4"))) PPC_WEAK_FUNC(sub_82FB8FD4);
PPC_FUNC_IMPL(__imp__sub_82FB8FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB8FD8"))) PPC_WEAK_FUNC(sub_82FB8FD8);
PPC_FUNC_IMPL(__imp__sub_82FB8FD8) {
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
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fb9018
	if (ctx.cr0.eq) goto loc_82FB9018;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fb9018
	if (ctx.cr6.eq) goto loc_82FB9018;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB9018;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FB9018:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82fb9034
	if (!ctx.cr6.eq) goto loc_82FB9034;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fb9034
	if (ctx.cr6.eq) goto loc_82FB9034;
	// bl 0x82ef1bf0
	ctx.lr = 0x82FB9034;
	sub_82EF1BF0(ctx, base);
loc_82FB9034:
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

__attribute__((alias("__imp__sub_82FB9048"))) PPC_WEAK_FUNC(sub_82FB9048);
PPC_FUNC_IMPL(__imp__sub_82FB9048) {
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
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fb9090
	if (ctx.cr0.eq) goto loc_82FB9090;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fb9090
	if (ctx.cr6.eq) goto loc_82FB9090;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB9090;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FB9090:
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
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

__attribute__((alias("__imp__sub_82FB90AC"))) PPC_WEAK_FUNC(sub_82FB90AC);
PPC_FUNC_IMPL(__imp__sub_82FB90AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB90B0"))) PPC_WEAK_FUNC(sub_82FB90B0);
PPC_FUNC_IMPL(__imp__sub_82FB90B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,26680
	ctx.r9.s64 = ctx.r9.s64 + 26680;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r11.u16);
	// lfs f0,3080(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// sth r11,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FB90DC"))) PPC_WEAK_FUNC(sub_82FB90DC);
PPC_FUNC_IMPL(__imp__sub_82FB90DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB90E0"))) PPC_WEAK_FUNC(sub_82FB90E0);
PPC_FUNC_IMPL(__imp__sub_82FB90E0) {
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
	// bl 0x82fb8c30
	ctx.lr = 0x82FB9100;
	sub_82FB8C30(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fb9110
	if (ctx.cr0.eq) goto loc_82FB9110;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82FB9110;
	sub_82EF6F38(ctx, base);
loc_82FB9110:
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

__attribute__((alias("__imp__sub_82FB912C"))) PPC_WEAK_FUNC(sub_82FB912C);
PPC_FUNC_IMPL(__imp__sub_82FB912C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB9130"))) PPC_WEAK_FUNC(sub_82FB9130);
PPC_FUNC_IMPL(__imp__sub_82FB9130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FB9138;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// clrlwi r31,r28,16
	ctx.r31.u64 = ctx.r28.u32 & 0xFFFF;
	// lhz r11,18(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 18);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82fb91e0
	if (ctx.cr6.eq) goto loc_82FB91E0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82fb9178
	if (ctx.cr6.eq) goto loc_82FB9178;
	// rlwinm r3,r31,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82ef6ef8
	ctx.lr = 0x82FB9168;
	sub_82EF6EF8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82fb9178
	if (!ctx.cr0.eq) goto loc_82FB9178;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82fb91e4
	goto loc_82FB91E4;
loc_82FB9178:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fb91d8
	if (ctx.cr6.eq) goto loc_82FB91D8;
	// lhz r11,18(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 18);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82fb9198
	if (!ctx.cr6.lt) goto loc_82FB9198;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82FB9198:
	// clrlwi. r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82fb91d0
	if (ctx.cr0.eq) goto loc_82FB91D0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82FB91A8:
	// lwz r8,20(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x82fb91a8
	if (!ctx.cr0.eq) goto loc_82FB91A8;
loc_82FB91D0:
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x82ef6f38
	ctx.lr = 0x82FB91D8;
	sub_82EF6F38(ctx, base);
loc_82FB91D8:
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// sth r28,18(r30)
	PPC_STORE_U16(ctx.r30.u32 + 18, ctx.r28.u16);
loc_82FB91E0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82FB91E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82FB91EC"))) PPC_WEAK_FUNC(sub_82FB91EC);
PPC_FUNC_IMPL(__imp__sub_82FB91EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB91F0"))) PPC_WEAK_FUNC(sub_82FB91F0);
PPC_FUNC_IMPL(__imp__sub_82FB91F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r6,18(r3)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r3.u32 + 18);
	// lhz r11,18(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 18);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82fb9298
	if (!ctx.cr6.eq) goto loc_82FB9298;
	// lbz r11,17(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 17);
	// lbz r10,17(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 17);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82fb9298
	if (!ctx.cr6.eq) goto loc_82FB9298;
	// lfs f0,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82fb9298
	if (!ctx.cr6.eq) goto loc_82FB9298;
	// lbz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 16);
	// lbz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82fb9298
	if (!ctx.cr6.eq) goto loc_82FB9298;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82fb9290
	if (ctx.cr6.eq) goto loc_82FB9290;
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// subf r7,r11,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_82FB924C:
	// lbzx r10,r7,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82fb9270
	if (!ctx.cr6.eq) goto loc_82FB9270;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x82fb9274
	if (ctx.cr6.eq) goto loc_82FB9274;
loc_82FB9270:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82FB9274:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82fb9298
	if (ctx.cr0.eq) goto loc_82FB9298;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82fb924c
	if (ctx.cr6.lt) goto loc_82FB924C;
loc_82FB9290:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82FB9298:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FB92A0"))) PPC_WEAK_FUNC(sub_82FB92A0);
PPC_FUNC_IMPL(__imp__sub_82FB92A0) {
	PPC_FUNC_PROLOGUE();
	// lhz r10,18(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 18);
	// lbz r3,17(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 17);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
loc_82FB92B4:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r7,r9,16,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// xor r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// xor r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// xor r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 ^ ctx.r3.u64;
	// bne 0x82fb92b4
	if (!ctx.cr0.eq) goto loc_82FB92B4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FB92DC"))) PPC_WEAK_FUNC(sub_82FB92DC);
PPC_FUNC_IMPL(__imp__sub_82FB92DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB92E0"))) PPC_WEAK_FUNC(sub_82FB92E0);
PPC_FUNC_IMPL(__imp__sub_82FB92E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82fb92f4
	if (ctx.cr6.eq) goto loc_82FB92F4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82FB92F4:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// b 0x82fb91f0
	sub_82FB91F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FB9300"))) PPC_WEAK_FUNC(sub_82FB9300);
PPC_FUNC_IMPL(__imp__sub_82FB9300) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// bl 0x82f65fe0
	ctx.lr = 0x82FB932C;
	sub_82F65FE0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82FB9358"))) PPC_WEAK_FUNC(sub_82FB9358);
PPC_FUNC_IMPL(__imp__sub_82FB9358) {
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
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fb939c
	if (ctx.cr0.eq) goto loc_82FB939C;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fb939c
	if (ctx.cr6.eq) goto loc_82FB939C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB939C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FB939C:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fb93c8
	if (ctx.cr0.eq) goto loc_82FB93C8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fb93c8
	if (ctx.cr6.eq) goto loc_82FB93C8;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB93C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FB93C8:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// lbz r11,1(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82ef8c90
	ctx.lr = 0x82FB93EC;
	sub_82EF8C90(ctx, base);
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82f65e60
	ctx.lr = 0x82FB93F8;
	sub_82F65E60(ctx, base);
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

__attribute__((alias("__imp__sub_82FB9414"))) PPC_WEAK_FUNC(sub_82FB9414);
PPC_FUNC_IMPL(__imp__sub_82FB9414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB9418"))) PPC_WEAK_FUNC(sub_82FB9418);
PPC_FUNC_IMPL(__imp__sub_82FB9418) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FB9420;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82fb9048
	ctx.lr = 0x82FB9434;
	sub_82FB9048(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f65e60
	ctx.lr = 0x82FB944C;
	sub_82F65E60(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f2,2756(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2756);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x82f65f08
	ctx.lr = 0x82FB9460;
	sub_82F65F08(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82f461a0
	ctx.lr = 0x82FB946C;
	sub_82F461A0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82FB9474"))) PPC_WEAK_FUNC(sub_82FB9474);
PPC_FUNC_IMPL(__imp__sub_82FB9474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB9478"))) PPC_WEAK_FUNC(sub_82FB9478);
PPC_FUNC_IMPL(__imp__sub_82FB9478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FB9480;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fb94a8
	if (ctx.cr0.eq) goto loc_82FB94A8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82fb94d0
	if (ctx.cr6.eq) goto loc_82FB94D0;
loc_82FB94A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fb9048
	ctx.lr = 0x82FB94B0;
	sub_82FB9048(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82fb94d0
	if (ctx.cr6.eq) goto loc_82FB94D0;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB94D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FB94D0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82f65e60
	ctx.lr = 0x82FB94DC;
	sub_82F65E60(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,2756(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2756);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,24(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82FB9504"))) PPC_WEAK_FUNC(sub_82FB9504);
PPC_FUNC_IMPL(__imp__sub_82FB9504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB9508"))) PPC_WEAK_FUNC(sub_82FB9508);
PPC_FUNC_IMPL(__imp__sub_82FB9508) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,26680
	ctx.r11.s64 = ctx.r11.s64 + 26680;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82fb9540
	if (ctx.cr6.eq) goto loc_82FB9540;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fb8fd8
	ctx.lr = 0x82FB9538;
	sub_82FB8FD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82FB9540;
	sub_82EF6F38(ctx, base);
loc_82FB9540:
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

__attribute__((alias("__imp__sub_82FB9554"))) PPC_WEAK_FUNC(sub_82FB9554);
PPC_FUNC_IMPL(__imp__sub_82FB9554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB9558"))) PPC_WEAK_FUNC(sub_82FB9558);
PPC_FUNC_IMPL(__imp__sub_82FB9558) {
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
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fb9598
	if (!ctx.cr6.eq) goto loc_82FB9598;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82ef6ef8
	ctx.lr = 0x82FB9580;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82fb9590
	if (ctx.cr0.eq) goto loc_82FB9590;
	// bl 0x82fb9300
	ctx.lr = 0x82FB958C;
	sub_82FB9300(ctx, base);
	// b 0x82fb9594
	goto loc_82FB9594;
loc_82FB9590:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FB9594:
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
loc_82FB9598:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
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

__attribute__((alias("__imp__sub_82FB95B0"))) PPC_WEAK_FUNC(sub_82FB95B0);
PPC_FUNC_IMPL(__imp__sub_82FB95B0) {
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
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r11,72(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB95E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FB95F0"))) PPC_WEAK_FUNC(sub_82FB95F0);
PPC_FUNC_IMPL(__imp__sub_82FB95F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FB95F8;
	sub_82CA2BE8(ctx, base);
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
	// bl 0x82ef6fe0
	ctx.lr = 0x82FB9610;
	sub_82EF6FE0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,26672
	ctx.r11.s64 = ctx.r11.s64 + 26672;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82ef70f0
	ctx.lr = 0x82FB9628;
	sub_82EF70F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r30,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// sth r11,18(r31)
	PPC_STORE_U16(ctx.r31.u32 + 18, ctx.r11.u16);
	// bl 0x82fb9130
	ctx.lr = 0x82FB9644;
	sub_82FB9130(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stb r28,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r28.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82FB9660"))) PPC_WEAK_FUNC(sub_82FB9660);
PPC_FUNC_IMPL(__imp__sub_82FB9660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FB9668;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-27424
	ctx.r31.s64 = ctx.r11.s64 + -27424;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,-27420(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27420);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82fb96ac
	if (!ctx.cr0.eq) goto loc_82FB96AC;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,26688
	ctx.r9.s64 = ctx.r9.s64 + 26688;
	// stw r11,-27420(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27420, ctx.r11.u32);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,7088
	ctx.r3.s64 = ctx.r11.s64 + 7088;
	// bl 0x82ca3700
	ctx.lr = 0x82FB96AC;
	sub_82CA3700(ctx, base);
loc_82FB96AC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB96C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82FB96D8"))) PPC_WEAK_FUNC(sub_82FB96D8);
PPC_FUNC_IMPL(__imp__sub_82FB96D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FB96E0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-27416
	ctx.r31.s64 = ctx.r11.s64 + -27416;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,-27412(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27412);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82fb9724
	if (!ctx.cr0.eq) goto loc_82FB9724;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,26704
	ctx.r9.s64 = ctx.r9.s64 + 26704;
	// stw r11,-27412(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27412, ctx.r11.u32);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,7112
	ctx.r3.s64 = ctx.r11.s64 + 7112;
	// bl 0x82ca3700
	ctx.lr = 0x82FB9724;
	sub_82CA3700(ctx, base);
loc_82FB9724:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB973C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82FB9750"))) PPC_WEAK_FUNC(sub_82FB9750);
PPC_FUNC_IMPL(__imp__sub_82FB9750) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82FB9758;
	sub_82CA2BDC(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// rlwinm r10,r27,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 8) & 0xFFFFFF00;
	// lhz r6,6(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r9,6(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 6);
	// or r5,r10,r27
	ctx.r5.u64 = ctx.r10.u64 | ctx.r27.u64;
	// lhz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// twllei r27,0
	// lhz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// subf r10,r6,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r6.s64;
	// twllei r5,0
	// subf r9,r11,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r11.s64;
	// mullw r7,r10,r28
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r28.s32);
	// mullw r8,r9,r28
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r28.s32);
	// rotlwi r9,r8,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// rotlwi r10,r7,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// divw r8,r8,r27
	ctx.r8.s32 = ctx.r8.s32 / ctx.r27.s32;
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// divw r7,r7,r5
	ctx.r7.s32 = ctx.r7.s32 / ctx.r5.s32;
	// andc r8,r5,r4
	ctx.r8.u64 = ctx.r5.u64 & ~ctx.r4.u64;
	// andc r9,r27,r9
	ctx.r9.u64 = ctx.r27.u64 & ~ctx.r9.u64;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// add r26,r7,r6
	ctx.r26.u64 = ctx.r7.u64 + ctx.r6.u64;
	// twlgei r8,-1
	// twlgei r9,-1
	// bl 0x82fb8d18
	ctx.lr = 0x82FB97E0;
	sub_82FB8D18(ctx, base);
	// lhz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lhz r10,2(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 2);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// twllei r27,0
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mullw r9,r10,r28
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r28.s32);
	// rotlwi r10,r9,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw r9,r9,r27
	ctx.r9.s32 = ctx.r9.s32 / ctx.r27.s32;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// andc r10,r27,r10
	ctx.r10.u64 = ctx.r27.u64 & ~ctx.r10.u64;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// twlgei r10,-1
	// bl 0x82fb8d18
	ctx.lr = 0x82FB981C;
	sub_82FB8D18(ctx, base);
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lhz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// twllei r27,0
	// mullw r9,r11,r28
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// rotlwi r11,r9,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw r9,r9,r27
	ctx.r9.s32 = ctx.r9.s32 / ctx.r27.s32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// andc r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 & ~ctx.r11.u64;
	// clrlwi r3,r10,16
	ctx.r3.u64 = ctx.r10.u32 & 0xFFFF;
	// twlgei r11,-1
	// bl 0x82fb8d18
	ctx.lr = 0x82FB985C;
	sub_82FB8D18(ctx, base);
	// stb r3,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r3.u8);
	// stb r30,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r25,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r25.u8);
	// stb r26,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r26.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82FB987C"))) PPC_WEAK_FUNC(sub_82FB987C);
PPC_FUNC_IMPL(__imp__sub_82FB987C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB9880"))) PPC_WEAK_FUNC(sub_82FB9880);
PPC_FUNC_IMPL(__imp__sub_82FB9880) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82FB9888;
	sub_82CA2BDC(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lhz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// rlwinm r10,r7,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// lhz r27,2(r5)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r5.u32 + 2);
	// lhz r25,4(r5)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r5.u32 + 4);
	// subf r9,r11,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r11.s64;
	// lhz r30,4(r4)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lhz r31,2(r4)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// lhz r8,6(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 6);
	// subf r3,r30,r25
	ctx.r3.s64 = ctx.r25.s64 - ctx.r30.s64;
	// lhz r5,6(r5)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r5.u32 + 6);
	// subf r4,r31,r27
	ctx.r4.s64 = ctx.r27.s64 - ctx.r31.s64;
	// or r27,r10,r7
	ctx.r27.u64 = ctx.r10.u64 | ctx.r7.u64;
	// mullw r10,r9,r6
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// subf r5,r8,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r8.s64;
	// mullw r26,r3,r6
	ctx.r26.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r6.s32);
	// mullw r29,r4,r6
	ctx.r29.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r6.s32);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// mullw r25,r5,r6
	ctx.r25.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// divw r8,r10,r27
	ctx.r8.s32 = ctx.r10.s32 / ctx.r27.s32;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// divw r6,r29,r27
	ctx.r6.s32 = ctx.r29.s32 / ctx.r27.s32;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// rotlwi r30,r10,1
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r4,r26,r27
	ctx.r4.s32 = ctx.r26.s32 / ctx.r27.s32;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rotlwi r29,r29,1
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r29.u32, 1);
	// rotlwi r10,r26,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r26.u32, 1);
	// stb r9,1(r28)
	PPC_STORE_U8(ctx.r28.u32 + 1, ctx.r9.u8);
	// rotlwi r11,r25,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r25.u32, 1);
	// add r8,r6,r7
	ctx.r8.u64 = ctx.r6.u64 + ctx.r7.u64;
	// add r7,r4,r5
	ctx.r7.u64 = ctx.r4.u64 + ctx.r5.u64;
	// divw r31,r25,r27
	ctx.r31.s32 = ctx.r25.s32 / ctx.r27.s32;
	// stb r8,2(r28)
	PPC_STORE_U8(ctx.r28.u32 + 2, ctx.r8.u8);
	// addi r6,r30,-1
	ctx.r6.s64 = ctx.r30.s64 + -1;
	// stb r7,3(r28)
	PPC_STORE_U8(ctx.r28.u32 + 3, ctx.r7.u8);
	// addi r5,r29,-1
	ctx.r5.s64 = ctx.r29.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// add r3,r31,r3
	ctx.r3.u64 = ctx.r31.u64 + ctx.r3.u64;
	// andc r8,r27,r6
	ctx.r8.u64 = ctx.r27.u64 & ~ctx.r6.u64;
	// andc r7,r27,r5
	ctx.r7.u64 = ctx.r27.u64 & ~ctx.r5.u64;
	// stb r3,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r3.u8);
	// andc r10,r27,r10
	ctx.r10.u64 = ctx.r27.u64 & ~ctx.r10.u64;
	// andc r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 & ~ctx.r11.u64;
	// twllei r27,0
	// twllei r27,0
	// twllei r27,0
	// twllei r27,0
	// twlgei r8,-1
	// twlgei r7,-1
	// twlgei r10,-1
	// twlgei r11,-1
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82FB996C"))) PPC_WEAK_FUNC(sub_82FB996C);
PPC_FUNC_IMPL(__imp__sub_82FB996C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB9970"))) PPC_WEAK_FUNC(sub_82FB9970);
PPC_FUNC_IMPL(__imp__sub_82FB9970) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82FB9978;
	sub_82CA2BD4(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82ca7504
	ctx.lr = 0x82FB9980;
	sub_82CA7504(ctx, base);
	// stwu r1,-752(r1)
	ea = -752 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82fb99a8
	if (ctx.cr6.eq) goto loc_82FB99A8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82fb99bc
	if (!ctx.cr6.eq) goto loc_82FB99BC;
loc_82FB99A8:
	// lis r11,-256
	ctx.r11.s64 = -16777216;
	// stb r26,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r26.u8);
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r29,r1,96
	ctx.r29.s64 = ctx.r1.s64 + 96;
loc_82FB99BC:
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// ble cr6,0x82fb9c48
	if (!ctx.cr6.gt) goto loc_82FB9C48;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f28,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f28.f64 = double(temp.f32);
	// fmr f31,f28
	ctx.f31.f64 = ctx.f28.f64;
	// fcmpu cr6,f27,f28
	ctx.cr6.compare(ctx.f27.f64, ctx.f28.f64);
	// bne cr6,0x82fb9a00
	if (!ctx.cr6.eq) goto loc_82FB9A00;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
loc_82FB99E0:
	// rlwinm r9,r11,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 | ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r9,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r9.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// blt cr6,0x82fb99e0
	if (ctx.cr6.lt) goto loc_82FB99E0;
	// b 0x82fb9a74
	goto loc_82FB9A74;
loc_82FB9A00:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// addi r30,r1,112
	ctx.r30.s64 = ctx.r1.s64 + 112;
	// lfs f29,3056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3056);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,3500(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3500);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,2960(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2960);
	ctx.f31.f64 = double(temp.f32);
loc_82FB9A20:
	// clrldi r11,r31,32
	ctx.r11.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// fmr f2,f27
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f27.f64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x821fe378
	ctx.lr = 0x82FB9A40;
	sub_821FE378(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmadds f1,f0,f30,f29
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 + ctx.f29.f64));
	// bl 0x8222c3e8
	ctx.lr = 0x82FB9A4C;
	sub_8222C3E8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,256
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 256, ctx.xer);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lhz r11,86(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// blt cr6,0x82fb9a20
	if (ctx.cr6.lt) goto loc_82FB9A20;
	// fdivs f31,f28,f27
	ctx.f31.f64 = double(float(ctx.f28.f64 / ctx.f27.f64));
loc_82FB9A74:
	// lbz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x82fb9a98
	if (ctx.cr0.eq) goto loc_82FB9A98;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_82FB9A8C:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82fb9a8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82FB9A8C;
loc_82FB9A98:
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// ble cr6,0x82fb9c20
	if (!ctx.cr6.gt) goto loc_82FB9C20;
	// addi r11,r29,6
	ctx.r11.s64 = ctx.r29.s64 + 6;
	// addi r23,r28,-1
	ctx.r23.s64 = ctx.r28.s64 + -1;
loc_82FB9AA8:
	// lbz r26,2(r11)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// cmplw cr6,r26,r31
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82fb9ab8
	if (!ctx.cr6.lt) goto loc_82FB9AB8;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_82FB9AB8:
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lbz r5,1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// lbz r3,7(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// rotlwi r7,r7,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// lbz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// rotlwi r5,r5,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// lbz r30,9(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// addi r25,r1,112
	ctx.r25.s64 = ctx.r1.s64 + 112;
	// lbz r28,-2(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// rotlwi r3,r3,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// lhzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lbz r27,6(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// rotlwi r29,r29,1
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r29.u32, 1);
	// lhzx r7,r7,r6
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r6.u32);
	// lhzx r5,r5,r4
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r4.u32);
	// rotlwi r6,r30,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r30.u32, 1);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// fcmpu cr6,f27,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f27.f64, ctx.f28.f64);
	// lhzx r3,r3,r25
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r25.u32);
	// rotlwi r30,r28,8
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r28.u32, 8);
	// rotlwi r25,r27,8
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r27.u32, 8);
	// sth r10,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r10.u16);
	// lhzx r10,r29,r8
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + ctx.r8.u32);
	// or r8,r30,r28
	ctx.r8.u64 = ctx.r30.u64 | ctx.r28.u64;
	// sth r7,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r7.u16);
	// or r30,r25,r27
	ctx.r30.u64 = ctx.r25.u64 | ctx.r27.u64;
	// lhzx r7,r6,r4
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r4.u32);
	// addi r25,r11,8
	ctx.r25.s64 = ctx.r11.s64 + 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// sth r5,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r5.u16);
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// subf r30,r31,r26
	ctx.r30.s64 = ctx.r26.s64 - ctx.r31.s64;
	// sth r10,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r10.u16);
	// sth r8,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, ctx.r8.u16);
	// sth r7,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r7.u16);
	// sth r6,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r6.u16);
	// bne cr6,0x82fb9bb8
	if (!ctx.cr6.eq) goto loc_82FB9BB8;
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x82fb9c0c
	if (!ctx.cr6.lt) goto loc_82FB9C0C;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r28,1
	ctx.r28.s64 = 1;
	// add r27,r11,r24
	ctx.r27.u64 = ctx.r11.u64 + ctx.r24.u64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// add r31,r30,r31
	ctx.r31.u64 = ctx.r30.u64 + ctx.r31.u64;
loc_82FB9B80:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82fb9880
	ctx.lr = 0x82FB9B98;
	sub_82FB9880(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// bne 0x82fb9b80
	if (!ctx.cr0.eq) goto loc_82FB9B80;
	// b 0x82fb9c0c
	goto loc_82FB9C0C;
loc_82FB9BB8:
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x82fb9c0c
	if (!ctx.cr6.lt) goto loc_82FB9C0C;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r28,1
	ctx.r28.s64 = 1;
	// add r27,r11,r24
	ctx.r27.u64 = ctx.r11.u64 + ctx.r24.u64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// add r31,r30,r31
	ctx.r31.u64 = ctx.r30.u64 + ctx.r31.u64;
loc_82FB9BD4:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82fb9750
	ctx.lr = 0x82FB9BF0;
	sub_82FB9750(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// bne 0x82fb9bd4
	if (!ctx.cr0.eq) goto loc_82FB9BD4;
loc_82FB9C0C:
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// bne 0x82fb9aa8
	if (!ctx.cr0.eq) goto loc_82FB9AA8;
	// cmplwi cr6,r26,256
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 256, ctx.xer);
	// bge cr6,0x82fb9c64
	if (!ctx.cr6.lt) goto loc_82FB9C64;
loc_82FB9C20:
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r11,r26,256
	ctx.xer.ca = ctx.r26.u32 <= 256;
	ctx.r11.s64 = 256 - ctx.r26.s64;
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fb9c64
	if (ctx.cr6.eq) goto loc_82FB9C64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82FB9C38:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82fb9c38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82FB9C38;
	// b 0x82fb9c64
	goto loc_82FB9C64;
loc_82FB9C48:
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// li r11,256
	ctx.r11.s64 = 256;
loc_82FB9C50:
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82fb9c50
	if (!ctx.cr0.eq) goto loc_82FB9C50;
loc_82FB9C64:
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82ca7550
	ctx.lr = 0x82FB9C70;
	sub_82CA7550(ctx, base);
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_82FB9C74"))) PPC_WEAK_FUNC(sub_82FB9C74);
PPC_FUNC_IMPL(__imp__sub_82FB9C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB9C78"))) PPC_WEAK_FUNC(sub_82FB9C78);
PPC_FUNC_IMPL(__imp__sub_82FB9C78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82FB9C80;
	sub_82CA2BD4(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// bl 0x82ef8e38
	ctx.lr = 0x82FB9C98;
	sub_82EF8E38(ctx, base);
	// li r23,0
	ctx.r23.s64 = 0;
	// stb r3,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r3.u8);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stb r23,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r23.u8);
	// addi r24,r31,24
	ctx.r24.s64 = ctx.r31.s64 + 24;
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// addi r4,r11,26796
	ctx.r4.s64 = ctx.r11.s64 + 26796;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82ef9790
	ctx.lr = 0x82FB9CBC;
	sub_82EF9790(ctx, base);
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82fb9d20
	if (!ctx.cr0.eq) goto loc_82FB9D20;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f3e5a0
	ctx.lr = 0x82FB9CD8;
	sub_82F3E5A0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r4,r11,26784
	ctx.r4.s64 = ctx.r11.s64 + 26784;
	// bl 0x82ef9790
	ctx.lr = 0x82FB9CE8;
	sub_82EF9790(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82f2a230
	ctx.lr = 0x82FB9CFC;
	sub_82F2A230(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bge cr6,0x82fb9d14
	if (!ctx.cr6.lt) goto loc_82FB9D14;
	// lbz r11,1(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stb r11,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r11.u8);
loc_82FB9D14:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// b 0x82fba028
	goto loc_82FBA028;
loc_82FB9D20:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82fb9fc0
	if (ctx.cr0.eq) goto loc_82FB9FC0;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x82f29b10
	ctx.lr = 0x82FB9D34;
	sub_82F29B10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef8e38
	ctx.lr = 0x82FB9D3C;
	sub_82EF8E38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82fb9d54
	if (ctx.cr0.eq) goto loc_82FB9D54;
	// lbz r10,1(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stb r10,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r10.u8);
loc_82FB9D54:
	// li r3,28
	ctx.r3.s64 = 28;
	// clrlwi r29,r11,28
	ctx.r29.u64 = ctx.r11.u32 & 0xF;
	// bl 0x82ef6ef8
	ctx.lr = 0x82FB9D60;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82fb9d98
	if (ctx.cr0.eq) goto loc_82FB9D98;
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
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lbz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// lbz r11,1(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// clrlwi r6,r11,31
	ctx.r6.u64 = ctx.r11.u32 & 0x1;
	// bl 0x82fb95f0
	ctx.lr = 0x82FB9D94;
	sub_82FB95F0(ctx, base);
	// b 0x82fb9d9c
	goto loc_82FB9D9C;
loc_82FB9D98:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_82FB9D9C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// beq cr6,0x82fb9fb4
	if (ctx.cr6.eq) goto loc_82FB9FB4;
	// lhz r11,18(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 18);
	// clrlwi r27,r29,16
	ctx.r27.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82fb9f98
	if (!ctx.cr6.eq) goto loc_82FB9F98;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x82fb9e24
	if (!ctx.cr6.gt) goto loc_82FB9E24;
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
loc_82FB9DCC:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r28,r29,r11
	ctx.r28.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82ef8e38
	ctx.lr = 0x82FB9DDC;
	sub_82EF8E38(ctx, base);
	// stb r3,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r3.u8);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r28,4
	ctx.r4.s64 = ctx.r28.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f3e5a0
	ctx.lr = 0x82FB9DF0;
	sub_82F3E5A0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r10,r29,r10
	ctx.r10.u64 = ctx.r29.u64 + ctx.r10.u64;
	// lbz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// bge cr6,0x82fb9e18
	if (!ctx.cr6.lt) goto loc_82FB9E18;
	// lbz r10,1(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stb r10,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r10.u8);
loc_82FB9E18:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x82fb9dcc
	if (!ctx.cr0.eq) goto loc_82FB9DCC;
loc_82FB9E24:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,26752
	ctx.r4.s64 = ctx.r11.s64 + 26752;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82ef9790
	ctx.lr = 0x82FB9E38;
	sub_82EF9790(ctx, base);
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// bne cr6,0x82fb9e74
	if (!ctx.cr6.eq) goto loc_82FB9E74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef8e98
	ctx.lr = 0x82FB9E4C;
	sub_82EF8E98(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,2700(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2700);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,24(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 24, temp.u32);
loc_82FB9E74:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r29,296(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// addi r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 1;
	// stw r10,296(r11)
	PPC_STORE_U32(ctx.r11.u32 + 296, ctx.r10.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82fb9ea4
	if (ctx.cr6.eq) goto loc_82FB9EA4;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82fb9ea8
	if (!ctx.cr0.eq) goto loc_82FB9EA8;
loc_82FB9EA4:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82FB9EA8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fb9f00
	if (ctx.cr0.eq) goto loc_82FB9F00;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x82f2ed98
	ctx.lr = 0x82FB9ECC;
	sub_82F2ED98(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fb9ee0
	if (ctx.cr0.eq) goto loc_82FB9EE0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x82ef8c90
	ctx.lr = 0x82FB9EE0;
	sub_82EF8C90(ctx, base);
loc_82FB9EE0:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82fba028
	if (!ctx.cr6.eq) goto loc_82FBA028;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fba028
	if (ctx.cr6.eq) goto loc_82FBA028;
	// bl 0x82ef1bf0
	ctx.lr = 0x82FB9EFC;
	sub_82EF1BF0(ctx, base);
	// b 0x82fba028
	goto loc_82FBA028;
loc_82FB9F00:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82fb9660
	ctx.lr = 0x82FB9F0C;
	sub_82FB9660(ctx, base);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82f3fc78
	ctx.lr = 0x82FB9F24;
	sub_82F3FC78(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82fb9f40
	if (!ctx.cr6.eq) goto loc_82FB9F40;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82fb9f44
	if (ctx.cr6.eq) goto loc_82FB9F44;
loc_82FB9F40:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82FB9F44:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82fb9f5c
	if (!ctx.cr0.eq) goto loc_82FB9F5C;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x82ef8c90
	ctx.lr = 0x82FB9F58;
	sub_82EF8C90(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_82FB9F5C:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82fb9f74
	if (!ctx.cr6.eq) goto loc_82FB9F74;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fb9f74
	if (ctx.cr6.eq) goto loc_82FB9F74;
	// bl 0x82ef1bf0
	ctx.lr = 0x82FB9F74;
	sub_82EF1BF0(ctx, base);
loc_82FB9F74:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fba028
	if (ctx.cr6.eq) goto loc_82FBA028;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB9F94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82fba028
	goto loc_82FBA028;
loc_82FB9F98:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fb9fb4
	if (ctx.cr6.eq) goto loc_82FB9FB4;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB9FB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FB9FB4:
	// stw r23,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r23.u32);
	// stb r23,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r23.u8);
	// b 0x82fba028
	goto loc_82FBA028;
loc_82FB9FC0:
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fba028
	if (ctx.cr0.eq) goto loc_82FBA028;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef8e98
	ctx.lr = 0x82FB9FD0;
	sub_82EF8E98(ctx, base);
	// clrlwi r29,r3,16
	ctx.r29.u64 = ctx.r3.u32 & 0xFFFF;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,26732
	ctx.r4.s64 = ctx.r11.s64 + 26732;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82ef9790
	ctx.lr = 0x82FB9FE8;
	sub_82EF9790(ctx, base);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// bl 0x82f2ed98
	ctx.lr = 0x82FB9FFC;
	sub_82F2ED98(ctx, base);
	// addi r29,r30,16
	ctx.r29.s64 = ctx.r30.s64 + 16;
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f29b10
	ctx.lr = 0x82FBA010;
	sub_82F29B10(ctx, base);
	// lbz r11,1(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r11.u8);
	// bl 0x82f2a348
	ctx.lr = 0x82FBA028;
	sub_82F2A348(ctx, base);
loc_82FBA028:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_82FBA030"))) PPC_WEAK_FUNC(sub_82FBA030);
PPC_FUNC_IMPL(__imp__sub_82FBA030) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82FBA038;
	sub_82CA2BD8(ctx, base);
	// stfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// lbz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// mr. r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
	// bne 0x82fba090
	if (!ctx.cr0.eq) goto loc_82FBA090;
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x82fb3030
	ctx.lr = 0x82FBA084;
	sub_82FB3030(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// b 0x82fba230
	goto loc_82FBA230;
loc_82FBA090:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82fba208
	if (ctx.cr0.eq) goto loc_82FBA208;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r28,4(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r26,4(r24)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fba0c0
	if (ctx.cr6.eq) goto loc_82FBA0C0;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FBA0C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FBA0C0:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82ef6ef8
	ctx.lr = 0x82FBA0C8;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82fba100
	if (ctx.cr0.eq) goto loc_82FBA100;
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
	// lhz r5,18(r28)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r28.u32 + 18);
	// lbz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// lbz r11,1(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 1);
	// clrlwi r6,r11,31
	ctx.r6.u64 = ctx.r11.u32 & 0x1;
	// bl 0x82fb95f0
	ctx.lr = 0x82FBA0FC;
	sub_82FB95F0(ctx, base);
	// b 0x82fba104
	goto loc_82FBA104;
loc_82FBA100:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FBA104:
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fba1e0
	if (ctx.cr6.eq) goto loc_82FBA1E0;
	// lhz r11,18(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 18);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82fba1e0
	if (ctx.cr0.eq) goto loc_82FBA1E0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r31,0
	ctx.r31.s64 = 0;
	// lfs f30,3056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3056);
	ctx.f30.f64 = double(temp.f32);
loc_82FBA12C:
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lbzx r10,r31,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// lbzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// lwz r9,20(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f13,104(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmadds f0,f13,f31,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 + ctx.f0.f64));
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stbx r11,r9,r31
	PPC_STORE_U8(ctx.r9.u32 + ctx.r31.u32, ctx.r11.u8);
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,20(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// add r27,r11,r31
	ctx.r27.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82fb3030
	ctx.lr = 0x82FBA1C0;
	sub_82FB3030(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lhz r11,18(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 18);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fba12c
	if (ctx.cr6.lt) goto loc_82FBA12C;
loc_82FBA1E0:
	// lfs f0,24(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lfs f13,24(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// fmadds f0,f13,f31,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 + ctx.f0.f64));
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// bl 0x82f461a0
	ctx.lr = 0x82FBA204;
	sub_82F461A0(ctx, base);
	// b 0x82fba21c
	goto loc_82FBA21C;
loc_82FBA208:
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fba21c
	if (ctx.cr0.eq) goto loc_82FBA21C;
	// addi r4,r25,8
	ctx.r4.s64 = ctx.r25.s64 + 8;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x82ef8c90
	ctx.lr = 0x82FBA21C;
	sub_82EF8C90(ctx, base);
loc_82FBA21C:
	// addi r5,r24,16
	ctx.r5.s64 = ctx.r24.s64 + 16;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r25,16
	ctx.r4.s64 = ctx.r25.s64 + 16;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x82f66118
	ctx.lr = 0x82FBA230;
	sub_82F66118(ctx, base);
loc_82FBA230:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82FBA240"))) PPC_WEAK_FUNC(sub_82FBA240);
PPC_FUNC_IMPL(__imp__sub_82FBA240) {
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
	// bl 0x82fb9508
	ctx.lr = 0x82FBA260;
	sub_82FB9508(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fba270
	if (ctx.cr0.eq) goto loc_82FBA270;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824fe010
	ctx.lr = 0x82FBA270;
	sub_824FE010(ctx, base);
loc_82FBA270:
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

__attribute__((alias("__imp__sub_82FBA28C"))) PPC_WEAK_FUNC(sub_82FBA28C);
PPC_FUNC_IMPL(__imp__sub_82FBA28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBA290"))) PPC_WEAK_FUNC(sub_82FBA290);
PPC_FUNC_IMPL(__imp__sub_82FBA290) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FBA298;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lhz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// sth r11,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r11.u16);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lhz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 16);
	// sth r11,16(r30)
	PPC_STORE_U16(ctx.r30.u32 + 16, ctx.r11.u16);
	// lfs f0,20(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stfs f0,20(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82fba2e8
	if (ctx.cr6.eq) goto loc_82FBA2E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fb8fd8
	ctx.lr = 0x82FBA2DC;
	sub_82FB8FD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82FBA2E4;
	sub_82EF6F38(ctx, base);
	// stw r28,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r28.u32);
loc_82FBA2E8:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fba334
	if (ctx.cr6.eq) goto loc_82FBA334;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82ef6ef8
	ctx.lr = 0x82FBA2FC;
	sub_82EF6EF8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82fba32c
	if (ctx.cr0.eq) goto loc_82FBA32C;
	// lwz r29,12(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// bl 0x82f65fe0
	ctx.lr = 0x82FBA318;
	sub_82F65FE0(ctx, base);
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fb9358
	ctx.lr = 0x82FBA328;
	sub_82FB9358(ctx, base);
	// b 0x82fba330
	goto loc_82FBA330;
loc_82FBA32C:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82FBA330:
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
loc_82FBA334:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82FBA340"))) PPC_WEAK_FUNC(sub_82FBA340);
PPC_FUNC_IMPL(__imp__sub_82FBA340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FBA348;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r31,12(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82fba370
	if (ctx.cr6.eq) goto loc_82FBA370;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fb8fd8
	ctx.lr = 0x82FBA368;
	sub_82FB8FD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82FBA370;
	sub_82EF6F38(ctx, base);
loc_82FBA370:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82ef6ef8
	ctx.lr = 0x82FBA378;
	sub_82EF6EF8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82fba3a8
	if (ctx.cr0.eq) goto loc_82FBA3A8;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// bl 0x82f65fe0
	ctx.lr = 0x82FBA394;
	sub_82F65FE0(ctx, base);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fb9358
	ctx.lr = 0x82FBA3A4;
	sub_82FB9358(ctx, base);
	// b 0x82fba3ac
	goto loc_82FBA3AC;
loc_82FBA3A8:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82FBA3AC:
	// stw r31,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82FBA3B8"))) PPC_WEAK_FUNC(sub_82FBA3B8);
PPC_FUNC_IMPL(__imp__sub_82FBA3B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FBA3C0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82ef8e98
	ctx.lr = 0x82FBA3D8;
	sub_82EF8E98(ctx, base);
	// sth r3,4(r29)
	PPC_STORE_U16(ctx.r29.u32 + 4, ctx.r3.u16);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r28,83
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 83, ctx.xer);
	// bne cr6,0x82fba42c
	if (!ctx.cr6.eq) goto loc_82FBA42C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ef8e98
	ctx.lr = 0x82FBA3F0;
	sub_82EF8E98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm. r11,r31,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r31,16(r29)
	PPC_STORE_U16(ctx.r29.u32 + 16, ctx.r31.u16);
	// beq 0x82fba42c
	if (ctx.cr0.eq) goto loc_82FBA42C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ef8e98
	ctx.lr = 0x82FBA408;
	sub_82EF8E98(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,2700(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2700);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,20(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 20, temp.u32);
loc_82FBA42C:
	// rlwinm. r11,r31,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fba4c8
	if (ctx.cr0.eq) goto loc_82FBA4C8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82fb9300
	ctx.lr = 0x82FBA43C;
	sub_82FB9300(ctx, base);
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82ef6ef8
	ctx.lr = 0x82FBA444;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82fba454
	if (ctx.cr0.eq) goto loc_82FBA454;
	// bl 0x82fb9300
	ctx.lr = 0x82FBA450;
	sub_82FB9300(ctx, base);
	// b 0x82fba458
	goto loc_82FBA458;
loc_82FBA454:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FBA458:
	// stw r3,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bne cr6,0x82fba46c
	if (!ctx.cr6.eq) goto loc_82FBA46C;
	// addi r31,r1,96
	ctx.r31.s64 = ctx.r1.s64 + 96;
loc_82FBA46C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fb9c78
	ctx.lr = 0x82FBA47C;
	sub_82FB9C78(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82fba490
	if (!ctx.cr0.eq) goto loc_82FBA490;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x82fba4b8
	goto loc_82FBA4B8;
loc_82FBA490:
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fba4bc
	if (ctx.cr0.eq) goto loc_82FBA4BC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fba4bc
	if (ctx.cr6.eq) goto loc_82FBA4BC;
	// lhz r10,18(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 18);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82fba4bc
	if (ctx.cr0.eq) goto loc_82FBA4BC;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82FBA4B8:
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
loc_82FBA4BC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82fb8fd8
	ctx.lr = 0x82FBA4C4;
	sub_82FB8FD8(ctx, base);
	// b 0x82fba4d8
	goto loc_82FBA4D8;
loc_82FBA4C8:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f3e5a0
	ctx.lr = 0x82FBA4D8;
	sub_82F3E5A0(ctx, base);
loc_82FBA4D8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82FBA4E0"))) PPC_WEAK_FUNC(sub_82FBA4E0);
PPC_FUNC_IMPL(__imp__sub_82FBA4E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82FBA4E8;
	sub_82CA2BE0(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82ca74f4
	ctx.lr = 0x82FBA4F0;
	sub_82CA74F4(ctx, base);
	// stwu r1,-1296(r1)
	ea = -1296 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lbz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// lfs f30,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f30.f64 = double(temp.f32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82fba520
	if (ctx.cr0.eq) goto loc_82FBA520;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f1,26828(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26828);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82fba524
	goto loc_82FBA524;
loc_82FBA520:
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
loc_82FBA524:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lhz r5,18(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 18);
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x82fb9970
	ctx.lr = 0x82FBA534;
	sub_82FB9970(ctx, base);
	// lbz r11,17(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 17);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// beq cr6,0x82fba980
	if (ctx.cr6.eq) goto loc_82FBA980;
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// beq cr6,0x82fba798
	if (ctx.cr6.eq) goto loc_82FBA798;
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// bne cr6,0x82fbaa0c
	if (!ctx.cr6.eq) goto loc_82FBAA0C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fb8d88
	ctx.lr = 0x82FBA55C;
	sub_82FB8D88(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82eff498
	ctx.lr = 0x82FBA570;
	sub_82EFF498(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82fbaa0c
	if (ctx.cr0.eq) goto loc_82FBAA0C;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r28,r27,-1
	ctx.r28.s64 = ctx.r27.s64 + -1;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfs f31,3056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3056);
	ctx.f31.f64 = double(temp.f32);
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lfs f0,3084(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f28,f12,f31
	ctx.f28.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fsubs f8,f28,f30
	ctx.f8.f64 = double(float(ctx.f28.f64 - ctx.f30.f64));
	// stfs f8,112(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f0,f13,f8
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x82fb8c80
	ctx.lr = 0x82FBA5C4;
	sub_82FB8C80(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// ble cr6,0x82fba6f0
	if (!ctx.cr6.gt) goto loc_82FBA6F0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fdivs f23,f30,f8
	ctx.fpscr.disableFlushMode();
	ctx.f23.f64 = double(float(ctx.f30.f64 / ctx.f8.f64));
	// lfs f29,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f29.f64 = double(temp.f32);
	// addi r26,r31,16
	ctx.r26.s64 = ctx.r31.s64 + 16;
	// lfs f30,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f30.f64 = double(temp.f32);
	// lfs f24,2780(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2780);
	ctx.f24.f64 = double(temp.f32);
loc_82FBA5E8:
	// clrldi r11,r29,32
	ctx.r11.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// li r30,1
	ctx.r30.s64 = 1;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fsubs f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f28.f64));
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fsubs f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f29.f64));
	// fmuls f27,f30,f0
	ctx.f27.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fmuls f26,f0,f0
	ctx.f26.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmuls f25,f29,f0
	ctx.f25.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
loc_82FBA618:
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// lfs f0,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fsubs f12,f12,f28
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f28.f64));
	// fadds f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f31.f64));
	// fsubs f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f30.f64));
	// fmsubs f11,f29,f12,f27
	ctx.f11.f64 = double(float(ctx.f29.f64 * ctx.f12.f64 - ctx.f27.f64));
	// fmadds f10,f12,f12,f26
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f26.f64));
	// fmuls f11,f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmsubs f0,f10,f0,f11
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 - ctx.f11.f64));
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fmadds f0,f30,f12,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fadds f0,f0,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f25.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f0,f0,f23
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f23.f64));
	// fmadds f1,f0,f24,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f24.f64 + ctx.f31.f64));
	// bl 0x8222c3e8
	ctx.lr = 0x82FBA670;
	sub_8222C3E8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x82fba68c
	if (!ctx.cr6.gt) goto loc_82FBA68C;
	// li r11,255
	ctx.r11.s64 = 255;
loc_82FBA68C:
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// blt cr6,0x82fba698
	if (ctx.cr6.lt) goto loc_82FBA698;
	// li r11,255
	ctx.r11.s64 = 255;
loc_82FBA698:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r10,83(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// rlwimi r10,r9,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// lbz r6,81(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// rlwimi r11,r10,8,0,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFFFFFF00) | (ctx.r11.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r6,r11,8,0,23
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFFFFFF00) | (ctx.r6.u64 & 0xFFFFFFFF000000FF);
	// bl 0x82efe790
	ctx.lr = 0x82FBA6D8;
	sub_82EFE790(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82fba618
	if (ctx.cr6.lt) goto loc_82FBA618;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82fba5e8
	if (ctx.cr6.lt) goto loc_82FBA5E8;
loc_82FBA6F0:
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// ble cr6,0x82fbaa0c
	if (!ctx.cr6.gt) goto loc_82FBAA0C;
	// lbz r11,1167(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 1167);
	// addi r28,r31,16
	ctx.r28.s64 = ctx.r31.s64 + 16;
	// lbz r10,1164(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 1164);
	// lbz r9,1166(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 1166);
	// rlwimi r11,r10,8,16,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r11.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r29,1165(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + 1165);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwimi r9,r11,8,0,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFFFFFF00) | (ctx.r9.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r29,r9,8,0,23
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFFFFFF00) | (ctx.r29.u64 & 0xFFFFFFFF000000FF);
loc_82FBA720:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82efe790
	ctx.lr = 0x82FBA734;
	sub_82EFE790(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x82efe790
	ctx.lr = 0x82FBA74C;
	sub_82EFE790(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// subf r10,r30,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// bl 0x82efe790
	ctx.lr = 0x82FBA76C;
	sub_82EFE790(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// bl 0x82efe790
	ctx.lr = 0x82FBA788;
	sub_82EFE790(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82fba720
	if (ctx.cr6.lt) goto loc_82FBA720;
	// b 0x82fbaa0c
	goto loc_82FBAA0C;
loc_82FBA798:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fb8d88
	ctx.lr = 0x82FBA7A4;
	sub_82FB8D88(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82eff498
	ctx.lr = 0x82FBA7B8;
	sub_82EFF498(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82fbaa0c
	if (ctx.cr0.eq) goto loc_82FBAA0C;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r28,r27,-1
	ctx.r28.s64 = ctx.r27.s64 + -1;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfs f31,3056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3056);
	ctx.f31.f64 = double(temp.f32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f29,f0,f31
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fsubs f0,f29,f30
	ctx.f0.f64 = double(float(ctx.f29.f64 - ctx.f30.f64));
	// ble cr6,0x82fba8d8
	if (!ctx.cr6.gt) goto loc_82FBA8D8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fdivs f28,f30,f0
	ctx.f28.f64 = double(float(ctx.f30.f64 / ctx.f0.f64));
	// addi r26,r31,16
	ctx.r26.s64 = ctx.r31.s64 + 16;
	// lfs f27,2780(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2780);
	ctx.f27.f64 = double(temp.f32);
loc_82FBA804:
	// clrldi r11,r29,32
	ctx.r11.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// li r30,1
	ctx.r30.s64 = 1;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fsubs f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f29.f64));
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fmuls f30,f0,f0
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
loc_82FBA828:
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fsubs f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f29.f64));
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fmadds f0,f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f30.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fmuls f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// fmadds f1,f0,f27,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f27.f64 + ctx.f31.f64));
	// bl 0x8222c3e8
	ctx.lr = 0x82FBA858;
	sub_8222C3E8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x82fba874
	if (!ctx.cr6.gt) goto loc_82FBA874;
	// li r11,255
	ctx.r11.s64 = 255;
loc_82FBA874:
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// blt cr6,0x82fba880
	if (ctx.cr6.lt) goto loc_82FBA880;
	// li r11,255
	ctx.r11.s64 = 255;
loc_82FBA880:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r6,81(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r9,83(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// rlwimi r9,r10,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// rlwimi r11,r10,8,0,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFFFFFF00) | (ctx.r11.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r6,r11,8,0,23
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFFFFFF00) | (ctx.r6.u64 & 0xFFFFFFFF000000FF);
	// bl 0x82efe790
	ctx.lr = 0x82FBA8C0;
	sub_82EFE790(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82fba828
	if (ctx.cr6.lt) goto loc_82FBA828;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82fba804
	if (ctx.cr6.lt) goto loc_82FBA804;
loc_82FBA8D8:
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// ble cr6,0x82fbaa0c
	if (!ctx.cr6.gt) goto loc_82FBAA0C;
	// lbz r11,1167(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 1167);
	// addi r28,r31,16
	ctx.r28.s64 = ctx.r31.s64 + 16;
	// lbz r10,1164(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 1164);
	// lbz r9,1166(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 1166);
	// rlwimi r11,r10,8,16,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r11.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r29,1165(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + 1165);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwimi r9,r11,8,0,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFFFFFF00) | (ctx.r9.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r29,r9,8,0,23
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFFFFFF00) | (ctx.r29.u64 & 0xFFFFFFFF000000FF);
loc_82FBA908:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82efe790
	ctx.lr = 0x82FBA91C;
	sub_82EFE790(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x82efe790
	ctx.lr = 0x82FBA934;
	sub_82EFE790(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// subf r10,r30,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// bl 0x82efe790
	ctx.lr = 0x82FBA954;
	sub_82EFE790(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// bl 0x82efe790
	ctx.lr = 0x82FBA970;
	sub_82EFE790(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82fba908
	if (ctx.cr6.lt) goto loc_82FBA908;
	// b 0x82fbaa0c
	goto loc_82FBAA0C;
loc_82FBA980:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,256
	ctx.r4.s64 = 256;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82eff498
	ctx.lr = 0x82FBA990;
	sub_82EFF498(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82fbaa0c
	if (ctx.cr0.eq) goto loc_82FBAA0C;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82fbaa0c
	if (!ctx.cr6.gt) goto loc_82FBAA0C;
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
loc_82FBA9AC:
	// cmplwi cr6,r30,256
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 256, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// blt cr6,0x82fba9bc
	if (ctx.cr6.lt) goto loc_82FBA9BC;
	// li r11,255
	ctx.r11.s64 = 255;
loc_82FBA9BC:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbz r6,81(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r9,82(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r11,83(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// rlwimi r11,r10,8,16,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r11.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwimi r9,r11,8,0,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFFFFFF00) | (ctx.r9.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r6,r9,8,0,23
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFFFFFF00) | (ctx.r6.u64 & 0xFFFFFFFF000000FF);
	// bl 0x82efe790
	ctx.lr = 0x82FBA9FC;
	sub_82EFE790(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fba9ac
	if (ctx.cr6.lt) goto loc_82FBA9AC;
loc_82FBAA0C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,1296
	ctx.r1.s64 = ctx.r1.s64 + 1296;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82ca7540
	ctx.lr = 0x82FBAA1C;
	sub_82CA7540(ctx, base);
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82FBAA20"))) PPC_WEAK_FUNC(sub_82FBAA20);
PPC_FUNC_IMPL(__imp__sub_82FBAA20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82FBAA28;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x82fb96d8
	ctx.lr = 0x82FBAA50;
	sub_82FB96D8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82ef2088
	ctx.lr = 0x82FBAA6C;
	sub_82EF2088(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82fbab68
	if (!ctx.cr6.eq) goto loc_82FBAB68;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fba4e0
	ctx.lr = 0x82FBAA80;
	sub_82FBA4E0(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x82fbab34
	if (ctx.cr0.eq) goto loc_82FBAB34;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r26,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r26.u8);
	// beq cr6,0x82fbaad4
	if (ctx.cr6.eq) goto loc_82FBAAD4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FBAAD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82FBAAD4:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82ef6ef8
	ctx.lr = 0x82FBAADC;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82fbaaf8
	if (ctx.cr0.eq) goto loc_82FBAAF8;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f3ece8
	ctx.lr = 0x82FBAAF4;
	sub_82F3ECE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82FBAAF8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82fbab0c
	if (ctx.cr6.eq) goto loc_82FBAB0C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82ef1d88
	ctx.lr = 0x82FBAB0C;
	sub_82EF1D88(ctx, base);
loc_82FBAB0C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82fbab2c
	if (ctx.cr6.eq) goto loc_82FBAB2C;
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
	ctx.lr = 0x82FBAB2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FBAB2C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82fbab44
	if (!ctx.cr6.eq) goto loc_82FBAB44;
loc_82FBAB34:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r11,26832
	ctx.r4.s64 = ctx.r11.s64 + 26832;
	// bl 0x82ef1e18
	ctx.lr = 0x82FBAB44;
	sub_82EF1E18(ctx, base);
loc_82FBAB44:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82fbab74
	if (ctx.cr6.eq) goto loc_82FBAB74;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FBAB64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82fbab74
	goto loc_82FBAB74;
loc_82FBAB68:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ef1810
	ctx.lr = 0x82FBAB70;
	sub_82EF1810(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82FBAB74:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82fbab8c
	if (!ctx.cr6.eq) goto loc_82FBAB8C;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82ef1bf0
	ctx.lr = 0x82FBAB88;
	sub_82EF1BF0(ctx, base);
	// b 0x82fbabac
	goto loc_82FBABAC;
loc_82FBAB8C:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x82fbabac
	if (ctx.cr6.lt) goto loc_82FBABAC;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FBABAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FBABAC:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbabcc
	if (ctx.cr6.eq) goto loc_82FBABCC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FBABCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FBABCC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82FBABD8"))) PPC_WEAK_FUNC(sub_82FBABD8);
PPC_FUNC_IMPL(__imp__sub_82FBABD8) {
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
	// lwz r11,16(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r7,40(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 40);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r4,44(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 44);
	// lbz r8,56(r6)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r6.u32 + 56);
	// lwz r6,24(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r5,32(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x82fbaa20
	ctx.lr = 0x82FBAC10;
	sub_82FBAA20(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fbac28
	if (ctx.cr6.eq) goto loc_82FBAC28;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82ef1bf0
	ctx.lr = 0x82FBAC28;
	sub_82EF1BF0(ctx, base);
loc_82FBAC28:
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_82FBAC50"))) PPC_WEAK_FUNC(sub_82FBAC50);
PPC_FUNC_IMPL(__imp__sub_82FBAC50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82FBAC58;
	sub_82CA2BDC(ctx, base);
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r26,20(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x82f65fe0
	ctx.lr = 0x82FBAC88;
	sub_82F65FE0(ctx, base);
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82fbae94
	if (ctx.cr0.eq) goto loc_82FBAE94;
	// addi r29,r27,8
	ctx.r29.s64 = ctx.r27.s64 + 8;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f2bea0
	ctx.lr = 0x82FBACA4;
	sub_82F2BEA0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82fbacf0
	if (!ctx.cr0.eq) goto loc_82FBACF0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82fbafa4
	if (ctx.cr6.eq) goto loc_82FBAFA4;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x82fbaa20
	ctx.lr = 0x82FBACD4;
	sub_82FBAA20(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82fbafa4
	if (ctx.cr0.eq) goto loc_82FBAFA4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f461a0
	ctx.lr = 0x82FBACE8;
	sub_82F461A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ef1bf0
	ctx.lr = 0x82FBACF0;
	sub_82EF1BF0(ctx, base);
loc_82FBACF0:
	// lwz r30,12(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82fbafa4
	if (ctx.cr6.eq) goto loc_82FBAFA4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FBAD14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82fbad28
	if (!ctx.cr6.eq) goto loc_82FBAD28;
loc_82FBAD20:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82fbafa8
	goto loc_82FBAFA8;
loc_82FBAD28:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FBAD40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// stw r11,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r11.u32);
	// addi r31,r28,16
	ctx.r31.s64 = ctx.r28.s64 + 16;
	// stw r10,52(r28)
	PPC_STORE_U32(ctx.r28.u32 + 52, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f65fe0
	ctx.lr = 0x82FBAD60;
	sub_82F65FE0(ctx, base);
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x82fbad94
	if (!ctx.cr6.eq) goto loc_82FBAD94;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,26480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26480);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x82f65f08
	ctx.lr = 0x82FBAD80;
	sub_82F65F08(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,26484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26484);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// b 0x82fbae1c
	goto loc_82FBAE1C;
loc_82FBAD94:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FBADA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,-2
	ctx.r10.s64 = ctx.r3.s64 + -2;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// clrldi r9,r3,32
	ctx.r9.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// divwu r11,r11,r10
	ctx.r11.u32 = ctx.r11.u32 / ctx.r10.u32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lfs f0,3080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f0.f64 = double(temp.f32);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// twllei r10,0
	// lfs f13,3056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3056);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f1,f0,f12
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fmuls f30,f11,f13
	ctx.f30.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// bl 0x82f65f08
	ctx.lr = 0x82FBAE08;
	sub_82F65F08(ctx, base);
	// lfs f13,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f30,f13
	ctx.f13.f64 = double(float(ctx.f30.f64 + ctx.f13.f64));
	// stfs f13,24(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// fadds f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 + ctx.f0.f64));
loc_82FBAE1C:
	// stfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// addi r4,r27,16
	ctx.r4.s64 = ctx.r27.s64 + 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f65e60
	ctx.lr = 0x82FBAE2C;
	sub_82F65E60(ctx, base);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82fbae40
	if (ctx.cr6.eq) goto loc_82FBAE40;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f66090
	ctx.lr = 0x82FBAE40;
	sub_82F66090(ctx, base);
loc_82FBAE40:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f65fe0
	ctx.lr = 0x82FBAE48;
	sub_82F65FE0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f66280
	ctx.lr = 0x82FBAE54;
	sub_82F66280(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f66008
	ctx.lr = 0x82FBAE60;
	sub_82F66008(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f6,3084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f6.f64 = double(temp.f32);
	// fmr f5,f6
	ctx.f5.f64 = ctx.f6.f64;
	// fmr f3,f6
	ctx.f3.f64 = ctx.f6.f64;
	// fmr f2,f6
	ctx.f2.f64 = ctx.f6.f64;
	// bl 0x82f65e78
	ctx.lr = 0x82FBAE84;
	sub_82F65E78(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f66008
	ctx.lr = 0x82FBAE90;
	sub_82F66008(ctx, base);
	// b 0x82fbad20
	goto loc_82FBAD20;
loc_82FBAE94:
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fbafa4
	if (ctx.cr0.eq) goto loc_82FBAFA4;
	// addi r3,r27,8
	ctx.r3.s64 = ctx.r27.s64 + 8;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82f2bea0
	ctx.lr = 0x82FBAEA8;
	sub_82F2BEA0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82fbaeb8
	if (ctx.cr0.eq) goto loc_82FBAEB8;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x82fbaebc
	goto loc_82FBAEBC;
loc_82FBAEB8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FBAEBC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbafa4
	if (ctx.cr6.eq) goto loc_82FBAFA4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FBAED8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82fbafa4
	if (ctx.cr0.eq) goto loc_82FBAFA4;
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// beq cr6,0x82fbaf2c
	if (ctx.cr6.eq) goto loc_82FBAF2C;
	// cmpwi cr6,r11,65
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 65, ctx.xer);
	// beq cr6,0x82fbaf20
	if (ctx.cr6.eq) goto loc_82FBAF20;
	// cmpwi cr6,r11,66
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 66, ctx.xer);
	// beq cr6,0x82fbaf18
	if (ctx.cr6.eq) goto loc_82FBAF18;
	// cmpwi cr6,r11,67
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 67, ctx.xer);
	// bne cr6,0x82fbaf34
	if (!ctx.cr6.eq) goto loc_82FBAF34;
	// li r31,1
	ctx.r31.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82fbaf34
	goto loc_82FBAF34;
loc_82FBAF18:
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82fbaf30
	goto loc_82FBAF30;
loc_82FBAF20:
	// li r31,1
	ctx.r31.s64 = 1;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x82fbaf34
	goto loc_82FBAF34;
loc_82FBAF2C:
	// li r30,1
	ctx.r30.s64 = 1;
loc_82FBAF30:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82FBAF34:
	// addi r4,r27,16
	ctx.r4.s64 = ctx.r27.s64 + 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f65e60
	ctx.lr = 0x82FBAF40;
	sub_82F65E60(ctx, base);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82fbaf54
	if (ctx.cr6.eq) goto loc_82FBAF54;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f66090
	ctx.lr = 0x82FBAF54;
	sub_82F66090(ctx, base);
loc_82FBAF54:
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// addi r29,r28,16
	ctx.r29.s64 = ctx.r28.s64 + 16;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f66280
	ctx.lr = 0x82FBAF68;
	sub_82F66280(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f6,3084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f6.f64 = double(temp.f32);
	// fmr f5,f6
	ctx.f5.f64 = ctx.f6.f64;
	// fmr f3,f6
	ctx.f3.f64 = ctx.f6.f64;
	// fmr f2,f6
	ctx.f2.f64 = ctx.f6.f64;
	// bl 0x82f65e78
	ctx.lr = 0x82FBAF8C;
	sub_82F65E78(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f66008
	ctx.lr = 0x82FBAF98;
	sub_82F66008(ctx, base);
	// stw r31,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r31.u32);
	// stw r30,52(r28)
	PPC_STORE_U32(ctx.r28.u32 + 52, ctx.r30.u32);
	// b 0x82fbad20
	goto loc_82FBAD20;
loc_82FBAFA4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FBAFA8:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82FBAFB8"))) PPC_WEAK_FUNC(sub_82FBAFB8);
PPC_FUNC_IMPL(__imp__sub_82FBAFB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FBAFC0;
	sub_82CA2BE8(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r28,20(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bne 0x82fbb004
	if (!ctx.cr0.eq) goto loc_82FBB004;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// b 0x82fbb044
	goto loc_82FBB044;
loc_82FBB004:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f65fe0
	ctx.lr = 0x82FBB00C;
	sub_82F65FE0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fbac50
	ctx.lr = 0x82FBB02C;
	sub_82FBAC50(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fbb050
	if (ctx.cr6.eq) goto loc_82FBB050;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
loc_82FBB044:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FBB050;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FBB050:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82FBB05C"))) PPC_WEAK_FUNC(sub_82FBB05C);
PPC_FUNC_IMPL(__imp__sub_82FBB05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBB060"))) PPC_WEAK_FUNC(sub_82FBB060);
PPC_FUNC_IMPL(__imp__sub_82FBB060) {
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
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// lfs f0,1200(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1200);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1388(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1388);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// bl 0x82f65fe0
	ctx.lr = 0x82FBB09C;
	sub_82F65FE0(ctx, base);
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

__attribute__((alias("__imp__sub_82FBB0B4"))) PPC_WEAK_FUNC(sub_82FBB0B4);
PPC_FUNC_IMPL(__imp__sub_82FBB0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBB0B8"))) PPC_WEAK_FUNC(sub_82FBB0B8);
PPC_FUNC_IMPL(__imp__sub_82FBB0B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FBB0C0;
	sub_82CA2BEC(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82ca74d0
	ctx.lr = 0x82FBB0C8;
	sub_82CA74D0(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-4368
	ctx.r11.s64 = ctx.r11.s64 + -4368;
	// addi r30,r31,64
	ctx.r30.s64 = ctx.r31.s64 + 64;
	// lfs f13,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82fbb140
	if (!ctx.cr6.eq) goto loc_82FBB140;
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82fbb140
	if (!ctx.cr6.eq) goto loc_82FBB140;
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82fbb140
	if (!ctx.cr6.eq) goto loc_82FBB140;
	// lfs f13,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82fbb140
	if (!ctx.cr6.eq) goto loc_82FBB140;
	// lfs f13,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82fbb140
	if (!ctx.cr6.eq) goto loc_82FBB140;
	// lfs f0,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82fbb144
	if (ctx.cr6.eq) goto loc_82FBB144;
loc_82FBB140:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82FBB144:
	// stb r11,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r11.u8);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82f65fe0
	ctx.lr = 0x82FBB150;
	sub_82F65FE0(ctx, base);
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82f66280
	ctx.lr = 0x82FBB15C;
	sub_82F66280(ctx, base);
	// addi r29,r31,144
	ctx.r29.s64 = ctx.r31.s64 + 144;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f65e60
	ctx.lr = 0x82FBB16C;
	sub_82F65E60(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82f65fe0
	ctx.lr = 0x82FBB174;
	sub_82F65FE0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82f66280
	ctx.lr = 0x82FBB180;
	sub_82F66280(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f66090
	ctx.lr = 0x82FBB18C;
	sub_82F66090(ctx, base);
	// lfs f10,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// fmr f9,f10
	ctx.f9.f64 = ctx.f10.f64;
	// lfs f0,108(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,100(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f7,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// fmr f29,f7
	ctx.f29.f64 = ctx.f7.f64;
	// lfs f8,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f6,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f8,f8,f1
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// fmr f5,f7
	ctx.f5.f64 = ctx.f7.f64;
	// lfs f2,104(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f2.f64 = double(temp.f32);
	// fmr f31,f6
	ctx.f31.f64 = ctx.f6.f64;
	// lfs f11,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,112(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f11,f2
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f2.f64));
	// lfs f3,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f9,f9,f1
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// lfs f4,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// stfs f1,116(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f2,120(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f12,f7,f2,f12
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f2.f64 + ctx.f12.f64));
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f3,132(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmadds f10,f5,f13,f10
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f13.f64 + ctx.f10.f64));
	// stfs f4,104(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fmadds f11,f6,f0,f11
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f11.f64));
	// lfs f28,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f28.f64 = double(temp.f32);
	// fmadds f9,f29,f2,f9
	ctx.f9.f64 = double(float(ctx.f29.f64 * ctx.f2.f64 + ctx.f9.f64));
	// lfs f7,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f29,f28,f2,f8
	ctx.f29.f64 = double(float(ctx.f28.f64 * ctx.f2.f64 + ctx.f8.f64));
	// lfs f6,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f6.f64 = double(temp.f32);
	// fmr f8,f28
	ctx.f8.f64 = ctx.f28.f64;
	// lfs f30,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f30.f64 = double(temp.f32);
	// fmr f5,f7
	ctx.f5.f64 = ctx.f7.f64;
	// lfs f28,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f28.f64 = double(temp.f32);
	// fmr f27,f7
	ctx.f27.f64 = ctx.f7.f64;
	// lfs f25,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f25.f64 = double(temp.f32);
	// fmr f26,f6
	ctx.f26.f64 = ctx.f6.f64;
	// lfs f24,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f24.f64 = double(temp.f32);
	// fmuls f30,f30,f1
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f1.f64));
	// lfs f23,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f23.f64 = double(temp.f32);
	// fadds f12,f12,f7
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f7.f64));
	// lfs f22,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f22.f64 = double(temp.f32);
	// fadds f11,f11,f6
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f6.f64));
	// stfs f12,180(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// fmr f7,f6
	ctx.f7.f64 = ctx.f6.f64;
	// stfs f11,136(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmr f21,f6
	ctx.f21.f64 = ctx.f6.f64;
	// fadds f6,f25,f3
	ctx.f6.f64 = double(float(ctx.f25.f64 + ctx.f3.f64));
	// fmadds f31,f8,f13,f31
	ctx.f31.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f31.f64));
	// fadds f8,f10,f5
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f5.f64));
	// stfs f8,160(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fadds f10,f9,f27
	ctx.f10.f64 = double(float(ctx.f9.f64 + ctx.f27.f64));
	// fadds f9,f29,f26
	ctx.f9.f64 = double(float(ctx.f29.f64 + ctx.f26.f64));
	// fmadds f30,f28,f13,f30
	ctx.f30.f64 = double(float(ctx.f28.f64 * ctx.f13.f64 + ctx.f30.f64));
	// fmr f28,f27
	ctx.f28.f64 = ctx.f27.f64;
	// fsubs f29,f12,f10
	ctx.f29.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fadds f5,f24,f4
	ctx.f5.f64 = double(float(ctx.f24.f64 + ctx.f4.f64));
	// stfs f5,164(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fmuls f24,f23,f1
	ctx.f24.f64 = double(float(ctx.f23.f64 * ctx.f1.f64));
	// stfs f6,108(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmuls f29,f29,f29
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f29.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsubs f26,f11,f9
	ctx.f26.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// fadds f7,f31,f7
	ctx.f7.f64 = double(float(ctx.f31.f64 + ctx.f7.f64));
	// lfs f31,3080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f31.f64 = double(temp.f32);
	// fsubs f25,f8,f12
	ctx.f25.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// stfs f7,168(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fadds f30,f30,f28
	ctx.f30.f64 = double(float(ctx.f30.f64 + ctx.f28.f64));
	// stfs f30,140(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fsubs f6,f0,f6
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f6.f64));
	// lfs f27,2736(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2736);
	ctx.f27.f64 = double(temp.f32);
	// fsubs f0,f3,f1
	ctx.f0.f64 = double(float(ctx.f3.f64 - ctx.f1.f64));
	// fsubs f23,f4,f2
	ctx.f23.f64 = double(float(ctx.f4.f64 - ctx.f2.f64));
	// fsubs f5,f13,f5
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f5.f64));
	// fmadds f13,f22,f13,f24
	ctx.f13.f64 = double(float(ctx.f22.f64 * ctx.f13.f64 + ctx.f24.f64));
	// fmadds f26,f26,f26,f29
	ctx.f26.f64 = double(float(ctx.f26.f64 * ctx.f26.f64 + ctx.f29.f64));
	// fsubs f28,f7,f11
	ctx.f28.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// fmuls f25,f25,f25
	ctx.f25.f64 = double(float(ctx.f25.f64 * ctx.f25.f64));
	// fadds f29,f13,f21
	ctx.f29.f64 = double(float(ctx.f13.f64 + ctx.f21.f64));
	// stfs f29,144(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fsqrts f13,f26
	ctx.f13.f64 = double(float(sqrt(ctx.f26.f64)));
	// fmadds f28,f28,f28,f25
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f28.f64 + ctx.f25.f64));
	// fdivs f13,f31,f13
	ctx.f13.f64 = double(float(ctx.f31.f64 / ctx.f13.f64));
	// fsqrts f28,f28
	ctx.f28.f64 = double(float(sqrt(ctx.f28.f64)));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmuls f13,f6,f13
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fdivs f26,f31,f28
	ctx.f26.f64 = double(float(ctx.f31.f64 / ctx.f28.f64));
	// fadds f28,f13,f0
	ctx.f28.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fmuls f6,f23,f26
	ctx.f6.f64 = double(float(ctx.f23.f64 * ctx.f26.f64));
	// fmuls f5,f5,f26
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f26.f64));
	// fcmpu cr6,f28,f31
	ctx.cr6.compare(ctx.f28.f64, ctx.f31.f64);
	// ble cr6,0x82fbb338
	if (!ctx.cr6.gt) goto loc_82FBB338;
	// fadds f28,f28,f27
	ctx.f28.f64 = double(float(ctx.f28.f64 + ctx.f27.f64));
	// fdivs f28,f31,f28
	ctx.f28.f64 = double(float(ctx.f31.f64 / ctx.f28.f64));
	// fmuls f0,f28,f0
	ctx.f0.f64 = double(float(ctx.f28.f64 * ctx.f0.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmuls f13,f28,f13
	ctx.f13.f64 = double(float(ctx.f28.f64 * ctx.f13.f64));
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
loc_82FBB338:
	// fadds f28,f5,f6
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// fcmpu cr6,f28,f31
	ctx.cr6.compare(ctx.f28.f64, ctx.f31.f64);
	// ble cr6,0x82fbb354
	if (!ctx.cr6.gt) goto loc_82FBB354;
	// fadds f28,f28,f27
	ctx.f28.f64 = double(float(ctx.f28.f64 + ctx.f27.f64));
	// fdivs f31,f31,f28
	ctx.f31.f64 = double(float(ctx.f31.f64 / ctx.f28.f64));
	// fmuls f6,f31,f6
	ctx.f6.f64 = double(float(ctx.f31.f64 * ctx.f6.f64));
	// fmuls f5,f31,f5
	ctx.f5.f64 = double(float(ctx.f31.f64 * ctx.f5.f64));
loc_82FBB354:
	// fsubs f31,f30,f10
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f30.f64 - ctx.f10.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f28,f29,f9
	ctx.f28.f64 = double(float(ctx.f29.f64 - ctx.f9.f64));
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f27,f12,f10
	ctx.f27.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// fsubs f24,f7,f11
	ctx.f24.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// fsubs f26,f11,f9
	ctx.f26.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// fsubs f25,f8,f12
	ctx.f25.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// fsubs f22,f7,f29
	ctx.f22.f64 = double(float(ctx.f7.f64 - ctx.f29.f64));
	// fsubs f23,f8,f30
	ctx.f23.f64 = double(float(ctx.f8.f64 - ctx.f30.f64));
	// fmadds f21,f31,f6,f10
	ctx.f21.f64 = double(float(ctx.f31.f64 * ctx.f6.f64 + ctx.f10.f64));
	// stfs f21,172(r1)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fmadds f20,f28,f6,f9
	ctx.f20.f64 = double(float(ctx.f28.f64 * ctx.f6.f64 + ctx.f9.f64));
	// fmadds f10,f27,f0,f10
	ctx.f10.f64 = double(float(ctx.f27.f64 * ctx.f0.f64 + ctx.f10.f64));
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmadds f18,f24,f6,f11
	ctx.f18.f64 = double(float(ctx.f24.f64 * ctx.f6.f64 + ctx.f11.f64));
	// stfs f10,148(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fnmsubs f16,f24,f5,f7
	ctx.f16.f64 = double(float(-(ctx.f24.f64 * ctx.f5.f64 - ctx.f7.f64)));
	// fnmsubs f24,f28,f5,f29
	ctx.f24.f64 = double(float(-(ctx.f28.f64 * ctx.f5.f64 - ctx.f29.f64)));
	// fmadds f9,f26,f0,f9
	ctx.f9.f64 = double(float(ctx.f26.f64 * ctx.f0.f64 + ctx.f9.f64));
	// stfs f9,92(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmadds f19,f25,f6,f12
	ctx.f19.f64 = double(float(ctx.f25.f64 * ctx.f6.f64 + ctx.f12.f64));
	// stfs f9,176(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fnmsubs f17,f25,f5,f8
	ctx.f17.f64 = double(float(-(ctx.f25.f64 * ctx.f5.f64 - ctx.f8.f64)));
	// fnmsubs f25,f31,f5,f30
	ctx.f25.f64 = double(float(-(ctx.f31.f64 * ctx.f5.f64 - ctx.f30.f64)));
	// fmadds f10,f27,f0,f21
	ctx.f10.f64 = double(float(ctx.f27.f64 * ctx.f0.f64 + ctx.f21.f64));
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmadds f29,f26,f0,f20
	ctx.f29.f64 = double(float(ctx.f26.f64 * ctx.f0.f64 + ctx.f20.f64));
	// stfs f29,100(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fnmsubs f31,f27,f13,f12
	ctx.f31.f64 = double(float(-(ctx.f27.f64 * ctx.f13.f64 - ctx.f12.f64)));
	// stfs f10,156(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fnmsubs f30,f26,f13,f11
	ctx.f30.f64 = double(float(-(ctx.f26.f64 * ctx.f13.f64 - ctx.f11.f64)));
	// fnmsubs f26,f26,f13,f18
	ctx.f26.f64 = double(float(-(ctx.f26.f64 * ctx.f13.f64 - ctx.f18.f64)));
	// fnmsubs f15,f22,f13,f16
	ctx.f15.f64 = double(float(-(ctx.f22.f64 * ctx.f13.f64 - ctx.f16.f64)));
	// fnmsubs f27,f27,f13,f19
	ctx.f27.f64 = double(float(-(ctx.f27.f64 * ctx.f13.f64 - ctx.f19.f64)));
	// fnmsubs f21,f23,f13,f17
	ctx.f21.f64 = double(float(-(ctx.f23.f64 * ctx.f13.f64 - ctx.f17.f64)));
	// fmadds f14,f23,f0,f25
	ctx.f14.f64 = double(float(ctx.f23.f64 * ctx.f0.f64 + ctx.f25.f64));
	// fmadds f0,f22,f0,f24
	ctx.f0.f64 = double(float(ctx.f22.f64 * ctx.f0.f64 + ctx.f24.f64));
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// bl 0x82f665d8
	ctx.lr = 0x82FBB3FC;
	sub_82F665D8(ctx, base);
	// lfs f0,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f30,92(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f27,96(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f26,100(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f4,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82f665d8
	ctx.lr = 0x82FBB438;
	sub_82F665D8(ctx, base);
	// lfs f0,180(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r3,r31,240
	ctx.r3.s64 = ctx.r31.s64 + 240;
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f19,96(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f18,100(r1)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f4,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82f665d8
	ctx.lr = 0x82FBB474;
	sub_82F665D8(ctx, base);
	// lfs f0,172(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// lfs f28,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f28.f64 = double(temp.f32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r3,r31,272
	ctx.r3.s64 = ctx.r31.s64 + 272;
	// stfs f20,84(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f28,88(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f29,92(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f14,96(r1)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f20,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f20.f64 = double(temp.f32);
	// stfs f20,100(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f31,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f30.f64 = double(temp.f32);
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// lfs f2,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f2.f64 = double(temp.f32);
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// lfs f1,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82f665d8
	ctx.lr = 0x82FBB4BC;
	sub_82F665D8(ctx, base);
	// stfs f28,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f29,84(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stfs f27,88(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r3,r31,304
	ctx.r3.s64 = ctx.r31.s64 + 304;
	// stfs f26,92(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// stfs f21,96(r1)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// stfs f15,100(r1)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f29,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f28.f64 = double(temp.f32);
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// bl 0x82f665d8
	ctx.lr = 0x82FBB4F8;
	sub_82F665D8(ctx, base);
	// stfs f26,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f27,80(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stfs f19,88(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r3,r31,336
	ctx.r3.s64 = ctx.r31.s64 + 336;
	// stfs f18,92(r1)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// stfs f17,96(r1)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// stfs f16,100(r1)
	temp.f32 = float(ctx.f16.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// lfs f26,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f26.f64 = double(temp.f32);
	// fmr f3,f26
	ctx.f3.f64 = ctx.f26.f64;
	// bl 0x82f665d8
	ctx.lr = 0x82FBB530;
	sub_82F665D8(ctx, base);
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f12,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f13,f23,f0,f13
	ctx.f13.f64 = double(float(ctx.f23.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f0,f22,f0,f12
	ctx.f0.f64 = double(float(ctx.f22.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f25,80(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f24,84(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r31,368
	ctx.r3.s64 = ctx.r31.s64 + 368;
	// stfs f14,88(r1)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// stfs f20,92(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f27,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f27.f64 = double(temp.f32);
	// lfs f1,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// fmr f4,f27
	ctx.f4.f64 = ctx.f27.f64;
	// bl 0x82f665d8
	ctx.lr = 0x82FBB57C;
	sub_82F665D8(ctx, base);
	// lfs f0,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// lfs f25,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f25.f64 = double(temp.f32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f24,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f24.f64 = double(temp.f32);
	// fnmsubs f13,f23,f0,f25
	ctx.f13.f64 = double(float(-(ctx.f23.f64 * ctx.f0.f64 - ctx.f25.f64)));
	// fnmsubs f0,f22,f0,f24
	ctx.f0.f64 = double(float(-(ctx.f22.f64 * ctx.f0.f64 - ctx.f24.f64)));
	// stfs f14,80(r1)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f20,84(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r31,400
	ctx.r3.s64 = ctx.r31.s64 + 400;
	// stfs f21,88(r1)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmr f4,f27
	ctx.f4.f64 = ctx.f27.f64;
	// stfs f15,92(r1)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82f665d8
	ctx.lr = 0x82FBB5C4;
	sub_82F665D8(ctx, base);
	// stfs f21,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f15,84(r1)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stfs f17,88(r1)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r3,r31,432
	ctx.r3.s64 = ctx.r31.s64 + 432;
	// stfs f16,92(r1)
	temp.f32 = float(ctx.f16.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f25,96(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmr f4,f27
	ctx.f4.f64 = ctx.f27.f64;
	// stfs f24,100(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmr f3,f26
	ctx.f3.f64 = ctx.f26.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82f665d8
	ctx.lr = 0x82FBB5F8;
	sub_82F665D8(ctx, base);
	// stfs f30,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// stfs f28,124(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// stfs f29,128(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// stfs f31,132(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82ca751c
	ctx.lr = 0x82FBB614;
	sub_82CA751C(ctx, base);
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82FBB618"))) PPC_WEAK_FUNC(sub_82FBB618);
PPC_FUNC_IMPL(__imp__sub_82FBB618) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lfs f13,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f12,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f13,f11,f12,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f13,0(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f13,84(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,88(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,80(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmadds f0,f13,f12,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,128(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x82fbb670
	if (ctx.cr6.gt) goto loc_82FBB670;
	// li r8,0
	ctx.r8.s64 = 0;
loc_82FBB670:
	// lfs f12,132(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x82fbb684
	if (ctx.cr6.gt) goto loc_82FBB684;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82FBB684:
	// lfs f12,120(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x82fbb698
	if (ctx.cr6.lt) goto loc_82FBB698;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82FBB698:
	// lfs f12,124(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	ctx.f12.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x82fbb6ac
	if (ctx.cr6.lt) goto loc_82FBB6AC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82FBB6AC:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// addi r10,r7,26860
	ctx.r10.s64 = ctx.r7.s64 + 26860;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// rotlwi r11,r11,5
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 5);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,176
	ctx.r10.s64 = ctx.r11.s64 + 176;
	// lfs f12,176(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f11,180(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f12,f11,f0,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fadds f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f12,196(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,200(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,192(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f13,148(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,152(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,144(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f10,f10,f11
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fmadds f13,f13,f0,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f13,0(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f13,164(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,168(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,160(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fmadds f0,f13,f0,f11
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBB754"))) PPC_WEAK_FUNC(sub_82FBB754);
PPC_FUNC_IMPL(__imp__sub_82FBB754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBB758"))) PPC_WEAK_FUNC(sub_82FBB758);
PPC_FUNC_IMPL(__imp__sub_82FBB758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FBB760;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82fbb818
	if (!ctx.cr6.gt) goto loc_82FBB818;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82FBB77C:
	// lwz r11,464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// add r6,r30,r11
	ctx.r6.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lfsx f13,r30,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82fbb804
	if (!ctx.cr6.lt) goto loc_82FBB804;
	// lfs f12,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x82fbb804
	if (!ctx.cr6.lt) goto loc_82FBB804;
	// lfs f11,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x82fbb618
	ctx.lr = 0x82FBB7D0;
	sub_82FBB618(ctx, base);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82fbb618
	ctx.lr = 0x82FBB7DC;
	sub_82FBB618(ctx, base);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82fbb618
	ctx.lr = 0x82FBB7E8;
	sub_82FBB618(ctx, base);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r3,r6,16
	ctx.r3.s64 = ctx.r6.s64 + 16;
	// lfs f4,12(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82f665d8
	ctx.lr = 0x82FBB804;
	sub_82F665D8(ctx, base);
loc_82FBB804:
	// lwz r11,468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,48
	ctx.r30.s64 = ctx.r30.s64 + 48;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fbb77c
	if (ctx.cr6.lt) goto loc_82FBB77C;
loc_82FBB818:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82FBB820"))) PPC_WEAK_FUNC(sub_82FBB820);
PPC_FUNC_IMPL(__imp__sub_82FBB820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FBB828;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r31,20(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x82f65fe0
	ctx.lr = 0x82FBB848;
	sub_82F65FE0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82fbac50
	ctx.lr = 0x82FBB860;
	sub_82FBAC50(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r29,r30,4
	ctx.r29.s64 = ctx.r30.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,36
	ctx.r5.s64 = 36;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FBB888;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,26880
	ctx.r4.s64 = ctx.r11.s64 + 26880;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,54
	ctx.r5.s64 = 54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FBB8B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r30,r30,160
	ctx.r30.s64 = ctx.r30.s64 + 160;
loc_82FBB8B8:
	// lhz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82fbb924
	if (ctx.cr6.eq) goto loc_82FBB924;
	// lhz r11,10(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 10);
	// lhz r10,2(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 2);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82fbb924
	if (ctx.cr6.eq) goto loc_82FBB924;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f65e60
	ctx.lr = 0x82FBB8E4;
	sub_82F65E60(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FBB8FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,2
	ctx.r8.s64 = 2;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,54
	ctx.r6.s64 = 54;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FBB924;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FBB924:
	// addi r28,r28,6
	ctx.r28.s64 = ctx.r28.s64 + 6;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// cmplwi cr6,r28,54
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 54, ctx.xer);
	// blt cr6,0x82fbb8b8
	if (ctx.cr6.lt) goto loc_82FBB8B8;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82FBB940"))) PPC_WEAK_FUNC(sub_82FBB940);
PPC_FUNC_IMPL(__imp__sub_82FBB940) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x82fbb618
	ctx.lr = 0x82FBB99C;
	sub_82FBB618(ctx, base);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82fbb618
	ctx.lr = 0x82FBB9A8;
	sub_82FBB618(ctx, base);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82fbb618
	ctx.lr = 0x82FBB9B4;
	sub_82FBB618(ctx, base);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// bl 0x82fbb618
	ctx.lr = 0x82FBB9C0;
	sub_82FBB618(ctx, base);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fmr f7,f0
	ctx.f7.f64 = ctx.f0.f64;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fmr f8,f13
	ctx.f8.f64 = ctx.f13.f64;
	// fmr f9,f0
	ctx.f9.f64 = ctx.f0.f64;
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x82fbb9e8
	if (!ctx.cr6.lt) goto loc_82FBB9E8;
	// fmr f7,f12
	ctx.f7.f64 = ctx.f12.f64;
loc_82FBB9E8:
	// lfs f11,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bge cr6,0x82fbb9f8
	if (!ctx.cr6.lt) goto loc_82FBB9F8;
	// fmr f8,f11
	ctx.f8.f64 = ctx.f11.f64;
loc_82FBB9F8:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x82fbba04
	if (!ctx.cr6.gt) goto loc_82FBBA04;
	// fmr f9,f12
	ctx.f9.f64 = ctx.f12.f64;
loc_82FBBA04:
	// fcmpu cr6,f11,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// ble cr6,0x82fbba10
	if (!ctx.cr6.gt) goto loc_82FBBA10;
	// fmr f10,f11
	ctx.f10.f64 = ctx.f11.f64;
loc_82FBBA10:
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f7
	ctx.cr6.compare(ctx.f13.f64, ctx.f7.f64);
	// bge cr6,0x82fbba20
	if (!ctx.cr6.lt) goto loc_82FBBA20;
	// fmr f7,f13
	ctx.f7.f64 = ctx.f13.f64;
loc_82FBBA20:
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f8
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// bge cr6,0x82fbba30
	if (!ctx.cr6.lt) goto loc_82FBBA30;
	// fmr f8,f0
	ctx.f8.f64 = ctx.f0.f64;
loc_82FBBA30:
	// fcmpu cr6,f13,f9
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f9.f64);
	// ble cr6,0x82fbba3c
	if (!ctx.cr6.gt) goto loc_82FBBA3C;
	// fmr f9,f13
	ctx.f9.f64 = ctx.f13.f64;
loc_82FBBA3C:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x82fbba48
	if (!ctx.cr6.gt) goto loc_82FBBA48;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
loc_82FBBA48:
	// lfs f13,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f7
	ctx.cr6.compare(ctx.f13.f64, ctx.f7.f64);
	// bge cr6,0x82fbba58
	if (!ctx.cr6.lt) goto loc_82FBBA58;
	// fmr f7,f13
	ctx.f7.f64 = ctx.f13.f64;
loc_82FBBA58:
	// lfs f0,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f8
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// bge cr6,0x82fbba68
	if (!ctx.cr6.lt) goto loc_82FBBA68;
	// fmr f8,f0
	ctx.f8.f64 = ctx.f0.f64;
loc_82FBBA68:
	// fcmpu cr6,f13,f9
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f9.f64);
	// ble cr6,0x82fbba74
	if (!ctx.cr6.gt) goto loc_82FBBA74;
	// fmr f9,f13
	ctx.f9.f64 = ctx.f13.f64;
loc_82FBBA74:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x82fbba80
	if (!ctx.cr6.gt) goto loc_82FBBA80;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
loc_82FBBA80:
	// stfs f7,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// stfs f8,4(r6)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// stfs f9,8(r6)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// stfs f10,12(r6)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
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

__attribute__((alias("__imp__sub_82FBBAA8"))) PPC_WEAK_FUNC(sub_82FBBAA8);
PPC_FUNC_IMPL(__imp__sub_82FBBAA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FBBAB0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r28,4(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// clrlwi r10,r11,2
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// bne cr6,0x82fbbb18
	if (!ctx.cr6.eq) goto loc_82FBBB18;
	// rlwinm. r9,r11,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82fbbaf4
	if (ctx.cr0.eq) goto loc_82FBBAF4;
	// rlwinm. r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82fbbaec
	if (ctx.cr0.eq) goto loc_82FBBAEC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82fbbb3c
	if (!ctx.cr6.eq) goto loc_82FBBB3C;
loc_82FBBAEC:
	// clrlwi. r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82fbbb3c
	if (!ctx.cr0.eq) goto loc_82FBBB3C;
loc_82FBBAF4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,0,0,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0000000;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbbb0c
	if (ctx.cr6.eq) goto loc_82FBBB0C;
	// bl 0x82ef6f38
	ctx.lr = 0x82FBBB0C;
	sub_82EF6F38(ctx, base);
loc_82FBBB0C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82fbbb3c
	goto loc_82FBBB3C;
loc_82FBBB18:
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82fbbb2c
	if (ctx.cr6.gt) goto loc_82FBBB2C;
	// rlwinm r11,r10,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82fbbb3c
	if (ctx.cr6.gt) goto loc_82FBBB3C;
loc_82FBBB2C:
	// rlwinm r11,r31,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82f42c08
	ctx.lr = 0x82FBBB3C;
	sub_82F42C08(ctx, base);
loc_82FBBB3C:
	// cmplw cr6,r28,r31
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82fbbb68
	if (!ctx.cr6.lt) goto loc_82FBBB68;
	// mulli r29,r28,48
	ctx.r29.s64 = ctx.r28.s64 * 48;
	// subf r31,r28,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r28.s64;
loc_82FBBB4C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add. r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82fbbb5c
	if (ctx.cr0.eq) goto loc_82FBBB5C;
	// bl 0x82fbb060
	ctx.lr = 0x82FBBB5C;
	sub_82FBB060(ctx, base);
loc_82FBBB5C:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// bne 0x82fbbb4c
	if (!ctx.cr0.eq) goto loc_82FBBB4C;
loc_82FBBB68:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82FBBB70"))) PPC_WEAK_FUNC(sub_82FBBB70);
PPC_FUNC_IMPL(__imp__sub_82FBBB70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82FBBB78;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82fbbc88
	if (!ctx.cr6.gt) goto loc_82FBBC88;
loc_82FBBB98:
	// lwz r11,40(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// rlwinm r9,r28,28,4,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 28) & 0xFFFFFFC;
	// clrlwi r10,r28,26
	ctx.r10.u64 = ctx.r28.u32 & 0x3F;
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82fbbc14
	if (ctx.cr6.lt) goto loc_82FBBC14;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mulli r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 * 48;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82fbbbd8
	if (!ctx.cr0.eq) goto loc_82FBBBD8;
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fbbc14
	if (ctx.cr0.eq) goto loc_82FBBC14;
loc_82FBBBD8:
	// lwz r11,468(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 468);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fbbbf0
	if (!ctx.cr6.eq) goto loc_82FBBBF0;
	// addi r3,r30,464
	ctx.r3.s64 = ctx.r30.s64 + 464;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82fbbaa8
	ctx.lr = 0x82FBBBF0;
	sub_82FBBAA8(ctx, base);
loc_82FBBBF0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,464(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 464);
	// mulli r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 * 48;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r4,12
	ctx.r7.s64 = ctx.r4.s64 + 12;
	// addi r6,r4,8
	ctx.r6.s64 = ctx.r4.s64 + 8;
	// addi r5,r4,4
	ctx.r5.s64 = ctx.r4.s64 + 4;
	// bl 0x82fbfbd8
	ctx.lr = 0x82FBBC14;
	sub_82FBFBD8(ctx, base);
loc_82FBBC14:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82fbbc78
	if (ctx.cr6.lt) goto loc_82FBBC78;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mulli r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 * 48;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82fbbc3c
	if (!ctx.cr0.eq) goto loc_82FBBC3C;
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fbbc78
	if (ctx.cr0.eq) goto loc_82FBBC78;
loc_82FBBC3C:
	// lwz r11,468(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 468);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fbbc54
	if (!ctx.cr6.eq) goto loc_82FBBC54;
	// addi r3,r30,464
	ctx.r3.s64 = ctx.r30.s64 + 464;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82fbbaa8
	ctx.lr = 0x82FBBC54;
	sub_82FBBAA8(ctx, base);
loc_82FBBC54:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,464(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 464);
	// mulli r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 * 48;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r4,12
	ctx.r7.s64 = ctx.r4.s64 + 12;
	// addi r6,r4,8
	ctx.r6.s64 = ctx.r4.s64 + 8;
	// addi r5,r4,4
	ctx.r5.s64 = ctx.r4.s64 + 4;
	// bl 0x82fbfbd8
	ctx.lr = 0x82FBBC78;
	sub_82FBFBD8(ctx, base);
loc_82FBBC78:
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fbbb98
	if (ctx.cr6.lt) goto loc_82FBBB98;
loc_82FBBC88:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82FBBC90"))) PPC_WEAK_FUNC(sub_82FBBC90);
PPC_FUNC_IMPL(__imp__sub_82FBBC90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82FBBC98;
	sub_82CA2BD8(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f6,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f6.f64 = double(temp.f32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lfs f5,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f5.f64 = double(temp.f32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// lfs f0,3080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fdivs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// stw r8,448(r28)
	PPC_STORE_U32(ctx.r28.u32 + 448, ctx.r8.u32);
	// lfs f9,108(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,128(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// addi r29,r1,152
	ctx.r29.s64 = ctx.r1.s64 + 152;
	// lfs f13,132(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// addi r27,r28,4
	ctx.r27.s64 = ctx.r28.s64 + 4;
	// lfs f12,120(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// li r26,9
	ctx.r26.s64 = 9;
	// lfs f11,100(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,104(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,112(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,124(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,156(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f7,172(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f9,184(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f7,188(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f7,196(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f7,212(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f7,228(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f9,232(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f9,280(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// lfs f9,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// lfs f31,3084(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f31.f64 = double(temp.f32);
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f12,160(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f11,144(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f10,148(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f10,164(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f10,180(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f11,192(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f12,200(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f13,204(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f12,208(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f0,216(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f13,220(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stfs f0,224(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f13,236(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// stfs f11,240(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stfs f13,244(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stfs f12,248(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stfs f8,252(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// stfs f12,256(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// stfs f13,260(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// stfs f0,264(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// stfs f8,268(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// stfs f0,272(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// stfs f13,276(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// stfs f8,284(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 284, temp.u32);
loc_82FBBD98:
	// lfs f11,4(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,0(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// lfs f12,8(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,12(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// blt cr6,0x82fbbddc
	if (ctx.cr6.lt) goto loc_82FBBDDC;
	// lfs f13,-4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f8,f13
	ctx.cr6.compare(ctx.f8.f64, ctx.f13.f64);
	// blt cr6,0x82fbbddc
	if (ctx.cr6.lt) goto loc_82FBBDDC;
	// lfs f13,-8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x82fbbddc
	if (ctx.cr6.lt) goto loc_82FBBDDC;
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82fbbde0
	if (!ctx.cr6.lt) goto loc_82FBBDE0;
loc_82FBBDDC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82FBBDE0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82fbbdf0
	if (!ctx.cr0.eq) goto loc_82FBBDF0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82fbbe50
	goto loc_82FBBE50;
loc_82FBBDF0:
	// lfs f13,-8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82fbbe04
	if (!ctx.cr6.gt) goto loc_82FBBE04;
	// fmr f5,f13
	ctx.f5.f64 = ctx.f13.f64;
	// b 0x82fbbe08
	goto loc_82FBBE08;
loc_82FBBE04:
	// fmr f5,f0
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = ctx.f0.f64;
loc_82FBBE08:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82fbbe1c
	if (!ctx.cr6.gt) goto loc_82FBBE1C;
	// fmr f6,f12
	ctx.f6.f64 = ctx.f12.f64;
	// b 0x82fbbe20
	goto loc_82FBBE20;
loc_82FBBE1C:
	// fmr f6,f0
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = ctx.f0.f64;
loc_82FBBE20:
	// lfs f0,-4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x82fbbe34
	if (!ctx.cr6.gt) goto loc_82FBBE34;
	// fmr f7,f0
	ctx.f7.f64 = ctx.f0.f64;
	// b 0x82fbbe38
	goto loc_82FBBE38;
loc_82FBBE34:
	// fmr f7,f11
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = ctx.f11.f64;
loc_82FBBE38:
	// fcmpu cr6,f10,f8
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f8.f64);
	// ble cr6,0x82fbbe48
	if (!ctx.cr6.gt) goto loc_82FBBE48;
	// fmr f9,f8
	ctx.f9.f64 = ctx.f8.f64;
	// b 0x82fbbe4c
	goto loc_82FBBE4C;
loc_82FBBE48:
	// fmr f9,f10
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = ctx.f10.f64;
loc_82FBBE4C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82FBBE50:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82fbbe6c
	if (!ctx.cr0.eq) goto loc_82FBBE6C;
	// stfs f31,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// stfs f31,4(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// stfs f31,-8(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + -8, temp.u32);
	// stfs f31,-4(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + -4, temp.u32);
	// b 0x82fbbe7c
	goto loc_82FBBE7C;
loc_82FBBE6C:
	// stfs f6,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// stfs f9,4(r29)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// stfs f5,-8(r29)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r29.u32 + -8, temp.u32);
	// stfs f7,-4(r29)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r29.u32 + -4, temp.u32);
loc_82FBBE7C:
	// lfs f0,-8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82fbbea0
	if (!ctx.cr6.lt) goto loc_82FBBEA0;
	// lfs f12,-4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f11,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// blt cr6,0x82fbbea4
	if (ctx.cr6.lt) goto loc_82FBBEA4;
loc_82FBBEA0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82FBBEA4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82fbbf30
	if (!ctx.cr0.eq) goto loc_82FBBF30;
	// lfs f12,-4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// lfs f11,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// addi r6,r27,2
	ctx.r6.s64 = ctx.r27.s64 + 2;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// li r30,4
	ctx.r30.s64 = 4;
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f12,124(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f11,132(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f11,140(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
loc_82FBBEE0:
	// addi r4,r5,-4
	ctx.r4.s64 = ctx.r5.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fbb618
	ctx.lr = 0x82FBBEEC;
	sub_82FBB618(ctx, base);
	// lfs f0,-4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f1,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// fctiwz f0,f13
	ctx.f0.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// lhz r11,86(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// sth r11,-2(r6)
	PPC_STORE_U16(ctx.r6.u32 + -2, ctx.r11.u16);
	// lhz r10,86(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sth r10,0(r6)
	PPC_STORE_U16(ctx.r6.u32 + 0, ctx.r10.u16);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bne 0x82fbbee0
	if (!ctx.cr0.eq) goto loc_82FBBEE0;
	// b 0x82fbbf4c
	goto loc_82FBBF4C;
loc_82FBBF30:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82FBBF40:
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x82fbbf40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82FBBF40;
loc_82FBBF4C:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// bne 0x82fbbd98
	if (!ctx.cr0.eq) goto loc_82FBBD98;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f65e60
	ctx.lr = 0x82FBBF68;
	sub_82F65E60(ctx, base);
	// lfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// fmr f6,f31
	ctx.f6.f64 = ctx.f31.f64;
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f4,f1
	ctx.f4.f64 = ctx.f1.f64;
	// bl 0x82f65e78
	ctx.lr = 0x82FBBF88;
	sub_82F65E78(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f66008
	ctx.lr = 0x82FBBF94;
	sub_82F66008(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82f65e60
	ctx.lr = 0x82FBBFA0;
	sub_82F65E60(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f66280
	ctx.lr = 0x82FBBFAC;
	sub_82F66280(ctx, base);
	// addi r29,r31,176
	ctx.r29.s64 = ctx.r31.s64 + 176;
	// addi r30,r28,160
	ctx.r30.s64 = ctx.r28.s64 + 160;
	// li r31,9
	ctx.r31.s64 = 9;
loc_82FBBFB8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82f65e60
	ctx.lr = 0x82FBBFC4;
	sub_82F65E60(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82f66090
	ctx.lr = 0x82FBBFD0;
	sub_82F66090(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82f65e60
	ctx.lr = 0x82FBBFDC;
	sub_82F65E60(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82f66280
	ctx.lr = 0x82FBBFE8;
	sub_82F66280(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f65e60
	ctx.lr = 0x82FBBFF4;
	sub_82F65E60(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f66008
	ctx.lr = 0x82FBC000;
	sub_82F66008(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// bne 0x82fbbfb8
	if (!ctx.cr0.eq) goto loc_82FBBFB8;
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_82FBC01C"))) PPC_WEAK_FUNC(sub_82FBC01C);
PPC_FUNC_IMPL(__imp__sub_82FBC01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBC020"))) PPC_WEAK_FUNC(sub_82FBC020);
PPC_FUNC_IMPL(__imp__sub_82FBC020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82FBC028;
	sub_82CA2BD4(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// bl 0x82ef6fe0
	ctx.lr = 0x82FBC04C;
	sub_82EF6FE0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r27,r31,32
	ctx.r27.s64 = ctx.r31.s64 + 32;
	// addi r11,r11,26988
	ctx.r11.s64 = ctx.r11.s64 + 26988;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82f65fe0
	ctx.lr = 0x82FBC064;
	sub_82F65FE0(ctx, base);
	// addi r26,r31,64
	ctx.r26.s64 = ctx.r31.s64 + 64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82f65fe0
	ctx.lr = 0x82FBC070;
	sub_82F65FE0(ctx, base);
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x82f65fe0
	ctx.lr = 0x82FBC078;
	sub_82F65FE0(ctx, base);
	// addi r25,r31,176
	ctx.r25.s64 = ctx.r31.s64 + 176;
	// li r28,8
	ctx.r28.s64 = 8;
loc_82FBC080:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82f65fe0
	ctx.lr = 0x82FBC088;
	sub_82F65FE0(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r25,r25,32
	ctx.r25.s64 = ctx.r25.s64 + 32;
	// bge 0x82fbc080
	if (!ctx.cr0.lt) goto loc_82FBC080;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// stw r28,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r28.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r28,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r28.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r28.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x82f65e60
	ctx.lr = 0x82FBC0D4;
	sub_82F65E60(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82f65e60
	ctx.lr = 0x82FBC0E0;
	sub_82F65E60(ctx, base);
	// stfs f31,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// lfs f0,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,100(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stfs f12,104(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// stfs f13,108(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// stfs f0,112(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stb r28,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r28.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_82FBC118"))) PPC_WEAK_FUNC(sub_82FBC118);
PPC_FUNC_IMPL(__imp__sub_82FBC118) {
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
	// addi r3,r31,464
	ctx.r3.s64 = ctx.r31.s64 + 464;
	// bl 0x82fbbaa8
	ctx.lr = 0x82FBC138;
	sub_82FBBAA8(ctx, base);
	// lwz r3,464(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbc148
	if (ctx.cr6.eq) goto loc_82FBC148;
	// bl 0x82ef6f38
	ctx.lr = 0x82FBC148;
	sub_82EF6F38(ctx, base);
loc_82FBC148:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef70b0
	ctx.lr = 0x82FBC150;
	sub_82EF70B0(ctx, base);
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

__attribute__((alias("__imp__sub_82FBC164"))) PPC_WEAK_FUNC(sub_82FBC164);
PPC_FUNC_IMPL(__imp__sub_82FBC164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBC168"))) PPC_WEAK_FUNC(sub_82FBC168);
PPC_FUNC_IMPL(__imp__sub_82FBC168) {
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
	// bl 0x82fbc118
	ctx.lr = 0x82FBC188;
	sub_82FBC118(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fbc198
	if (ctx.cr0.eq) goto loc_82FBC198;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82FBC198;
	sub_82EF6F38(ctx, base);
loc_82FBC198:
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

__attribute__((alias("__imp__sub_82FBC1B4"))) PPC_WEAK_FUNC(sub_82FBC1B4);
PPC_FUNC_IMPL(__imp__sub_82FBC1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBC1B8"))) PPC_WEAK_FUNC(sub_82FBC1B8);
PPC_FUNC_IMPL(__imp__sub_82FBC1B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FBC1C0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,2
	ctx.r29.s64 = 2;
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// addi r28,r30,16
	ctx.r28.s64 = ctx.r30.s64 + 16;
loc_82FBC1D4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f65fe0
	ctx.lr = 0x82FBC1DC;
	sub_82F65FE0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,64
	ctx.r28.s64 = ctx.r28.s64 + 64;
	// bge 0x82fbc1d4
	if (!ctx.cr0.lt) goto loc_82FBC1D4;
	// addi r3,r31,212
	ctx.r3.s64 = ctx.r31.s64 + 212;
	// bl 0x82fc04e0
	ctx.lr = 0x82FBC1F0;
	sub_82FC04E0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r10,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r10.u32);
	// stw r10,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r10,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r10.u32);
loc_82FBC218:
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
	// bne 0x82fbc218
	if (!ctx.cr0.eq) goto loc_82FBC218;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82FBC234"))) PPC_WEAK_FUNC(sub_82FBC234);
PPC_FUNC_IMPL(__imp__sub_82FBC234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBC238"))) PPC_WEAK_FUNC(sub_82FBC238);
PPC_FUNC_IMPL(__imp__sub_82FBC238) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBC24C"))) PPC_WEAK_FUNC(sub_82FBC24C);
PPC_FUNC_IMPL(__imp__sub_82FBC24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBC250"))) PPC_WEAK_FUNC(sub_82FBC250);
PPC_FUNC_IMPL(__imp__sub_82FBC250) {
	PPC_FUNC_PROLOGUE();
	// stw r4,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBC258"))) PPC_WEAK_FUNC(sub_82FBC258);
PPC_FUNC_IMPL(__imp__sub_82FBC258) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// fabs f11,f13
	ctx.f11.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f0,376(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 376);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,3280(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3280);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// ble cr6,0x82fbc290
	if (!ctx.cr6.gt) goto loc_82FBC290;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82fbc288
	if (!ctx.cr6.gt) goto loc_82FBC288;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x82fbc28c
	goto loc_82FBC28C;
loc_82FBC288:
	// fmr f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f12.f64;
loc_82FBC28C:
	// stfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
loc_82FBC290:
	// lfs f13,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fabs f11,f13
	ctx.f11.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82fbc2ac
	if (ctx.cr6.gt) goto loc_82FBC2AC;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_82FBC2AC:
	// stfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBC2B4"))) PPC_WEAK_FUNC(sub_82FBC2B4);
PPC_FUNC_IMPL(__imp__sub_82FBC2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBC2B8"))) PPC_WEAK_FUNC(sub_82FBC2B8);
PPC_FUNC_IMPL(__imp__sub_82FBC2B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fabs f10,f0
	ctx.f10.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fabs f9,f11
	ctx.f9.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,26348(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26348);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,3080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f8,f13,f12
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fsubs f7,f9,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// fsel f13,f8,f13,f12
	ctx.f13.f64 = ctx.f8.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// fsel f12,f7,f9,f10
	ctx.f12.f64 = ctx.f7.f64 >= 0.0 ? ctx.f9.f64 : ctx.f10.f64;
	// fsubs f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fsel f13,f10,f12,f13
	ctx.f13.f64 = ctx.f10.f64 >= 0.0 ? ctx.f12.f64 : ctx.f13.f64;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82fbc310
	if (!ctx.cr6.lt) goto loc_82FBC310;
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// b 0x82fbc348
	goto loc_82FBC348;
loc_82FBC310:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lfs f0,3140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3140);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,3048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3048);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f10,f1,f0,f12
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f12.f64));
	// lfs f0,3184(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3184);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,27004(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 27004);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// fsel f0,f9,f0,f10
	ctx.f0.f64 = ctx.f9.f64 >= 0.0 ? ctx.f0.f64 : ctx.f10.f64;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fdivs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
loc_82FBC348:
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBC358"))) PPC_WEAK_FUNC(sub_82FBC358);
PPC_FUNC_IMPL(__imp__sub_82FBC358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FBC360;
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
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fbc388
	if (!ctx.cr6.eq) goto loc_82FBC388;
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x82ef6ef8
	ctx.lr = 0x82FBC384;
	sub_82EF6EF8(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
loc_82FBC388:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82FBC38C:
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lfsx f0,r11,r30
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r11,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r11,76
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 76, ctx.xer);
	// blt cr6,0x82fbc38c
	if (ctx.cr6.lt) goto loc_82FBC38C;
	// stw r29,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82FBC3B0"))) PPC_WEAK_FUNC(sub_82FBC3B0);
PPC_FUNC_IMPL(__imp__sub_82FBC3B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fbc3c8
	if (!ctx.cr6.eq) goto loc_82FBC3C8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82FBC3C8:
	// addi r9,r11,76
	ctx.r9.s64 = ctx.r11.s64 + 76;
loc_82FBC3CC:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82fbc3ec
	if (!ctx.cr0.eq) goto loc_82FBC3EC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82fbc3cc
	if (!ctx.cr6.eq) goto loc_82FBC3CC;
loc_82FBC3EC:
	// cntlzw r11,r8
	ctx.r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBC3F8"))) PPC_WEAK_FUNC(sub_82FBC3F8);
PPC_FUNC_IMPL(__imp__sub_82FBC3F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82FBC400;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,72
	ctx.r10.s64 = 72;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// subf r27,r31,r28
	ctx.r27.s64 = ctx.r28.s64 - ctx.r31.s64;
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
loc_82FBC420:
	// lhzx r9,r27,r11
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r27.u32 + ctx.r11.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bne 0x82fbc420
	if (!ctx.cr0.eq) goto loc_82FBC420;
	// addi r30,r31,160
	ctx.r30.s64 = ctx.r31.s64 + 160;
	// li r29,9
	ctx.r29.s64 = 9;
loc_82FBC43C:
	// add r4,r30,r27
	ctx.r4.u64 = ctx.r30.u64 + ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f65e60
	ctx.lr = 0x82FBC448;
	sub_82F65E60(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// bne 0x82fbc43c
	if (!ctx.cr0.eq) goto loc_82FBC43C;
	// lwz r11,448(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 448);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82FBC468"))) PPC_WEAK_FUNC(sub_82FBC468);
PPC_FUNC_IMPL(__imp__sub_82FBC468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82FBC470;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r31,212
	ctx.r30.s64 = ctx.r31.s64 + 212;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82efc418
	ctx.lr = 0x82FBC48C;
	sub_82EFC418(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82fbc4a0
	if (!ctx.cr0.eq) goto loc_82FBC4A0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82FBC4A0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r28,436(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 436);
	// bl 0x82efc418
	ctx.lr = 0x82FBC4AC;
	sub_82EFC418(ctx, base);
	// mulli r11,r28,3
	ctx.r11.s64 = ctx.r28.s64 * 3;
	// add r4,r11,r3
	ctx.r4.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fc09b0
	ctx.lr = 0x82FBC4BC;
	sub_82FC09B0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82fbc51c
	if (ctx.cr6.eq) goto loc_82FBC51C;
loc_82FBC4C8:
	// lwz r11,448(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 448);
	// rlwinm r9,r31,24,8,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 24) & 0xFFFFFC;
	// clrlwi r10,r31,22
	ctx.r10.u64 = ctx.r31.u32 & 0x3FF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r4,r9,16
	ctx.r4.u64 = ctx.r9.u32 & 0xFFFF;
	// bl 0x82fc0a48
	ctx.lr = 0x82FBC4F0;
	sub_82FC0A48(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x82fc0a48
	ctx.lr = 0x82FBC500;
	sub_82FC0A48(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x82fc0a48
	ctx.lr = 0x82FBC510;
	sub_82FC0A48(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82fbc4c8
	if (ctx.cr6.lt) goto loc_82FBC4C8;
loc_82FBC51C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82FBC524"))) PPC_WEAK_FUNC(sub_82FBC524);
PPC_FUNC_IMPL(__imp__sub_82FBC524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBC528"))) PPC_WEAK_FUNC(sub_82FBC528);
PPC_FUNC_IMPL(__imp__sub_82FBC528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FBC530;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r31,240
	ctx.r30.s64 = ctx.r31.s64 + 240;
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbc560
	if (ctx.cr6.eq) goto loc_82FBC560;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FBC560;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FBC560:
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r3,r31,212
	ctx.r3.s64 = ctx.r31.s64 + 212;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// bl 0x82fc0960
	ctx.lr = 0x82FBC574;
	sub_82FC0960(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r29,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82FBC594"))) PPC_WEAK_FUNC(sub_82FBC594);
PPC_FUNC_IMPL(__imp__sub_82FBC594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBC598"))) PPC_WEAK_FUNC(sub_82FBC598);
PPC_FUNC_IMPL(__imp__sub_82FBC598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc4
	ctx.lr = 0x82FBC5A0;
	sub_82CA2BC4(ctx, base);
	// stfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// addi r22,r31,212
	ctx.r22.s64 = ctx.r31.s64 + 212;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// lwz r24,20(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x82efc418
	ctx.lr = 0x82FBC5DC;
	sub_82EFC418(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82fbc738
	if (ctx.cr0.eq) goto loc_82FBC738;
	// lbz r11,311(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 311);
	// li r19,0
	ctx.r19.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82fbc6b4
	if (ctx.cr0.eq) goto loc_82FBC6B4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r19,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r19.u32);
	// stw r19,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r19.u32);
	// stw r19,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r19.u32);
	// beq cr6,0x82fbc68c
	if (ctx.cr6.eq) goto loc_82FBC68C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82fbc68c
	if (!ctx.cr6.gt) goto loc_82FBC68C;
	// addi r28,r1,88
	ctx.r28.s64 = ctx.r1.s64 + 88;
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
loc_82FBC624:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82fbc63c
	if (ctx.cr6.eq) goto loc_82FBC63C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r7,r11,r25
	ctx.r7.u64 = ctx.r11.u64 + ctx.r25.u64;
	// b 0x82fbc640
	goto loc_82FBC640;
loc_82FBC63C:
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
loc_82FBC640:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82fbc670
	if (ctx.cr6.eq) goto loc_82FBC670;
	// mulli r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 * 48;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r3,r11,r23
	ctx.r3.u64 = ctx.r11.u64 + ctx.r23.u64;
	// bl 0x82fbac50
	ctx.lr = 0x82FBC664;
	sub_82FBAC50(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fbc670
	if (ctx.cr0.eq) goto loc_82FBC670;
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
loc_82FBC670:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fbc624
	if (ctx.cr6.lt) goto loc_82FBC624;
loc_82FBC68C:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,208(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FBC6B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82fbc6e8
	goto loc_82FBC6E8;
loc_82FBC6B4:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82fbc6cc
	if (ctx.cr6.eq) goto loc_82FBC6CC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r6,r11,r25
	ctx.r6.u64 = ctx.r11.u64 + ctx.r25.u64;
	// b 0x82fbc6d0
	goto loc_82FBC6D0;
loc_82FBC6CC:
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
loc_82FBC6D0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mulli r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 * 48;
	// add r3,r11,r23
	ctx.r3.u64 = ctx.r11.u64 + ctx.r23.u64;
	// bl 0x82fbafb8
	ctx.lr = 0x82FBC6E8;
	sub_82FBAFB8(ctx, base);
loc_82FBC6E8:
	// addi r11,r31,240
	ctx.r11.s64 = ctx.r31.s64 + 240;
	// stb r19,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r19.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82fc05a8
	ctx.lr = 0x82FBC704;
	sub_82FC05A8(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r31,0(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x82efc418
	ctx.lr = 0x82FBC710;
	sub_82EFC418(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r7,0
	ctx.r7.s64 = 0;
	// divwu r8,r3,r11
	ctx.r8.u32 = ctx.r3.u32 / ctx.r11.u32;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82FBC738;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FBC738:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x82ca2c14
	// ERROR 82CA2C14
	return;
}

__attribute__((alias("__imp__sub_82FBC744"))) PPC_WEAK_FUNC(sub_82FBC744);
PPC_FUNC_IMPL(__imp__sub_82FBC744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBC748"))) PPC_WEAK_FUNC(sub_82FBC748);
PPC_FUNC_IMPL(__imp__sub_82FBC748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FBC750;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r30,240
	ctx.r31.s64 = ctx.r30.s64 + 240;
	// lwz r3,240(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbc784
	if (ctx.cr6.eq) goto loc_82FBC784;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FBC784;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FBC784:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r30,212
	ctx.r3.s64 = ctx.r30.s64 + 212;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82fc0948
	ctx.lr = 0x82FBC798;
	sub_82FC0948(ctx, base);
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fbc7a8
	if (ctx.cr0.eq) goto loc_82FBC7A8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82FBC7A8;
	sub_82EF6F38(ctx, base);
loc_82FBC7A8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82FBC7B4"))) PPC_WEAK_FUNC(sub_82FBC7B4);
PPC_FUNC_IMPL(__imp__sub_82FBC7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBC7B8"))) PPC_WEAK_FUNC(sub_82FBC7B8);
PPC_FUNC_IMPL(__imp__sub_82FBC7B8) {
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
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fbc834
	if (ctx.cr6.eq) goto loc_82FBC834;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_82FBC7EC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbc808
	if (ctx.cr6.eq) goto loc_82FBC808;
	// bl 0x82ef6f38
	ctx.lr = 0x82FBC808;
	sub_82EF6F38(ctx, base);
loc_82FBC808:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fbc7ec
	if (!ctx.cr6.eq) goto loc_82FBC7EC;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// beq cr6,0x82fbc834
	if (ctx.cr6.eq) goto loc_82FBC834;
	// bl 0x82ef6f38
	ctx.lr = 0x82FBC834;
	sub_82EF6F38(ctx, base);
loc_82FBC834:
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

__attribute__((alias("__imp__sub_82FBC84C"))) PPC_WEAK_FUNC(sub_82FBC84C);
PPC_FUNC_IMPL(__imp__sub_82FBC84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBC850"))) PPC_WEAK_FUNC(sub_82FBC850);
PPC_FUNC_IMPL(__imp__sub_82FBC850) {
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
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r11,2,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82fbc898
	if (ctx.cr0.eq) goto loc_82FBC898;
	// rlwinm. r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82fbc888
	if (ctx.cr0.eq) goto loc_82FBC888;
	// clrlwi r9,r11,2
	ctx.r9.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82fbc8fc
	if (ctx.cr6.lt) goto loc_82FBC8FC;
loc_82FBC888:
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82fbc898
	if (ctx.cr0.eq) goto loc_82FBC898;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82fbc8fc
	if (ctx.cr6.eq) goto loc_82FBC8FC;
loc_82FBC898:
	// rlwinm r11,r11,0,0,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0000000;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// or r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 | ctx.r4.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bne cr6,0x82fbc8c8
	if (!ctx.cr6.eq) goto loc_82FBC8C8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbc8bc
	if (ctx.cr6.eq) goto loc_82FBC8BC;
	// bl 0x82ef6f38
	ctx.lr = 0x82FBC8BC;
	sub_82EF6F38(ctx, base);
loc_82FBC8BC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82fbc8fc
	goto loc_82FBC8FC;
loc_82FBC8C8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbc8e0
	if (ctx.cr6.eq) goto loc_82FBC8E0;
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82ef6f18
	ctx.lr = 0x82FBC8D8;
	sub_82EF6F18(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x82fbc8fc
	goto loc_82FBC8FC;
loc_82FBC8E0:
	// rlwinm r30,r4,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ef6ef8
	ctx.lr = 0x82FBC8EC;
	sub_82EF6EF8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// bl 0x82ca3190
	ctx.lr = 0x82FBC8FC;
	sub_82CA3190(ctx, base);
loc_82FBC8FC:
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

__attribute__((alias("__imp__sub_82FBC914"))) PPC_WEAK_FUNC(sub_82FBC914);
PPC_FUNC_IMPL(__imp__sub_82FBC914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBC918"))) PPC_WEAK_FUNC(sub_82FBC918);
PPC_FUNC_IMPL(__imp__sub_82FBC918) {
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
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r11,2,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82fbc960
	if (ctx.cr0.eq) goto loc_82FBC960;
	// rlwinm. r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82fbc950
	if (ctx.cr0.eq) goto loc_82FBC950;
	// clrlwi r9,r11,2
	ctx.r9.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82fbc9c4
	if (ctx.cr6.lt) goto loc_82FBC9C4;
loc_82FBC950:
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82fbc960
	if (ctx.cr0.eq) goto loc_82FBC960;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82fbc9c4
	if (ctx.cr6.eq) goto loc_82FBC9C4;
loc_82FBC960:
	// rlwinm r11,r11,0,0,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0000000;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// or r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 | ctx.r4.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bne cr6,0x82fbc990
	if (!ctx.cr6.eq) goto loc_82FBC990;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbc984
	if (ctx.cr6.eq) goto loc_82FBC984;
	// bl 0x82ef6f38
	ctx.lr = 0x82FBC984;
	sub_82EF6F38(ctx, base);
loc_82FBC984:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82fbc9c4
	goto loc_82FBC9C4;
loc_82FBC990:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbc9a8
	if (ctx.cr6.eq) goto loc_82FBC9A8;
	// rlwinm r4,r4,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// bl 0x82ef6f18
	ctx.lr = 0x82FBC9A0;
	sub_82EF6F18(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x82fbc9c4
	goto loc_82FBC9C4;
loc_82FBC9A8:
	// rlwinm r30,r4,8,0,23
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ef6ef8
	ctx.lr = 0x82FBC9B4;
	sub_82EF6EF8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// bl 0x82ca3190
	ctx.lr = 0x82FBC9C4;
	sub_82CA3190(ctx, base);
loc_82FBC9C4:
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

__attribute__((alias("__imp__sub_82FBC9DC"))) PPC_WEAK_FUNC(sub_82FBC9DC);
PPC_FUNC_IMPL(__imp__sub_82FBC9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBC9E0"))) PPC_WEAK_FUNC(sub_82FBC9E0);
PPC_FUNC_IMPL(__imp__sub_82FBC9E0) {
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
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r11,2,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82fbca28
	if (ctx.cr0.eq) goto loc_82FBCA28;
	// rlwinm. r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82fbca18
	if (ctx.cr0.eq) goto loc_82FBCA18;
	// clrlwi r9,r11,2
	ctx.r9.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82fbca8c
	if (ctx.cr6.lt) goto loc_82FBCA8C;
loc_82FBCA18:
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82fbca28
	if (ctx.cr0.eq) goto loc_82FBCA28;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82fbca8c
	if (ctx.cr6.eq) goto loc_82FBCA8C;
loc_82FBCA28:
	// rlwinm r11,r11,0,0,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0000000;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// or r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 | ctx.r4.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bne cr6,0x82fbca58
	if (!ctx.cr6.eq) goto loc_82FBCA58;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbca4c
	if (ctx.cr6.eq) goto loc_82FBCA4C;
	// bl 0x82ef6f38
	ctx.lr = 0x82FBCA4C;
	sub_82EF6F38(ctx, base);
loc_82FBCA4C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82fbca8c
	goto loc_82FBCA8C;
loc_82FBCA58:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbca70
	if (ctx.cr6.eq) goto loc_82FBCA70;
	// mulli r4,r4,96
	ctx.r4.s64 = ctx.r4.s64 * 96;
	// bl 0x82ef6f18
	ctx.lr = 0x82FBCA68;
	sub_82EF6F18(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x82fbca8c
	goto loc_82FBCA8C;
loc_82FBCA70:
	// mulli r30,r4,96
	ctx.r30.s64 = ctx.r4.s64 * 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ef6ef8
	ctx.lr = 0x82FBCA7C;
	sub_82EF6EF8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// bl 0x82ca3190
	ctx.lr = 0x82FBCA8C;
	sub_82CA3190(ctx, base);
loc_82FBCA8C:
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

__attribute__((alias("__imp__sub_82FBCAA4"))) PPC_WEAK_FUNC(sub_82FBCAA4);
PPC_FUNC_IMPL(__imp__sub_82FBCAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBCAA8"))) PPC_WEAK_FUNC(sub_82FBCAA8);
PPC_FUNC_IMPL(__imp__sub_82FBCAA8) {
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
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r11,2,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82fbcaf0
	if (ctx.cr0.eq) goto loc_82FBCAF0;
	// rlwinm. r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82fbcae0
	if (ctx.cr0.eq) goto loc_82FBCAE0;
	// clrlwi r9,r11,2
	ctx.r9.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82fbcb54
	if (ctx.cr6.lt) goto loc_82FBCB54;
loc_82FBCAE0:
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82fbcaf0
	if (ctx.cr0.eq) goto loc_82FBCAF0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82fbcb54
	if (ctx.cr6.eq) goto loc_82FBCB54;
loc_82FBCAF0:
	// rlwinm r11,r11,0,0,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0000000;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// or r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 | ctx.r4.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bne cr6,0x82fbcb20
	if (!ctx.cr6.eq) goto loc_82FBCB20;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbcb14
	if (ctx.cr6.eq) goto loc_82FBCB14;
	// bl 0x82ef6f38
	ctx.lr = 0x82FBCB14;
	sub_82EF6F38(ctx, base);
loc_82FBCB14:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82fbcb54
	goto loc_82FBCB54;
loc_82FBCB20:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbcb38
	if (ctx.cr6.eq) goto loc_82FBCB38;
	// rlwinm r4,r4,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x82ef6f18
	ctx.lr = 0x82FBCB30;
	sub_82EF6F18(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x82fbcb54
	goto loc_82FBCB54;
loc_82FBCB38:
	// rlwinm r30,r4,5,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ef6ef8
	ctx.lr = 0x82FBCB44;
	sub_82EF6EF8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// bl 0x82ca3190
	ctx.lr = 0x82FBCB54;
	sub_82CA3190(ctx, base);
loc_82FBCB54:
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

__attribute__((alias("__imp__sub_82FBCB6C"))) PPC_WEAK_FUNC(sub_82FBCB6C);
PPC_FUNC_IMPL(__imp__sub_82FBCB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBCB70"))) PPC_WEAK_FUNC(sub_82FBCB70);
PPC_FUNC_IMPL(__imp__sub_82FBCB70) {
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
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r11,2,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82fbcbb8
	if (ctx.cr0.eq) goto loc_82FBCBB8;
	// rlwinm. r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82fbcba8
	if (ctx.cr0.eq) goto loc_82FBCBA8;
	// clrlwi r9,r11,2
	ctx.r9.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82fbcc1c
	if (ctx.cr6.lt) goto loc_82FBCC1C;
loc_82FBCBA8:
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82fbcbb8
	if (ctx.cr0.eq) goto loc_82FBCBB8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82fbcc1c
	if (ctx.cr6.eq) goto loc_82FBCC1C;
loc_82FBCBB8:
	// rlwinm r11,r11,0,0,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0000000;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// or r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 | ctx.r4.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bne cr6,0x82fbcbe8
	if (!ctx.cr6.eq) goto loc_82FBCBE8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbcbdc
	if (ctx.cr6.eq) goto loc_82FBCBDC;
	// bl 0x82ef6f38
	ctx.lr = 0x82FBCBDC;
	sub_82EF6F38(ctx, base);
loc_82FBCBDC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82fbcc1c
	goto loc_82FBCC1C;
loc_82FBCBE8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbcc00
	if (ctx.cr6.eq) goto loc_82FBCC00;
	// mulli r4,r4,464
	ctx.r4.s64 = ctx.r4.s64 * 464;
	// bl 0x82ef6f18
	ctx.lr = 0x82FBCBF8;
	sub_82EF6F18(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x82fbcc1c
	goto loc_82FBCC1C;
loc_82FBCC00:
	// mulli r30,r4,464
	ctx.r30.s64 = ctx.r4.s64 * 464;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ef6ef8
	ctx.lr = 0x82FBCC0C;
	sub_82EF6EF8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// bl 0x82ca3190
	ctx.lr = 0x82FBCC1C;
	sub_82CA3190(ctx, base);
loc_82FBCC1C:
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

__attribute__((alias("__imp__sub_82FBCC34"))) PPC_WEAK_FUNC(sub_82FBCC34);
PPC_FUNC_IMPL(__imp__sub_82FBCC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBCC38"))) PPC_WEAK_FUNC(sub_82FBCC38);
PPC_FUNC_IMPL(__imp__sub_82FBCC38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f12,2636(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2636);
	ctx.f12.f64 = double(temp.f32);
	// li r9,2
	ctx.r9.s64 = 2;
	// li r5,3
	ctx.r5.s64 = 3;
	// lfs f0,3084(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// li r10,64
	ctx.r10.s64 = 64;
	// lfs f13,3056(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3056);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,3080(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 3080);
	ctx.f11.f64 = double(temp.f32);
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// stfs f12,12(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stfs f13,32(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stfs f13,36(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f11,40(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r10,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r10.u32);
	// stb r11,64(r3)
	PPC_STORE_U8(ctx.r3.u32 + 64, ctx.r11.u8);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r10,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r10.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// stw r10,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBCCD8"))) PPC_WEAK_FUNC(sub_82FBCCD8);
PPC_FUNC_IMPL(__imp__sub_82FBCCD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r10,256
	ctx.r10.s64 = 256;
	// stb r8,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r8.u8);
	// li r9,64
	ctx.r9.s64 = 64;
	// stb r8,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r8.u8);
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// stb r8,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r8.u8);
	// li r6,1024
	ctx.r6.s64 = 1024;
	// stb r8,7(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7, ctx.r8.u8);
	// addi r8,r7,26996
	ctx.r8.s64 = ctx.r7.s64 + 26996;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lis r4,16383
	ctx.r4.s64 = 1073676288;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lfs f13,26996(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 26996);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// ori r7,r4,65535
	ctx.r7.u64 = ctx.r4.u64 | 65535;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lfs f0,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// lfs f12,3084(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 3084);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r9,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r9.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// stw r10,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r10.u32);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// stw r9,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r9.u32);
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r11.u32);
	// stw r11,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r11.u32);
	// stw r11,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r11.u32);
	// stw r11,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r11.u32);
	// stw r6,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r6.u32);
	// stw r11,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r11.u32);
	// stw r11,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r11.u32);
	// stw r11,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r11.u32);
	// stw r11,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r11.u32);
	// stw r11,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r11.u32);
	// stw r11,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, ctx.r11.u32);
	// stw r11,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r11.u32);
	// stw r11,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r11.u32);
	// stw r11,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r11.u32);
	// stw r11,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r11.u32);
	// stw r11,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r11.u32);
	// stw r11,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r11.u32);
	// stw r11,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r11.u32);
	// stw r11,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r11.u32);
	// stw r11,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r11.u32);
	// stw r11,220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 220, ctx.r11.u32);
	// stw r9,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, ctx.r9.u32);
	// stw r11,228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 228, ctx.r11.u32);
	// stw r11,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, ctx.r11.u32);
	// stw r11,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, ctx.r11.u32);
	// stfs f0,248(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 248, temp.u32);
	// stfs f0,252(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 252, temp.u32);
	// stfs f13,256(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 256, temp.u32);
	// stfs f13,260(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 260, temp.u32);
	// stfs f12,264(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 264, temp.u32);
	// stfs f12,268(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 268, temp.u32);
	// stw r7,240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 240, ctx.r7.u32);
	// stw r11,244(r3)
	PPC_STORE_U32(ctx.r3.u32 + 244, ctx.r11.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r11,272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 272, ctx.r11.u32);
	// stw r11,276(r3)
	PPC_STORE_U32(ctx.r3.u32 + 276, ctx.r11.u32);
	// stw r11,280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 280, ctx.r11.u32);
	// stw r11,284(r3)
	PPC_STORE_U32(ctx.r3.u32 + 284, ctx.r11.u32);
	// stw r11,288(r3)
	PPC_STORE_U32(ctx.r3.u32 + 288, ctx.r11.u32);
	// stw r11,292(r3)
	PPC_STORE_U32(ctx.r3.u32 + 292, ctx.r11.u32);
	// stw r11,296(r3)
	PPC_STORE_U32(ctx.r3.u32 + 296, ctx.r11.u32);
	// stw r10,300(r3)
	PPC_STORE_U32(ctx.r3.u32 + 300, ctx.r10.u32);
	// stw r11,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r11.u32);
	// stw r11,316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 316, ctx.r11.u32);
	// stw r11,320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 320, ctx.r11.u32);
	// stw r11,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, ctx.r11.u32);
	// stw r11,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r11.u32);
	// stw r11,332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 332, ctx.r11.u32);
	// stw r11,336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 336, ctx.r11.u32);
	// stw r11,340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 340, ctx.r11.u32);
	// stw r11,344(r3)
	PPC_STORE_U32(ctx.r3.u32 + 344, ctx.r11.u32);
	// stw r11,348(r3)
	PPC_STORE_U32(ctx.r3.u32 + 348, ctx.r11.u32);
	// stw r8,352(r3)
	PPC_STORE_U32(ctx.r3.u32 + 352, ctx.r8.u32);
	// stw r11,356(r3)
	PPC_STORE_U32(ctx.r3.u32 + 356, ctx.r11.u32);
	// stw r11,360(r3)
	PPC_STORE_U32(ctx.r3.u32 + 360, ctx.r11.u32);
	// stw r11,364(r3)
	PPC_STORE_U32(ctx.r3.u32 + 364, ctx.r11.u32);
	// stw r11,368(r3)
	PPC_STORE_U32(ctx.r3.u32 + 368, ctx.r11.u32);
	// stw r9,372(r3)
	PPC_STORE_U32(ctx.r3.u32 + 372, ctx.r9.u32);
	// stw r11,376(r3)
	PPC_STORE_U32(ctx.r3.u32 + 376, ctx.r11.u32);
	// stw r11,380(r3)
	PPC_STORE_U32(ctx.r3.u32 + 380, ctx.r11.u32);
	// stw r11,384(r3)
	PPC_STORE_U32(ctx.r3.u32 + 384, ctx.r11.u32);
	// stw r11,388(r3)
	PPC_STORE_U32(ctx.r3.u32 + 388, ctx.r11.u32);
	// stw r9,392(r3)
	PPC_STORE_U32(ctx.r3.u32 + 392, ctx.r9.u32);
	// stw r11,396(r3)
	PPC_STORE_U32(ctx.r3.u32 + 396, ctx.r11.u32);
	// stw r11,400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 400, ctx.r11.u32);
	// stw r11,404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 404, ctx.r11.u32);
	// stw r11,408(r3)
	PPC_STORE_U32(ctx.r3.u32 + 408, ctx.r11.u32);
	// stw r10,412(r3)
	PPC_STORE_U32(ctx.r3.u32 + 412, ctx.r10.u32);
	// stw r11,416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 416, ctx.r11.u32);
	// stw r11,420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 420, ctx.r11.u32);
	// stw r11,424(r3)
	PPC_STORE_U32(ctx.r3.u32 + 424, ctx.r11.u32);
	// stw r11,428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 428, ctx.r11.u32);
	// stw r10,432(r3)
	PPC_STORE_U32(ctx.r3.u32 + 432, ctx.r10.u32);
	// stw r11,436(r3)
	PPC_STORE_U32(ctx.r3.u32 + 436, ctx.r11.u32);
	// stw r11,440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 440, ctx.r11.u32);
	// stw r11,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r11.u32);
	// stw r11,448(r3)
	PPC_STORE_U32(ctx.r3.u32 + 448, ctx.r11.u32);
	// stw r10,452(r3)
	PPC_STORE_U32(ctx.r3.u32 + 452, ctx.r10.u32);
	// stw r11,456(r3)
	PPC_STORE_U32(ctx.r3.u32 + 456, ctx.r11.u32);
	// stw r11,460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 460, ctx.r11.u32);
	// stw r11,464(r3)
	PPC_STORE_U32(ctx.r3.u32 + 464, ctx.r11.u32);
	// stw r11,468(r3)
	PPC_STORE_U32(ctx.r3.u32 + 468, ctx.r11.u32);
	// stw r10,472(r3)
	PPC_STORE_U32(ctx.r3.u32 + 472, ctx.r10.u32);
	// stw r11,476(r3)
	PPC_STORE_U32(ctx.r3.u32 + 476, ctx.r11.u32);
	// stw r11,480(r3)
	PPC_STORE_U32(ctx.r3.u32 + 480, ctx.r11.u32);
	// stw r11,484(r3)
	PPC_STORE_U32(ctx.r3.u32 + 484, ctx.r11.u32);
	// stw r11,488(r3)
	PPC_STORE_U32(ctx.r3.u32 + 488, ctx.r11.u32);
	// stw r10,492(r3)
	PPC_STORE_U32(ctx.r3.u32 + 492, ctx.r10.u32);
	// stw r11,496(r3)
	PPC_STORE_U32(ctx.r3.u32 + 496, ctx.r11.u32);
	// stw r11,500(r3)
	PPC_STORE_U32(ctx.r3.u32 + 500, ctx.r11.u32);
	// stw r11,504(r3)
	PPC_STORE_U32(ctx.r3.u32 + 504, ctx.r11.u32);
	// stw r11,508(r3)
	PPC_STORE_U32(ctx.r3.u32 + 508, ctx.r11.u32);
	// stw r10,512(r3)
	PPC_STORE_U32(ctx.r3.u32 + 512, ctx.r10.u32);
	// stw r11,516(r3)
	PPC_STORE_U32(ctx.r3.u32 + 516, ctx.r11.u32);
	// stw r11,520(r3)
	PPC_STORE_U32(ctx.r3.u32 + 520, ctx.r11.u32);
	// stw r11,524(r3)
	PPC_STORE_U32(ctx.r3.u32 + 524, ctx.r11.u32);
	// stw r11,528(r3)
	PPC_STORE_U32(ctx.r3.u32 + 528, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBCF2C"))) PPC_WEAK_FUNC(sub_82FBCF2C);
PPC_FUNC_IMPL(__imp__sub_82FBCF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBCF30"))) PPC_WEAK_FUNC(sub_82FBCF30);
PPC_FUNC_IMPL(__imp__sub_82FBCF30) {
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
	// addi r3,r31,496
	ctx.r3.s64 = ctx.r31.s64 + 496;
	// bl 0x82fbc7b8
	ctx.lr = 0x82FBCF4C;
	sub_82FBC7B8(ctx, base);
	// addi r3,r31,476
	ctx.r3.s64 = ctx.r31.s64 + 476;
	// bl 0x82fbc7b8
	ctx.lr = 0x82FBCF54;
	sub_82FBC7B8(ctx, base);
	// addi r3,r31,456
	ctx.r3.s64 = ctx.r31.s64 + 456;
	// bl 0x82fbc7b8
	ctx.lr = 0x82FBCF5C;
	sub_82FBC7B8(ctx, base);
	// addi r3,r31,436
	ctx.r3.s64 = ctx.r31.s64 + 436;
	// bl 0x82fbc7b8
	ctx.lr = 0x82FBCF64;
	sub_82FBC7B8(ctx, base);
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// bl 0x82fbc7b8
	ctx.lr = 0x82FBCF6C;
	sub_82FBC7B8(ctx, base);
	// addi r3,r31,396
	ctx.r3.s64 = ctx.r31.s64 + 396;
	// bl 0x82fbc7b8
	ctx.lr = 0x82FBCF74;
	sub_82FBC7B8(ctx, base);
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// bl 0x82fbc7b8
	ctx.lr = 0x82FBCF7C;
	sub_82FBC7B8(ctx, base);
	// addi r3,r31,356
	ctx.r3.s64 = ctx.r31.s64 + 356;
	// bl 0x82fbc7b8
	ctx.lr = 0x82FBCF84;
	sub_82FBC7B8(ctx, base);
	// addi r3,r31,336
	ctx.r3.s64 = ctx.r31.s64 + 336;
	// bl 0x82fbc7b8
	ctx.lr = 0x82FBCF8C;
	sub_82FBC7B8(ctx, base);
	// lwz r3,332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbcf9c
	if (ctx.cr6.eq) goto loc_82FBCF9C;
	// bl 0x82ef6f38
	ctx.lr = 0x82FBCF9C;
	sub_82EF6F38(ctx, base);
loc_82FBCF9C:
	// lwz r3,320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbcfac
	if (ctx.cr6.eq) goto loc_82FBCFAC;
	// bl 0x82ef6f38
	ctx.lr = 0x82FBCFAC;
	sub_82EF6F38(ctx, base);
loc_82FBCFAC:
	// addi r3,r31,284
	ctx.r3.s64 = ctx.r31.s64 + 284;
	// bl 0x82fbc7b8
	ctx.lr = 0x82FBCFB4;
	sub_82FBC7B8(ctx, base);
	// lwz r3,280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbcfc4
	if (ctx.cr6.eq) goto loc_82FBCFC4;
	// bl 0x82ef6f38
	ctx.lr = 0x82FBCFC4;
	sub_82EF6F38(ctx, base);
loc_82FBCFC4:
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbcfd4
	if (ctx.cr6.eq) goto loc_82FBCFD4;
	// bl 0x82ef6f38
	ctx.lr = 0x82FBCFD4;
	sub_82EF6F38(ctx, base);
loc_82FBCFD4:
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// bl 0x82fbc7b8
	ctx.lr = 0x82FBCFDC;
	sub_82FBC7B8(ctx, base);
	// lwz r3,204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbcfec
	if (ctx.cr6.eq) goto loc_82FBCFEC;
	// bl 0x82ef6f38
	ctx.lr = 0x82FBCFEC;
	sub_82EF6F38(ctx, base);
loc_82FBCFEC:
	// lwz r3,192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbcffc
	if (ctx.cr6.eq) goto loc_82FBCFFC;
	// bl 0x82ef6f38
	ctx.lr = 0x82FBCFFC;
	sub_82EF6F38(ctx, base);
loc_82FBCFFC:
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbd00c
	if (ctx.cr6.eq) goto loc_82FBD00C;
	// bl 0x82ef6f38
	ctx.lr = 0x82FBD00C;
	sub_82EF6F38(ctx, base);
loc_82FBD00C:
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbd01c
	if (ctx.cr6.eq) goto loc_82FBD01C;
	// bl 0x82ef6f38
	ctx.lr = 0x82FBD01C;
	sub_82EF6F38(ctx, base);
loc_82FBD01C:
	// addi r3,r31,140
	ctx.r3.s64 = ctx.r31.s64 + 140;
	// bl 0x82fbc7b8
	ctx.lr = 0x82FBD024;
	sub_82FBC7B8(ctx, base);
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbd034
	if (ctx.cr6.eq) goto loc_82FBD034;
	// bl 0x82ef6f38
	ctx.lr = 0x82FBD034;
	sub_82EF6F38(ctx, base);
loc_82FBD034:
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x82fbc7b8
	ctx.lr = 0x82FBD03C;
	sub_82FBC7B8(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82fbc7b8
	ctx.lr = 0x82FBD044;
	sub_82FBC7B8(ctx, base);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x82fbc7b8
	ctx.lr = 0x82FBD04C;
	sub_82FBC7B8(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x82fbc7b8
	ctx.lr = 0x82FBD054;
	sub_82FBC7B8(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbd064
	if (ctx.cr6.eq) goto loc_82FBD064;
	// bl 0x82ef6f38
	ctx.lr = 0x82FBD064;
	sub_82EF6F38(ctx, base);
loc_82FBD064:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbd074
	if (ctx.cr6.eq) goto loc_82FBD074;
	// bl 0x82ef6f38
	ctx.lr = 0x82FBD074;
	sub_82EF6F38(ctx, base);
loc_82FBD074:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbd084
	if (ctx.cr6.eq) goto loc_82FBD084;
	// bl 0x82ef6f38
	ctx.lr = 0x82FBD084;
	sub_82EF6F38(ctx, base);
loc_82FBD084:
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

__attribute__((alias("__imp__sub_82FBD098"))) PPC_WEAK_FUNC(sub_82FBD098);
PPC_FUNC_IMPL(__imp__sub_82FBD098) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// clrlwi r10,r11,2
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// bne cr6,0x82fbd104
	if (!ctx.cr6.eq) goto loc_82FBD104;
	// rlwinm. r9,r11,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82fbd0e0
	if (ctx.cr0.eq) goto loc_82FBD0E0;
	// rlwinm. r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82fbd0d8
	if (ctx.cr0.eq) goto loc_82FBD0D8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82fbd128
	if (!ctx.cr6.eq) goto loc_82FBD128;
loc_82FBD0D8:
	// clrlwi. r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82fbd128
	if (!ctx.cr0.eq) goto loc_82FBD128;
loc_82FBD0E0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,0,0,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0000000;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbd0f8
	if (ctx.cr6.eq) goto loc_82FBD0F8;
	// bl 0x82ef6f38
	ctx.lr = 0x82FBD0F8;
	sub_82EF6F38(ctx, base);
loc_82FBD0F8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82fbd128
	goto loc_82FBD128;
loc_82FBD104:
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82fbd118
	if (ctx.cr6.gt) goto loc_82FBD118;
	// rlwinm r11,r10,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82fbd128
	if (ctx.cr6.gt) goto loc_82FBD128;
loc_82FBD118:
	// rlwinm r11,r4,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bl 0x82fbc850
	ctx.lr = 0x82FBD128;
	sub_82FBC850(ctx, base);
loc_82FBD128:
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

__attribute__((alias("__imp__sub_82FBD13C"))) PPC_WEAK_FUNC(sub_82FBD13C);
PPC_FUNC_IMPL(__imp__sub_82FBD13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBD140"))) PPC_WEAK_FUNC(sub_82FBD140);
PPC_FUNC_IMPL(__imp__sub_82FBD140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82FBD148;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r27,4(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r28,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r28.u32);
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x82fbd188
	if (!ctx.cr6.lt) goto loc_82FBD188;
	// rlwinm r30,r28,8,0,23
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 8) & 0xFFFFFF00;
	// subf r31,r28,r27
	ctx.r31.s64 = ctx.r27.s64 - ctx.r28.s64;
loc_82FBD16C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82fbc748
	ctx.lr = 0x82FBD17C;
	sub_82FBC748(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,256
	ctx.r30.s64 = ctx.r30.s64 + 256;
	// bne 0x82fbd16c
	if (!ctx.cr0.eq) goto loc_82FBD16C;
loc_82FBD188:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// clrlwi r10,r11,2
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// bne cr6,0x82fbd1dc
	if (!ctx.cr6.eq) goto loc_82FBD1DC;
	// rlwinm. r9,r11,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82fbd1b8
	if (ctx.cr0.eq) goto loc_82FBD1B8;
	// rlwinm. r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82fbd1b0
	if (ctx.cr0.eq) goto loc_82FBD1B0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82fbd204
	if (!ctx.cr6.eq) goto loc_82FBD204;
loc_82FBD1B0:
	// clrlwi. r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82fbd204
	if (!ctx.cr0.eq) goto loc_82FBD204;
loc_82FBD1B8:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,0,0,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0000000;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbd1d0
	if (ctx.cr6.eq) goto loc_82FBD1D0;
	// bl 0x82ef6f38
	ctx.lr = 0x82FBD1D0;
	sub_82EF6F38(ctx, base);
loc_82FBD1D0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x82fbd204
	goto loc_82FBD204;
loc_82FBD1DC:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82fbd1f4
	if (ctx.cr6.gt) goto loc_82FBD1F4;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82fbd204
	if (ctx.cr6.gt) goto loc_82FBD204;
loc_82FBD1F4:
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82fbc918
	ctx.lr = 0x82FBD204;
	sub_82FBC918(ctx, base);
loc_82FBD204:
	// cmplw cr6,r27,r28
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x82fbd230
	if (!ctx.cr6.lt) goto loc_82FBD230;
	// rlwinm r31,r27,8,0,23
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 8) & 0xFFFFFF00;
	// subf r30,r27,r28
	ctx.r30.s64 = ctx.r28.s64 - ctx.r27.s64;
loc_82FBD214:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add. r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82fbd224
	if (ctx.cr0.eq) goto loc_82FBD224;
	// bl 0x82fbc1b8
	ctx.lr = 0x82FBD224;
	sub_82FBC1B8(ctx, base);
loc_82FBD224:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,256
	ctx.r31.s64 = ctx.r31.s64 + 256;
	// bne 0x82fbd214
	if (!ctx.cr0.eq) goto loc_82FBD214;
loc_82FBD230:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82FBD238"))) PPC_WEAK_FUNC(sub_82FBD238);
PPC_FUNC_IMPL(__imp__sub_82FBD238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FBD240;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r29,4(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// clrlwi r10,r11,2
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// bne cr6,0x82fbd2a8
	if (!ctx.cr6.eq) goto loc_82FBD2A8;
	// rlwinm. r9,r11,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82fbd288
	if (ctx.cr0.eq) goto loc_82FBD288;
	// rlwinm. r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82fbd280
	if (ctx.cr0.eq) goto loc_82FBD280;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82fbd2cc
	if (!ctx.cr6.eq) goto loc_82FBD2CC;
loc_82FBD280:
	// clrlwi. r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82fbd2cc
	if (!ctx.cr0.eq) goto loc_82FBD2CC;
loc_82FBD288:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,0,0,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0000000;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbd2a0
	if (ctx.cr6.eq) goto loc_82FBD2A0;
	// bl 0x82ef6f38
	ctx.lr = 0x82FBD2A0;
	sub_82EF6F38(ctx, base);
loc_82FBD2A0:
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// b 0x82fbd2cc
	goto loc_82FBD2CC;
loc_82FBD2A8:
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82fbd2bc
	if (ctx.cr6.gt) goto loc_82FBD2BC;
	// rlwinm r11,r10,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82fbd2cc
	if (ctx.cr6.gt) goto loc_82FBD2CC;
loc_82FBD2BC:
	// rlwinm r11,r31,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82f42ef8
	ctx.lr = 0x82FBD2CC;
	sub_82F42EF8(ctx, base);
loc_82FBD2CC:
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82fbd304
	if (!ctx.cr6.lt) goto loc_82FBD304;
	// mulli r10,r29,20
	ctx.r10.s64 = ctx.r29.s64 * 20;
	// subf r9,r29,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r29.s64;
loc_82FBD2DC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fbd2f8
	if (ctx.cr0.eq) goto loc_82FBD2F8;
	// stw r28,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r28.u32);
	// stw r28,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
loc_82FBD2F8:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// bne 0x82fbd2dc
	if (!ctx.cr0.eq) goto loc_82FBD2DC;
loc_82FBD304:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82FBD30C"))) PPC_WEAK_FUNC(sub_82FBD30C);
PPC_FUNC_IMPL(__imp__sub_82FBD30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBD310"))) PPC_WEAK_FUNC(sub_82FBD310);
PPC_FUNC_IMPL(__imp__sub_82FBD310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FBD318;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r28,4(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// clrlwi r10,r11,2
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// bne cr6,0x82fbd380
	if (!ctx.cr6.eq) goto loc_82FBD380;
	// rlwinm. r9,r11,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82fbd35c
	if (ctx.cr0.eq) goto loc_82FBD35C;
	// rlwinm. r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82fbd354
	if (ctx.cr0.eq) goto loc_82FBD354;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82fbd3a4
	if (!ctx.cr6.eq) goto loc_82FBD3A4;
loc_82FBD354:
	// clrlwi. r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82fbd3a4
	if (!ctx.cr0.eq) goto loc_82FBD3A4;
loc_82FBD35C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,0,0,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0000000;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbd374
	if (ctx.cr6.eq) goto loc_82FBD374;
	// bl 0x82ef6f38
	ctx.lr = 0x82FBD374;
	sub_82EF6F38(ctx, base);
loc_82FBD374:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82fbd3a4
	goto loc_82FBD3A4;
loc_82FBD380:
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82fbd394
	if (ctx.cr6.gt) goto loc_82FBD394;
	// rlwinm r11,r10,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82fbd3a4
	if (ctx.cr6.gt) goto loc_82FBD3A4;
loc_82FBD394:
	// rlwinm r11,r31,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82fbcaa8
	ctx.lr = 0x82FBD3A4;
	sub_82FBCAA8(ctx, base);
loc_82FBD3A4:
	// cmplw cr6,r28,r31
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82fbd3d0
	if (!ctx.cr6.lt) goto loc_82FBD3D0;
	// rlwinm r29,r28,5,0,26
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r31,r28,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r28.s64;
loc_82FBD3B4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add. r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82fbd3c4
	if (ctx.cr0.eq) goto loc_82FBD3C4;
	// bl 0x82f65fe0
	ctx.lr = 0x82FBD3C4;
	sub_82F65FE0(ctx, base);
loc_82FBD3C4:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// bne 0x82fbd3b4
	if (!ctx.cr0.eq) goto loc_82FBD3B4;
loc_82FBD3D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82FBD3D8"))) PPC_WEAK_FUNC(sub_82FBD3D8);
PPC_FUNC_IMPL(__imp__sub_82FBD3D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82FBD3E0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r29,4(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// clrlwi r10,r11,2
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// bne cr6,0x82fbd448
	if (!ctx.cr6.eq) goto loc_82FBD448;
	// rlwinm. r9,r11,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82fbd424
	if (ctx.cr0.eq) goto loc_82FBD424;
	// rlwinm. r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82fbd41c
	if (ctx.cr0.eq) goto loc_82FBD41C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82fbd46c
	if (!ctx.cr6.eq) goto loc_82FBD46C;
loc_82FBD41C:
	// clrlwi. r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82fbd46c
	if (!ctx.cr0.eq) goto loc_82FBD46C;
loc_82FBD424:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,0,0,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0000000;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbd43c
	if (ctx.cr6.eq) goto loc_82FBD43C;
	// bl 0x82ef6f38
	ctx.lr = 0x82FBD43C;
	sub_82EF6F38(ctx, base);
loc_82FBD43C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82fbd46c
	goto loc_82FBD46C;
loc_82FBD448:
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82fbd45c
	if (ctx.cr6.gt) goto loc_82FBD45C;
	// rlwinm r11,r10,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82fbd46c
	if (ctx.cr6.gt) goto loc_82FBD46C;
loc_82FBD45C:
	// rlwinm r11,r31,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82fbcb70
	ctx.lr = 0x82FBD46C;
	sub_82FBCB70(ctx, base);
loc_82FBD46C:
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82fbd4b0
	if (!ctx.cr6.lt) goto loc_82FBD4B0;
	// mulli r28,r29,464
	ctx.r28.s64 = ctx.r29.s64 * 464;
	// subf r27,r29,r31
	ctx.r27.s64 = ctx.r31.s64 - ctx.r29.s64;
loc_82FBD47C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add. r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fbd4a4
	if (ctx.cr0.eq) goto loc_82FBD4A4;
	// addi r29,r11,160
	ctx.r29.s64 = ctx.r11.s64 + 160;
	// li r31,8
	ctx.r31.s64 = 8;
loc_82FBD490:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f65fe0
	ctx.lr = 0x82FBD498;
	sub_82F65FE0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// bge 0x82fbd490
	if (!ctx.cr0.lt) goto loc_82FBD490;
loc_82FBD4A4:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r28,r28,464
	ctx.r28.s64 = ctx.r28.s64 + 464;
	// bne 0x82fbd47c
	if (!ctx.cr0.eq) goto loc_82FBD47C;
loc_82FBD4B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82FBD4B8"))) PPC_WEAK_FUNC(sub_82FBD4B8);
PPC_FUNC_IMPL(__imp__sub_82FBD4B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FBD4C0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82fbd238
	ctx.lr = 0x82FBD4DC;
	sub_82FBD238(ctx, base);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mulli r10,r31,20
	ctx.r10.s64 = ctx.r31.s64 * 20;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r10,r10,-20
	ctx.r10.s64 = ctx.r10.s64 + -20;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82FBD4F4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82fbd4f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82FBD4F4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82FBD510"))) PPC_WEAK_FUNC(sub_82FBD510);
PPC_FUNC_IMPL(__imp__sub_82FBD510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82FBD518;
	sub_82CA2BE0(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,40(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm r9,r5,28,4,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFC;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// clrlwi r11,r5,26
	ctx.r11.u64 = ctx.r5.u32 & 0x3F;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// lwz r27,8(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82fbd554
	if (!ctx.cr6.eq) goto loc_82FBD554;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82FBD554:
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// rlwinm r26,r29,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r4,r26,r27
	ctx.r4.u64 = ctx.r26.u64 + ctx.r27.u64;
	// bl 0x82fbd098
	ctx.lr = 0x82FBD56C;
	sub_82FBD098(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82fbd604
	if (ctx.cr6.eq) goto loc_82FBD604;
	// rlwinm r10,r27,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
loc_82FBD57C:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r6,r9,26,6,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FFFFFC;
	// rlwinm r9,r9,3,21,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x7F8;
	// lwz r8,20(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// lwzx r8,r6,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// lfsx f0,r8,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lhz r9,86(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sthx r9,r10,r7
	PPC_STORE_U16(ctx.r10.u32 + ctx.r7.u32, ctx.r9.u16);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r5,r9,26,6,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FFFFFC;
	// rlwinm r8,r9,3,21,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x7F8;
	// lwz r9,20(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// lwzx r9,r5,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lfs f0,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lhz r9,86(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sth r9,2(r7)
	PPC_STORE_U16(ctx.r7.u32 + 2, ctx.r9.u16);
	// blt cr6,0x82fbd57c
	if (ctx.cr6.lt) goto loc_82FBD57C;
loc_82FBD604:
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// addi r3,r28,24
	ctx.r3.s64 = ctx.r28.s64 + 24;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82f57778
	ctx.lr = 0x82FBD618;
	sub_82F57778(ctx, base);
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r26,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r26.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82FBD634"))) PPC_WEAK_FUNC(sub_82FBD634);
PPC_FUNC_IMPL(__imp__sub_82FBD634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBD638"))) PPC_WEAK_FUNC(sub_82FBD638);
PPC_FUNC_IMPL(__imp__sub_82FBD638) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// bl 0x82fc0c08
	ctx.lr = 0x82FBD684;
	sub_82FC0C08(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lfs f13,3032(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3032);
	ctx.f13.f64 = double(temp.f32);
	// stb r30,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r30.u8);
	// lfs f0,3084(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// stb r30,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r30.u8);
	// stfs f13,40(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stb r30,47(r31)
	PPC_STORE_U8(ctx.r31.u32 + 47, ctx.r30.u8);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stb r30,45(r31)
	PPC_STORE_U8(ctx.r31.u32 + 45, ctx.r30.u8);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stb r30,46(r31)
	PPC_STORE_U8(ctx.r31.u32 + 46, ctx.r30.u8);
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

__attribute__((alias("__imp__sub_82FBD6E4"))) PPC_WEAK_FUNC(sub_82FBD6E4);
PPC_FUNC_IMPL(__imp__sub_82FBD6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBD6E8"))) PPC_WEAK_FUNC(sub_82FBD6E8);
PPC_FUNC_IMPL(__imp__sub_82FBD6E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FBD6F0;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r31,88
	ctx.r29.s64 = ctx.r31.s64 + 88;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbd720
	if (ctx.cr6.eq) goto loc_82FBD720;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FBD720;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FBD720:
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// stw r28,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r28.u32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbd754
	if (ctx.cr6.eq) goto loc_82FBD754;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FBD754;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FBD754:
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbd770
	if (ctx.cr6.eq) goto loc_82FBD770;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82fbc748
	ctx.lr = 0x82FBD770;
	sub_82FBC748(ctx, base);
loc_82FBD770:
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x82fc0948
	ctx.lr = 0x82FBD778;
	sub_82FC0948(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f57778
	ctx.lr = 0x82FBD784;
	sub_82F57778(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbd794
	if (ctx.cr6.eq) goto loc_82FBD794;
	// bl 0x82ef6f38
	ctx.lr = 0x82FBD794;
	sub_82EF6F38(ctx, base);
loc_82FBD794:
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fbd098
	ctx.lr = 0x82FBD7A0;
	sub_82FBD098(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbd7b0
	if (ctx.cr6.eq) goto loc_82FBD7B0;
	// bl 0x82ef6f38
	ctx.lr = 0x82FBD7B0;
	sub_82EF6F38(ctx, base);
loc_82FBD7B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82FBD7B8"))) PPC_WEAK_FUNC(sub_82FBD7B8);
PPC_FUNC_IMPL(__imp__sub_82FBD7B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x82FBD7C0;
	sub_82CA2BB0(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82ca74f0
	ctx.lr = 0x82FBD7C8;
	sub_82CA74F0(ctx, base);
	// stwu r1,-1632(r1)
	ea = -1632 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r5
	ctx.r18.u64 = ctx.r5.u64;
	// fmr f24,f1
	ctx.fpscr.disableFlushMode();
	ctx.f24.f64 = ctx.f1.f64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// fmr f22,f2
	ctx.f22.f64 = ctx.f2.f64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r16,r4
	ctx.r16.u64 = ctx.r4.u64;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lhz r9,4(r18)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r18.u32 + 4);
	// li r15,1
	ctx.r15.s64 = 1;
	// lwz r11,12(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 12);
	// li r29,0
	ctx.r29.s64 = 0;
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// lfs f23,3080(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3080);
	ctx.f23.f64 = double(temp.f32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lwz r17,0(r16)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// std r7,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r7.u64);
	// lfd f0,136(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// fmr f31,f23
	ctx.f31.f64 = ctx.f23.f64;
	// stb r15,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r15.u8);
	// fmr f30,f23
	ctx.f30.f64 = ctx.f23.f64;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// frsp f28,f0
	ctx.f28.f64 = double(float(ctx.f0.f64));
	// rlwinm r14,r10,27,31,31
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fbd854
	if (!ctx.cr6.eq) goto loc_82FBD854;
	// lbz r10,8(r18)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r18.u32 + 8);
	// li r8,255
	ctx.r8.s64 = 255;
	// subfc r10,r8,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r8.u32;
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// b 0x82fbd85c
	goto loc_82FBD85C;
loc_82FBD854:
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rlwinm r10,r10,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
loc_82FBD85C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82fbd868
	if (ctx.cr0.eq) goto loc_82FBD868;
	// mr r14,r29
	ctx.r14.u64 = ctx.r29.u64;
loc_82FBD868:
	// lwz r8,28(r17)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28);
	// rlwinm. r10,r8,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82fbd884
	if (ctx.cr0.eq) goto loc_82FBD884;
	// lwz r10,36(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 36);
	// rlwinm. r10,r10,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r10,r15
	ctx.r10.u64 = ctx.r15.u64;
	// bne 0x82fbd888
	if (!ctx.cr0.eq) goto loc_82FBD888;
loc_82FBD884:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_82FBD888:
	// clrlwi r30,r10,24
	ctx.r30.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fbd8a4
	if (ctx.cr6.eq) goto loc_82FBD8A4;
	// lwz r11,36(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 36);
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82fbd8a4
	if (!ctx.cr0.eq) goto loc_82FBD8A4;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82FBD8A4:
	// clrlwi r11,r8,30
	ctx.r11.u64 = ctx.r8.u32 & 0x3;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82fbe9c8
	if (ctx.cr6.eq) goto loc_82FBE9C8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82fbe9c8
	if (ctx.cr6.eq) goto loc_82FBE9C8;
	// lbz r31,1719(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 1719);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x82fbd8cc
	if (ctx.cr0.eq) goto loc_82FBD8CC;
	// fmr f27,f23
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f23.f64;
	// b 0x82fbd8d8
	goto loc_82FBD8D8;
loc_82FBD8CC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82f663c8
	ctx.lr = 0x82FBD8D4;
	sub_82F663C8(ctx, base);
	// frsp f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = double(float(ctx.f1.f64));
loc_82FBD8D8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82fbd8e8
	if (ctx.cr6.eq) goto loc_82FBD8E8;
	// fmr f26,f23
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = ctx.f23.f64;
	// b 0x82fbd8f4
	goto loc_82FBD8F4;
loc_82FBD8E8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82f663e0
	ctx.lr = 0x82FBD8F0;
	sub_82F663E0(ctx, base);
	// frsp f26,f1
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = double(float(ctx.f1.f64));
loc_82FBD8F4:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lhz r11,16(r18)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r18.u32 + 16);
	// rlwinm. r11,r11,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f25,3084(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f25.f64 = double(temp.f32);
	// beq 0x82fbd9f8
	if (ctx.cr0.eq) goto loc_82FBD9F8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82fbd9b0
	if (ctx.cr6.eq) goto loc_82FBD9B0;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82fbd940
	if (ctx.cr6.eq) goto loc_82FBD940;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82fbda2c
	if (!ctx.cr6.eq) goto loc_82FBDA2C;
	// fmuls f13,f27,f27
	ctx.f13.f64 = double(float(ctx.f27.f64 * ctx.f27.f64));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmr f31,f23
	ctx.f31.f64 = ctx.f23.f64;
	// lfs f0,9104(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9104);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f26,f26,f13
	ctx.f13.f64 = double(float(ctx.f26.f64 * ctx.f26.f64 + ctx.f13.f64));
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fmuls f30,f13,f0
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x82fbda2c
	goto loc_82FBDA2C;
loc_82FBD940:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82f663f8
	ctx.lr = 0x82FBD948;
	sub_82F663F8(ctx, base);
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lfs f0,360(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f30,f0
	ctx.f1.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// bl 0x82239e88
	ctx.lr = 0x82FBD95C;
	sub_82239E88(ctx, base);
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// fcmpu cr6,f31,f25
	ctx.cr6.compare(ctx.f31.f64, ctx.f25.f64);
	// bgt cr6,0x82fbd96c
	if (ctx.cr6.gt) goto loc_82FBD96C;
	// fmr f31,f25
	ctx.f31.f64 = ctx.f25.f64;
loc_82FBD96C:
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82239f68
	ctx.lr = 0x82FBD974;
	sub_82239F68(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// fmuls f30,f0,f27
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// bl 0x82239e88
	ctx.lr = 0x82FBD984;
	sub_82239E88(ctx, base);
loc_82FBD984:
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmuls f12,f30,f30
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// lfs f0,9076(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9076);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fmuls f13,f13,f26
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f26.f64));
	// fmadds f13,f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// b 0x82fbda2c
	goto loc_82FBDA2C;
loc_82FBD9B0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82f663f8
	ctx.lr = 0x82FBD9B8;
	sub_82F663F8(ctx, base);
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lfs f0,360(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f30,f0
	ctx.f1.f64 = double(float(ctx.f30.f64 + ctx.f0.f64));
	// bl 0x82239e88
	ctx.lr = 0x82FBD9CC;
	sub_82239E88(ctx, base);
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// fcmpu cr6,f31,f25
	ctx.cr6.compare(ctx.f31.f64, ctx.f25.f64);
	// bgt cr6,0x82fbd9dc
	if (ctx.cr6.gt) goto loc_82FBD9DC;
	// fmr f31,f25
	ctx.f31.f64 = ctx.f25.f64;
loc_82FBD9DC:
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82239e88
	ctx.lr = 0x82FBD9E4;
	sub_82239E88(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// fmuls f30,f0,f27
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// bl 0x82239f68
	ctx.lr = 0x82FBD9F4;
	sub_82239F68(ctx, base);
	// b 0x82fbd984
	goto loc_82FBD984;
loc_82FBD9F8:
	// fmuls f13,f27,f27
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f27.f64 * ctx.f27.f64));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r10,28(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28);
	// clrlwi. r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fmadds f13,f26,f26,f13
	ctx.f13.f64 = double(float(ctx.f26.f64 * ctx.f26.f64 + ctx.f13.f64));
	// lfs f0,9104(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9104);
	ctx.f0.f64 = double(temp.f32);
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fmuls f30,f13,f0
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// beq 0x82fbda28
	if (ctx.cr0.eq) goto loc_82FBDA28;
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// fmr f31,f23
	ctx.f31.f64 = ctx.f23.f64;
	// b 0x82fbda2c
	goto loc_82FBDA2C;
loc_82FBDA28:
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f30.f64;
loc_82FBDA2C:
	// lfs f0,32(r16)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f13,f0,f28
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// lfs f12,32(r17)
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f29,2756(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2756);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f12,f12,f29
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// fmuls f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x82fbda54
	if (ctx.cr6.gt) goto loc_82FBDA54;
	// mr r14,r15
	ctx.r14.u64 = ctx.r15.u64;
loc_82FBDA54:
	// fcmpu cr6,f13,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f29.f64);
	// bge cr6,0x82fbda64
	if (!ctx.cr6.lt) goto loc_82FBDA64;
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fdivs f28,f29,f0
	ctx.f28.f64 = double(float(ctx.f29.f64 / ctx.f0.f64));
loc_82FBDA64:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,36(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	// fmuls f28,f28,f31
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f31.f64));
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f31,2636(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2636);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x82fbdba4
	if (ctx.cr6.eq) goto loc_82FBDBA4;
	// lbz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// lbz r9,48(r25)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r25.u32 + 48);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82fbdb5c
	if (!ctx.cr6.eq) goto loc_82FBDB5C;
	// lbz r11,47(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 47);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82fbdaa4
	if (ctx.cr0.eq) goto loc_82FBDAA4;
	// clrlwi r9,r14,24
	ctx.r9.u64 = ctx.r14.u32 & 0xFF;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82fbdb5c
	if (!ctx.cr6.eq) goto loc_82FBDB5C;
loc_82FBDAA4:
	// lbz r11,45(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 45);
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82fbdb5c
	if (!ctx.cr6.eq) goto loc_82FBDB5C;
	// clrlwi. r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fbdac8
	if (ctx.cr0.eq) goto loc_82FBDAC8;
	// lbz r11,46(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 46);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82fbdb5c
	if (ctx.cr0.eq) goto loc_82FBDB5C;
loc_82FBDAC8:
	// lwz r11,28(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28);
	// rlwinm. r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fbdb58
	if (ctx.cr0.eq) goto loc_82FBDB58;
	// lfs f0,40(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fcmpu cr6,f28,f13
	ctx.cr6.compare(ctx.f28.f64, ctx.f13.f64);
	// ble cr6,0x82fbdb5c
	if (!ctx.cr6.gt) goto loc_82FBDB5C;
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fcmpu cr6,f28,f0
	ctx.cr6.compare(ctx.f28.f64, ctx.f0.f64);
	// bge cr6,0x82fbdb5c
	if (!ctx.cr6.lt) goto loc_82FBDB5C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82fbdb58
	if (ctx.cr6.eq) goto loc_82FBDB58;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,56(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,27008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27008);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f24,f0
	ctx.f0.f64 = double(float(ctx.f24.f64 * ctx.f0.f64));
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fcmpu cr6,f26,f12
	ctx.cr6.compare(ctx.f26.f64, ctx.f12.f64);
	// blt cr6,0x82fbdb5c
	if (ctx.cr6.lt) goto loc_82FBDB5C;
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f26,f13
	ctx.cr6.compare(ctx.f26.f64, ctx.f13.f64);
	// bgt cr6,0x82fbdb5c
	if (ctx.cr6.gt) goto loc_82FBDB5C;
	// lfs f13,52(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fcmpu cr6,f27,f12
	ctx.cr6.compare(ctx.f27.f64, ctx.f12.f64);
	// blt cr6,0x82fbdb3c
	if (ctx.cr6.lt) goto loc_82FBDB3C;
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f27,f12
	ctx.cr6.compare(ctx.f27.f64, ctx.f12.f64);
	// ble cr6,0x82fbdb58
	if (!ctx.cr6.gt) goto loc_82FBDB58;
loc_82FBDB3C:
	// fneg f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fcmpu cr6,f27,f12
	ctx.cr6.compare(ctx.f27.f64, ctx.f12.f64);
	// blt cr6,0x82fbdb5c
	if (ctx.cr6.lt) goto loc_82FBDB5C;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f27,f0
	ctx.cr6.compare(ctx.f27.f64, ctx.f0.f64);
	// bgt cr6,0x82fbdb5c
	if (ctx.cr6.gt) goto loc_82FBDB5C;
loc_82FBDB58:
	// mr r28,r15
	ctx.r28.u64 = ctx.r15.u64;
loc_82FBDB5C:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82fbdbcc
	if (!ctx.cr0.eq) goto loc_82FBDBCC;
	// bl 0x82fbc528
	ctx.lr = 0x82FBDB68;
	sub_82FBC528(ctx, base);
	// addi r3,r25,60
	ctx.r3.s64 = ctx.r25.s64 + 60;
	// bl 0x82fc0770
	ctx.lr = 0x82FBDB70;
	sub_82FC0770(ctx, base);
	// lwz r3,88(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 88);
	// addi r31,r25,88
	ctx.r31.s64 = ctx.r25.s64 + 88;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbdb98
	if (ctx.cr6.eq) goto loc_82FBDB98;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FBDB98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FBDB98:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// b 0x82fbdbcc
	goto loc_82FBDBCC;
loc_82FBDBA4:
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x82ef6ef8
	ctx.lr = 0x82FBDBAC;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82fbdbbc
	if (ctx.cr0.eq) goto loc_82FBDBBC;
	// bl 0x82fbc1b8
	ctx.lr = 0x82FBDBB8;
	sub_82FBC1B8(ctx, base);
	// b 0x82fbdbc0
	goto loc_82FBDBC0;
loc_82FBDBBC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82FBDBC0:
	// stw r3,36(r25)
	PPC_STORE_U32(ctx.r25.u32 + 36, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbea64
	if (ctx.cr6.eq) goto loc_82FBEA64;
loc_82FBDBCC:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82fbe92c
	if (!ctx.cr0.eq) goto loc_82FBE92C;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82f65fe0
	ctx.lr = 0x82FBDBDC;
	sub_82F65FE0(ctx, base);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82f65fe0
	ctx.lr = 0x82FBDBE4;
	sub_82F65FE0(ctx, base);
	// lwz r11,28(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fbdc00
	if (ctx.cr0.eq) goto loc_82FBDC00;
	// lwz r11,36(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 36);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// bne 0x82fbdc04
	if (!ctx.cr0.eq) goto loc_82FBDC04;
loc_82FBDC00:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82FBDC04:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fbdc1c
	if (ctx.cr0.eq) goto loc_82FBDC1C;
	// lbz r11,44(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 44);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// beq 0x82fbdc20
	if (ctx.cr0.eq) goto loc_82FBDC20;
loc_82FBDC1C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82FBDC20:
	// lwz r10,12(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 12);
	// clrlwi r24,r11,24
	ctx.r24.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82fbdc40
	if (ctx.cr6.eq) goto loc_82FBDC40;
	// lwz r11,36(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 36);
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82fbdc40
	if (!ctx.cr0.eq) goto loc_82FBDC40;
	// mr r24,r29
	ctx.r24.u64 = ctx.r29.u64;
loc_82FBDC40:
	// clrlwi. r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fbdc6c
	if (ctx.cr0.eq) goto loc_82FBDC6C;
	// lwz r11,40(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 40);
	// rlwinm. r11,r11,28,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82fbdc6c
	if (!ctx.cr0.eq) goto loc_82FBDC6C;
	// lwz r11,36(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 36);
	// rlwinm. r11,r11,20,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fbdc68
	if (ctx.cr0.eq) goto loc_82FBDC68;
	// mr r24,r29
	ctx.r24.u64 = ctx.r29.u64;
	// b 0x82fbdc6c
	goto loc_82FBDC6C;
loc_82FBDC68:
	// mr r23,r29
	ctx.r23.u64 = ctx.r29.u64;
loc_82FBDC6C:
	// lbz r20,96(r1)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi r20,0
	ctx.cr0.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq 0x82fbdca4
	if (ctx.cr0.eq) goto loc_82FBDCA4;
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// lfs f13,16(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// lfs f12,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,20(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,400(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 400, temp.u32);
	// stfs f13,416(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 416, temp.u32);
	// stfs f12,404(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 404, temp.u32);
	// stfs f11,420(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 420, temp.u32);
	// bl 0x82f66280
	ctx.lr = 0x82FBDCA4;
	sub_82F66280(ctx, base);
loc_82FBDCA4:
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82f430b0
	ctx.lr = 0x82FBDCAC;
	sub_82F430B0(ctx, base);
	// lwz r11,28(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82fbde20
	if (!ctx.cr6.gt) goto loc_82FBDE20;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
loc_82FBDCC4:
	// lwz r11,24(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r6,0(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// lwzx r31,r11,r27
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// bl 0x82fbfeb0
	ctx.lr = 0x82FBDCE0;
	sub_82FBFEB0(ctx, base);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x82fbdd8c
	if (ctx.cr6.eq) goto loc_82FBDD8C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82fbde0c
	if (ctx.cr6.eq) goto loc_82FBDE0C;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// rlwinm r30,r28,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
loc_82FBDD08:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// lha r10,0(r11)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r11.u32 + 0));
	// lha r11,2(r11)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r11.u32 + 2));
	// std r11,392(r1)
	PPC_STORE_U64(ctx.r1.u32 + 392, ctx.r11.u64);
	// lfd f13,392(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 392);
	// std r10,376(r1)
	PPC_STORE_U64(ctx.r1.u32 + 376, ctx.r10.u64);
	// lfd f0,376(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 376);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stfs f13,156(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// bl 0x82f661f0
	ctx.lr = 0x82FBDD50;
	sub_82F661F0(ctx, base);
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r3,r1,472
	ctx.r3.s64 = ctx.r1.s64 + 472;
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x82f43ef0
	ctx.lr = 0x82FBDD6C;
	sub_82F43EF0(ctx, base);
	// lwz r11,512(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bne 0x82fbdd08
	if (!ctx.cr0.eq) goto loc_82FBDD08;
	// b 0x82fbde0c
	goto loc_82FBDE0C;
loc_82FBDD8C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82fbde0c
	if (ctx.cr6.eq) goto loc_82FBDE0C;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// rlwinm r30,r28,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
loc_82FBDDAC:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,472
	ctx.r3.s64 = ctx.r1.s64 + 472;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lha r10,0(r11)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r11.u32 + 0));
	// std r10,368(r1)
	PPC_STORE_U64(ctx.r1.u32 + 368, ctx.r10.u64);
	// lha r11,2(r11)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r11.u32 + 2));
	// std r11,384(r1)
	PPC_STORE_U64(ctx.r1.u32 + 384, ctx.r11.u64);
	// lfd f13,384(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 384);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f0,368(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 368);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
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
	// bl 0x82f43ef0
	ctx.lr = 0x82FBDDF0;
	sub_82F43EF0(ctx, base);
	// lwz r11,512(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bne 0x82fbddac
	if (!ctx.cr0.eq) goto loc_82FBDDAC;
loc_82FBDE0C:
	// lwz r11,28(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fbdcc4
	if (ctx.cr6.lt) goto loc_82FBDCC4;
loc_82FBDE20:
	// clrlwi. r11,r14,24
	ctx.r11.u64 = ctx.r14.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fbe3e0
	if (ctx.cr0.eq) goto loc_82FBE3E0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82fbcc38
	ctx.lr = 0x82FBDE30;
	sub_82FBCC38(ctx, base);
	// lhz r9,16(r18)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r18.u32 + 16);
	// rlwinm r11,r9,0,24,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC0;
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// beq cr6,0x82fbde58
	if (ctx.cr6.eq) goto loc_82FBDE58;
	// addi r11,r11,-128
	ctx.r11.s64 = ctx.r11.s64 + -128;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// b 0x82fbde5c
	goto loc_82FBDE5C;
loc_82FBDE58:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_82FBDE5C:
	// rlwinm r11,r9,30,24,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0xC0;
	// stw r10,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r10.u32);
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// beq cr6,0x82fbde84
	if (ctx.cr6.eq) goto loc_82FBDE84;
	// addi r11,r11,-128
	ctx.r11.s64 = ctx.r11.s64 + -128;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x82fbde88
	goto loc_82FBDE88;
loc_82FBDE84:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82FBDE88:
	// rlwinm r10,r9,0,26,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x30;
	// stw r11,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r11.u32);
	// li r19,3
	ctx.r19.s64 = 3;
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// beq cr6,0x82fbdeb4
	if (ctx.cr6.eq) goto loc_82FBDEB4;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// beq cr6,0x82fbdeac
	if (ctx.cr6.eq) goto loc_82FBDEAC;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// b 0x82fbdeb8
	goto loc_82FBDEB8;
loc_82FBDEAC:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82fbdeb8
	goto loc_82FBDEB8;
loc_82FBDEB4:
	// li r11,4
	ctx.r11.s64 = 4;
loc_82FBDEB8:
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r11,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bne cr6,0x82fbded0
	if (!ctx.cr6.eq) goto loc_82FBDED0;
	// lfs f0,20(r18)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,252(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
loc_82FBDED0:
	// fmuls f0,f24,f22
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f24.f64 * ctx.f22.f64));
	// stfs f0,280(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// clrlwi. r31,r24,24
	ctx.r31.u64 = ctx.r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82fbdf0c
	if (ctx.cr0.eq) goto loc_82FBDF0C;
	// lfs f0,32(r16)
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// fdivs f0,f24,f0
	ctx.f0.f64 = double(float(ctx.f24.f64 / ctx.f0.f64));
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// bne cr6,0x82fbdef8
	if (!ctx.cr6.eq) goto loc_82FBDEF8;
	// fdivs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f30.f64));
loc_82FBDEF8:
	// fmsubs f13,f28,f24,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f28.f64 * ctx.f24.f64 - ctx.f0.f64));
	// stfs f0,276(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// stfs f0,272(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// fsel f13,f13,f13,f25
	ctx.f13.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : ctx.f25.f64;
	// b 0x82fbdf18
	goto loc_82FBDF18;
loc_82FBDF0C:
	// stfs f25,276(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// fmuls f13,f28,f24
	ctx.f13.f64 = double(float(ctx.f28.f64 * ctx.f24.f64));
	// stfs f25,272(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
loc_82FBDF18:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r5,0(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lfs f0,3056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3056);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,264(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// stfs f0,268(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// bl 0x82fd58b8
	ctx.lr = 0x82FBDF3C;
	sub_82FD58B8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82fbe1c0
	if (ctx.cr6.eq) goto loc_82FBE1C0;
	// stb r23,46(r25)
	PPC_STORE_U8(ctx.r25.u32 + 46, ctx.r23.u8);
	// clrlwi. r10,r23,24
	ctx.r10.u64 = ctx.r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r31,-1
	ctx.r31.s64 = -1;
	// mr r24,r29
	ctx.r24.u64 = ctx.r29.u64;
	// mr r23,r29
	ctx.r23.u64 = ctx.r29.u64;
	// lwz r11,8(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lbz r9,115(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 115);
	// lbz r8,113(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stb r9,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r9.u8);
	// stb r8,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r8.u8);
	// bne 0x82fbdfa0
	if (!ctx.cr0.eq) goto loc_82FBDFA0;
	// lwz r11,12(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fbdfa0
	if (!ctx.cr6.eq) goto loc_82FBDFA0;
	// addi r28,r25,60
	ctx.r28.s64 = ctx.r25.s64 + 60;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82fc0c58
	ctx.lr = 0x82FBDF94;
	sub_82FC0C58(ctx, base);
	// lwz r22,112(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// clrlwi r21,r22,8
	ctx.r21.u64 = ctx.r22.u32 & 0xFFFFFF;
	// b 0x82fbdfdc
	goto loc_82FBDFDC;
loc_82FBDFA0:
	// addi r28,r25,60
	ctx.r28.s64 = ctx.r25.s64 + 60;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82fc0c58
	ctx.lr = 0x82FBDFB0;
	sub_82FC0C58(ctx, base);
	// lwz r11,12(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fbdfcc
	if (ctx.cr6.eq) goto loc_82FBDFCC;
	// lis r23,255
	ctx.r23.s64 = 16711680;
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// ori r23,r23,65535
	ctx.r23.u64 = ctx.r23.u64 | 65535;
	// b 0x82fbdfd4
	goto loc_82FBDFD4;
loc_82FBDFCC:
	// lis r24,-256
	ctx.r24.s64 = -16777216;
	// mr r23,r29
	ctx.r23.u64 = ctx.r29.u64;
loc_82FBDFD4:
	// lwz r22,112(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r21,r22
	ctx.r21.u64 = ctx.r22.u64;
loc_82FBDFDC:
	// lwz r11,36(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// stw r15,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r15.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// lwz r11,36(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	// lwz r10,12(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 12);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// stw r10,208(r11)
	PPC_STORE_U32(ctx.r11.u32 + 208, ctx.r10.u32);
	// lwz r4,308(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r4,65534
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65534, ctx.xer);
	// bgt cr6,0x82fbe2f8
	if (ctx.cr6.gt) goto loc_82FBE2F8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82fc0608
	ctx.lr = 0x82FBE01C;
	sub_82FC0608(ctx, base);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x82fbe10c
	if (ctx.cr6.eq) goto loc_82FBE10C;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fbe1b8
	if (ctx.cr6.eq) goto loc_82FBE1B8;
loc_82FBE034:
	// lwz r10,320(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// rlwinm r9,r30,28,4,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 28) & 0xFFFFFFC;
	// clrlwi r11,r30,26
	ctx.r11.u64 = ctx.r30.u32 & 0x3F;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// bl 0x82f661f0
	ctx.lr = 0x82FBE06C;
	sub_82F661F0(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// fmr f2,f26
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f26.f64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x82fbc258
	ctx.lr = 0x82FBE080;
	sub_82FBC258(ctx, base);
	// lwz r8,16(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mullw r10,r10,r30
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r31,8(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x82fbe0b0
	if (ctx.cr6.eq) goto loc_82FBE0B0;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// bne cr6,0x82fbe0b8
	if (!ctx.cr6.eq) goto loc_82FBE0B8;
loc_82FBE0B0:
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// b 0x82fbe0bc
	goto loc_82FBE0BC;
loc_82FBE0B8:
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
loc_82FBE0BC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f2,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FBE0DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FBE0F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fbe034
	if (ctx.cr6.lt) goto loc_82FBE034;
	// b 0x82fbe1b8
	goto loc_82FBE1B8;
loc_82FBE10C:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fbe1b8
	if (ctx.cr6.eq) goto loc_82FBE1B8;
loc_82FBE118:
	// lwz r10,320(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// rlwinm r8,r31,28,4,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 28) & 0xFFFFFFC;
	// clrlwi r11,r31,26
	ctx.r11.u64 = ctx.r31.u32 & 0x3F;
	// lwz r7,16(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r9,12(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// lwzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwz r8,4(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r30,8(r7)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r10,r8,r31
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r31.s32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r27,r10,r9
	ctx.r27.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// beq cr6,0x82fbe160
	if (ctx.cr6.eq) goto loc_82FBE160;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// bne cr6,0x82fbe168
	if (!ctx.cr6.eq) goto loc_82FBE168;
loc_82FBE160:
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// b 0x82fbe16c
	goto loc_82FBE16C;
loc_82FBE168:
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
loc_82FBE16C:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f2,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FBE18C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FBE1A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fbe118
	if (ctx.cr6.lt) goto loc_82FBE118;
loc_82FBE1B8:
	// stb r15,45(r25)
	PPC_STORE_U8(ctx.r25.u32 + 45, ctx.r15.u8);
	// b 0x82fbe2f8
	goto loc_82FBE2F8;
loc_82FBE1C0:
	// addi r30,r25,60
	ctx.r30.s64 = ctx.r25.s64 + 60;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fc0c58
	ctx.lr = 0x82FBE1D0;
	sub_82FC0C58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,308(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// bl 0x82fc0608
	ctx.lr = 0x82FBE1DC;
	sub_82FC0608(ctx, base);
	// lwz r11,36(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// stw r15,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r15.u32);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// beq cr6,0x82fbe294
	if (ctx.cr6.eq) goto loc_82FBE294;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fbe2f8
	if (ctx.cr6.eq) goto loc_82FBE2F8;
loc_82FBE200:
	// lwz r10,320(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// rlwinm r9,r31,28,4,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 28) & 0xFFFFFFC;
	// clrlwi r11,r31,26
	ctx.r11.u64 = ctx.r31.u32 & 0x3F;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,176(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// bl 0x82f661f0
	ctx.lr = 0x82FBE238;
	sub_82F661F0(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// fmr f2,f26
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f26.f64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x82fbc258
	ctx.lr = 0x82FBE24C;
	sub_82FBC258(ctx, base);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lfs f2,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f2.f64 = double(temp.f32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lfs f1,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// mullw r10,r10,r31
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r31.s32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82FBE280;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fbe200
	if (ctx.cr6.lt) goto loc_82FBE200;
	// b 0x82fbe2f8
	goto loc_82FBE2F8;
loc_82FBE294:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fbe2f8
	if (ctx.cr6.eq) goto loc_82FBE2F8;
loc_82FBE29C:
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm r8,r31,28,4,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 28) & 0xFFFFFFC;
	// lwz r6,320(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// clrlwi r9,r31,26
	ctx.r9.u64 = ctx.r31.u32 & 0x3F;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r7,0
	ctx.r7.s64 = 0;
	// mulli r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 * 12;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwzx r8,r8,r6
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// mullw r10,r5,r31
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r31.s32);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfsx f1,r8,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f1.f64 = double(temp.f32);
	// lwz r6,4(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lfs f2,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82FBE2E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fbe29c
	if (ctx.cr6.lt) goto loc_82FBE29C;
loc_82FBE2F8:
	// lwz r11,64(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fbe39c
	if (ctx.cr6.eq) goto loc_82FBE39C;
	// lwz r11,36(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	// lwz r30,328(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// addi r31,r11,212
	ctx.r31.s64 = ctx.r11.s64 + 212;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82efc418
	ctx.lr = 0x82FBE318;
	sub_82EFC418(ctx, base);
	// add r4,r3,r30
	ctx.r4.u64 = ctx.r3.u64 + ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fc09b0
	ctx.lr = 0x82FBE324;
	sub_82FC09B0(ctx, base);
	// lwz r11,328(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fbe39c
	if (ctx.cr6.eq) goto loc_82FBE39C;
loc_82FBE334:
	// lwz r9,340(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// rlwinm r8,r31,28,4,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 28) & 0xFFFFFFC;
	// clrlwi r11,r31,26
	ctx.r11.u64 = ctx.r31.u32 & 0x3F;
	// lwz r10,36(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r30,r10,212
	ctx.r30.s64 = ctx.r10.s64 + 212;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r28,r9,16
	ctx.r28.u64 = ctx.r9.u32 & 0xFFFF;
	// clrlwi r27,r11,16
	ctx.r27.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x82fc0a48
	ctx.lr = 0x82FBE374;
	sub_82FC0A48(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82fc0a48
	ctx.lr = 0x82FBE380;
	sub_82FC0A48(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fc0a48
	ctx.lr = 0x82FBE38C;
	sub_82FC0A48(ctx, base);
	// lwz r11,328(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fbe334
	if (ctx.cr6.lt) goto loc_82FBE334;
loc_82FBE39C:
	// lwz r11,36(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	// addi r3,r11,212
	ctx.r3.s64 = ctx.r11.s64 + 212;
	// bl 0x82efc418
	ctx.lr = 0x82FBE3A8;
	sub_82EFC418(ctx, base);
	// lwz r11,4(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// divwu r10,r3,r19
	ctx.r10.u32 = ctx.r3.u32 / ctx.r19.u32;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fbe3c4
	if (ctx.cr6.eq) goto loc_82FBE3C4;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
loc_82FBE3C4:
	// addi r3,r1,328
	ctx.r3.s64 = ctx.r1.s64 + 328;
	// bl 0x82fbc7b8
	ctx.lr = 0x82FBE3CC;
	sub_82FBC7B8(ctx, base);
	// addi r3,r1,308
	ctx.r3.s64 = ctx.r1.s64 + 308;
	// bl 0x82fbc7b8
	ctx.lr = 0x82FBE3D4;
	sub_82FBC7B8(ctx, base);
	// addi r3,r1,284
	ctx.r3.s64 = ctx.r1.s64 + 284;
	// bl 0x82fbc7b8
	ctx.lr = 0x82FBE3DC;
	sub_82FBC7B8(ctx, base);
	// b 0x82fbe904
	goto loc_82FBE904;
loc_82FBE3E0:
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// bl 0x82fbccd8
	ctx.lr = 0x82FBE3E8;
	sub_82FBCCD8(ctx, base);
	// li r11,64
	ctx.r11.s64 = 64;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// stfs f31,212(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stw r29,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r29.u32);
	// stw r29,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r29.u32);
	// stw r29,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r29.u32);
	// stw r29,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r29.u32);
	// stw r11,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r11.u32);
	// stb r29,236(r1)
	PPC_STORE_U8(ctx.r1.u32 + 236, ctx.r29.u8);
	// bl 0x82f430b0
	ctx.lr = 0x82FBE410;
	sub_82F430B0(ctx, base);
	// lfs f13,32(r16)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fdivs f13,f24,f13
	ctx.f13.f64 = double(float(ctx.f24.f64 / ctx.f13.f64));
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// lfs f0,3148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3148);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bne cr6,0x82fbe430
	if (!ctx.cr6.eq) goto loc_82FBE430;
	// fdivs f31,f31,f30
	ctx.f31.f64 = double(float(ctx.f31.f64 / ctx.f30.f64));
loc_82FBE430:
	// clrlwi. r30,r24,24
	ctx.r30.u64 = ctx.r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// fmuls f0,f28,f24
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f28.f64 * ctx.f24.f64));
	// beq 0x82fbe454
	if (ctx.cr0.eq) goto loc_82FBE454;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,3140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3140);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f31,f13,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f23
	ctx.cr6.compare(ctx.f0.f64, ctx.f23.f64);
	// bge cr6,0x82fbe454
	if (!ctx.cr6.lt) goto loc_82FBE454;
	// fmr f0,f23
	ctx.f0.f64 = ctx.f23.f64;
loc_82FBE454:
	// lhz r9,16(r18)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r18.u32 + 16);
	// li r19,3
	ctx.r19.s64 = 3;
	// rlwinm r8,r9,0,26,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x30;
	// cmpwi cr6,r8,16
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 16, ctx.xer);
	// beq cr6,0x82fbe480
	if (ctx.cr6.eq) goto loc_82FBE480;
	// cmpwi cr6,r8,32
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 32, ctx.xer);
	// beq cr6,0x82fbe478
	if (ctx.cr6.eq) goto loc_82FBE478;
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// b 0x82fbe484
	goto loc_82FBE484;
loc_82FBE478:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// b 0x82fbe484
	goto loc_82FBE484;
loc_82FBE480:
	// li r10,4
	ctx.r10.s64 = 4;
loc_82FBE484:
	// rlwinm r11,r9,0,24,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC0;
	// stw r10,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r10.u32);
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// beq cr6,0x82fbe4ac
	if (ctx.cr6.eq) goto loc_82FBE4AC;
	// addi r11,r11,-128
	ctx.r11.s64 = ctx.r11.s64 + -128;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// b 0x82fbe4b0
	goto loc_82FBE4B0;
loc_82FBE4AC:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_82FBE4B0:
	// rlwinm r11,r9,30,24,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0xC0;
	// stw r10,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r10.u32);
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// beq cr6,0x82fbe4d8
	if (ctx.cr6.eq) goto loc_82FBE4D8;
	// addi r11,r11,-128
	ctx.r11.s64 = ctx.r11.s64 + -128;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x82fbe4dc
	goto loc_82FBE4DC;
loc_82FBE4D8:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82FBE4DC:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// lfs f13,3056(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3056);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// fcmpu cr6,f0,f25
	ctx.cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// bge cr6,0x82fbe4fc
	if (!ctx.cr6.lt) goto loc_82FBE4FC;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_82FBE4FC:
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// stfs f0,196(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bne cr6,0x82fbe514
	if (!ctx.cr6.eq) goto loc_82FBE514;
	// lfs f0,20(r18)
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,212(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
loc_82FBE514:
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// fmuls f1,f24,f22
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f24.f64 * ctx.f22.f64));
	// bl 0x82fbf9a0
	ctx.lr = 0x82FBE520;
	sub_82FBF9A0(ctx, base);
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x82fbf9c0
	ctx.lr = 0x82FBE528;
	sub_82FBF9C0(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,544
	ctx.r6.s64 = ctx.r1.s64 + 544;
	// lwz r5,0(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82fb8870
	ctx.lr = 0x82FBE540;
	sub_82FB8870(ctx, base);
	// stw r29,864(r1)
	PPC_STORE_U32(ctx.r1.u32 + 864, ctx.r29.u32);
	// lwz r11,28(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 28);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stb r15,868(r1)
	PPC_STORE_U8(ctx.r1.u32 + 868, ctx.r15.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r11,869(r1)
	PPC_STORE_U8(ctx.r1.u32 + 869, ctx.r11.u8);
	// addi r4,r1,544
	ctx.r4.s64 = ctx.r1.s64 + 544;
	// stb r11,870(r1)
	PPC_STORE_U8(ctx.r1.u32 + 870, ctx.r11.u8);
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// stb r11,871(r1)
	PPC_STORE_U8(ctx.r1.u32 + 871, ctx.r11.u8);
	// bl 0x82fd04d8
	ctx.lr = 0x82FBE56C;
	sub_82FD04D8(ctx, base);
	// lwz r11,1148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fbe8e4
	if (ctx.cr6.eq) goto loc_82FBE8E4;
	// lwz r3,88(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 88);
	// addi r31,r25,88
	ctx.r31.s64 = ctx.r25.s64 + 88;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbe5a0
	if (ctx.cr6.eq) goto loc_82FBE5A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FBE5A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FBE5A0:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stb r29,45(r25)
	PPC_STORE_U8(ctx.r25.u32 + 45, ctx.r29.u8);
	// beq cr6,0x82fbe750
	if (ctx.cr6.eq) goto loc_82FBE750;
	// lwz r31,12(r18)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r18.u32 + 12);
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// beq cr6,0x82fbe5e8
	if (ctx.cr6.eq) goto loc_82FBE5E8;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82f43978
	ctx.lr = 0x82FBE5D8;
	sub_82F43978(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x82fb9358
	ctx.lr = 0x82FBE5E4;
	sub_82FB9358(ctx, base);
	// b 0x82fbe62c
	goto loc_82FBE62C;
loc_82FBE5E8:
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// bl 0x82fb9300
	ctx.lr = 0x82FBE5F0;
	sub_82FB9300(ctx, base);
	// lwz r11,8(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addi r31,r10,1
	ctx.r31.s64 = ctx.r10.s64 + 1;
	// stw r11,676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 676, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82f43978
	ctx.lr = 0x82FBE60C;
	sub_82F43978(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mulli r10,r31,48
	ctx.r10.s64 = ctx.r31.s64 * 48;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r1,672
	ctx.r4.s64 = ctx.r1.s64 + 672;
	// addi r3,r11,-48
	ctx.r3.s64 = ctx.r11.s64 + -48;
	// bl 0x82fb9358
	ctx.lr = 0x82FBE624;
	sub_82FB9358(ctx, base);
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// bl 0x82fb8fd8
	ctx.lr = 0x82FBE62C;
	sub_82FB8FD8(ctx, base);
loc_82FBE62C:
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r4,r1,864
	ctx.r4.s64 = ctx.r1.s64 + 864;
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// bl 0x82fd0790
	ctx.lr = 0x82FBE63C;
	sub_82FD0790(ctx, base);
	// lwz r11,12(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fbe654
	if (ctx.cr6.eq) goto loc_82FBE654;
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r11,860(r1)
	PPC_STORE_U32(ctx.r1.u32 + 860, ctx.r11.u32);
loc_82FBE654:
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// bl 0x82fd0568
	ctx.lr = 0x82FBE664;
	sub_82FD0568(ctx, base);
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// bl 0x82fd05a8
	ctx.lr = 0x82FBE66C;
	sub_82FD05A8(ctx, base);
	// cmplwi cr6,r3,65534
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 65534, ctx.xer);
	// bgt cr6,0x82fbe72c
	if (ctx.cr6.gt) goto loc_82FBE72C;
	// clrlwi. r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r23,46(r25)
	PPC_STORE_U8(ctx.r25.u32 + 46, ctx.r23.u8);
	// bne 0x82fbe690
	if (!ctx.cr0.eq) goto loc_82FBE690;
	// lwz r11,12(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 12);
	// li r4,3
	ctx.r4.s64 = 3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fbe694
	if (ctx.cr6.eq) goto loc_82FBE694;
loc_82FBE690:
	// li r4,4
	ctx.r4.s64 = 4;
loc_82FBE694:
	// addi r31,r25,60
	ctx.r31.s64 = ctx.r25.s64 + 60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fc0c58
	ctx.lr = 0x82FBE6A0;
	sub_82FC0C58(ctx, base);
	// lwz r5,36(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// beq cr6,0x82fbe6c0
	if (ctx.cr6.eq) goto loc_82FBE6C0;
	// addi r6,r1,432
	ctx.r6.s64 = ctx.r1.s64 + 432;
	// bl 0x82fd14b8
	ctx.lr = 0x82FBE6BC;
	sub_82FD14B8(ctx, base);
	// b 0x82fbe6c8
	goto loc_82FBE6C8;
loc_82FBE6C0:
	// fmr f1,f23
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f23.f64;
	// bl 0x82fd1330
	ctx.lr = 0x82FBE6C8;
	sub_82FD1330(ctx, base);
loc_82FBE6C8:
	// lwz r11,36(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,212
	ctx.r3.s64 = ctx.r11.s64 + 212;
	// bl 0x82efc418
	ctx.lr = 0x82FBE6D8;
	sub_82EFC418(ctx, base);
	// lwz r11,4(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// divwu r10,r3,r19
	ctx.r10.u32 = ctx.r3.u32 / ctx.r19.u32;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fbe6f4
	if (ctx.cr6.eq) goto loc_82FBE6F4;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
loc_82FBE6F4:
	// clrlwi. r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fbe72c
	if (ctx.cr0.eq) goto loc_82FBE72C;
	// stb r15,45(r25)
	PPC_STORE_U8(ctx.r25.u32 + 45, ctx.r15.u8);
	// lwz r11,12(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fbe72c
	if (ctx.cr6.eq) goto loc_82FBE72C;
	// lwz r11,36(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	// li r31,-1
	ctx.r31.s64 = -1;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// stw r15,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r15.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// lwz r11,36(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	// stw r15,208(r11)
	PPC_STORE_U32(ctx.r11.u32 + 208, ctx.r15.u32);
loc_82FBE72C:
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// bl 0x82fd08f8
	ctx.lr = 0x82FBE734;
	sub_82FD08F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82f43978
	ctx.lr = 0x82FBE740;
	sub_82F43978(ctx, base);
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbe750
	if (ctx.cr6.eq) goto loc_82FBE750;
	// bl 0x82ef6f38
	ctx.lr = 0x82FBE750;
	sub_82EF6F38(ctx, base);
loc_82FBE750:
	// lbz r11,45(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 45);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82fbe8e4
	if (!ctx.cr0.eq) goto loc_82FBE8E4;
	// addi r30,r25,60
	ctx.r30.s64 = ctx.r25.s64 + 60;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fc0c58
	ctx.lr = 0x82FBE76C;
	sub_82FC0C58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,1148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1148);
	// bl 0x82fc0608
	ctx.lr = 0x82FBE778;
	sub_82FC0608(ctx, base);
	// lwz r11,1148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1148);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// beq cr6,0x82fbe820
	if (ctx.cr6.eq) goto loc_82FBE820;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fbe880
	if (ctx.cr6.eq) goto loc_82FBE880;
loc_82FBE790:
	// lwz r10,1160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1160);
	// rlwinm r9,r31,24,8,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 24) & 0xFFFFFC;
	// rlwinm r11,r31,3,19,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0x1FF8;
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,168(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// bl 0x82f661f0
	ctx.lr = 0x82FBE7C4;
	sub_82F661F0(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// fmr f2,f26
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f26.f64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x82fbc258
	ctx.lr = 0x82FBE7D8;
	sub_82FBC258(ctx, base);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lfs f2,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f2.f64 = double(temp.f32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lfs f1,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// mullw r10,r10,r31
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r31.s32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82FBE80C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1148);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fbe790
	if (ctx.cr6.lt) goto loc_82FBE790;
	// b 0x82fbe880
	goto loc_82FBE880;
loc_82FBE820:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fbe880
	if (ctx.cr6.eq) goto loc_82FBE880;
loc_82FBE828:
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm r8,r31,24,8,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 24) & 0xFFFFFC;
	// lwz r6,1160(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1160);
	// rlwinm r9,r31,3,19,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0x1FF8;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mullw r10,r5,r31
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r31.s32);
	// lwzx r8,r8,r6
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfsx f1,r8,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f1.f64 = double(temp.f32);
	// lwz r6,4(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lfs f2,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82FBE870;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1148);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fbe828
	if (ctx.cr6.lt) goto loc_82FBE828;
loc_82FBE880:
	// lwz r11,1240(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1240);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fbe8bc
	if (ctx.cr6.eq) goto loc_82FBE8BC;
loc_82FBE890:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// bl 0x82fcf978
	ctx.lr = 0x82FBE89C;
	sub_82FCF978(ctx, base);
	// addi r5,r1,864
	ctx.r5.s64 = ctx.r1.s64 + 864;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,36(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	// bl 0x82fbc468
	ctx.lr = 0x82FBE8AC;
	sub_82FBC468(ctx, base);
	// lwz r11,1240(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1240);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fbe890
	if (ctx.cr6.lt) goto loc_82FBE890;
loc_82FBE8BC:
	// lwz r11,36(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	// addi r3,r11,212
	ctx.r3.s64 = ctx.r11.s64 + 212;
	// bl 0x82efc418
	ctx.lr = 0x82FBE8C8;
	sub_82EFC418(ctx, base);
	// lwz r11,4(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// divwu r10,r3,r19
	ctx.r10.u32 = ctx.r3.u32 / ctx.r19.u32;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fbe8e4
	if (ctx.cr6.eq) goto loc_82FBE8E4;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
loc_82FBE8E4:
	// addi r3,r1,572
	ctx.r3.s64 = ctx.r1.s64 + 572;
	// bl 0x82fbc7b8
	ctx.lr = 0x82FBE8EC;
	sub_82FBC7B8(ctx, base);
	// addi r3,r1,552
	ctx.r3.s64 = ctx.r1.s64 + 552;
	// bl 0x82fbc7b8
	ctx.lr = 0x82FBE8F4;
	sub_82FBC7B8(ctx, base);
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82fbc7b8
	ctx.lr = 0x82FBE8FC;
	sub_82FBC7B8(ctx, base);
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// bl 0x82fbcf30
	ctx.lr = 0x82FBE904;
	sub_82FBCF30(ctx, base);
loc_82FBE904:
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// stfs f28,40(r25)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r25.u32 + 40, temp.u32);
	// stfs f27,52(r25)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r25.u32 + 52, temp.u32);
	// stb r14,47(r25)
	PPC_STORE_U8(ctx.r25.u32 + 47, ctx.r14.u8);
	// stfs f26,56(r25)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r25.u32 + 56, temp.u32);
	// addi r3,r1,492
	ctx.r3.s64 = ctx.r1.s64 + 492;
	// stb r11,48(r25)
	PPC_STORE_U8(ctx.r25.u32 + 48, ctx.r11.u8);
	// bl 0x82fbc7b8
	ctx.lr = 0x82FBE924;
	sub_82FBC7B8(ctx, base);
	// addi r3,r1,472
	ctx.r3.s64 = ctx.r1.s64 + 472;
	// bl 0x82fbc7b8
	ctx.lr = 0x82FBE92C;
	sub_82FBC7B8(ctx, base);
loc_82FBE92C:
	// lwz r11,64(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fbea64
	if (ctx.cr6.eq) goto loc_82FBEA64;
	// addi r11,r25,88
	ctx.r11.s64 = ctx.r25.s64 + 88;
	// stb r29,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r29.u8);
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// addi r3,r25,60
	ctx.r3.s64 = ctx.r25.s64 + 60;
	// lwz r4,20(r17)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20);
	// bl 0x82fc0478
	ctx.lr = 0x82FBE954;
	sub_82FC0478(ctx, base);
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x82fb9300
	ctx.lr = 0x82FBE95C;
	sub_82FB9300(ctx, base);
	// lwz r11,12(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 12);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f1,f23
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f23.f64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fbe984
	if (ctx.cr6.eq) goto loc_82FBE984;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// fdivs f1,f23,f24
	ctx.f1.f64 = double(float(ctx.f23.f64 / ctx.f24.f64));
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// b 0x82fbe99c
	goto loc_82FBE99C;
loc_82FBE984:
	// lbz r11,45(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 45);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82fbe99c
	if (!ctx.cr0.eq) goto loc_82FBE99C;
	// lwz r11,8(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	// addi r5,r1,624
	ctx.r5.s64 = ctx.r1.s64 + 624;
	// stw r11,628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 628, ctx.r11.u32);
loc_82FBE99C:
	// lbz r11,45(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 45);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,64(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 64);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// lwz r3,36(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	// stb r11,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r11.u8);
	// bl 0x82fbc598
	ctx.lr = 0x82FBE9BC;
	sub_82FBC598(ctx, base);
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x82fb8fd8
	ctx.lr = 0x82FBE9C4;
	sub_82FB8FD8(ctx, base);
	// b 0x82fbea64
	goto loc_82FBEA64;
loc_82FBE9C8:
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lwz r4,20(r17)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FBE9E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,20(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20);
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,4(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r5,r11,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FBEA08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,28(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82fbea64
	if (!ctx.cr6.gt) goto loc_82FBEA64;
	// lwz r11,24(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82FBEA20:
	// lwz r3,20(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20);
	// rlwinm r4,r29,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 31) & 0x7FFFFFFF;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// lwz r11,64(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FBEA44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,24(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// add r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lwz r10,28(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82fbea20
	if (ctx.cr6.lt) goto loc_82FBEA20;
loc_82FBEA64:
	// addi r1,r1,1632
	ctx.r1.s64 = ctx.r1.s64 + 1632;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82ca753c
	ctx.lr = 0x82FBEA70;
	sub_82CA753C(ctx, base);
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FBEA74"))) PPC_WEAK_FUNC(sub_82FBEA74);
PPC_FUNC_IMPL(__imp__sub_82FBEA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBEA78"))) PPC_WEAK_FUNC(sub_82FBEA78);
PPC_FUNC_IMPL(__imp__sub_82FBEA78) {
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
	// bl 0x82fbd3d8
	ctx.lr = 0x82FBEA9C;
	sub_82FBD3D8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbeaac
	if (ctx.cr6.eq) goto loc_82FBEAAC;
	// bl 0x82ef6f38
	ctx.lr = 0x82FBEAAC;
	sub_82EF6F38(ctx, base);
loc_82FBEAAC:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fbeabc
	if (ctx.cr0.eq) goto loc_82FBEABC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82FBEABC;
	sub_82EF6F38(ctx, base);
loc_82FBEABC:
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

__attribute__((alias("__imp__sub_82FBEAD8"))) PPC_WEAK_FUNC(sub_82FBEAD8);
PPC_FUNC_IMPL(__imp__sub_82FBEAD8) {
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
	// bl 0x82fbd310
	ctx.lr = 0x82FBEAFC;
	sub_82FBD310(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbeb0c
	if (ctx.cr6.eq) goto loc_82FBEB0C;
	// bl 0x82ef6f38
	ctx.lr = 0x82FBEB0C;
	sub_82EF6F38(ctx, base);
loc_82FBEB0C:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fbeb1c
	if (ctx.cr0.eq) goto loc_82FBEB1C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82FBEB1C;
	sub_82EF6F38(ctx, base);
loc_82FBEB1C:
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

__attribute__((alias("__imp__sub_82FBEB38"))) PPC_WEAK_FUNC(sub_82FBEB38);
PPC_FUNC_IMPL(__imp__sub_82FBEB38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb8
	ctx.lr = 0x82FBEB40;
	sub_82CA2BB8(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r17,r10
	ctx.r17.u64 = ctx.r10.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// lwz r7,0(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r19,r8
	ctx.r19.u64 = ctx.r8.u64;
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// lfs f0,3080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f0.f64 = double(temp.f32);
	// mr r18,r9
	ctx.r18.u64 = ctx.r9.u64;
	// lfs f13,3084(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f13.f64 = double(temp.f32);
	// li r9,16
	ctx.r9.s64 = 16;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r26,20(r7)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// lvx128 v62,r0,r21
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r21.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lvx128 v63,r0,r8
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v62,v63,v62
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v62.f32, _mm_mul_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v62.f32)));
	// lvx128 v61,r21,r9
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r21.u32 + ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// vmulfp128 v63,v63,v61
	_mm_store_ps(ctx.v63.f32, _mm_mul_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v61.f32)));
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stvx128 v62,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FBEBD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FBEBEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r20,0
	ctx.r20.s64 = 0;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// bgt cr6,0x82fbec0c
	if (ctx.cr6.gt) goto loc_82FBEC0C;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lfs f13,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2364(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2364);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82fbec10
	if (!ctx.cr6.lt) goto loc_82FBEC10;
loc_82FBEC0C:
	// li r20,1
	ctx.r20.s64 = 1;
loc_82FBEC10:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// li r24,1
	ctx.r24.s64 = 1;
	// li r16,0
	ctx.r16.s64 = 0;
	// li r22,0
	ctx.r22.s64 = 0;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82fbee40
	if (!ctx.cr6.gt) goto loc_82FBEE40;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82FBEC30:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82fbec94
	if (ctx.cr6.eq) goto loc_82FBEC94;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FBEC5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r8,108(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r9,0(r19)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mulli r10,r11,464
	ctx.r10.s64 = ctx.r11.s64 * 464;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,448(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 448);
	// mulli r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 * 48;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x82fbb820
	ctx.lr = 0x82FBEC90;
	sub_82FBB820(ctx, base);
	// b 0x82fbee28
	goto loc_82FBEE28;
loc_82FBEC94:
	// clrlwi. r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fbed0c
	if (ctx.cr0.eq) goto loc_82FBED0C;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r9,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r9.u8);
	// beq cr6,0x82fbeccc
	if (ctx.cr6.eq) goto loc_82FBECCC;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x82fc0478
	ctx.lr = 0x82FBECC8;
	sub_82FC0478(ctx, base);
	// b 0x82fbed08
	goto loc_82FBED08;
loc_82FBECCC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fbecdc
	if (ctx.cr6.eq) goto loc_82FBECDC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82FBECDC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fbed08
	if (ctx.cr6.eq) goto loc_82FBED08;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FBED08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FBED08:
	// li r24,0
	ctx.r24.s64 = 0;
loc_82FBED0C:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fbed20
	if (ctx.cr6.eq) goto loc_82FBED20;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82FBED20:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwzx r11,r28,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82fbeda8
	if (!ctx.cr6.gt) goto loc_82FBEDA8;
	// rlwinm r29,r22,8,0,23
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 8) & 0xFFFFFF00;
loc_82FBED38:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82fbeda8
	if (!ctx.cr6.lt) goto loc_82FBEDA8;
	// lwz r6,4(r19)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82fbed58
	if (ctx.cr6.eq) goto loc_82FBED58;
	// lwz r5,0(r19)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// b 0x82fbed5c
	goto loc_82FBED5C;
loc_82FBED58:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82FBED5C:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lbz r8,21(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lfs f1,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// add r3,r9,r29
	ctx.r3.u64 = ctx.r9.u64 + ctx.r29.u64;
	// stb r8,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82fbc598
	ctx.lr = 0x82FBED8C;
	sub_82FBC598(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r29,r29,256
	ctx.r29.s64 = ctx.r29.s64 + 256;
	// lwzx r11,r28,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fbed38
	if (ctx.cr6.lt) goto loc_82FBED38;
loc_82FBEDA8:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fbee2c
	if (ctx.cr6.eq) goto loc_82FBEE2C;
	// li r29,0
	ctx.r29.s64 = 0;
	// mulli r30,r23,96
	ctx.r30.s64 = ctx.r23.s64 * 96;
loc_82FBEDC4:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82fbee28
	if (!ctx.cr6.lt) goto loc_82FBEE28;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// lwz r8,0(r18)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r9,23(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 23);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lfs f2,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// stb r17,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r17.u8);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// bl 0x82fbd7b8
	ctx.lr = 0x82FBEE08;
	sub_82FBD7B8(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r30,r30,96
	ctx.r30.s64 = ctx.r30.s64 + 96;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fbedc4
	if (ctx.cr6.lt) goto loc_82FBEDC4;
loc_82FBEE28:
	// li r24,1
	ctx.r24.s64 = 1;
loc_82FBEE2C:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// addi r28,r28,20
	ctx.r28.s64 = ctx.r28.s64 + 20;
	// cmplw cr6,r16,r11
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fbec30
	if (ctx.cr6.lt) goto loc_82FBEC30;
loc_82FBEE40:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82ca2c08
	// ERROR 82CA2C08
	return;
}

__attribute__((alias("__imp__sub_82FBEE48"))) PPC_WEAK_FUNC(sub_82FBEE48);
PPC_FUNC_IMPL(__imp__sub_82FBEE48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82FBEE50;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fbee98
	if (!ctx.cr6.eq) goto loc_82FBEE98;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82ef6ef8
	ctx.lr = 0x82FBEE74;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82fbee90
	if (ctx.cr0.eq) goto loc_82FBEE90;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// b 0x82fbee94
	goto loc_82FBEE94;
loc_82FBEE90:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82FBEE94:
	// stw r11,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r11.u32);
loc_82FBEE98:
	// lwz r27,108(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x82fbd3d8
	ctx.lr = 0x82FBEEC8;
	sub_82FBD3D8(ctx, base);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mulli r11,r29,464
	ctx.r11.s64 = ctx.r29.s64 * 464;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r11,-464
	ctx.r3.s64 = ctx.r11.s64 + -464;
	// bl 0x82fbc3f8
	ctx.lr = 0x82FBEEE0;
	sub_82FBC3F8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,88
	ctx.r3.s64 = ctx.r30.s64 + 88;
	// bl 0x82fbd4b8
	ctx.lr = 0x82FBEEEC;
	sub_82FBD4B8(ctx, base);
	// lbz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 20);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stb r11,21(r30)
	PPC_STORE_U8(ctx.r30.u32 + 21, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82FBEF04"))) PPC_WEAK_FUNC(sub_82FBEF04);
PPC_FUNC_IMPL(__imp__sub_82FBEF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBEF08"))) PPC_WEAK_FUNC(sub_82FBEF08);
PPC_FUNC_IMPL(__imp__sub_82FBEF08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82FBEF10;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,112(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fbef58
	if (!ctx.cr6.eq) goto loc_82FBEF58;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82ef6ef8
	ctx.lr = 0x82FBEF34;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82fbef50
	if (ctx.cr0.eq) goto loc_82FBEF50;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// b 0x82fbef54
	goto loc_82FBEF54;
loc_82FBEF50:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82FBEF54:
	// stw r11,112(r27)
	PPC_STORE_U32(ctx.r27.u32 + 112, ctx.r11.u32);
loc_82FBEF58:
	// lwz r3,112(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 112);
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x82fbd310
	ctx.lr = 0x82FBEF64;
	sub_82FBD310(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82fbefac
	if (!ctx.cr6.gt) goto loc_82FBEFAC;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82FBEF78:
	// lwz r9,112(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 112);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r4,r10,16
	ctx.r4.s64 = ctx.r10.s64 + 16;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82f65e60
	ctx.lr = 0x82FBEF94;
	sub_82F65E60(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fbef78
	if (ctx.cr6.lt) goto loc_82FBEF78;
loc_82FBEFAC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82FBEFB4"))) PPC_WEAK_FUNC(sub_82FBEFB4);
PPC_FUNC_IMPL(__imp__sub_82FBEFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBEFB8"))) PPC_WEAK_FUNC(sub_82FBEFB8);
PPC_FUNC_IMPL(__imp__sub_82FBEFB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82FBEFC0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r27,4(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r28,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r28.u32);
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x82fbeffc
	if (!ctx.cr6.lt) goto loc_82FBEFFC;
	// mulli r30,r28,96
	ctx.r30.s64 = ctx.r28.s64 * 96;
	// subf r31,r28,r27
	ctx.r31.s64 = ctx.r27.s64 - ctx.r28.s64;
loc_82FBEFE4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82fbd6e8
	ctx.lr = 0x82FBEFF0;
	sub_82FBD6E8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,96
	ctx.r30.s64 = ctx.r30.s64 + 96;
	// bne 0x82fbefe4
	if (!ctx.cr0.eq) goto loc_82FBEFE4;
loc_82FBEFFC:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// clrlwi r10,r11,2
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// bne cr6,0x82fbf050
	if (!ctx.cr6.eq) goto loc_82FBF050;
	// rlwinm. r9,r11,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82fbf02c
	if (ctx.cr0.eq) goto loc_82FBF02C;
	// rlwinm. r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82fbf024
	if (ctx.cr0.eq) goto loc_82FBF024;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82fbf078
	if (!ctx.cr6.eq) goto loc_82FBF078;
loc_82FBF024:
	// clrlwi. r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82fbf078
	if (!ctx.cr0.eq) goto loc_82FBF078;
loc_82FBF02C:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,0,0,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0000000;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbf044
	if (ctx.cr6.eq) goto loc_82FBF044;
	// bl 0x82ef6f38
	ctx.lr = 0x82FBF044;
	sub_82EF6F38(ctx, base);
loc_82FBF044:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x82fbf078
	goto loc_82FBF078;
loc_82FBF050:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82fbf068
	if (ctx.cr6.gt) goto loc_82FBF068;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82fbf078
	if (ctx.cr6.gt) goto loc_82FBF078;
loc_82FBF068:
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82fbc9e0
	ctx.lr = 0x82FBF078;
	sub_82FBC9E0(ctx, base);
loc_82FBF078:
	// cmplw cr6,r27,r28
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x82fbf0a4
	if (!ctx.cr6.lt) goto loc_82FBF0A4;
	// mulli r31,r27,96
	ctx.r31.s64 = ctx.r27.s64 * 96;
	// subf r30,r27,r28
	ctx.r30.s64 = ctx.r28.s64 - ctx.r27.s64;
loc_82FBF088:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add. r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82fbf098
	if (ctx.cr0.eq) goto loc_82FBF098;
	// bl 0x82fbd638
	ctx.lr = 0x82FBF098;
	sub_82FBD638(ctx, base);
loc_82FBF098:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,96
	ctx.r31.s64 = ctx.r31.s64 + 96;
	// bne 0x82fbf088
	if (!ctx.cr0.eq) goto loc_82FBF088;
loc_82FBF0A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82FBF0AC"))) PPC_WEAK_FUNC(sub_82FBF0AC);
PPC_FUNC_IMPL(__imp__sub_82FBF0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBF0B0"))) PPC_WEAK_FUNC(sub_82FBF0B0);
PPC_FUNC_IMPL(__imp__sub_82FBF0B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bcc
	ctx.lr = 0x82FBF0B8;
	sub_82CA2BCC(ctx, base);
	// stwu r1,-944(r1)
	ea = -944 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// bl 0x82fbccd8
	ctx.lr = 0x82FBF0D8;
	sub_82FBCCD8(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// lbz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 24);
	// li r21,1
	ctx.r21.s64 = 1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r25,0
	ctx.r25.s64 = 0;
	// stb r21,308(r1)
	PPC_STORE_U8(ctx.r1.u32 + 308, ctx.r21.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r22,r25
	ctx.r22.u64 = ctx.r25.u64;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// stb r10,309(r1)
	PPC_STORE_U8(ctx.r1.u32 + 309, ctx.r10.u8);
	// mr r23,r25
	ctx.r23.u64 = ctx.r25.u64;
	// stb r10,310(r1)
	PPC_STORE_U8(ctx.r1.u32 + 310, ctx.r10.u8);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// stb r10,311(r1)
	PPC_STORE_U8(ctx.r1.u32 + 311, ctx.r10.u8);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// lbz r11,76(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 76);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r11.u32);
	// bl 0x82fd04d8
	ctx.lr = 0x82FBF134;
	sub_82FD04D8(ctx, base);
	// lwz r11,588(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 588);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// cmplwi cr6,r11,65534
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65534, ctx.xer);
	// bgt cr6,0x82fbf768
	if (ctx.cr6.gt) goto loc_82FBF768;
	// bl 0x82fcbd08
	ctx.lr = 0x82FBF148;
	sub_82FCBD08(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r28,r10,28,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x1;
	// beq 0x82fbf170
	if (ctx.cr0.eq) goto loc_82FBF170;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// bne 0x82fbf174
	if (!ctx.cr0.eq) goto loc_82FBF174;
loc_82FBF170:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82FBF174:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fbf1f0
	if (ctx.cr0.eq) goto loc_82FBF1F0;
	// lbz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 20);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82fbf1f0
	if (!ctx.cr0.eq) goto loc_82FBF1F0;
	// lbz r11,23(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 23);
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82fbf1ac
	if (ctx.cr0.eq) goto loc_82FBF1AC;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm. r11,r11,20,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fbf1ac
	if (ctx.cr0.eq) goto loc_82FBF1AC;
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fbf1ec
	if (ctx.cr0.eq) goto loc_82FBF1EC;
loc_82FBF1AC:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82fbf1f0
	if (!ctx.cr0.eq) goto loc_82FBF1F0;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82fbf1f0
	if (ctx.cr6.eq) goto loc_82FBF1F0;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82FBF1CC:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne 0x82fbf1ec
	if (!ctx.cr0.eq) goto loc_82FBF1EC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82fbf1cc
	if (ctx.cr6.lt) goto loc_82FBF1CC;
	// b 0x82fbf1f0
	goto loc_82FBF1F0;
loc_82FBF1EC:
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
loc_82FBF1F0:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fbf414
	if (ctx.cr0.eq) goto loc_82FBF414;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// bl 0x82fd0790
	ctx.lr = 0x82FBF20C;
	sub_82FD0790(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82fc0c08
	ctx.lr = 0x82FBF21C;
	sub_82FC0C08(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f0,3204(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3204);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x82fd0568
	ctx.lr = 0x82FBF238;
	sub_82FD0568(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r31,56(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x82fd05a8
	ctx.lr = 0x82FBF244;
	sub_82FD05A8(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// cmplwi cr6,r11,65534
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65534, ctx.xer);
	// bgt cr6,0x82fbf400
	if (ctx.cr6.gt) goto loc_82FBF400;
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82fbf2b4
	if (!ctx.cr6.eq) goto loc_82FBF2B4;
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r4,3
	ctx.r4.s64 = 3;
	// beq 0x82fbf2b4
	if (ctx.cr0.eq) goto loc_82FBF2B4;
	// lbz r11,23(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 23);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82fbf2ac
	if (!ctx.cr0.eq) goto loc_82FBF2AC;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82fbf2b4
	if (ctx.cr6.eq) goto loc_82FBF2B4;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82FBF28C:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne 0x82fbf2ac
	if (!ctx.cr0.eq) goto loc_82FBF2AC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82fbf28c
	if (ctx.cr6.lt) goto loc_82FBF28C;
	// b 0x82fbf2b4
	goto loc_82FBF2B4;
loc_82FBF2AC:
	// li r4,4
	ctx.r4.s64 = 4;
	// stb r21,23(r30)
	PPC_STORE_U8(ctx.r30.u32 + 23, ctx.r21.u8);
loc_82FBF2B4:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82fc0c58
	ctx.lr = 0x82FBF2BC;
	sub_82FC0C58(ctx, base);
	// lbz r11,296(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 296);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82fbf2f8
	if (ctx.cr0.eq) goto loc_82FBF2F8;
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82fbf2f8
	if (ctx.cr6.eq) goto loc_82FBF2F8;
	// addi r31,r30,28
	ctx.r31.s64 = ctx.r30.s64 + 28;
	// lfs f1,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82fd1910
	ctx.lr = 0x82FBF2F0;
	sub_82FD1910(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x82fbf334
	goto loc_82FBF334;
loc_82FBF2F8:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r31,r30,28
	ctx.r31.s64 = ctx.r30.s64 + 28;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fbd140
	ctx.lr = 0x82FBF30C;
	sub_82FBD140(ctx, base);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lfs f1,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// addi r5,r11,-256
	ctx.r5.s64 = ctx.r11.s64 + -256;
	// bl 0x82fd1330
	ctx.lr = 0x82FBF334;
	sub_82FD1330(ctx, base);
loc_82FBF334:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82fbf394
	if (ctx.cr6.eq) goto loc_82FBF394;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82fbf394
	if (ctx.cr6.eq) goto loc_82FBF394;
loc_82FBF348:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,212
	ctx.r3.s64 = ctx.r11.s64 + 212;
	// bl 0x82efc418
	ctx.lr = 0x82FBF368;
	sub_82EFC418(ctx, base);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// li r10,3
	ctx.r10.s64 = 3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// divwu r10,r3,r10
	ctx.r10.u32 = ctx.r3.u32 / ctx.r10.u32;
	// beq cr6,0x82fbf388
	if (ctx.cr6.eq) goto loc_82FBF388;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
loc_82FBF388:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82fbf348
	if (ctx.cr6.lt) goto loc_82FBF348;
loc_82FBF394:
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r9,65534
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65534, ctx.xer);
	// ble cr6,0x82fbf3bc
	if (!ctx.cr6.gt) goto loc_82FBF3BC;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r4,r28,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r28.s64;
	// bl 0x82fbd140
	ctx.lr = 0x82FBF3B8;
	sub_82FBD140(ctx, base);
	// b 0x82fbf404
	goto loc_82FBF404;
loc_82FBF3BC:
	// lwz r9,68(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// mr r23,r28
	ctx.r23.u64 = ctx.r28.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82fbf3ec
	if (!ctx.cr6.eq) goto loc_82FBF3EC;
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r3,r30,52
	ctx.r3.s64 = ctx.r30.s64 + 52;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82fc0c58
	ctx.lr = 0x82FBF3EC;
	sub_82FC0C58(ctx, base);
loc_82FBF3EC:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r30,52
	ctx.r3.s64 = ctx.r30.s64 + 52;
	// bl 0x82fc0890
	ctx.lr = 0x82FBF3F8;
	sub_82FC0890(ctx, base);
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// b 0x82fbf404
	goto loc_82FBF404;
loc_82FBF400:
	// stb r21,22(r30)
	PPC_STORE_U8(ctx.r30.u32 + 22, ctx.r21.u8);
loc_82FBF404:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82fc0948
	ctx.lr = 0x82FBF40C;
	sub_82FC0948(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82fd08f8
	ctx.lr = 0x82FBF414;
	sub_82FD08F8(ctx, base);
loc_82FBF414:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fbf420
	if (ctx.cr0.eq) goto loc_82FBF420;
	// stb r21,21(r30)
	PPC_STORE_U8(ctx.r30.u32 + 21, ctx.r21.u8);
loc_82FBF420:
	// lbz r11,21(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 21);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82fbf5b8
	if (!ctx.cr0.eq) goto loc_82FBF5B8;
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lwz r28,588(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 588);
	// lwz r27,56(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82fbf458
	if (!ctx.cr6.eq) goto loc_82FBF458;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,52
	ctx.r3.s64 = ctx.r30.s64 + 52;
	// bl 0x82fc0c58
	ctx.lr = 0x82FBF458;
	sub_82FC0C58(ctx, base);
loc_82FBF458:
	// add r31,r28,r27
	ctx.r31.u64 = ctx.r28.u64 + ctx.r27.u64;
	// addi r29,r30,52
	ctx.r29.s64 = ctx.r30.s64 + 52;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fc0608
	ctx.lr = 0x82FBF46C;
	sub_82FC0608(ctx, base);
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82fbf764
	if (!ctx.cr6.eq) goto loc_82FBF764;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82fbf4e8
	if (ctx.cr6.eq) goto loc_82FBF4E8;
loc_82FBF484:
	// lwz r9,16(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// rlwinm r11,r31,24,8,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 24) & 0xFFFFFC;
	// lwz r6,600(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 600);
	// rlwinm r10,r31,3,19,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0x1FF8;
	// add r5,r27,r31
	ctx.r5.u64 = ctx.r27.u64 + ctx.r31.u64;
	// lwz r8,12(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lfs f0,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwzx r11,r11,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mullw r9,r5,r9
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FBF4DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82fbf484
	if (ctx.cr6.lt) goto loc_82FBF484;
loc_82FBF4E8:
	// lwz r11,680(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 680);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fbf5b8
	if (ctx.cr6.eq) goto loc_82FBF5B8;
	// addi r31,r30,28
	ctx.r31.s64 = ctx.r30.s64 + 28;
loc_82FBF4FC:
	// lwz r11,692(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 692);
	// rlwinm r9,r28,28,4,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 28) & 0xFFFFFFC;
	// clrlwi r10,r28,26
	ctx.r10.u64 = ctx.r28.u32 & 0x3F;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r29,r11,-1
	ctx.r29.s64 = ctx.r11.s64 + -1;
	// bl 0x82fcf978
	ctx.lr = 0x82FBF528;
	sub_82FCF978(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82fbf54c
	if (ctx.cr6.eq) goto loc_82FBF54C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,-252(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -252);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x82fbf560
	if (ctx.cr6.eq) goto loc_82FBF560;
loc_82FBF54C:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82fbd140
	ctx.lr = 0x82FBF55C;
	sub_82FBD140(ctx, base);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
loc_82FBF560:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-256
	ctx.r3.s64 = ctx.r11.s64 + -256;
	// bl 0x82fbc468
	ctx.lr = 0x82FBF580;
	sub_82FBC468(ctx, base);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82fbf5a4
	if (ctx.cr6.eq) goto loc_82FBF5A4;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fbf5a4
	if (ctx.cr6.eq) goto loc_82FBF5A4;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r9,740(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 740);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
loc_82FBF5A4:
	// lwz r11,680(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 680);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fbf4fc
	if (ctx.cr6.lt) goto loc_82FBF4FC;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
loc_82FBF5B8:
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r25,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r25.u32);
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// lwz r4,28(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	// bl 0x82f52380
	ctx.lr = 0x82FBF5D0;
	sub_82F52380(ctx, base);
	// lwz r10,28(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r26,104(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// ble cr6,0x82fbf5f8
	if (!ctx.cr6.gt) goto loc_82FBF5F8;
loc_82FBF5E4:
	// stbx r25,r26,r11
	PPC_STORE_U8(ctx.r26.u32 + ctx.r11.u32, ctx.r25.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,28(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82fbf5e4
	if (ctx.cr6.lt) goto loc_82FBF5E4;
loc_82FBF5F8:
	// lwz r11,28(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82fbf73c
	if (!ctx.cr6.gt) goto loc_82FBF73C;
	// addi r25,r26,-1
	ctx.r25.s64 = ctx.r26.s64 + -1;
loc_82FBF60C:
	// addi r28,r29,1
	ctx.r28.s64 = ctx.r29.s64 + 1;
	// lbzx r11,r28,r25
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r25.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82fbf728
	if (!ctx.cr0.eq) goto loc_82FBF728;
	// lwz r11,40(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 40);
	// rlwinm r9,r29,28,4,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 28) & 0xFFFFFFC;
	// clrlwi r10,r29,26
	ctx.r10.u64 = ctx.r29.u32 & 0x3F;
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// add r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82fbf728
	if (ctx.cr6.lt) goto loc_82FBF728;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82fbf728
	if (!ctx.cr6.gt) goto loc_82FBF728;
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// addi r31,r30,40
	ctx.r31.s64 = ctx.r30.s64 + 40;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fbefb8
	ctx.lr = 0x82FBF660;
	sub_82FBEFB8(ctx, base);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mulli r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 * 96;
	// lbz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 20);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// stb r9,-52(r11)
	PPC_STORE_U8(ctx.r11.u32 + -52, ctx.r9.u8);
	// lfs f1,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// mulli r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 * 96;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-96
	ctx.r3.s64 = ctx.r11.s64 + -96;
	// bl 0x82fbd510
	ctx.lr = 0x82FBF6A0;
	sub_82FBD510(ctx, base);
	// lwz r11,28(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82fbf728
	if (!ctx.cr6.lt) goto loc_82FBF728;
loc_82FBF6B0:
	// lwz r11,40(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 40);
	// rlwinm r9,r29,28,4,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 28) & 0xFFFFFFC;
	// clrlwi r10,r29,26
	ctx.r10.u64 = ctx.r29.u32 & 0x3F;
	// lwz r8,20(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82fbf718
	if (!ctx.cr6.eq) goto loc_82FBF718;
	// stbx r21,r26,r29
	PPC_STORE_U8(ctx.r26.u32 + ctx.r29.u32, ctx.r21.u8);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82fbf718
	if (ctx.cr6.lt) goto loc_82FBF718;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82fbf718
	if (!ctx.cr6.gt) goto loc_82FBF718;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mulli r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 * 96;
	// lfs f1,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-96
	ctx.r3.s64 = ctx.r11.s64 + -96;
	// bl 0x82fbd510
	ctx.lr = 0x82FBF718;
	sub_82FBD510(ctx, base);
loc_82FBF718:
	// lwz r11,28(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fbf6b0
	if (ctx.cr6.lt) goto loc_82FBF6B0;
loc_82FBF728:
	// lwz r11,28(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fbf60c
	if (ctx.cr6.lt) goto loc_82FBF60C;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
loc_82FBF73C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,88
	ctx.r3.s64 = ctx.r30.s64 + 88;
	// bl 0x82fbd4b8
	ctx.lr = 0x82FBF748;
	sub_82FBD4B8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82f52380
	ctx.lr = 0x82FBF754;
	sub_82F52380(ctx, base);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbf764
	if (ctx.cr6.eq) goto loc_82FBF764;
	// bl 0x82ef6f38
	ctx.lr = 0x82FBF764;
	sub_82EF6F38(ctx, base);
loc_82FBF764:
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
loc_82FBF768:
	// bl 0x82fbcf30
	ctx.lr = 0x82FBF76C;
	sub_82FBCF30(ctx, base);
	// addi r1,r1,944
	ctx.r1.s64 = ctx.r1.s64 + 944;
	// b 0x82ca2c1c
	// ERROR 82CA2C1C
	return;
}

__attribute__((alias("__imp__sub_82FBF774"))) PPC_WEAK_FUNC(sub_82FBF774);
PPC_FUNC_IMPL(__imp__sub_82FBF774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBF778"))) PPC_WEAK_FUNC(sub_82FBF778);
PPC_FUNC_IMPL(__imp__sub_82FBF778) {
	PPC_FUNC_PROLOGUE();
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// b 0x82fbf0b0
	sub_82FBF0B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FBF780"))) PPC_WEAK_FUNC(sub_82FBF780);
PPC_FUNC_IMPL(__imp__sub_82FBF780) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FBF788;
	sub_82CA2BE8(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,27012
	ctx.r11.s64 = ctx.r11.s64 + 27012;
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// bl 0x82fc0c08
	ctx.lr = 0x82FBF7E0;
	sub_82FC0C08(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// lfs f0,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f0.f64 = double(temp.f32);
	// stfs f31,4(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stb r29,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r29.u8);
	// stfs f30,8(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stb r30,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r30.u8);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stb r30,22(r31)
	PPC_STORE_U8(ctx.r31.u32 + 22, ctx.r30.u8);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stb r30,23(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23, ctx.r30.u8);
	// stb r28,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r28.u8);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82FBF844"))) PPC_WEAK_FUNC(sub_82FBF844);
PPC_FUNC_IMPL(__imp__sub_82FBF844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBF848"))) PPC_WEAK_FUNC(sub_82FBF848);
PPC_FUNC_IMPL(__imp__sub_82FBF848) {
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
	// addi r30,r31,80
	ctx.r30.s64 = ctx.r31.s64 + 80;
	// addi r11,r11,27012
	ctx.r11.s64 = ctx.r11.s64 + 27012;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbf894
	if (ctx.cr6.eq) goto loc_82FBF894;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FBF894;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FBF894:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbf8b0
	if (ctx.cr6.eq) goto loc_82FBF8B0;
	// bl 0x82ef6f38
	ctx.lr = 0x82FBF8B0;
	sub_82EF6F38(ctx, base);
loc_82FBF8B0:
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbf8c4
	if (ctx.cr6.eq) goto loc_82FBF8C4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82fbea78
	ctx.lr = 0x82FBF8C4;
	sub_82FBEA78(ctx, base);
loc_82FBF8C4:
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbf8d8
	if (ctx.cr6.eq) goto loc_82FBF8D8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82fbead8
	ctx.lr = 0x82FBF8D8;
	sub_82FBEAD8(ctx, base);
loc_82FBF8D8:
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fbd238
	ctx.lr = 0x82FBF8E4;
	sub_82FBD238(ctx, base);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbf8f4
	if (ctx.cr6.eq) goto loc_82FBF8F4;
	// bl 0x82ef6f38
	ctx.lr = 0x82FBF8F4;
	sub_82EF6F38(ctx, base);
loc_82FBF8F4:
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x82fc0948
	ctx.lr = 0x82FBF8FC;
	sub_82FC0948(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fbefb8
	ctx.lr = 0x82FBF908;
	sub_82FBEFB8(ctx, base);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbf918
	if (ctx.cr6.eq) goto loc_82FBF918;
	// bl 0x82ef6f38
	ctx.lr = 0x82FBF918;
	sub_82EF6F38(ctx, base);
loc_82FBF918:
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fbd140
	ctx.lr = 0x82FBF924;
	sub_82FBD140(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbf934
	if (ctx.cr6.eq) goto loc_82FBF934;
	// bl 0x82ef6f38
	ctx.lr = 0x82FBF934;
	sub_82EF6F38(ctx, base);
loc_82FBF934:
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

__attribute__((alias("__imp__sub_82FBF94C"))) PPC_WEAK_FUNC(sub_82FBF94C);
PPC_FUNC_IMPL(__imp__sub_82FBF94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBF950"))) PPC_WEAK_FUNC(sub_82FBF950);
PPC_FUNC_IMPL(__imp__sub_82FBF950) {
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
	// bl 0x82fbf848
	ctx.lr = 0x82FBF970;
	sub_82FBF848(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fbf980
	if (ctx.cr0.eq) goto loc_82FBF980;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82FBF980;
	sub_82EF6F38(ctx, base);
loc_82FBF980:
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

__attribute__((alias("__imp__sub_82FBF99C"))) PPC_WEAK_FUNC(sub_82FBF99C);
PPC_FUNC_IMPL(__imp__sub_82FBF99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBF9A0"))) PPC_WEAK_FUNC(sub_82FBF9A0);
PPC_FUNC_IMPL(__imp__sub_82FBF9A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f1,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,2680(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2680);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBF9BC"))) PPC_WEAK_FUNC(sub_82FBF9BC);
PPC_FUNC_IMPL(__imp__sub_82FBF9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBF9C0"))) PPC_WEAK_FUNC(sub_82FBF9C0);
PPC_FUNC_IMPL(__imp__sub_82FBF9C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,32767
	ctx.r8.s64 = 2147418112;
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,3080(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3080);
	ctx.f0.f64 = double(temp.f32);
	// ori r8,r8,65535
	ctx.r8.u64 = ctx.r8.u64 | 65535;
	// ori r10,r7,1
	ctx.r10.u64 = ctx.r7.u64 | 1;
	// lfs f13,3084(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3084);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stfs f13,68(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stfs f13,72(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stw r8,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r8.u32);
	// stw r10,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBFA0C"))) PPC_WEAK_FUNC(sub_82FBFA0C);
PPC_FUNC_IMPL(__imp__sub_82FBFA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBFA10"))) PPC_WEAK_FUNC(sub_82FBFA10);
PPC_FUNC_IMPL(__imp__sub_82FBFA10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,3080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3080);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f13,3084(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stfs f13,0(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// stfs f13,0(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_82FBFA74:
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r8,r10,26,6,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3FFFFFC;
	// rlwinm r11,r10,3,21,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x7F8;
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82fbfa9c
	if (!ctx.cr6.lt) goto loc_82FBFA9C;
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
loc_82FBFA9C:
	// lfs f13,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82fbfab0
	if (!ctx.cr6.lt) goto loc_82FBFAB0;
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_82FBFAB0:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82fbfac4
	if (!ctx.cr6.gt) goto loc_82FBFAC4;
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
loc_82FBFAC4:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82fbfad8
	if (!ctx.cr6.gt) goto loc_82FBFAD8;
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
loc_82FBFAD8:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fbfa74
	if (ctx.cr6.lt) goto loc_82FBFA74;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBFAEC"))) PPC_WEAK_FUNC(sub_82FBFAEC);
PPC_FUNC_IMPL(__imp__sub_82FBFAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBFAF0"))) PPC_WEAK_FUNC(sub_82FBFAF0);
PPC_FUNC_IMPL(__imp__sub_82FBFAF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_82FBFB00:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r8,r10,26,6,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3FFFFFC;
	// rlwinm r9,r10,3,21,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x7F8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f0,f1,f3
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64 + ctx.f3.f64));
	// fmadds f13,f13,f2,f4
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f2.f64 + ctx.f4.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fbfb00
	if (ctx.cr6.lt) goto loc_82FBFB00;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBFB40"))) PPC_WEAK_FUNC(sub_82FBFB40);
PPC_FUNC_IMPL(__imp__sub_82FBFB40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FBFB48;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fbfbb0
	if (ctx.cr6.lt) goto loc_82FBFBB0;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ef6ef8
	ctx.lr = 0x82FBFB70;
	sub_82EF6EF8(ctx, base);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82fbfb9c
	if (ctx.cr6.eq) goto loc_82FBFB9C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ca2c60
	ctx.lr = 0x82FBFB8C;
	sub_82CA2C60(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fbfb9c
	if (ctx.cr6.eq) goto loc_82FBFB9C;
	// bl 0x82ef6f38
	ctx.lr = 0x82FBFB9C;
	sub_82EF6F38(ctx, base);
loc_82FBFB9C:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82FBFBB0:
	// li r3,1536
	ctx.r3.s64 = 1536;
	// bl 0x82ef6ef8
	ctx.lr = 0x82FBFBB8;
	sub_82EF6EF8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82FBFBD8"))) PPC_WEAK_FUNC(sub_82FBFBD8);
PPC_FUNC_IMPL(__imp__sub_82FBFBD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82fbfc6c
	if (!ctx.cr6.gt) goto loc_82FBFC6C;
loc_82FBFBEC:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r31,r11,26,6,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFC;
	// rlwinm r10,r11,3,21,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7F8;
	// lwz r11,20(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82fbfc20
	if (!ctx.cr6.lt) goto loc_82FBFC20;
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
loc_82FBFC20:
	// lfs f13,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82fbfc34
	if (!ctx.cr6.lt) goto loc_82FBFC34;
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_82FBFC34:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82fbfc48
	if (!ctx.cr6.gt) goto loc_82FBFC48;
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
loc_82FBFC48:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82fbfc5c
	if (!ctx.cr6.gt) goto loc_82FBFC5C;
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
loc_82FBFC5C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fbfbec
	if (ctx.cr6.lt) goto loc_82FBFBEC;
loc_82FBFC6C:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBFC74"))) PPC_WEAK_FUNC(sub_82FBFC74);
PPC_FUNC_IMPL(__imp__sub_82FBFC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBFC78"))) PPC_WEAK_FUNC(sub_82FBFC78);
PPC_FUNC_IMPL(__imp__sub_82FBFC78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82FBFC80;
	sub_82CA2BDC(ctx, base);
	// lwz r26,28(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82fbfde4
	if (ctx.cr6.eq) goto loc_82FBFDE4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r27,40(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lfs f11,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f11.f64 = double(temp.f32);
loc_82FBFCA0:
	// rlwinm r10,r31,28,4,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 28) & 0xFFFFFFC;
	// clrlwi r11,r31,26
	ctx.r11.u64 = ctx.r31.u32 & 0x3F;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// lwzx r10,r10,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r30,16(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x82fbfdd8
	if (ctx.cr6.eq) goto loc_82FBFDD8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x82fbfdd8
	if (!ctx.cr6.gt) goto loc_82FBFDD8;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r28,r10,-1
	ctx.r28.s64 = ctx.r10.s64 + -1;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// lwz r4,20(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
loc_82FBFCE4:
	// addi r11,r7,-1
	ctx.r11.s64 = ctx.r7.s64 + -1;
	// rlwinm r9,r7,26,6,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 26) & 0x3FFFFFC;
	// rlwinm r11,r11,26,6,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFC;
	// addi r10,r7,-1
	ctx.r10.s64 = ctx.r7.s64 + -1;
	// rlwinm r8,r7,3,21,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0x7F8;
	// rlwinm r10,r10,3,21,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x7F8;
	// lwzx r9,r9,r4
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// lwzx r11,r11,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// ldx r5,r9,r8
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r8.u32);
	// ldx r25,r11,r10
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// std r5,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.r5.u64);
	// lfs f0,-76(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -76);
	ctx.f0.f64 = double(temp.f32);
	// std r25,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r25.u64);
	// lfs f12,-68(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -68);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// beq cr6,0x82fbfdcc
	if (ctx.cr6.eq) goto loc_82FBFDCC;
	// li r5,1
	ctx.r5.s64 = 1;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x82fbfd4c
	if (!ctx.cr6.gt) goto loc_82FBFD4C;
	// ldx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r8.u32);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// std r9,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r9.u64);
	// lfs f12,-68(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -68);
	ctx.f12.f64 = double(temp.f32);
	// std r11,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.r11.u64);
	// lfs f0,-76(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -76);
	ctx.f0.f64 = double(temp.f32);
loc_82FBFD4C:
	// fcmpu cr6,f2,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f2.f64, ctx.f12.f64);
	// blt cr6,0x82fbfdcc
	if (ctx.cr6.lt) goto loc_82FBFDCC;
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// bge cr6,0x82fbfdcc
	if (!ctx.cr6.lt) goto loc_82FBFDCC;
	// lfs f13,-80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -80);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f10,f2,f0
	ctx.f10.f64 = double(float(ctx.f2.f64 - ctx.f0.f64));
	// lfs f9,-72(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -72);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f1,f13
	ctx.f8.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// fsubs f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fmuls f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmsubs f0,f8,f0,f13
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x82fbfdcc
	if (!ctx.cr6.gt) goto loc_82FBFDCC;
	// clrlwi. r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82fbfdb8
	if (ctx.cr0.eq) goto loc_82FBFDB8;
	// blt cr6,0x82fbfda0
	if (ctx.cr6.lt) goto loc_82FBFDA0;
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_82FBFDA0:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82fbfdcc
	if (ctx.cr6.lt) goto loc_82FBFDCC;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// subf r29,r11,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r11.s64;
	// b 0x82fbfdcc
	goto loc_82FBFDCC;
loc_82FBFDB8:
	// blt cr6,0x82fbfdc0
	if (ctx.cr6.lt) goto loc_82FBFDC0;
	// xori r29,r29,1
	ctx.r29.u64 = ctx.r29.u64 ^ 1;
loc_82FBFDC0:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82fbfdcc
	if (ctx.cr6.lt) goto loc_82FBFDCC;
	// xori r29,r29,1
	ctx.r29.u64 = ctx.r29.u64 ^ 1;
loc_82FBFDCC:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// bne 0x82fbfce4
	if (!ctx.cr0.eq) goto loc_82FBFCE4;
loc_82FBFDD8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x82fbfca0
	if (ctx.cr6.lt) goto loc_82FBFCA0;
loc_82FBFDE4:
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82FBFDF4"))) PPC_WEAK_FUNC(sub_82FBFDF4);
PPC_FUNC_IMPL(__imp__sub_82FBFDF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FBFDF8"))) PPC_WEAK_FUNC(sub_82FBFDF8);
PPC_FUNC_IMPL(__imp__sub_82FBFDF8) {
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r30,r11,26,6,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82fbfe2c
	if (ctx.cr6.lt) goto loc_82FBFE2C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82fbfb40
	ctx.lr = 0x82FBFE2C;
	sub_82FBFB40(ctx, base);
loc_82FBFE2C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r9,r9,26
	ctx.r9.u64 = ctx.r9.u32 & 0x3F;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mulli r10,r9,24
	ctx.r10.s64 = ctx.r9.s64 * 24;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
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

__attribute__((alias("__imp__sub_82FBFE60"))) PPC_WEAK_FUNC(sub_82FBFE60);
PPC_FUNC_IMPL(__imp__sub_82FBFE60) {
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
	// bl 0x82fbfdf8
	ctx.lr = 0x82FBFE80;
	sub_82FBFDF8(ctx, base);
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82FBFE8C;
	sub_82CA2C60(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82FBFEB0"))) PPC_WEAK_FUNC(sub_82FBFEB0);
PPC_FUNC_IMPL(__imp__sub_82FBFEB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FBFEB8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82fbfe60
	ctx.lr = 0x82FBFEF4;
	sub_82FBFE60(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r9,r11,28,4,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFC;
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// mulli r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 * 24;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// blt cr6,0x82fbff40
	if (ctx.cr6.lt) goto loc_82FBFF40;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82fbff30
	if (!ctx.cr6.lt) goto loc_82FBFF30;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
loc_82FBFF30:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82fbff40
	if (!ctx.cr6.gt) goto loc_82FBFF40;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
loc_82FBFF40:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x82fbff68
	if (ctx.cr6.lt) goto loc_82FBFF68;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82fbff58
	if (!ctx.cr6.lt) goto loc_82FBFF58;
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
loc_82FBFF58:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82fbff68
	if (!ctx.cr6.gt) goto loc_82FBFF68;
	// stw r29,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
loc_82FBFF68:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82FBFF70"))) PPC_WEAK_FUNC(sub_82FBFF70);
PPC_FUNC_IMPL(__imp__sub_82FBFF70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// bl 0x82fbfeb0
	ctx.lr = 0x82FBFF98;
	sub_82FBFEB0(ctx, base);
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82f43ef0
	ctx.lr = 0x82FBFFAC;
	sub_82F43EF0(ctx, base);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FBFFD8"))) PPC_WEAK_FUNC(sub_82FBFFD8);
PPC_FUNC_IMPL(__imp__sub_82FBFFD8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc004c
	if (ctx.cr6.eq) goto loc_82FC004C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x82fc004c
	if (!ctx.cr6.gt) goto loc_82FC004C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// rlwinm r9,r11,26,6,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFC;
	// rlwinm r11,r11,3,21,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7F8;
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x82f43ef0
	ctx.lr = 0x82FC003C;
	sub_82F43EF0(ctx, base);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_82FC004C:
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

__attribute__((alias("__imp__sub_82FC0060"))) PPC_WEAK_FUNC(sub_82FC0060);
PPC_FUNC_IMPL(__imp__sub_82FC0060) {
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
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82ca74fc
	ctx.lr = 0x82FC0078;
	sub_82CA74FC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f30,f5
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f5.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f29,f6
	ctx.f29.f64 = ctx.f6.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r30,-32252
	ctx.r30.s64 = -2113667072;
	// fadds f9,f1,f3
	ctx.f9.f64 = double(float(ctx.f1.f64 + ctx.f3.f64));
	// fadds f8,f2,f4
	ctx.f8.f64 = double(float(ctx.f2.f64 + ctx.f4.f64));
	// lfs f31,3056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3056);
	ctx.f31.f64 = double(temp.f32);
	// fsubs f0,f30,f1
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f1.f64));
	// fsubs f12,f4,f29
	ctx.f12.f64 = double(float(ctx.f4.f64 - ctx.f29.f64));
	// fsubs f13,f29,f2
	ctx.f13.f64 = double(float(ctx.f29.f64 - ctx.f2.f64));
	// fsubs f10,f3,f30
	ctx.f10.f64 = double(float(ctx.f3.f64 - ctx.f30.f64));
	// fadds f7,f3,f30
	ctx.f7.f64 = double(float(ctx.f3.f64 + ctx.f30.f64));
	// fadds f6,f4,f29
	ctx.f6.f64 = double(float(ctx.f4.f64 + ctx.f29.f64));
	// b 0x82fc011c
	goto loc_82FC011C;
loc_82FC00B8:
	// fmuls f0,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x82fc0144
	if (!ctx.cr6.gt) goto loc_82FC0144;
	// fadds f0,f28,f3
	ctx.f0.f64 = double(float(ctx.f28.f64 + ctx.f3.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fadds f13,f27,f4
	ctx.f13.f64 = double(float(ctx.f27.f64 + ctx.f4.f64));
	// fmuls f26,f0,f31
	ctx.f26.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f25,f13,f31
	ctx.f25.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmr f5,f26
	ctx.f5.f64 = ctx.f26.f64;
	// fmr f6,f25
	ctx.f6.f64 = ctx.f25.f64;
	// bl 0x82fc0060
	ctx.lr = 0x82FC00F4;
	sub_82FC0060(ctx, base);
	// fsubs f12,f27,f29
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f27.f64 - ctx.f29.f64));
	// fsubs f0,f30,f26
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f26.f64));
	// fsubs f10,f28,f30
	ctx.f10.f64 = double(float(ctx.f28.f64 - ctx.f30.f64));
	// fsubs f13,f29,f25
	ctx.f13.f64 = double(float(ctx.f29.f64 - ctx.f25.f64));
	// fadds f9,f26,f28
	ctx.f9.f64 = double(float(ctx.f26.f64 + ctx.f28.f64));
	// fadds f8,f25,f27
	ctx.f8.f64 = double(float(ctx.f25.f64 + ctx.f27.f64));
	// fadds f7,f28,f30
	ctx.f7.f64 = double(float(ctx.f28.f64 + ctx.f30.f64));
	// fadds f6,f27,f29
	ctx.f6.f64 = double(float(ctx.f27.f64 + ctx.f29.f64));
	// fmr f2,f25
	ctx.f2.f64 = ctx.f25.f64;
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
loc_82FC011C:
	// fmuls f12,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f11,27016(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 27016);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f27,f6,f31
	ctx.f27.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// fmuls f28,f7,f31
	ctx.f28.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// fmuls f4,f8,f31
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// fmuls f3,f9,f31
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// fmsubs f12,f10,f13,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 - ctx.f12.f64));
	// fabs f12,f12
	ctx.f12.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bgt cr6,0x82fc00b8
	if (ctx.cr6.gt) goto loc_82FC00B8;
loc_82FC0144:
	// stfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f29,84(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82f43ef0
	ctx.lr = 0x82FC0158;
	sub_82F43EF0(ctx, base);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82ca7548
	ctx.lr = 0x82FC0174;
	sub_82CA7548(ctx, base);
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

__attribute__((alias("__imp__sub_82FC0188"))) PPC_WEAK_FUNC(sub_82FC0188);
PPC_FUNC_IMPL(__imp__sub_82FC0188) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f13,f2
	ctx.f13.f64 = ctx.f2.f64;
	// fmr f6,f4
	ctx.f6.f64 = ctx.f4.f64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// fmr f5,f3
	ctx.f5.f64 = ctx.f3.f64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lfs f11,3084(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3084);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r8,r11,26,6,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFC;
	// rlwinm r11,r11,3,21,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7F8;
	// fsubs f12,f6,f13
	ctx.f12.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// fsubs f10,f5,f0
	ctx.f10.f64 = double(float(ctx.f5.f64 - ctx.f0.f64));
	// lwzx r10,r8,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f9,f0,f1
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// lfs f2,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f8,f13,f2
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f2.f64));
	// fmuls f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmsubs f12,f8,f10,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f10.f64 - ctx.f12.f64));
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bge cr6,0x82fc0200
	if (!ctx.cr6.lt) goto loc_82FC0200;
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
loc_82FC0200:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f11,27016(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27016);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bge cr6,0x82fc0234
	if (!ctx.cr6.lt) goto loc_82FC0234;
	// stfs f5,80(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f6,84(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x82f43ef0
	ctx.lr = 0x82FC0220;
	sub_82F43EF0(ctx, base);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x82fc0244
	goto loc_82FC0244;
loc_82FC0234:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f4,f13
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f13.f64;
	// fmr f3,f0
	ctx.f3.f64 = ctx.f0.f64;
	// bl 0x82fc0060
	ctx.lr = 0x82FC0244;
	sub_82FC0060(ctx, base);
loc_82FC0244:
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

__attribute__((alias("__imp__sub_82FC0258"))) PPC_WEAK_FUNC(sub_82FC0258);
PPC_FUNC_IMPL(__imp__sub_82FC0258) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3084(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3084);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC026C"))) PPC_WEAK_FUNC(sub_82FC026C);
PPC_FUNC_IMPL(__imp__sub_82FC026C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC0270"))) PPC_WEAK_FUNC(sub_82FC0270);
PPC_FUNC_IMPL(__imp__sub_82FC0270) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lha r11,0(r4)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r4.u32 + 0));
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lha r11,2(r4)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r4.u32 + 2));
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC02A4"))) PPC_WEAK_FUNC(sub_82FC02A4);
PPC_FUNC_IMPL(__imp__sub_82FC02A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC02A8"))) PPC_WEAK_FUNC(sub_82FC02A8);
PPC_FUNC_IMPL(__imp__sub_82FC02A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f2,4(r4)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC02B4"))) PPC_WEAK_FUNC(sub_82FC02B4);
PPC_FUNC_IMPL(__imp__sub_82FC02B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC02B8"))) PPC_WEAK_FUNC(sub_82FC02B8);
PPC_FUNC_IMPL(__imp__sub_82FC02B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC02CC"))) PPC_WEAK_FUNC(sub_82FC02CC);
PPC_FUNC_IMPL(__imp__sub_82FC02CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC02D0"))) PPC_WEAK_FUNC(sub_82FC02D0);
PPC_FUNC_IMPL(__imp__sub_82FC02D0) {
	PPC_FUNC_PROLOGUE();
	// fctiwz f0,f2
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f2.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f2.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lhz r11,-10(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// fctiwz f13,f1
	ctx.f13.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lhz r10,-10(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// sth r11,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, ctx.r11.u16);
	// sth r10,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r10.u16);
	// stw r7,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC02F8"))) PPC_WEAK_FUNC(sub_82FC02F8);
PPC_FUNC_IMPL(__imp__sub_82FC02F8) {
	PPC_FUNC_PROLOGUE();
	// stw r5,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC0300"))) PPC_WEAK_FUNC(sub_82FC0300);
PPC_FUNC_IMPL(__imp__sub_82FC0300) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC0308"))) PPC_WEAK_FUNC(sub_82FC0308);
PPC_FUNC_IMPL(__imp__sub_82FC0308) {
	PPC_FUNC_PROLOGUE();
	// fctiwz f0,f2
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f2.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f2.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lhz r11,-10(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// fctiwz f13,f1
	ctx.f13.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lhz r9,-10(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, ctx.r11.u16);
	// sth r9,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r9.u16);
	// stw r7,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r7.u32);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC0338"))) PPC_WEAK_FUNC(sub_82FC0338);
PPC_FUNC_IMPL(__imp__sub_82FC0338) {
	PPC_FUNC_PROLOGUE();
	// fctiwz f0,f2
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f2.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f2.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lhz r11,-10(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// fctiwz f13,f1
	ctx.f13.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lhz r10,-10(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// sth r11,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, ctx.r11.u16);
	// sth r10,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC035C"))) PPC_WEAK_FUNC(sub_82FC035C);
PPC_FUNC_IMPL(__imp__sub_82FC035C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC0360"))) PPC_WEAK_FUNC(sub_82FC0360);
PPC_FUNC_IMPL(__imp__sub_82FC0360) {
	PPC_FUNC_PROLOGUE();
	// stw r5,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC0368"))) PPC_WEAK_FUNC(sub_82FC0368);
PPC_FUNC_IMPL(__imp__sub_82FC0368) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC0370"))) PPC_WEAK_FUNC(sub_82FC0370);
PPC_FUNC_IMPL(__imp__sub_82FC0370) {
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
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,27020
	ctx.r11.s64 = ctx.r11.s64 + 27020;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82fc039c
	if (ctx.cr0.eq) goto loc_82FC039C;
	// bl 0x824fe010
	ctx.lr = 0x82FC039C;
	sub_824FE010(ctx, base);
loc_82FC039C:
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

__attribute__((alias("__imp__sub_82FC03B4"))) PPC_WEAK_FUNC(sub_82FC03B4);
PPC_FUNC_IMPL(__imp__sub_82FC03B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC03B8"))) PPC_WEAK_FUNC(sub_82FC03B8);
PPC_FUNC_IMPL(__imp__sub_82FC03B8) {
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
	// lbz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82fc0464
	if (!ctx.cr0.eq) goto loc_82FC0464;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// stb r11,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r11.u8);
	// bne cr6,0x82fc0408
	if (!ctx.cr6.eq) goto loc_82FC0408;
	// bl 0x82ef6ea0
	ctx.lr = 0x82FC03EC;
	sub_82EF6EA0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r4,r11,r10
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82fc0424
	goto loc_82FC0424;
loc_82FC0408:
	// bl 0x82ef6ea0
	ctx.lr = 0x82FC040C;
	sub_82EF6EA0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r4,r11,r10
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
loc_82FC0424:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FC042C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82fc0464
	if (ctx.cr6.eq) goto loc_82FC0464;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r5,r11,r10
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// bl 0x82ca2c60
	ctx.lr = 0x82FC0454;
	sub_82CA2C60(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82ef6f38
	ctx.lr = 0x82FC045C;
	sub_82EF6F38(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_82FC0464:
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

__attribute__((alias("__imp__sub_82FC0478"))) PPC_WEAK_FUNC(sub_82FC0478);
PPC_FUNC_IMPL(__imp__sub_82FC0478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FC0480;
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
	// lbz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82fc04a4
	if (!ctx.cr0.eq) goto loc_82FC04A4;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82fc03b8
	ctx.lr = 0x82FC04A4;
	sub_82FC03B8(ctx, base);
loc_82FC04A4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FC04D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82FC04DC"))) PPC_WEAK_FUNC(sub_82FC04DC);
PPC_FUNC_IMPL(__imp__sub_82FC04DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC04E0"))) PPC_WEAK_FUNC(sub_82FC04E0);
PPC_FUNC_IMPL(__imp__sub_82FC04E0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC0500"))) PPC_WEAK_FUNC(sub_82FC0500);
PPC_FUNC_IMPL(__imp__sub_82FC0500) {
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
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82fc0594
	if (!ctx.cr0.eq) goto loc_82FC0594;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// bne cr6,0x82fc0548
	if (!ctx.cr6.eq) goto loc_82FC0548;
	// bl 0x82ef6ea0
	ctx.lr = 0x82FC0534;
	sub_82EF6EA0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82fc055c
	goto loc_82FC055C;
loc_82FC0548:
	// bl 0x82ef6ea0
	ctx.lr = 0x82FC054C;
	sub_82EF6EA0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
loc_82FC055C:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FC0564;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82fc0594
	if (ctx.cr6.eq) goto loc_82FC0594;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82ca2c60
	ctx.lr = 0x82FC0584;
	sub_82CA2C60(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82ef6f38
	ctx.lr = 0x82FC058C;
	sub_82EF6F38(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_82FC0594:
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

__attribute__((alias("__imp__sub_82FC05A8"))) PPC_WEAK_FUNC(sub_82FC05A8);
PPC_FUNC_IMPL(__imp__sub_82FC05A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FC05B0;
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
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82fc05d4
	if (!ctx.cr0.eq) goto loc_82FC05D4;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82fc0500
	ctx.lr = 0x82FC05D4;
	sub_82FC0500(ctx, base);
loc_82FC05D4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FC0600;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82FC0608"))) PPC_WEAK_FUNC(sub_82FC0608);
PPC_FUNC_IMPL(__imp__sub_82FC0608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FC0610;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82fc06a0
	if (ctx.cr6.eq) goto loc_82FC06A0;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82fc06a0
	if (ctx.cr6.eq) goto loc_82FC06A0;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82fc069c
	if (!ctx.cr6.gt) goto loc_82FC069C;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82fc069c
	if (!ctx.cr6.gt) goto loc_82FC069C;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mullw r3,r11,r30
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// bl 0x82ef6ef8
	ctx.lr = 0x82FC0658;
	sub_82EF6EF8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82fc06a0
	if (ctx.cr0.eq) goto loc_82FC06A0;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82fc0694
	if (ctx.cr6.eq) goto loc_82FC0694;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r5,r11,r10
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// bl 0x82ca2c60
	ctx.lr = 0x82FC0684;
	sub_82CA2C60(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fc0694
	if (ctx.cr6.eq) goto loc_82FC0694;
	// bl 0x82ef6f38
	ctx.lr = 0x82FC0694;
	sub_82EF6F38(ctx, base);
loc_82FC0694:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
loc_82FC069C:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82FC06A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82FC06A8"))) PPC_WEAK_FUNC(sub_82FC06A8);
PPC_FUNC_IMPL(__imp__sub_82FC06A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FC06B0;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82fc0764
	if (ctx.cr6.eq) goto loc_82FC0764;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc0764
	if (ctx.cr6.eq) goto loc_82FC0764;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82fc06e8
	if (!ctx.cr6.lt) goto loc_82FC06E8;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82FC06E8:
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82fc0700
	if (ctx.cr6.gt) goto loc_82FC0700;
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fc0764
	if (ctx.cr0.eq) goto loc_82FC0764;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82fc0764
	if (ctx.cr6.eq) goto loc_82FC0764;
loc_82FC0700:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82fc071c
	if (ctx.cr6.eq) goto loc_82FC071C;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mullw r3,r11,r30
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// bl 0x82ef6ef8
	ctx.lr = 0x82FC0714;
	sub_82EF6EF8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82fc0720
	goto loc_82FC0720;
loc_82FC071C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82FC0720:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82fc0764
	if (ctx.cr6.eq) goto loc_82FC0764;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82fc075c
	if (ctx.cr6.eq) goto loc_82FC075C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r5,r11,r10
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// bl 0x82ca2c60
	ctx.lr = 0x82FC074C;
	sub_82CA2C60(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fc075c
	if (ctx.cr6.eq) goto loc_82FC075C;
	// bl 0x82ef6f38
	ctx.lr = 0x82FC075C;
	sub_82EF6F38(ctx, base);
loc_82FC075C:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
loc_82FC0764:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82FC076C"))) PPC_WEAK_FUNC(sub_82FC076C);
PPC_FUNC_IMPL(__imp__sub_82FC076C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC0770"))) PPC_WEAK_FUNC(sub_82FC0770);
PPC_FUNC_IMPL(__imp__sub_82FC0770) {
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
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fc0794
	if (ctx.cr6.eq) goto loc_82FC0794;
	// bl 0x82ef6f38
	ctx.lr = 0x82FC0794;
	sub_82EF6F38(ctx, base);
loc_82FC0794:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r11.u8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82FC07B8"))) PPC_WEAK_FUNC(sub_82FC07B8);
PPC_FUNC_IMPL(__imp__sub_82FC07B8) {
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
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82fc07f4
	if (ctx.cr6.gt) goto loc_82FC07F4;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fc06a8
	ctx.lr = 0x82FC07F4;
	sub_82FC06A8(ctx, base);
loc_82FC07F4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82fc0830
	if (!ctx.cr6.gt) goto loc_82FC0830;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82fc0870
	goto loc_82FC0870;
loc_82FC0830:
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r31,r11,-27408
	ctx.r31.s64 = ctx.r11.s64 + -27408;
	// lwz r11,-27404(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27404);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82fc0868
	if (!ctx.cr0.eq) goto loc_82FC0868;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,27020
	ctx.r9.s64 = ctx.r9.s64 + 27020;
	// stw r11,-27404(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27404, ctx.r11.u32);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,7160
	ctx.r3.s64 = ctx.r11.s64 + 7160;
	// bl 0x82ca3700
	ctx.lr = 0x82FC0868;
	sub_82CA3700(ctx, base);
loc_82FC0868:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
loc_82FC0870:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_82FC0890"))) PPC_WEAK_FUNC(sub_82FC0890);
PPC_FUNC_IMPL(__imp__sub_82FC0890) {
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
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82fc092c
	if (!ctx.cr6.eq) goto loc_82FC092C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc092c
	if (ctx.cr6.eq) goto loc_82FC092C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82fc06a8
	ctx.lr = 0x82FC08E0;
	sub_82FC06A8(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fc092c
	if (ctx.cr6.lt) goto loc_82FC092C;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82fc092c
	if (ctx.cr6.eq) goto loc_82FC092C;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// mullw r5,r8,r9
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82FC092C;
	sub_82CA2C60(ctx, base);
loc_82FC092C:
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

__attribute__((alias("__imp__sub_82FC0944"))) PPC_WEAK_FUNC(sub_82FC0944);
PPC_FUNC_IMPL(__imp__sub_82FC0944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC0948"))) PPC_WEAK_FUNC(sub_82FC0948);
PPC_FUNC_IMPL(__imp__sub_82FC0948) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82ef6f38
	sub_82EF6F38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FC0958"))) PPC_WEAK_FUNC(sub_82FC0958);
PPC_FUNC_IMPL(__imp__sub_82FC0958) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC095C"))) PPC_WEAK_FUNC(sub_82FC095C);
PPC_FUNC_IMPL(__imp__sub_82FC095C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC0960"))) PPC_WEAK_FUNC(sub_82FC0960);
PPC_FUNC_IMPL(__imp__sub_82FC0960) {
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
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fc0984
	if (ctx.cr6.eq) goto loc_82FC0984;
	// bl 0x82ef6f38
	ctx.lr = 0x82FC0984;
	sub_82EF6F38(ctx, base);
loc_82FC0984:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82FC09AC"))) PPC_WEAK_FUNC(sub_82FC09AC);
PPC_FUNC_IMPL(__imp__sub_82FC09AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC09B0"))) PPC_WEAK_FUNC(sub_82FC09B0);
PPC_FUNC_IMPL(__imp__sub_82FC09B0) {
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
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82fc0a2c
	if (!ctx.cr6.gt) goto loc_82FC0A2C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fc09e4
	if (!ctx.cr6.eq) goto loc_82FC09E4;
	// addi r11,r4,16
	ctx.r11.s64 = ctx.r4.s64 + 16;
	// b 0x82fc09ec
	goto loc_82FC09EC;
loc_82FC09E4:
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_82FC09EC:
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82ef6ef8
	ctx.lr = 0x82FC09FC;
	sub_82EF6EF8(ctx, base);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82fc0a28
	if (ctx.cr6.eq) goto loc_82FC0A28;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82ca2c60
	ctx.lr = 0x82FC0A18;
	sub_82CA2C60(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fc0a28
	if (ctx.cr6.eq) goto loc_82FC0A28;
	// bl 0x82ef6f38
	ctx.lr = 0x82FC0A28;
	sub_82EF6F38(ctx, base);
loc_82FC0A28:
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_82FC0A2C:
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

__attribute__((alias("__imp__sub_82FC0A44"))) PPC_WEAK_FUNC(sub_82FC0A44);
PPC_FUNC_IMPL(__imp__sub_82FC0A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC0A48"))) PPC_WEAK_FUNC(sub_82FC0A48);
PPC_FUNC_IMPL(__imp__sub_82FC0A48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FC0A50;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82fc09b0
	ctx.lr = 0x82FC0A6C;
	sub_82FC09B0(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r29,-2(r11)
	PPC_STORE_U16(ctx.r11.u32 + -2, ctx.r29.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82FC0A88"))) PPC_WEAK_FUNC(sub_82FC0A88);
PPC_FUNC_IMPL(__imp__sub_82FC0A88) {
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
	// lis r31,-31946
	ctx.r31.s64 = -2093613056;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,-27380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27380);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82fc0ad8
	if (!ctx.cr0.eq) goto loc_82FC0AD8;
	// lis r9,-31946
	ctx.r9.s64 = -2093613056;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r10,r10,27020
	ctx.r10.s64 = ctx.r10.s64 + 27020;
	// stw r11,-27380(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27380, ctx.r11.u32);
	// lis r8,-31957
	ctx.r8.s64 = -2094333952;
	// stw r10,-27384(r9)
	PPC_STORE_U32(ctx.r9.u32 + -27384, ctx.r10.u32);
	// addi r3,r8,7136
	ctx.r3.s64 = ctx.r8.s64 + 7136;
	// bl 0x82ca3700
	ctx.lr = 0x82FC0AD4;
	sub_82CA3700(ctx, base);
	// lwz r11,-27380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27380);
loc_82FC0AD8:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82fc0b08
	if (!ctx.cr0.eq) goto loc_82FC0B08;
	// lis r9,-31946
	ctx.r9.s64 = -2093613056;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// addi r10,r10,27052
	ctx.r10.s64 = ctx.r10.s64 + 27052;
	// stw r11,-27380(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27380, ctx.r11.u32);
	// lis r8,-31957
	ctx.r8.s64 = -2094333952;
	// stw r10,-27388(r9)
	PPC_STORE_U32(ctx.r9.u32 + -27388, ctx.r10.u32);
	// addi r3,r8,7256
	ctx.r3.s64 = ctx.r8.s64 + 7256;
	// bl 0x82ca3700
	ctx.lr = 0x82FC0B04;
	sub_82CA3700(ctx, base);
	// lwz r11,-27380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27380);
loc_82FC0B08:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82fc0b38
	if (!ctx.cr0.eq) goto loc_82FC0B38;
	// lis r9,-31946
	ctx.r9.s64 = -2093613056;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// addi r10,r10,27084
	ctx.r10.s64 = ctx.r10.s64 + 27084;
	// stw r11,-27380(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27380, ctx.r11.u32);
	// lis r8,-31957
	ctx.r8.s64 = -2094333952;
	// stw r10,-27392(r9)
	PPC_STORE_U32(ctx.r9.u32 + -27392, ctx.r10.u32);
	// addi r3,r8,7232
	ctx.r3.s64 = ctx.r8.s64 + 7232;
	// bl 0x82ca3700
	ctx.lr = 0x82FC0B34;
	sub_82CA3700(ctx, base);
	// lwz r11,-27380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27380);
loc_82FC0B38:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82fc0b68
	if (!ctx.cr0.eq) goto loc_82FC0B68;
	// lis r9,-31946
	ctx.r9.s64 = -2093613056;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// addi r10,r10,27116
	ctx.r10.s64 = ctx.r10.s64 + 27116;
	// stw r11,-27380(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27380, ctx.r11.u32);
	// lis r8,-31957
	ctx.r8.s64 = -2094333952;
	// stw r10,-27396(r9)
	PPC_STORE_U32(ctx.r9.u32 + -27396, ctx.r10.u32);
	// addi r3,r8,7208
	ctx.r3.s64 = ctx.r8.s64 + 7208;
	// bl 0x82ca3700
	ctx.lr = 0x82FC0B64;
	sub_82CA3700(ctx, base);
	// lwz r11,-27380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -27380);
loc_82FC0B68:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82fc0b94
	if (!ctx.cr0.eq) goto loc_82FC0B94;
	// lis r9,-31946
	ctx.r9.s64 = -2093613056;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// addi r10,r10,27148
	ctx.r10.s64 = ctx.r10.s64 + 27148;
	// stw r11,-27380(r31)
	PPC_STORE_U32(ctx.r31.u32 + -27380, ctx.r11.u32);
	// lis r8,-31957
	ctx.r8.s64 = -2094333952;
	// stw r10,-27400(r9)
	PPC_STORE_U32(ctx.r9.u32 + -27400, ctx.r10.u32);
	// addi r3,r8,7184
	ctx.r3.s64 = ctx.r8.s64 + 7184;
	// bl 0x82ca3700
	ctx.lr = 0x82FC0B94;
	sub_82CA3700(ctx, base);
loc_82FC0B94:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// blt cr6,0x82fc0be8
	if (ctx.cr6.lt) goto loc_82FC0BE8;
	// beq cr6,0x82fc0bdc
	if (ctx.cr6.eq) goto loc_82FC0BDC;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// blt cr6,0x82fc0bd0
	if (ctx.cr6.lt) goto loc_82FC0BD0;
	// beq cr6,0x82fc0bc4
	if (ctx.cr6.eq) goto loc_82FC0BC4;
	// cmplwi cr6,r30,5
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 5, ctx.xer);
	// bge cr6,0x82fc0be8
	if (!ctx.cr6.lt) goto loc_82FC0BE8;
	// addi r11,r11,-3492
	ctx.r11.s64 = ctx.r11.s64 + -3492;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// b 0x82fc0bec
	goto loc_82FC0BEC;
loc_82FC0BC4:
	// addi r11,r11,-3492
	ctx.r11.s64 = ctx.r11.s64 + -3492;
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// b 0x82fc0bec
	goto loc_82FC0BEC;
loc_82FC0BD0:
	// addi r11,r11,-3492
	ctx.r11.s64 = ctx.r11.s64 + -3492;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// b 0x82fc0bec
	goto loc_82FC0BEC;
loc_82FC0BDC:
	// addi r11,r11,-3492
	ctx.r11.s64 = ctx.r11.s64 + -3492;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// b 0x82fc0bec
	goto loc_82FC0BEC;
loc_82FC0BE8:
	// addi r3,r11,-3492
	ctx.r3.s64 = ctx.r11.s64 + -3492;
loc_82FC0BEC:
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

__attribute__((alias("__imp__sub_82FC0C04"))) PPC_WEAK_FUNC(sub_82FC0C04);
PPC_FUNC_IMPL(__imp__sub_82FC0C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC0C08"))) PPC_WEAK_FUNC(sub_82FC0C08);
PPC_FUNC_IMPL(__imp__sub_82FC0C08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FC0C10;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stb r31,24(r30)
	PPC_STORE_U8(ctx.r30.u32 + 24, ctx.r31.u8);
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// bl 0x82fc0a88
	ctx.lr = 0x82FC0C34;
	sub_82FC0A88(ctx, base);
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82fc0608
	ctx.lr = 0x82FC0C44;
	sub_82FC0608(ctx, base);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// stw r31,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82FC0C58"))) PPC_WEAK_FUNC(sub_82FC0C58);
PPC_FUNC_IMPL(__imp__sub_82FC0C58) {
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
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc0c84
	if (ctx.cr6.eq) goto loc_82FC0C84;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82fc0cb8
	goto loc_82FC0CB8;
loc_82FC0C84:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r30,r11,r10
	ctx.r30.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// bl 0x82fc0a88
	ctx.lr = 0x82FC0C9C;
	sub_82FC0A88(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// twllei r11,0
	// divwu r11,r30,r11
	ctx.r11.u32 = ctx.r30.u32 / ctx.r11.u32;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82FC0CB8:
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

__attribute__((alias("__imp__sub_82FC0CD0"))) PPC_WEAK_FUNC(sub_82FC0CD0);
PPC_FUNC_IMPL(__imp__sub_82FC0CD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82fc0ce4
	if (!ctx.cr6.eq) goto loc_82FC0CE4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82FC0CE4:
	// srawi r9,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 1;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
loc_82FC0CF0:
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bge cr6,0x82fc0d00
	if (!ctx.cr6.lt) goto loc_82FC0D00;
	// li r9,1
	ctx.r9.s64 = 1;
loc_82FC0D00:
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82fc0d2c
	if (!ctx.cr6.gt) goto loc_82FC0D2C;
	// addi r11,r7,-1
	ctx.r11.s64 = ctx.r7.s64 + -1;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82fc0d50
	if (ctx.cr6.eq) goto loc_82FC0D50;
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// b 0x82fc0cf0
	goto loc_82FC0CF0;
loc_82FC0D2C:
	// bge cr6,0x82fc0d58
	if (!ctx.cr6.lt) goto loc_82FC0D58;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,-4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// subf r3,r9,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r9.s64;
	// b 0x82fc0cf0
	goto loc_82FC0CF0;
loc_82FC0D50:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// blr 
	return;
loc_82FC0D58:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_82FC0D6C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// bne 0x82fc0d6c
	if (!ctx.cr0.eq) goto loc_82FC0D6C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC0D8C"))) PPC_WEAK_FUNC(sub_82FC0D8C);
PPC_FUNC_IMPL(__imp__sub_82FC0D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC0D90"))) PPC_WEAK_FUNC(sub_82FC0D90);
PPC_FUNC_IMPL(__imp__sub_82FC0D90) {
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
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// bl 0x82fc0cd0
	ctx.lr = 0x82FC0DA4;
	sub_82FC0CD0(ctx, base);
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82fc0dcc
	if (!ctx.cr6.lt) goto loc_82FC0DCC;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x82fc0dd0
	if (ctx.cr6.eq) goto loc_82FC0DD0;
loc_82FC0DCC:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82FC0DD0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC0DE0"))) PPC_WEAK_FUNC(sub_82FC0DE0);
PPC_FUNC_IMPL(__imp__sub_82FC0DE0) {
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
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// bl 0x82fc0d90
	ctx.lr = 0x82FC0DF4;
	sub_82FC0D90(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82fc0e18
	if (ctx.cr6.eq) goto loc_82FC0E18;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x82fc0e1c
	if (ctx.cr6.eq) goto loc_82FC0E1C;
loc_82FC0E18:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FC0E1C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC0E2C"))) PPC_WEAK_FUNC(sub_82FC0E2C);
PPC_FUNC_IMPL(__imp__sub_82FC0E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC0E30"))) PPC_WEAK_FUNC(sub_82FC0E30);
PPC_FUNC_IMPL(__imp__sub_82FC0E30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc0e54
	if (ctx.cr6.eq) goto loc_82FC0E54;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// blr 
	return;
loc_82FC0E54:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC0E5C"))) PPC_WEAK_FUNC(sub_82FC0E5C);
PPC_FUNC_IMPL(__imp__sub_82FC0E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC0E60"))) PPC_WEAK_FUNC(sub_82FC0E60);
PPC_FUNC_IMPL(__imp__sub_82FC0E60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82FC0E68;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fc0e8c
	if (!ctx.cr6.eq) goto loc_82FC0E8C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82fc0f6c
	goto loc_82FC0F6C;
loc_82FC0E8C:
	// lbz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r28,4(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
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
	// beq 0x82fc0efc
	if (ctx.cr0.eq) goto loc_82FC0EFC;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82fc0f68
	if (!ctx.cr6.gt) goto loc_82FC0F68;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82FC0EB8:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FC0ED8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82fc0f64
	if (ctx.cr6.eq) goto loc_82FC0F64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82fc0eb8
	if (ctx.cr6.lt) goto loc_82FC0EB8;
	// b 0x82fc0f68
	goto loc_82FC0F68;
loc_82FC0EFC:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fc0f0c
	if (!ctx.cr6.eq) goto loc_82FC0F0C;
	// bl 0x82f67818
	ctx.lr = 0x82FC0F0C;
	sub_82F67818(ctx, base);
loc_82FC0F0C:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82fc0f68
	if (!ctx.cr6.gt) goto loc_82FC0F68;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82FC0F1C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FC0F3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82f11068
	ctx.lr = 0x82FC0F48;
	sub_82F11068(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82fc0f64
	if (!ctx.cr0.eq) goto loc_82FC0F64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82fc0f1c
	if (ctx.cr6.lt) goto loc_82FC0F1C;
	// b 0x82fc0f68
	goto loc_82FC0F68;
loc_82FC0F64:
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
loc_82FC0F68:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_82FC0F6C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82FC0F74"))) PPC_WEAK_FUNC(sub_82FC0F74);
PPC_FUNC_IMPL(__imp__sub_82FC0F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC0F78"))) PPC_WEAK_FUNC(sub_82FC0F78);
PPC_FUNC_IMPL(__imp__sub_82FC0F78) {
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
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r4,72(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// bl 0x82fc0cd0
	ctx.lr = 0x82FC0F9C;
	sub_82FC0CD0(ctx, base);
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82fc106c
	if (!ctx.cr6.lt) goto loc_82FC106C;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82fc106c
	if (!ctx.cr6.eq) goto loc_82FC106C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FC0FE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fc106c
	if (ctx.cr0.eq) goto loc_82FC106C;
	// lbz r11,83(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 83);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82fc101c
	if (ctx.cr0.eq) goto loc_82FC101C;
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// addi r10,r31,48
	ctx.r10.s64 = ctx.r31.s64 + 48;
	// std r11,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r11.u64);
	// ld r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r11,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.r11.u64);
	// ld r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// std r11,64(r31)
	PPC_STORE_U64(ctx.r31.u32 + 64, ctx.r11.u64);
	// ld r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 24);
	// std r11,72(r31)
	PPC_STORE_U64(ctx.r31.u32 + 72, ctx.r11.u64);
loc_82FC101C:
	// lbz r11,82(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 82);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82fc1034
	if (ctx.cr0.eq) goto loc_82FC1034;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82f65e60
	ctx.lr = 0x82FC1034;
	sub_82F65E60(ctx, base);
loc_82FC1034:
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc1044
	if (ctx.cr6.eq) goto loc_82FC1044;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
loc_82FC1044:
	// lwz r4,84(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82fc1064
	if (ctx.cr6.eq) goto loc_82FC1064;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FC1064;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FC1064:
	// lfs f0,68(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
loc_82FC106C:
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

__attribute__((alias("__imp__sub_82FC1084"))) PPC_WEAK_FUNC(sub_82FC1084);
PPC_FUNC_IMPL(__imp__sub_82FC1084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC1088"))) PPC_WEAK_FUNC(sub_82FC1088);
PPC_FUNC_IMPL(__imp__sub_82FC1088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FC1090;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc10f4
	if (ctx.cr6.eq) goto loc_82FC10F4;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_82FC10AC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82fc10d8
	if (ctx.cr6.eq) goto loc_82FC10D8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FC10D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fc10e8
	if (ctx.cr0.eq) goto loc_82FC10E8;
loc_82FC10D8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stwx r10,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
loc_82FC10E8:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x82fc10ac
	if (!ctx.cr0.eq) goto loc_82FC10AC;
loc_82FC10F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82FC10FC"))) PPC_WEAK_FUNC(sub_82FC10FC);
PPC_FUNC_IMPL(__imp__sub_82FC10FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC1100"))) PPC_WEAK_FUNC(sub_82FC1100);
PPC_FUNC_IMPL(__imp__sub_82FC1100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82FC1108;
	sub_82CA2BE4(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r28,4(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addic. r30,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r30.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82fc1180
	if (ctx.cr0.lt) goto loc_82FC1180;
	// rlwinm r29,r30,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
loc_82FC112C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82fc1180
	if (!ctx.cr6.eq) goto loc_82FC1180;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r9,r10,30
	ctx.r9.u64 = ctx.r10.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82fc116c
	if (!ctx.cr0.eq) goto loc_82FC116C;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FC1168;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82fc1174
	goto loc_82FC1174;
loc_82FC116C:
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82FC1174:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,-8
	ctx.r29.s64 = ctx.r29.s64 + -8;
	// bge 0x82fc112c
	if (!ctx.cr0.lt) goto loc_82FC112C;
loc_82FC1180:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82FC118C"))) PPC_WEAK_FUNC(sub_82FC118C);
PPC_FUNC_IMPL(__imp__sub_82FC118C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC1190"))) PPC_WEAK_FUNC(sub_82FC1190);
PPC_FUNC_IMPL(__imp__sub_82FC1190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82FC1198;
	sub_82CA2BD4(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r28,20(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// beq cr6,0x82fc1410
	if (ctx.cr6.eq) goto loc_82FC1410;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
loc_82FC11CC:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// add r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 + ctx.r11.u64;
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r11,120(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 120);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82fc13ec
	if (ctx.cr0.eq) goto loc_82FC13EC;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FC11F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82fc13ec
	if (!ctx.cr0.eq) goto loc_82FC13EC;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82fc1220
	if (ctx.cr6.eq) goto loc_82FC1220;
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r24.s32, ctx.xer);
	// ble cr6,0x82fc1220
	if (!ctx.cr6.gt) goto loc_82FC1220;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// bl 0x82fb6868
	ctx.lr = 0x82FC1220;
	sub_82FB6868(ctx, base);
loc_82FC1220:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82fc1310
	if (!ctx.cr6.gt) goto loc_82FC1310;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fc1310
	if (!ctx.cr6.eq) goto loc_82FC1310;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
loc_82FC1244:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bgt cr6,0x82fc12e8
	if (ctx.cr6.gt) goto loc_82FC12E8;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FC1268;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f65e60
	ctx.lr = 0x82FC1274;
	sub_82F65E60(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// ld r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,22
	ctx.r11.s64 = ctx.r11.s64 + 22;
	// ld r8,40(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + 40);
	// ld r7,48(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 48);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ld r6,56(r30)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r30.u32 + 56);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// std r7,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r7.u64);
	// std r6,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r6.u64);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FC12C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FC12D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,22
	ctx.r11.s64 = ctx.r11.s64 + 22;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
loc_82FC12E8:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82fc1244
	if (ctx.cr6.gt) goto loc_82FC1244;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
loc_82FC1310:
	// lhz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 36);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82fc1374
	if (ctx.cr0.eq) goto loc_82FC1374;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fc1374
	if (!ctx.cr6.eq) goto loc_82FC1374;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f65e60
	ctx.lr = 0x82FC1334;
	sub_82F65E60(ctx, base);
	// ld r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 32);
	// ld r9,40(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 40);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// ld r8,48(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + 48);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ld r7,56(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 56);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// std r8,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r8.u64);
	// std r7,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r7.u64);
	// bl 0x82fb6748
	ctx.lr = 0x82FC1368;
	sub_82FB6748(ctx, base);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// lhz r24,36(r29)
	ctx.r24.u64 = PPC_LOAD_U16(ctx.r29.u32 + 36);
	// b 0x82fc13ec
	goto loc_82FC13EC;
loc_82FC1374:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,116(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FC138C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f65e60
	ctx.lr = 0x82FC1398;
	sub_82F65E60(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// ld r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ld r9,40(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 40);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ld r8,48(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + 48);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r7,56(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 56);
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// std r8,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r8.u64);
	// std r7,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r7.u64);
	// lwz r11,80(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FC13D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FC13EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FC13EC:
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r25,r25,8
	ctx.r25.s64 = ctx.r25.s64 + 8;
	// bne 0x82fc11cc
	if (!ctx.cr0.eq) goto loc_82FC11CC;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82fc1410
	if (ctx.cr6.eq) goto loc_82FC1410;
loc_82FC1400:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fb6868
	ctx.lr = 0x82FC1408;
	sub_82FB6868(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne 0x82fc1400
	if (!ctx.cr0.eq) goto loc_82FC1400;
loc_82FC1410:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_82FC1418"))) PPC_WEAK_FUNC(sub_82FC1418);
PPC_FUNC_IMPL(__imp__sub_82FC1418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FC1420;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addic. r31,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r31.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82fc1480
	if (ctx.cr0.lt) goto loc_82FC1480;
	// rlwinm r29,r31,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
loc_82FC143C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 120);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82fc1474
	if (ctx.cr0.eq) goto loc_82FC1474;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FC1468;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82fc1480
	if (!ctx.cr6.lt) goto loc_82FC1480;
loc_82FC1474:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r29,r29,-8
	ctx.r29.s64 = ctx.r29.s64 + -8;
	// bge 0x82fc143c
	if (!ctx.cr0.lt) goto loc_82FC143C;
loc_82FC1480:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82FC1488"))) PPC_WEAK_FUNC(sub_82FC1488);
PPC_FUNC_IMPL(__imp__sub_82FC1488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82FC1490;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r28,4(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82fc1500
	if (ctx.cr6.eq) goto loc_82FC1500;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82FC14B4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 120);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82fc14f0
	if (ctx.cr0.eq) goto loc_82FC14F0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FC14E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82fc1500
	if (!ctx.cr6.lt) goto loc_82FC1500;
loc_82FC14F0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82fc14b4
	if (ctx.cr6.lt) goto loc_82FC14B4;
loc_82FC1500:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82FC1508"))) PPC_WEAK_FUNC(sub_82FC1508);
PPC_FUNC_IMPL(__imp__sub_82FC1508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82FC1510;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82fc1608
	if (!ctx.cr6.gt) goto loc_82FC1608;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82FC1530:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FC1550;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// blt cr6,0x82fc1564
	if (ctx.cr6.lt) goto loc_82FC1564;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82fc1568
	if (!ctx.cr6.gt) goto loc_82FC1568;
loc_82FC1564:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82FC1568:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fc15f4
	if (ctx.cr0.eq) goto loc_82FC15F4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FC1584;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fc15f4
	if (ctx.cr6.eq) goto loc_82FC15F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,0(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x82f60458
	ctx.lr = 0x82FC15A0;
	sub_82F60458(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6ac50
	ctx.lr = 0x82FC15AC;
	sub_82F6AC50(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FC15C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FC15E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82fc15f4
	if (ctx.cr6.lt) goto loc_82FC15F4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f6baa0
	ctx.lr = 0x82FC15F4;
	sub_82F6BAA0(ctx, base);
loc_82FC15F4:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fc1530
	if (ctx.cr6.lt) goto loc_82FC1530;
loc_82FC1608:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82FC1610"))) PPC_WEAK_FUNC(sub_82FC1610);
PPC_FUNC_IMPL(__imp__sub_82FC1610) {
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
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82fc1650
	if (ctx.cr6.eq) goto loc_82FC1650;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FC1650;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FC1650:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fc1670
	if (ctx.cr6.eq) goto loc_82FC1670;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FC1670;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FC1670:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
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

__attribute__((alias("__imp__sub_82FC1690"))) PPC_WEAK_FUNC(sub_82FC1690);
PPC_FUNC_IMPL(__imp__sub_82FC1690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FC1698;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82fc16bc
	if (!ctx.cr6.eq) goto loc_82FC16BC;
	// bl 0x82f52428
	ctx.lr = 0x82FC16B8;
	sub_82F52428(ctx, base);
	// b 0x82fc16f8
	goto loc_82FC16F8;
loc_82FC16BC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r30,r29,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82f2c088
	ctx.lr = 0x82FC16CC;
	sub_82F2C088(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// add r3,r30,r10
	ctx.r3.u64 = ctx.r30.u64 + ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82caa2e0
	ctx.lr = 0x82FC16EC;
	sub_82CAA2E0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82FC16F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82FC1700"))) PPC_WEAK_FUNC(sub_82FC1700);
PPC_FUNC_IMPL(__imp__sub_82FC1700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FC1708;
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
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82f52428
	ctx.lr = 0x82FC1724;
	sub_82F52428(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82fc1754
	if (!ctx.cr6.lt) goto loc_82FC1754;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r4,8
	ctx.r3.s64 = ctx.r4.s64 + 8;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82caa2e0
	ctx.lr = 0x82FC1754;
	sub_82CAA2E0(ctx, base);
loc_82FC1754:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82fc1774
	if (ctx.cr0.eq) goto loc_82FC1774;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bl 0x82fc1610
	ctx.lr = 0x82FC1774;
	sub_82FC1610(ctx, base);
loc_82FC1774:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82FC177C"))) PPC_WEAK_FUNC(sub_82FC177C);
PPC_FUNC_IMPL(__imp__sub_82FC177C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC1780"))) PPC_WEAK_FUNC(sub_82FC1780);
PPC_FUNC_IMPL(__imp__sub_82FC1780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82FC1788;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpw cr6,r26,r25
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r25.s32, ctx.xer);
	// beq cr6,0x82fc18e0
	if (ctx.cr6.eq) goto loc_82FC18E0;
	// bl 0x82fc0d90
	ctx.lr = 0x82FC17A4;
	sub_82FC0D90(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// bne cr6,0x82fc17b8
	if (!ctx.cr6.eq) goto loc_82FC17B8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82fc18e4
	goto loc_82FC18E4;
loc_82FC17B8:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fc0cd0
	ctx.lr = 0x82FC17C4;
	sub_82FC0CD0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82fc1860
	if (!ctx.cr6.lt) goto loc_82FC1860;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r27,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmpw cr6,r10,r25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r25.s32, ctx.xer);
	// bne cr6,0x82fc1860
	if (!ctx.cr6.eq) goto loc_82FC1860;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r28,r29,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r29,r28,r11
	ctx.r29.u64 = ctx.r28.u64 + ctx.r11.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82fc1610
	ctx.lr = 0x82FC180C;
	sub_82FC1610(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fc1610
	ctx.lr = 0x82FC1818;
	sub_82FC1610(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fc1610
	ctx.lr = 0x82FC1824;
	sub_82FC1610(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fc1844
	if (ctx.cr6.eq) goto loc_82FC1844;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FC1844;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FC1844:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc18c4
	if (ctx.cr6.eq) goto loc_82FC18C4;
	// stw r26,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r26.u32);
	// b 0x82fc18c4
	goto loc_82FC18C4;
loc_82FC1860:
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82fc1610
	ctx.lr = 0x82FC187C;
	sub_82FC1610(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fc1690
	ctx.lr = 0x82FC1888;
	sub_82FC1690(ctx, base);
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x82fc1894
	if (!ctx.cr6.lt) goto loc_82FC1894;
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
loc_82FC1894:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fc1700
	ctx.lr = 0x82FC18A4;
	sub_82FC1700(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fc18c4
	if (ctx.cr6.eq) goto loc_82FC18C4;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FC18C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FC18C4:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r27,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fc18e0
	if (ctx.cr6.eq) goto loc_82FC18E0;
	// stw r25,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r25.u32);
loc_82FC18E0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82FC18E4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_82FC18EC"))) PPC_WEAK_FUNC(sub_82FC18EC);
PPC_FUNC_IMPL(__imp__sub_82FC18EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC18F0"))) PPC_WEAK_FUNC(sub_82FC18F0);
PPC_FUNC_IMPL(__imp__sub_82FC18F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82FC18F8;
	sub_82CA2BE8(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r29,4(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82fc194c
	if (ctx.cr6.eq) goto loc_82FC194C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82FC1910:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r30,r31,r11
	ctx.r30.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82fc1934
	if (ctx.cr6.eq) goto loc_82FC1934;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FC1934;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FC1934:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// bne 0x82fc1910
	if (!ctx.cr0.eq) goto loc_82FC1910;
loc_82FC194C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f52428
	ctx.lr = 0x82FC1958;
	sub_82F52428(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_82FC1960"))) PPC_WEAK_FUNC(sub_82FC1960);
PPC_FUNC_IMPL(__imp__sub_82FC1960) {
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
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82fc19a4
	if (ctx.cr6.eq) goto loc_82FC19A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FC19A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FC19A4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fc1690
	ctx.lr = 0x82FC19B0;
	sub_82FC1690(ctx, base);
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

__attribute__((alias("__imp__sub_82FC19C8"))) PPC_WEAK_FUNC(sub_82FC19C8);
PPC_FUNC_IMPL(__imp__sub_82FC19C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82FC19D0;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r29,72(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82fc0cd0
	ctx.lr = 0x82FC19EC;
	sub_82FC0CD0(ctx, base);
	// clrlwi. r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// beq 0x82fc1a34
	if (ctx.cr0.eq) goto loc_82FC1A34;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt cr6,0x82fc1a34
	if (ctx.cr6.lt) goto loc_82FC1A34;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82fc1a34
	if (!ctx.cr6.lt) goto loc_82FC1A34;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r11,r27,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x82fc1a34
	if (!ctx.cr6.eq) goto loc_82FC1A34;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82fc1960
	ctx.lr = 0x82FC1A34;
	sub_82FC1960(ctx, base);
loc_82FC1A34:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,24(r26)
	PPC_STORE_U32(ctx.r26.u32 + 24, ctx.r29.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f4d0b0
	ctx.lr = 0x82FC1A54;
	sub_82F4D0B0(ctx, base);
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r11,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r11.u64);
	// ld r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r11,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.r11.u64);
	// ld r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// std r11,64(r31)
	PPC_STORE_U64(ctx.r31.u32 + 64, ctx.r11.u64);
	// ld r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 24);
	// std r11,72(r31)
	PPC_STORE_U64(ctx.r31.u32 + 72, ctx.r11.u64);
	// bl 0x82f65e60
	ctx.lr = 0x82FC1A88;
	sub_82F65E60(ctx, base);
	// lfs f0,68(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lhz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 80);
	// sth r11,36(r31)
	PPC_STORE_U16(ctx.r31.u32 + 36, ctx.r11.u16);
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// lwz r4,84(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82fc1ac0
	if (ctx.cr6.eq) goto loc_82FC1AC0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FC1AC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FC1AC0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82fc1700
	ctx.lr = 0x82FC1AD0;
	sub_82FC1700(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FC1AE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fc1b04
	if (ctx.cr6.eq) goto loc_82FC1B04;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FC1B04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FC1B04:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_82FC1B0C"))) PPC_WEAK_FUNC(sub_82FC1B0C);
PPC_FUNC_IMPL(__imp__sub_82FC1B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC1B10"))) PPC_WEAK_FUNC(sub_82FC1B10);
PPC_FUNC_IMPL(__imp__sub_82FC1B10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82FC1B18;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r27,72(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82fc0cd0
	ctx.lr = 0x82FC1B34;
	sub_82FC0CD0(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fc1b58
	if (ctx.cr6.lt) goto loc_82FC1B58;
loc_82FC1B40:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fc19c8
	ctx.lr = 0x82FC1B54;
	sub_82FC19C8(ctx, base);
	// b 0x82fc1c7c
	goto loc_82FC1C7C;
loc_82FC1B58:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x82fc1b40
	if (!ctx.cr6.eq) goto loc_82FC1B40;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82fc1b90
	if (ctx.cr6.eq) goto loc_82FC1B90;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FC1B90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FC1B90:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,4(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FC1BAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82f4d0b0
	ctx.lr = 0x82FC1BC4;
	sub_82F4D0B0(ctx, base);
	// lbz r11,83(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 83);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bne 0x82fc1bd8
	if (!ctx.cr0.eq) goto loc_82FC1BD8;
	// addi r11,r29,48
	ctx.r11.s64 = ctx.r29.s64 + 48;
loc_82FC1BD8:
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r9,r31,48
	ctx.r9.s64 = ctx.r31.s64 + 48;
	// addi r4,r28,32
	ctx.r4.s64 = ctx.r28.s64 + 32;
	// std r10,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r10.u64);
	// ld r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r10,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.r10.u64);
	// ld r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// std r10,64(r31)
	PPC_STORE_U64(ctx.r31.u32 + 64, ctx.r10.u64);
	// ld r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// std r11,72(r31)
	PPC_STORE_U64(ctx.r31.u32 + 72, ctx.r11.u64);
	// lbz r11,82(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 82);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82fc1c10
	if (!ctx.cr0.eq) goto loc_82FC1C10;
	// addi r4,r29,80
	ctx.r4.s64 = ctx.r29.s64 + 80;
loc_82FC1C10:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82f65e60
	ctx.lr = 0x82FC1C18;
	sub_82F65E60(ctx, base);
	// lwz r11,64(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82fc1c28
	if (!ctx.cr6.eq) goto loc_82FC1C28;
	// lwz r11,116(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
loc_82FC1C28:
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// lfs f0,68(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lhz r11,80(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 80);
	// sth r11,36(r31)
	PPC_STORE_U16(ctx.r31.u32 + 36, ctx.r11.u16);
	// lwz r4,84(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82fc1c5c
	if (ctx.cr6.eq) goto loc_82FC1C5C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FC1C5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FC1C5C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82fc1c7c
	if (ctx.cr6.eq) goto loc_82FC1C7C;
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
	ctx.lr = 0x82FC1C7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FC1C7C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_82FC1C84"))) PPC_WEAK_FUNC(sub_82FC1C84);
PPC_FUNC_IMPL(__imp__sub_82FC1C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC1C88"))) PPC_WEAK_FUNC(sub_82FC1C88);
PPC_FUNC_IMPL(__imp__sub_82FC1C88) {
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
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r31,4(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// bl 0x82fc0cd0
	ctx.lr = 0x82FC1CA4;
	sub_82FC0CD0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82fc1d2c
	if (!ctx.cr6.lt) goto loc_82FC1D2C;
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,24(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82fc1d2c
	if (!ctx.cr6.eq) goto loc_82FC1D2C;
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lis r7,4
	ctx.r7.s64 = 262144;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82fc1d20
	if (ctx.cr6.eq) goto loc_82FC1D20;
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82fc1d20
	if (ctx.cr6.eq) goto loc_82FC1D20;
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
loc_82FC1CE8:
	// cmpw cr6,r10,r31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x82fc1d2c
	if (!ctx.cr6.lt) goto loc_82FC1D2C;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82fc1d2c
	if (!ctx.cr6.eq) goto loc_82FC1D2C;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,20(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82fc1ce8
	if (!ctx.cr6.eq) goto loc_82FC1CE8;
loc_82FC1D20:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82fc1960
	ctx.lr = 0x82FC1D2C;
	sub_82FC1960(ctx, base);
loc_82FC1D2C:
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

__attribute__((alias("__imp__sub_82FC1D40"))) PPC_WEAK_FUNC(sub_82FC1D40);
PPC_FUNC_IMPL(__imp__sub_82FC1D40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FC1D48;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82fc1d9c
	if (!ctx.cr6.gt) goto loc_82FC1D9C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82FC1D64:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fc1d88
	if (ctx.cr0.eq) goto loc_82FC1D88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fc1960
	ctx.lr = 0x82FC1D80;
	sub_82FC1960(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
loc_82FC1D88:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fc1d64
	if (ctx.cr6.lt) goto loc_82FC1D64;
loc_82FC1D9C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82FC1DA4"))) PPC_WEAK_FUNC(sub_82FC1DA4);
PPC_FUNC_IMPL(__imp__sub_82FC1DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC1DA8"))) PPC_WEAK_FUNC(sub_82FC1DA8);
PPC_FUNC_IMPL(__imp__sub_82FC1DA8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stb r11,153(r3)
	PPC_STORE_U8(ctx.r3.u32 + 153, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC1DB8"))) PPC_WEAK_FUNC(sub_82FC1DB8);
PPC_FUNC_IMPL(__imp__sub_82FC1DB8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC1DC8"))) PPC_WEAK_FUNC(sub_82FC1DC8);
PPC_FUNC_IMPL(__imp__sub_82FC1DC8) {
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
	// fctiwz f0,f2
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f2.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f2.f64));
	// li r6,0
	ctx.r6.s64 = 0;
	// fctiwz f13,f1
	ctx.f13.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82f424e8
	ctx.lr = 0x82FC1DF8;
	sub_82F424E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC1E08"))) PPC_WEAK_FUNC(sub_82FC1E08);
PPC_FUNC_IMPL(__imp__sub_82FC1E08) {
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
	// fctiwz f0,f2
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f2.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f2.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f13,f1
	ctx.f13.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82f44978
	ctx.lr = 0x82FC1E3C;
	sub_82F44978(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,153(r31)
	PPC_STORE_U8(ctx.r31.u32 + 153, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82FC1E58"))) PPC_WEAK_FUNC(sub_82FC1E58);
PPC_FUNC_IMPL(__imp__sub_82FC1E58) {
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
	// fctiwz f0,f4
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f4.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f4.f64));
	// fctiwz f13,f3
	ctx.f13.s64 = (ctx.f3.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f3.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// fctiwz f12,f2
	ctx.f12.s64 = (ctx.f2.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f2.f64));
	// fctiwz f11,f1
	ctx.f11.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfd f11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f11.u64);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82f44990
	ctx.lr = 0x82FC1EA4;
	sub_82F44990(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,153(r31)
	PPC_STORE_U8(ctx.r31.u32 + 153, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82FC1EC0"))) PPC_WEAK_FUNC(sub_82FC1EC0);
PPC_FUNC_IMPL(__imp__sub_82FC1EC0) {
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
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x82f41380
	ctx.lr = 0x82FC1EE0;
	sub_82F41380(ctx, base);
	// li r3,148
	ctx.r3.s64 = 148;
	// bl 0x82ef6ef8
	ctx.lr = 0x82FC1EE8;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82fc1f00
	if (ctx.cr0.eq) goto loc_82FC1F00;
	// li r4,8178
	ctx.r4.s64 = 8178;
	// bl 0x82f45330
	ctx.lr = 0x82FC1EF8;
	sub_82F45330(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82fc1f04
	goto loc_82FC1F04;
loc_82FC1F00:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82FC1F04:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fc1f14
	if (ctx.cr6.eq) goto loc_82FC1F14;
	// bl 0x82ef1bf0
	ctx.lr = 0x82FC1F14;
	sub_82EF1BF0(ctx, base);
loc_82FC1F14:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stb r11,152(r31)
	PPC_STORE_U8(ctx.r31.u32 + 152, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82FC1F38"))) PPC_WEAK_FUNC(sub_82FC1F38);
PPC_FUNC_IMPL(__imp__sub_82FC1F38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi. r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82fc1f50
	if (ctx.cr0.eq) goto loc_82FC1F50;
	// lbz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 68);
	// ori r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 8;
	// b 0x82fc1f58
	goto loc_82FC1F58;
loc_82FC1F50:
	// lbz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 68);
	// andi. r10,r10,247
	ctx.r10.u64 = ctx.r10.u64 & 247;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
loc_82FC1F58:
	// stb r10,68(r11)
	PPC_STORE_U8(ctx.r11.u32 + 68, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FC1F60"))) PPC_WEAK_FUNC(sub_82FC1F60);
PPC_FUNC_IMPL(__imp__sub_82FC1F60) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r31,16(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82fc1f9c
	if (ctx.cr6.eq) goto loc_82FC1F9C;
	// addi r5,r31,52
	ctx.r5.s64 = ctx.r31.s64 + 52;
	// addi r4,r31,40
	ctx.r4.s64 = ctx.r31.s64 + 40;
	// bl 0x82f41dd0
	ctx.lr = 0x82FC1F94;
	sub_82F41DD0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,105(r31)
	PPC_STORE_U8(ctx.r31.u32 + 105, ctx.r11.u8);
loc_82FC1F9C:
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

__attribute__((alias("__imp__sub_82FC1FB0"))) PPC_WEAK_FUNC(sub_82FC1FB0);
PPC_FUNC_IMPL(__imp__sub_82FC1FB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FC1FB8;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stb r11,105(r31)
	PPC_STORE_U8(ctx.r31.u32 + 105, ctx.r11.u8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f43978
	ctx.lr = 0x82FC1FE0;
	sub_82F43978(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mulli r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 * 48;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,-48
	ctx.r3.s64 = ctx.r11.s64 + -48;
	// bl 0x82fb9358
	ctx.lr = 0x82FC1FF8;
	sub_82FB9358(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82FC2004"))) PPC_WEAK_FUNC(sub_82FC2004);
PPC_FUNC_IMPL(__imp__sub_82FC2004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC2008"))) PPC_WEAK_FUNC(sub_82FC2008);
PPC_FUNC_IMPL(__imp__sub_82FC2008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82FC2010;
	sub_82CA2BEC(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// stb r11,105(r31)
	PPC_STORE_U8(ctx.r31.u32 + 105, ctx.r11.u8);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82f43a70
	ctx.lr = 0x82FC2038;
	sub_82F43A70(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mulli r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 * 24;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,-24
	ctx.r3.s64 = ctx.r11.s64 + -24;
	// bl 0x82fba290
	ctx.lr = 0x82FC2050;
	sub_82FBA290(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	// ERROR 82CA2C3C
	return;
}

__attribute__((alias("__imp__sub_82FC205C"))) PPC_WEAK_FUNC(sub_82FC205C);
PPC_FUNC_IMPL(__imp__sub_82FC205C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FC2060"))) PPC_WEAK_FUNC(sub_82FC2060);
PPC_FUNC_IMPL(__imp__sub_82FC2060) {
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
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi. r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r4,r31,128
	ctx.r4.s64 = ctx.r31.s64 + 128;
	// lhz r11,86(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sth r11,132(r31)
	PPC_STORE_U16(ctx.r31.u32 + 132, ctx.r11.u16);
	// stw r5,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r5.u32);
	// lhz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 144);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// sth r11,144(r31)
	PPC_STORE_U16(ctx.r31.u32 + 144, ctx.r11.u16);
	// beq 0x82fc20b0
	if (ctx.cr0.eq) goto loc_82FC20B0;
	// rlwimi r11,r30,0,31,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 0) & 0xFFFFFFFFFFFF0001) | (ctx.r11.u64 & 0xFFFE);
	// sth r11,16(r4)
	PPC_STORE_U16(ctx.r4.u32 + 16, ctx.r11.u16);
loc_82FC20B0:
	// lhz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 16);
	// rlwinm r10,r8,0,24,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xC0;
	// rlwimi r11,r7,0,29,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x6) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF9);
	// sth r11,16(r4)
	PPC_STORE_U16(ctx.r4.u32 + 16, ctx.r11.u16);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r11,r11,0,26,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF3F;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwimi r11,r8,2,22,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 2) & 0x300) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFCFF);
	// sth r11,16(r4)
	PPC_STORE_U16(ctx.r4.u32 + 16, ctx.r11.u16);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwimi r11,r9,0,26,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x30) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFCF);
	// sth r11,16(r4)
	PPC_STORE_U16(ctx.r4.u32 + 16, ctx.r11.u16);
	// stfs f2,148(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82fc2008
	ctx.lr = 0x82FC20EC;
	sub_82FC2008(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// stb r30,153(r31)
	PPC_STORE_U8(ctx.r31.u32 + 153, ctx.r30.u8);
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

